entrada = input()

a = int(entrada.split(" ")[0])
b = int(entrada.split(" ")[1])
c = int(entrada.split(" ")[2])
d = int(entrada.split(" ")[3])

mylist = [a, b, c, d]
#acha o maior e o menor, um time terá eles e o outro teráá os  
#intermediáários

maior = max(a,b,c,d)
menor = min(a, b, c, d)

mylist.remove(max(mylist))
mylist.remove(min(mylist))


timeMeio = sum(mylist)
timePontas = maior + menor
difTimes = 0
if (timeMeio > timePontas):
  difTimes = timeMeio - timePontas
else:
  difTimes = timePontas - timeMeio


print(difTimes)