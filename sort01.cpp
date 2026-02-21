#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int i=0;
    int j=v.size()-1;
    int temp;
    while(i<j){
        if(v[i] == 0) i++;
        else if(v[j] == 1) j--;
        else{
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;

            i++;
            j--;
        }
     
    }

    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    return 0;
}