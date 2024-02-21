inName = input()

parse_name = [k for k in inName]
set_name = set(parse_name)
if len(set_name) % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
