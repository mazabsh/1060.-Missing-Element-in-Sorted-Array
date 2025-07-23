#include<iostream> 
#include<vector> 

using namespace std; 

class Solution{
public: 
    int missingElement(vector<int>& nums, int k){
      int n = nums.size(); 
      int left = 0; 
      int right = n-1; 
      while(left<right){
        int mid  = right-(right-left)/2; 
        if(nums[mid]-nums[left]-mid <k) left = mid; 
        else right = mid-1; 
      }
      return nums[0]+k + left; 
    }
};
int main(){
  vector<int> nums = {1,2,4}; 
  int k =3; 
  Solution sol; 
  cout << sol.missingElement(nums, k) <<endl; 
  return 0; 
}
