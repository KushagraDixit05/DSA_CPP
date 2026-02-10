#include<iostream>
#include<vector>
using namespace std;


int main(){
    cout<<"enter size of arr ";
    int n;
    cin>>n;
    vector<int> v;

    cout<<"enter the elements of the array ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<"enter the target element ";
    int target;
    cin>>target;

    vector<int> index;

    for(int i=0;i<v.size();i++){ 
        if (v[i]==target){
            index.push_back(i);
        }
    }

    for(int i=0;i<index.size();i++){
        cout<<index[i]<<" ";        
    }
    cout<<"now only first and last "<<endl;

    if (index.size()==0){
        cout<<-1;
    }
    else{
        cout << index[0]<<endl; //first occurrence 
        cout << index[index.size()-1]<<endl; //last occurrence
    }
    return 0;
}