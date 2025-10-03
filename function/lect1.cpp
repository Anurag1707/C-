#include<iostream>
using namespace std;
// void india(){
//     cout<<"You are in India "<<endl;
// }
// int main(){
//     india();
//     cout<<"You are in main"<<endl;
// }
int add(int a,int b){
    return a+b;
}
int main(){
    int a=10;
    int b=20;
    add(a,b);
  
    cout<<add(a,b);
}