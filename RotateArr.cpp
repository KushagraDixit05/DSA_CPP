#include<iostream>
#include<vector>
using namespace std;

void enterElements(int n, vector<int> &v){
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);        
    }
    cout<<endl;

}

void display(vector <int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }  

    cout<<endl;
}

void reversePartly(int i, int j, vector<int> &v){
    int temp;
    while(i<=j){
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++ ; j--;
    }
    cout<<endl;
}
void reverse(vector<int> &v){
    int i=0,j=v.size()-1;
    int temp;
    while(i<=j){
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++ ; j--;
    }
    cout<<endl;
}

void rotateArr(int k, vector <int> &v){
    reversePartly(v.size()-k, v.size()-1, v);
    reversePartly(0, v.size()-1-k, v);
    reverse(v);
}

int main(){
    cout<<"enter size ";
    int n;
    cin >>n;
    
    vector<int> v;
    cout<<"enter elements ";
    enterElements(n,v);
        
    cout<<"enter steps";
    int k; cin>>k;
    rotateArr(k,v);
    
    cout<<"display";
    cout<<endl;
    display(v);

    return 0;
}