#include<iostream>
#include<vector>
using namespace std;

int main(){
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;
    int x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        v.push_back(x);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}