#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size";
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int noz=0;
    int noo=0;
    for(int i=0;i<n;i++){
        if(v[i] == 1){
            noo++;
        }
        else{
            noz++;
        }
    }

    for(int i=0;i<n;i++){
        if(i<noz) v[i] = 0;
        else v[i] = 1;
    }
    for(int i=0;i<n;i++){
        cout<<v[i];

    }
return 0;

}