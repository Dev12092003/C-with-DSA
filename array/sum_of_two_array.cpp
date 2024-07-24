#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> v){
    int s=0;
    int e=v.size()-1;

    while(s<e){
        swap(v[s++],v[e--]);
    }
    return v;
}
int arraysum(vector<int> a,int n,vector<int>b,int m){
    int i=n-1;
    int j=m-1;

    vector<int> ans;
    int carray=0;
    while(i>=0 && j>=0){
        int val1=a[i];
        int val2=b[j];

        int sum=val1+val2+carray;
        carray=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    //first case 
    while(i>=0){
        int sum=a[i]+carray;
        carray=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }

    //seecond case
    while(j>=0){
        int sum=b[j]+carray;
        carray=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }

    //thrid case 

    while(carray!=0){
        int sum=carray;
        carray=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }

    return reverse(ans);
}
int main(){
    vector<int> v1={1,2,3};
    vector<int> v2={6};
    arraysum(v1,v1.size(),v2,v2.size());


     
}