//s="abbaca" 
//-> "aaca"
//-> "ca"

#include<iostream>

using namespace std;
string removeduplicatestring(string s){
    string ans;
        ans.push_back(s[0]);
        
        for(int i=1;i<s.length();i++){
            if(!ans.empty() && s[i]==ans.back()){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        return ans;
}
int main(){
    string s="abbaca";
    cout<<removeduplicatestring(s);
    


}