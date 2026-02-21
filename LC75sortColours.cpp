#include<iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> nums;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }

    int lo=0,mid=0,hi=nums.size()-1;
    
    while(mid<=hi){
        if(nums[mid] == 2){
            swap(nums[mid],nums[hi]);
            hi--;
        }
        if(nums[mid]==0){
            swap(nums[mid],nums[lo]);
            lo++;
            mid++;
        }
        if(nums[mid] == 1) mid++;
    }

    for(int i=0;i<n;i++) cout<<nums[i]<<" ";

}

    
