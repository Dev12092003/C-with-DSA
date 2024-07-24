#include<iostream>
using namespace std;

int score=15; // global variable every function can use this variable 

void b(int& i){
    cout<<i<<endl;
    cout<<score <<" score in b"<<endl;
}

void a(int& i){
    cout<<score<<" score in a"<<endl;
    char ch='u';
    cout<<i<<endl;
    b(i);
}


int main(){
    cout<<score<<" score main"<<endl;
    int i=5;
    a(i);
    
    return 0; 
}













// #include<iostream>
// using namespace std;

// void b(int& i){
//     cout<<i<<endl;
// }

// void a(int& i){
//     char ch='u';
//     cout<<i<<endl;
//     b(i);
// }


// int main(){
//     int i=5;
//     //a(i);
//     {
//         int i=2;
//         cout<<i<<endl;
//     }
//     cout<<i<<endl;

//     return 0; 
// }