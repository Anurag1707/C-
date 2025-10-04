#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int k=i;k<2;k++){
            cout<<" ";
        }
        for(int p=2;p>i;p--){
            cout<<" ";
        }
        for(int o=0;o<=i;o++){
            cout<<"*";
        }
        
        cout<<endl;
    }

     for(int i=0;i<3;i++){
      
        for(int j=2;j>i;j--){
            cout<<"*";
        }
          for(int k=0;k<=i;k++){
            cout<<" ";
        }
         for(int k=0;k<=i;k++){
            cout<<" ";
        }
       
        for(int p=2;p>i;p--){
            cout<<"*";
        }
         cout<<endl;
}
}