#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programação Aplicada a Automação
#Programa 03 - Calcula a area de um triangulo 
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição: A partir dos valores da base e altura de um triângulo, calcular e exibir sua área.
#
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

#Mensagem de apresentação
print("Calcula a area de um triangulo")

#entrada dados
base = float(input("Digite a base : "))
altura = float(input("Digite a altura : "))

#calcula
area = (base * altura) /2 

#mostra resultado
print(f"O triangulo tem area = {area: .2f} ")

#Aguarda o usuario finalizar
fim = input("clique qualquer tecla para finalizar!")

#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|