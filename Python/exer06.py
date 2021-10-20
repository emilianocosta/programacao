#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programação Aplicada a Automação
#Programa 06 - Converte Dolar em Reais
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição:
#Entrar via teclado com o valor da cotação do dólar e uma certa quantidade de dólares. 
#Calcular e exibir o valor correspondente em Reais (R$).
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

#Mensagem de Apresentação
print("Converte Dolar em Reais")

#Entrada dados
dolar = float(input("Digite valor em dolares: $"))
cotaçao = float(input("Digite a cotação: R$"))

#Calcula
real = dolar * cotaçao  

#Mostra resultado
print(f"${dolar: .2f}, equivalem a R${real: .2f}")

#Aguarda o usuario finalizar
fim = input("clique qualquer tecla para finalizar!")

#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|