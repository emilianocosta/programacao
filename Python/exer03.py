#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programa 03 - Programação Aplicada a Automação
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição:
#Calcula a area de um triangulo
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

print("A partir dos valores da base e altura de um triângulo, calcular e exibir sua área.")

#entrada dados
base = float(input("Digite a base : "))
altura = float(input("Digite a altura : "))

#calcula
area = (base * altura) /2 

#mostra resultado
print(f"O triangulo tem area = {area: .2f} ")
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|