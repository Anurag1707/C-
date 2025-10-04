#include <iostream>
using namespace std;
int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=3;k>i;k--){
            cout<<"*";
        }
        for(int p=2;p>i;p--){
            cout<<"*";
        }
        cout<<endl;
    }
}
    // *****
    //  ***
    //   *