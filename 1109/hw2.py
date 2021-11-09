def hw2(n):
    for i in range(0, len(n)):
        if n[i].isupper():
            n[i] = n[i].lower()
        else:
            n[i] = n[i].upper()
    return "".join(n)

a = 'GeekSfOrgEEKs'
b = list(a)

print(hw2(b))
