#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programação Aplicada a Automação
#Programa 10 - Seleciona o menor valor digitado
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição: 
#Entrar via teclado, com dois valores distintos. Exibir o menor deles.
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

#Mensagem de Apresentação
print("Seleciona o menor valor digitado")

#Entrada dados
valor1 = float(input("Digite o valor1: "))
valor2 = float(input("Digite o valor2: "))

#escolhe o maior
if(valor1 < valor2):
    print(f"menor valor é:{valor1: .2f}")
else:
    print(f"menor valor é:{valor2: .2f}")

#Aguarda o usuario finalizar
fim = input("clique qualquer tecla para finalizar!")
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|