input = int(input())

a, b = 0, 1
for i in range(input):
    temp = b
    b += a
    a = temp

print(a)