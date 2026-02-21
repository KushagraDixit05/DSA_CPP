#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

void merge(vector<int> &nums1,int m, vector<int>& nums2,int n){
    int i = m-1;
    int j = n-1;
    int k = m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i]> nums2[j]){
            nums1[k] = nums1[i];
            i--;k--;
        }
        else{
            nums1[k] = nums2[j];
            j--;k--;
        }        
    }
    while(i>=0){
        nums1[k] = nums1[i];
        i--;
        k--;
    }

    while(j>=0){
        nums1[k] = nums2[j];
        j--;
        k--;
    }
 
}

int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    arr1.push_back(0);
    arr1.push_back(0);
    arr1.push_back(0);
    arr1.push_back(0);
    arr1.push_back(0);
    arr1.push_back(0);

    int m=4;

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
    int n=6;
    merge(arr1,m,arr2,n);
    
    for(int i=0;i<arr1.size();i++) cout<<arr1[i]<<" ";
    return 0;
}