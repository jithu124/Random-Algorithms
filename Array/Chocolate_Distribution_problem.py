"""Chocolate Distribution Problem 
Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet.
Each packet can have a variable number of chocolates. There are M students, the task is to distribute chocolate
packets among M students such that :
1. Each student gets exactly one packet.
2. The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.
"""




class Solution:

    def findMinDiff(self, A,N,M):
        if N==1:
            return 0
        A.sort()
        i=0
        min=1000000000
        while(i+M -1< N):
            if(A[i+M-1]-A[i]<min):
                min = A[i+M-1]-A[i]
            i +=1
            

        return min
        


if __name__ == "__main__":
    pass