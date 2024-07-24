//time big O(n * log(log n))
//space big O()
#include<iostream>
#include<vector>

using namespace std;
int countPrimes(int n) {
        int count=0;
        vector<bool> prime(n+1,true); // if take here n then we traves for loop n-1 

        prime[0] =prime[1] = false;

        for(int i=2;i<n;i++){
            if(prime[i]){
                count++;

                for(int j=2*i;j<n;j=j+i){
                    prime[j]=0;
                }
            }
        }
        return count;
    }

int main(){
    int n;
    cout<<"enteer number:";
    cin>>n;
    cout<<countPrimes(n);
}

//this code is not use because it take time big O(n2) 


// bool isprime(int num){
//     if(num<=1){
//         return false;
//     }
//     for(int i=2;i<num;i++){
//         if(num%i==0){
//             return false;
//         }  
//     }
//     return true;
// }
// int countprime(int n){
//     int count=0;
//     for(int i=2;i<n;i++){
//         if(isprime(i)){
//             count++;
//         }
//     }
//     return count;
// }
// int main(){
//     int n;
//     cout<<"enter the number:";
//     cin>>n;
//     cout<<countprime(n);
// }