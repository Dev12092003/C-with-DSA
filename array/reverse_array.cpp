
//revers array with specific positon 

#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> v,int n){
    int s=n+1;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;

}

vector<int> print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){

    vector<int> v={11,7,3,12,4};
    cout<<"enter potitin to rever start ";
    int n;
    cin>>n;

    vector<int> ans =reverse(v,n);

    print(ans);

    
}