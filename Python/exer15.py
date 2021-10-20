#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programação Aplicada a Automação
#Programa 15 - Calcula IMC 
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição: 
#Entrar com o peso e a altura de uma determinada pessoa. Após a digitação, 
# exibir se esta pessoa está ou não com seu peso ideal. Fórmula: peso/altura².
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

#Apresentação
print("Calcula o IMC de uma pessoa")

#entrada dados
peso = float(input("Digite o peso: "))
altura = float(input("Digite o altura: "))

#calcula
IMC = peso / altura**2

#Mostra resultado
if(IMC < 20):
    print("Pessoa esta abaixo do peso")
else:
    if(IMC < 25):
        print("Pessoa tem peso normal")
    else:
        if(IMC < 30):
            print("Pessoa esta acima do peso")
        else:
            print("Pessoa esta Obesa")

#Aguarda o usuario finalizar
fim = input("clique qualquer tecla para finalizar!")
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|