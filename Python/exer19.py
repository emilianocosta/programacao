#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Emiliano Costa Junior - RA:1260901923008
#FATEC - Automação Industrial
#Programação Aplicada a Automação
#Programa 19 - Calcula velocidade 
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|
#Descrição:
# A partir dos valores da aceleração (a em m/s2), da velocidade inicial (v0 em m/s) e do tempo de percurso (t em s). 
# Calcular e exibir a velocidade final de automóvel em km/h. Exibir mensagem de acordo com a tabela:
#
# Velocidade    | Mensagem
#      V <=  40 | Veiculo muito lento
# 40 < V <=  60 | Velocidade permitida
# 60 < V <=  80 | Velocidade de cruzeiro
# 80 < V <= 120 | Veiculo rápido
#      V >  120 | Veiculo muito rápido
#
# Fórmula para o cálculo da velocidade em m/s: V = v0 + a. t
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|

#Apresentação
print("Calcula velocidade final")

#entrada dados
a_ = float(input("Digite o valor da aceleração: "))
v_0 = float(input("Digite a velocidade inicial: "))
t_ = float(input("Digite o tempo de percurso: "))

#calcula velocidade final
v_f = v_0 + a_ * t_ 

#Exibe mensagem
if(v_f <= 40):
    print("Veiculo muito lento")
else:
    if(v_f <= 60):
        print("Veiculo em velocidade permitida")
    else:
        if(v_f <= 80):
            print("Veiculo em velocidade de cruzeiro")
        else:
            if(v_f <= 120):
                print("Veiculo rápido")
            else:
                print("Veiculo muito rápido")

#Aguarda o usuario finalizar
fim = input("clique qualquer tecla para finalizar!")
#--------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|---------|