# # Get and Print String in Double Quotes
n = int(input())
m = int(input())
s = int(input())
count=0
for i in range(0,n):
    inp = input()
    for j in range(0,m): #for ch in inp[:m]- we can also write like this,
        if(inp[j]=='o'):
            count+=1
print(count*s)
# inp = "Hello"
# print(inp[0])