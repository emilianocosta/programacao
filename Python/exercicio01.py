p1 = float(input("Digite nota da p1: "))
p2 = float(input("Digite nota da p2: "))

m = (p1 + p2)/2

if(m>=5):
    print(f"sua media foi {m: .2f} e você já foi aprovado")
else:
    print("reprovado")
