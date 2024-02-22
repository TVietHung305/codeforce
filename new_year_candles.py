a,b = map(int, input().split())

hours = a

while(a >= b):
    a = (a - b) + 1
    hours += 1

print(hours)
