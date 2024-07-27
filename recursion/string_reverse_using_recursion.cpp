// i/p  abcd
// o/p  dcba

#include<iostream>
using namespace std;

void reverse(string& str,int i,int j){
    cout<<"call recive  "<<str<<endl;
    //base case
    if(i>j){
        return 0;
    }

    //processing
    swap(str[i],str[j]);
    i++;
    j--;

    //recursion call
    reverse(str,i,j);

}


int main(){
    string name="abcde";
    reverse(name,0,name.length()-1);
    cout<<name<<endl;

    return 0;
}