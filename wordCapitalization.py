inStr = input()

parse_str = [c for c in inStr]

if('a' <= parse_str[0] <= 'z'):
    parse_str[0] = parse_str[0].upper()

res = ''.join(map(str, parse_str))
print(res)
