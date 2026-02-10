#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"enter the size of the array ";
    int n;
    cin>>n;
    vector<int> v;

    cout<<"enter the elements of the array "<<endl;
    for(int i=0;i<=n-1;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"enter the target ";
    int target;
    cin>>target;

    for(int i=0;i<=v.size()-2;i++){
        for(int j=i+1;j<=v.size()-1;j++){
            if(v[i]+v[j] == target){
                cout<<"("<<i<<","<<j<<")";
                cout<<endl;
            }
        }
    }
    cout<<endl;
}