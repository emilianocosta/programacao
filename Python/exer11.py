#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programação Aplicada a Automação
#Programa 11 - Seleciona o maior valor digitado
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição: 
#Entrar com dois valores quaisquer. Exibir o maior deles, se existir, caso contrário, enviar mensagem avisando que os 
# números são idênticos.
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

#Mensagem de Apresentação
print("Seleciona o menor valor digitado")

#Entrada dados
valor1 = float(input("Digite o valor1: "))
valor2 = float(input("Digite o valor2: "))

#escolhe o maior
if(valor1 == valor2):
    print(f"Os dois numeros tem valor de:{valor1: .2f}")
else:
    if(valor1 > valor2):
        print(f"maior valor é:{valor1: .2f}")
    else:
        print(f"maior valor é:{valor2: .2f}")

#Aguarda o usuario finalizar
fim = input("clique qualquer tecla para finalizar!")
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|