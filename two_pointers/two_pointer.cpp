// time Complexity O(n log n) 
// Find a pair in a sorted array that sums to a target
//using opposite ends
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool FindPair(vector<int>& nums, int target){
    int left =0;//first element
    int right = nums.size() -1; //last element

    sort(nums.begin(), nums.end());

    while(left < right){
        int current_sum = nums[left] + nums[right];
        if(current_sum == target){
            return true;
        }else if(current_sum < target){
            left++;
        }else{
            right--;
        }
    }
    return false;
}


int main(){
    vector<int> nums = {3,1,4,6,2,5};//4+6 = 10
    int target = 10;
    bool ans = FindPair(nums, target);
    cout << ans;
    cout << "\n";
    return 0;
}