"""Merge Without Extra Space  
Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. 
Merge them in sorted order without using any extra space. Modify arr1 so that it contains the 
first N elements and modify arr2 so that it contains the last M elements."""




def merge(self,arr1,arr2,n,m):
     i=0
     k = n-1
     j=0
     
     if len(arr1) > 0 and len(arr2) > 0: 
         while i<=k and j<m:
             #print(i)
             try:
                 if(arr1[i]<arr2[j]):
                 
                     i+=1
                 
                 else:
                 
                    arr1[k],arr2[j] = arr2[j],arr1[k]
                    k -=1
                    j +=1
                   
             except:
                pass
             
         
         arr1.sort()
         arr2.sort()
        


if __name__ == "__main__":
    pass   
 