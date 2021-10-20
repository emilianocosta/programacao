#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programação Aplicada a Automação
#Programa 14 - Seleciona o maior valor digitado 
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição: 
#Entrar via teclado com três valores distintos. Exibir o maior deles.
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

#Mensagem de Apresentação
print("Seleciona o maior valor digitado")

#Entrada dados
valor1 = float(input("Digite o valor1: "))
valor2 = float(input("Digite o valor2: "))
valor3 = float(input("Digite o valor3: "))

#escolhe o maior
if(valor1 > valor2):
    maior = valor1
else:
    maior = valor2

if(maior > valor3):
    print(f"Maior: {maior: .2f}")
else:
    print(f"Maior: {valor3: .2f}")
    
#Aguarda o usuario finalizar
fim = input("clique qualquer tecla para finalizar!")
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|