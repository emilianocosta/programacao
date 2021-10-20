#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programação Aplicada a Automação
#Programa 08 - Calcula o IMC de uma pessoa 
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição: 
#Entrar com peso e altura de uma pessoa e calcular o IMC. A fórmula é IMC = peso / altura²
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

#Apresentação
print("Calcula o IMC de uma pessoa")

#entrada dados
peso = float(input("Digite o peso: "))
altura = float(input("Digite o altura: "))

#calcula
IMC = peso / altura**2

#mostra resultado
print(f"O IMC é: {IMC: .2f}")

#Aguarda o usuario finalizar
fim = input("clique qualquer tecla para finalizar!")
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|