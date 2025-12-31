// time Complexity O(n2) 
// Sort an array using brute force
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int>BubbleSort(vector<int>& nums){
    for(int i = 0; i < nums.size(); i++){
        for(int j = i+1; j < nums.size();j++){
            if(nums[i] > nums[j])
                swap(nums[i], nums[j]);
        }
    }
    return nums;
}


int main(){
    vector<int> nums = {3,1,4,6,2,5};
    BubbleSort(nums);
    vector<int> ans = BubbleSort(nums);
    for(int n : ans){
        cout << n << " ";
    }
    cout << "\n";
    return 0;
}