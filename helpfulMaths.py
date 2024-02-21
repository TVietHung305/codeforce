inStr = input()

nums = [int(num) for num in inStr.split('+')]
nums.sort()

res = '+'.join(map(str, nums))
print(res)

