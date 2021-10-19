#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programa 05 - Programação Aplicada a Automação
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição:
#Converte temperatura
#Entrar via teclado com o valor de uma temperatura em graus Celsius, 
#calcular e exibir sua temperatura equivalente em Fahrenheit.
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

print("Entrar via teclado com o valor de uma temperatura em graus Celsius")

#entrada dados
Celsius = float(input("Digite a temperatura em Celsius: "))

#calcula
Fahrenheit = Celsius * 1.8 + 32  

#mostra resultado
print(f"{Celsius: .2f} graus Celsius, equivalem a{Fahrenheit: .2f} Fahrenheit")
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|