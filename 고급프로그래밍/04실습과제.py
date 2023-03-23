sum=''
while True:
    n=input()
    if n==';':
        break
    if n=='-':
        continue
    k=int(input())
    sum+=n*k
print("Result =",sum)