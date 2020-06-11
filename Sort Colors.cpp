/*
Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note: You are not suppose to use the library's sort function for this problem.

Example:

Input: [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Follow up:

    A rather straight forward solution is a two-pass algorithm using counting sort.
    First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array with total number of 0's, then 1's and followed by 2's.
    Could you come up with a one-pass algorithm using only constant space?

=====================================================================================
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int l = 0;
        int n=nums.size(),r=n-1;
        int a =0;
      while(l<n)
      {
          if(nums[l] == a)
          {
              l++;
              continue;
          }
          r=l+1;
          while(r<n && nums[r] != a)
              r++;
          if(r >= n)
          {
              a++;
              continue;
          }
          swap(nums[l],nums[r]);
          cout<<nums[l]<<" ";
          l++;
          
      }
      }
      };
=========================================================================================

 public:
    void sortColors(vector<int>& arr) {
    int n=arr.size();
    int j=n-1;
	int start=0;
	int end=n-1;
	while(start<=end){
		if(arr[end]==2){
			int t=arr[end];
			arr[end]=arr[j];
			arr[j]=t;
			end--;
			j--;
		}
		else if(arr[end]==0){
			int t=arr[end];
			arr[end]=arr[start];
			arr[start]=t;
			start++;
		}
		else{
			end--;
		}
	}
    }                               
};
=======================================================================================================

class Solution {
public:
    void sortColors(vector<int>& arr) {
    int n=arr.size();
    int j=n-1;
	int start=0;
	int end=n-1;
	while(start<=end){
		if(arr[end]==2){
			int t=arr[end];
			arr[end]=arr[j];
			arr[j]=t;
			end--;
			j--;
		}
		else if(arr[end]==0){
			int t=arr[end];
			arr[end]=arr[start];
			arr[start]=t;
			start++;
		}
		else{
			end--;
		}
	}
    }                               
};


