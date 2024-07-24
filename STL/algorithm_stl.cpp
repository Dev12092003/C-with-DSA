#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

int main(){

    vector<int> v;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(10);
    v.push_back(89);
    v.push_back(98);

    cout<<" finding 3 usign binary search : "<<binary_search(v.begin(),v.end(),3)<<endl; //0 - flase , 1- true 

    cout<<" lower bound "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl; //give iteratro 

    cout<<" upper bound "<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;

    int a=3;
    int b=2;
    cout<<"max "<<max(a,b)<<endl;
    cout<<"min "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a "<<a<<endl;

    string abc="abc";
    reverse(abc.begin(),abc.end());
    cout<<"reverse string "<<abc<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate "<<endl;
    for (auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());// intro sort = quick + instertion + heap 
    cout<<"after sort ";
    for (auto i:v){
        cout<<i<<" ";
        }cout<<endl;


}