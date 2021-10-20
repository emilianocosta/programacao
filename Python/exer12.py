#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programação Aplicada a Automação
#Programa 12 - Calcula Área
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição: 
#Calcular e exibir a área de um retângulo, a partir dos valores da base e altura que serão digitados. 
#Se a área for maior que 100, exibir a mensagem “Terreno grande” 
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

#Mensagem de Apresentação
print("Calcula e exibi a área de um retângulo")

#Entrada dados
base = float(input("Digite a base : "))
altura = float(input("Digite a altura: "))

#Calcula Área do retangulo
area = base * altura

#Se a área for maior que 100
if(area > 100): 
    print("Terreno Grande")

#Aguarda o usuario finalizar
fim = input("clique qualquer tecla para finalizar!")
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|