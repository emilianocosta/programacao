#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programação Aplicada a Automação
#Programa 17 - Analisa o triangulo, verifica se é triângulo retângulo 
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição: Verificar se três valores quaisquer (A, B, C) que serão digitados formam ou não um triângulo retângulo. 
# Lembre-se que o quadrado da hipotenusa é igual a soma dos quadrados dos catetos
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

#Apresentação
print("Analisa o triangulo, verifica se é triângulo retângulo")

#entrada dados
lado1 = float(input("Digite o tamanho do lado1: "))
lado2 = float(input("Digite o tamanho do lado2: "))
lado3 = float(input("Digite o tamanho do lado3: "))

#Ordena os lados por tamanho
if(lado1 < lado2):
    temp = lado1
    lado1 = lado2
    lado2 = temp

if(lado2 < lado3):
    temp = lado2
    lado2 = lado3
    lado3 = temp

if(lado1 < lado2):
    temp = lado1
    lado1 = lado2
    lado2 = temp

#Mostra os lados ordenados
print(f"lado1 : {lado1: .2f}")
print(f"lado2 : {lado2: .2f}")
print(f"lado3 : {lado3: .2f}")

#verifica se é triangulo retangulo
if(lado1**2  == (lado2**2 + lado3**2)):
    print("É triangulo retângulo")
else:
    print("Os lados não formam um triangulo retângulo")

#Aguarda o usuario finalizar
fim = input("clique qualquer tecla para finalizar!")
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|