 #include<iostream>
using namespace std;
 int main(){

    //sum of the number
    /*int n;
    cin>>n;
    int digit=0;
    while(n>0){
        int lastdigit=n%10;
        digit+=lastdigit;
        n/=10;
    }
    cout<<digit<<endl;*/

    //reverce the number
    /*int n;
    cin>>n;
    int digit=0;
    while(n>0){
        int lastdigit=n%10;
        digit=(digit*10)+lastdigit;
        n/=10;
    }
    cout<<digit;*/

    
    //+1 -2 +3 -4 
    /*int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<=n;i++){
        if(i%2==0){
            sum-=i;
            
        }
        else{
            sum+=i;
        }
    }
    cout<<sum<<endl;*/

    //factorial
    /*int n;
    cin>>n;
    int sum=1;
    for(int i=n;i>=1;--i){
        sum=sum*i;
    }
    cout<<sum;*/

    // a power b
    int n,m;
    cin>>n>>m;
    int sum=1;
    for(int i=1;i<=m;i++){
        sum=sum*n;
    }
    cout<<sum;
    return 0;
 }