#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programação Aplicada a Automação
#Programa 16 - Analisa o triangulo 
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição: A partir de três valores que serão digitados, verificar se formam ou não um triângulo. 
# Em caso positivo, exibir sua classificação: “Isósceles, escaleno ou eqüilátero”. 
# Um triângulo escaleno possui todos os lados diferentes, 
# o isósceles, dois lados iguais 
# e o eqüilátero, todos os lados iguais. 
# Para existir triângulo é necessário que a soma de dois lados quaisquer seja maior que o outro, isto, para os três lados.
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

#Apresentação
print("Analisa o triangulo")

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


#verifica se é triangulo
if(lado1 < (lado2 + lado3)):
    #compara os lados
    if(lado1 == lado2):
        if(lado1 == lado3):
            print("Triangulo é equilatero")
        else:
            print("Triangulo é isosceles")
    else:
        if(lado2 == lado3):
            print("Triangulo é isosceles")
        else:
            print("Triangulo é escaleno")
else:
    print("Os lados não formam um triangulo")

#Aguarda o usuario finalizar
fim = input("clique qualquer tecla para finalizar!")
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|