#include <iostream>
#include <vector>
using namespace std;

void partRev(int i, int j, vector<int> &v){
    int temp;
    while(i<=j){
        temp=v[i];
        v[i] = v[j];
        v[j] = temp;
        i++; j--;
    }
}

void Rev(vector<int> &v){
    int i=0; int j=v.size()-1;
    int temp;
    while(i<=j){
        temp=v[i];
        v[i] = v[j];
        v[j] = temp;
        i++; j--;
    }
    cout<<endl;
}

void rotate(int k, vector<int> &v){
    partRev(v.size()-k,v.size()-1,v);
    partRev(0,v.size()-1-k,v);
    Rev(v);
}

int main(){
    int n;
    cin>>n; //size

    //enter elements
    vector<int> v;
    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    } 
       
    int k; cin>>k;
    rotate(k,v);
    cout<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}