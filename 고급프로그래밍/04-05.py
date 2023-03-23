# Type or paste your code in this area
sum=0
n=0

while sum<20:
    t=int(input())
    if t==4:
        n+=1
        break
    if t!=4:
        sum+=t
    n+=1
    
print("Count =",n)
print("Total =",sum)