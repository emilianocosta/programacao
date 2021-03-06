#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programação Aplicada a Automação
#Programa 05 - Converte temperatura
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição:
#Entrar via teclado com o valor de uma temperatura em graus Celsius, 
#calcular e exibir sua temperatura equivalente em Fahrenheit.
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

#Mensagem de Apresentação
print("Converte temperatura em graus Celsius, para sua equivalente Fahrenheit")

#Entrada dados
Celsius = float(input("Digite a temperatura em Celsius: "))

#Calcula
Fahrenheit = Celsius * 1.8 + 32  

#Mostra resultado
print(f"{Celsius: .2f} graus Celsius, equivalem a{Fahrenheit: .2f} Fahrenheit")

#Aguarda o usuario finalizar
fim = input("clique qualquer tecla para finalizar!")

#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|