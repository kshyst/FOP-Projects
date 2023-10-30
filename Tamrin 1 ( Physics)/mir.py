import math

a = input("Enter First Number : ")
b = input("Enter Second Number : ")

aBinary = bin(int(a))
bBinary = bin(int(b))

print(aBinary)
print(bBinary)

aArray  = []
bArray = []


bitCountToChange = 0

for i in aBinary :
    aArray.append(i)
for i in bBinary :
    bArray.append(i)

bArray.pop(0)
bArray.pop(0)
aArray.pop(0)
aArray.pop(0)

bArray.reverse()
aArray.reverse()

maxArrayLength = max(len(aArray) , len(bArray))
minArrayLength = min(len(aArray) , len(bArray))

for i in range(maxArrayLength - minArrayLength) :
    if(len(aArray) > len(bArray)) :
        bArray.append('0')
    elif(len(aArray) < len(bArray)) :
        aArray.append('0')


for i in range(len(aArray)) :
    if aArray[i] != bArray[i] :
        bitCountToChange +=1


print(aArray)
print(bArray)

print(bitCountToChange)

input()