#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programa 06 - Programação Aplicada a Automação
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição:
#Converte Dolar em Reais
#Entrar via teclado com o valor da cotação do dólar e uma certa quantidade de dólares. 
#Calcular e exibir o valor correspondente em Reais (R$).
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

#entrada dados
dolar = float(input("Digite valor em dolares: $"))
cotaçao = float(input("Digite a cotação: R$"))
#calcula
real = dolar * cotaçao  

#mostra resultado
print(f"${dolar: .2f}, equivalem a R${real: .2f}")
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|