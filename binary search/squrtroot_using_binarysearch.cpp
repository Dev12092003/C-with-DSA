#include <iostream>
using namespace std;
int squrtb(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        long long int squre=mid*mid; //here we use becaluse if the value is 2 to poweer 31 then we multiply this it get very big 
        if(squre>n){
            e=mid-1;
        }
        else if(squre<n){
            ans=mid;
            s=mid+1;
        }
        else if(squre==n){
            return mid;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double precision(int n,int precision,int tempsol){
    double factor=1;
    double ans=tempsol;

    for(int i=0;i<precision;i++){
        factor=factor/10;
        //0.1
        //0.01
        //0.001

        for(double j=ans; j*j<n; j=j+factor){
            ans=j;
        }
        return ans;
    }


}
int main(){
    int n;
    cout<<"enter the number for find squre root ";
    cin>>n;

    int tempsol=squrtb(n);
    cout<<precision(n,3,tempsol);
}
