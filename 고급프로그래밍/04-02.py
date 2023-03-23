# Type or paste your code in this area
count=0
sum=0
while 1:
    i=int(input())
    if i==4:
        count+=1
        sum+=i
        break
    count+=1
    sum+=i

print("Count = "+str(count)+", Total = "+str(sum))