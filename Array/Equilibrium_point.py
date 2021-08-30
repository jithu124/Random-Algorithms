"""Equilibrium Point
Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array. 
Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it."""




class Solution:
    # Complete this function
    
    #Function to find equilibrium point in the array.
    def equilibriumPoint(self,A, N):
        # Your code here
        dic={}
        sum=0
        if N==1:
            return 1
        
        for i in range(N):
            sum += A[i]
            dic[i] = sum
        
        flag=0
        for i in range(N):
            if dic[i]-A[i] == sum-dic[i]:
                #print(dic[i], " ", sum)
                flag = 1
                break;
        if flag == 1:
            return i+1
        else:
            return -1
        


if __name__ == "__main__":
    pass   
 