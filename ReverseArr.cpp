#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"enter size ";
    cin>>n;

    vector <int> v;

    cout<<"enter elements ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    vector <int> rev(n);

    for (int i = 0; i < n; i++){
        for(int j=n; j>=0; j--){
            if (i+j == n){
                rev[j] = v[i];
            }
        }
    }

    for(int i=1;i<=n;i++){
        cout<<rev[i];
    }    
    cout<<endl;

}