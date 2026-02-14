#include <iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"enter size ";
    int n;
    cin >>n;
    
    vector<int> v;
    cout<<"enter elements";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);        
    }

    
    int i,j,temp;
    cin>>i;// starting index
    cin>>j;// ending index
    while(i<=j){
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++ ; j--;
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }  

    cout<<endl;
    return 0;
}