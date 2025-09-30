#include<iostream>
using namespace std;
int main(){
for(int i=0;i<3;i++){
    for(int k=i;k>=0;k--){
        cout<<" ";
    }
    for(int j=i;j<3;j++){
        cout<<"*";
    }
    for(int p=i;p<2;p++){
        cout<<"*";
    
    }
    
    cout << endl;
}



}