print("Introdueix el número 1:");
num1 = int(input())    
print("Introdueix el número 2:");
num2 = int(input())
print("Introdueix el número 3:");
num3 = int(input())

if num1<num2:
  if num2<num3:
    print("Ordre ascendent")
  else: 
    print("No estan en ordre ascendent")
else: 
  print("No estan en ordre ascendent")
