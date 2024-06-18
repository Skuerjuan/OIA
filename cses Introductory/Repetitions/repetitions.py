s = input()
rep = 1
absRep = 1
for i in range(0, len(s)-1):
    if s[i] == s[i+1]:
        rep += 1
    else:
        rep = 1
    if rep > absRep:
        absRep = rep
print(absRep)