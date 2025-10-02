#include<iostream>
using namespace std;
int main(){
    int n=2;
if(n==1){
    cout<<"prime";
}
 int found=1;
for(int i=2;i<n;i++){
    if(n%2==0){
        found=0;
    }
}
if(found==1){
    cout<<"Prime no.";
}else{
    cout<<"not prime";
}



}