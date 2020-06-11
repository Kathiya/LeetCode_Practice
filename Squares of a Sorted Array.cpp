 Squares of a Sorted Array

Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.

 

Example 1:

Input: [-4,-1,0,3,10]
Output: [0,1,9,16,100]

Example 2:

Input: [-7,-3,2,3,11]
Output: [4,9,9,49,121]

 

Note:

    1 <= A.length <= 10000
    -10000 <= A[i] <= 10000
    A is sorted in non-decreasing order.

==========================================================
class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        
        int n = A.size();
       
        if(n<1)
            return A;
        
        int l=0,r=n-1,k=n-1;
        vector<int> v(n);
        while(k>=0)
        {
            
            if(abs(A[l]) > abs(A[r]))
            {
                v[k--] = A[l]*A[l++];
            }
            else
            {
                v[k--] = A[r]*A[r--];
            }
        
            
        }
        
    return v;      
        
    }
};
