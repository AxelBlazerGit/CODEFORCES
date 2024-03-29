def youNick(n):
    digits = str(n)
    for i in range(len(digits)):
        if digits[i] in digits[i+1:]:
            return -1
    return 1

ip = input()
start = int(ip) + 1
while True:
    if youNick(start) == 1:
        break
    start += 1
print(start)
