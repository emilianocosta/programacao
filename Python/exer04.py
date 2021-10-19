#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programa 04 - Programação Aplicada a Automação
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição:
#Calcula e exibi a média aritmética de quatro valores quaisquer que serão digitados.
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

print("Calcular e exibir a média aritmética de quatro valores quaisquer que serão digitados.")

#entrada dados
valor1 = float(input("Digite o primeiro valor : "))
valor2 = float(input("Digite o segundo valor : "))
valor3 = float(input("Digite o terceiro valor : "))
valor4 = float(input("Digite o quarto valor : "))

#calcula
media = (valor1 + valor2 + valor3 + valor4) /4 

#mostra resultado
print(f"A media aritmética dos quatro valores é = {media: .2f} ")
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|