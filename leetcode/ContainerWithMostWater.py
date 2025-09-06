height = [1,8,6,2,5,4,8,3,7]

l = 0
r = len(height)-1
area = 0
while(l!=r):
    if(area < (r-l)*min(height[l],height[r])):
        # print(area)
        area = (r-l)*min(height[l],height[r])
    if(height[l]<height[r]):
        l+=1
    elif(height[r]<=height[l]):
        r-=1
print( area)
