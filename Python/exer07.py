#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programação Aplicada a Automação
#Programa 07 - Calcula troco
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição:
#Entrar via teclado com o valor de cinco produtos. Após as entradas, 
#digitar um valor referente ao pagamento da somatória destes valores. 
#Calcular e exibir o troco que deverá ser devolvido.
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

#Mensagem de Apresentação
print("Calcula o troco")

#entrada dados
produto1 = float(input("Digite valor do produto 1: R$"))
produto2 = float(input("Digite valor do produto 2: R$"))
produto3 = float(input("Digite valor do produto 3: R$"))
produto4 = float(input("Digite valor do produto 4: R$"))
produto5 = float(input("Digite valor do produto 5: R$"))
pagamento = float(input("Digite o valor do pagamento: R$"))

#calcula
troco = pagamento - (produto1 + produto2 + produto3 + produto4 + produto5)  

#mostra resultado
print(f"Você tem de troco R${troco: .2f}")

#Aguarda o usuario finalizar
fim = input("clique qualquer tecla para finalizar!")

#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|