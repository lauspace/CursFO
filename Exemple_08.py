print("Introdueixi l'hora:");
hores = int(input())    
print("Introdueixi els minuts:");
minuts = int(input())
print("Introdueixi els segons:");
segons = int(input())

if hores>23 or minuts>59 or segons>59:
  print("El format de l'hora no és correcte")
  exit()

segons = segons + 1

if segons == 60:
  segons = 00
  minuts = minuts+1

if minuts == 60:
  minuts = 00
  hores = hores+1
    
if hores == 24:
  hores = 00
    
print("L'hora, un segon després, és: " + str(hores) + ":" + str(minuts) + ":" + str(segons))
