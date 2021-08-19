//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1#
//Find the repeating and missing number

lass Solution{
public:
    int *findTwoElement(int *arr, int n) {
       
       
        unordered_map<int, bool> map;
        int  *res;
        res = new int[2]{0,0};
        
        
        for(int i = 0;i<n;i++)
        {
            if(map.find(arr[i])==map.end())
            {
                map[arr[i]] = true;
                
            }
            else
            {
                res[0] = arr[i];
            }
            
        }
        int i;
        for(i = 1;i<=n;i++)
        {
           if(map.find(i)==map.end())
           {
               res[1] = i;
               break;
           }
            
            
        }

        return res;
    }
};
