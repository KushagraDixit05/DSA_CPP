#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

void nextPermutation(vector<int> &nums){
    //finding pivot
    int idx=-1;
    int n = nums.size();
    for(int i=n-2;i>=0;i-- ){
        if(nums[i]<nums[i+1]){
            idx = i;
            break;
        }
    }

    reverse(nums.begin()+idx+1,nums.end());

    if(idx==-1){
        reverse(nums.begin(),nums.end());
    }

    int j=-1;
    for(int i=0;i<n;i++){
        if (nums[i]>nums[idx]){
            j= i;
            break;
        }
    }

    int temp = nums[idx];
    nums[idx] = nums[j];
    nums[j] = temp;

    return;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    nextPermutation(nums);
    for(int i=0;i<n;i++) cout<<nums[i];
    return 0;
}