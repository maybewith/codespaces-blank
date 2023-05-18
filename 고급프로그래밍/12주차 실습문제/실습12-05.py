# Type or paste your code in this area
user_info = { 'name':'David', 'age':21, 'address':'Gwangjin-gu, Seoul' }
                  
n=int(input())

for i in range(n):
    print("Edit #"+str(i+1))
    editrange=input()
    editinfo=input()
    if editrange in user_info:
        user_info[editrange]=editinfo
    else:
        user_info[editrange]=editinfo

print("USER INFO")
for i in user_info:
    print(i+" :",user_info[i])