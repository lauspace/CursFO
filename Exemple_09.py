print("Quin número vols comprovar? ")
num = int(input())

if num<1 or num>9:
  print("El número introduit no és correcte")
  exit()

for i in range (0, 11, 1):
  res = num*i
  print(str(num) + " * " + str(i) + " = " + str(res))
