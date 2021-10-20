#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programação Aplicada a Automação
#Programa 02 - Calcula a area de um quadrado
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição: Calcular e exibir a área de um quadrado, a partir do valor de sua aresta(lado) que será digitado
#
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

print("Calcula a area de um quadrado")

#entrada dados
aresta = float(input("Digite a aresta : "))

#calcula
area = aresta * aresta

#mostra resultado
print(f"O quadrado tem area = {area: .2f} ")

#Aguarda o usuario finalizar
fim = input("clique qualquer tecla para finalizar!")

#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|