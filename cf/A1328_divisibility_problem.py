import math
t = int(input())
for i in range(0,t):
    a,b = map(int,input().split())
    n = math.ceil(a/b)
    print(b*n - a)