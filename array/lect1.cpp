#include<iostream>
using namespace std;
int main(){
    //2 max sum niklna hai 2 numbers ka
    int arr[5]={1,2,3,4,5};
    int k=2;
    int windowsum=0;
    
    for(int i=0;i<k;i++){
        windowsum+= arr[i];
    }
    int maxsum=windowsum;
    for(int j=k;j<5;j++){
       windowsum=windowsum+arr[j]-arr[j-k];
    if(windowsum>maxsum){
        maxsum=windowsum;
    }
}
  
  cout<<maxsum;

}
