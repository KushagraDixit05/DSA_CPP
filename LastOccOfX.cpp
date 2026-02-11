#include<iostream>
#include<vector>
using namespace std;


int main(){
    cout<<"enter size of arr";
    int n;
    cin>>n;
    vector<int> v;

    cout<<"enter the elements of the array";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"enter the target element";
    int target;
    cin>>target;

    int idx=-1;

    for(int i=v.size()-1;i>=0;i--){ //take v.size() -1
        if (v[i]==target){
            idx=i;
            break;
        }
    }
    cout<<endl;
    cout << idx;

    cout<<endl;

    return 0;

}