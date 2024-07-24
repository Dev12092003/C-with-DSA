//s={a,a,b,b,b,c,c,c}
//-> {a,2,b,3,c,3}

#include<iostream>

using namespace std;
int compress(vector<char>& chars){
    int i=0;
    int ansindex=0;
    int n=chars.size();
    while(i<n){
        int j=i+1;
        while(j<n && chars[i]==chars[j]){ // we compare the next charcter 
            j++;
        }
        //yaha kab aaoge
        // ya to vector pura traves kiya
        //ya fer new/different charater encounter kia he

        //old character stor karo
        chars[ansindex++]=chars[i];
        int count=j-i; 
        
        if(count>1){
            //converting counting into single digit and saving in answer
            string cnt=to_string(count);
            for(char ch: cnt){
                chars[ansindex++]=ch;
            }
        }
        //moving to new/different character
        i=j;
    }
    return ansindex;
}

int main(){


}