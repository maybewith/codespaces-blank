# Type or paste your code in this area
n=int(input())

for i in range(n):
    a, b,c = input().split()
    a=int(a)
    b=int(b)
    c=int(c)
    num=(a+b+c)/3
    print("Student "+str(i+1)+"'s Average Score : "+str(round(num, 2)))
    
    