#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> q;
    q.push("he");
    q.push("you");
    q.push("one");

    cout<<"first element :"<<q.front()<<endl;
    q.pop();
    cout<<"foirst element :"<<q.front()<<endl;

    cout<<"size "<<q.size()<<endl;
}