finalAnswer = ""

def find_prime(n1, n2):
    prime_nums = []

    for num in range(n1, n2 + 1):
        if num > 1:
            for i in range(2, num):
                if (num % i) == 0:
                    break
            else:
                prime_nums.append(num)

    return prime_nums

num1 = int(input("Enter the first number: "))
num2 = int(input("Enter the second number: "))

if num1 > num2 :
    finalAnswer = "reverse order - amount : "
if num2 > num1 : 
    finalAnswer = "main order - amount : "

if num1 > num2:
    num1, num2 = num2, num1

prime_nums = find_prime(num1, num2)

print(finalAnswer + str(len(prime_nums)))

input()
