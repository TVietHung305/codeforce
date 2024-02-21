n = int(input())
colors = input()

min_moves = 0
for i in range(1, n):
    if colors[i] == colors[i - 1]:
        min_moves += 1

print(min_moves)
