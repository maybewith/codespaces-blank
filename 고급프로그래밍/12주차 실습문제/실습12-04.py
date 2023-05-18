# Type or paste your code in this area
user_info = { 'id':'software', 'pw':'python' }
inputid=input()
inputpw=input()

if inputid==user_info['id'] and inputpw==user_info['pw']:
    print("Success in Login")
elif inputid!=user_info['id'] and inputpw==user_info['pw']:
    print("ID Mismatch!")
else:
    print("PW Mismatch!")