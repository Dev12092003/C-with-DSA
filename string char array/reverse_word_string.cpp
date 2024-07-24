#include<iostream>
#include<algorithm>

using namespace std;

void reverse(string s){
    int st=0;

    for(int i=0;i<s.length();i++){
        int e=i-1;

        while(st<e){

            if(s[i]=='\0'){
                swap(s[st],s[e]);
                st++;
                e--;
            }

            if(s[i]==' '){
                swap(s[st],s[e]);
                st++;
                e--;
            }
        }
        // Move start to the beginning of the next word
        st=i+1;
    }

    reverse(s.begin(),s.end());
}

int main(){

    //my name is dev
    //ym eman si ved 

    string s="my name is dev";

    cout<<s<<endl;

    reverse(s);
    cout<<"reverse"<< s;

}