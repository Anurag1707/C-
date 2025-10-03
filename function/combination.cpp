#include<iostream>
using namespace std;
int main(){
    //n!/r! * (n-r)!
    int n=5;
    int r=2;

    int a=1;
    for(int i=1;i<=n;i++){
        a *=i;
    }
    int b=1;
    for(int i=1;i<=r;i++){
        b *=i;
    }
     int c=1;
    for(int i=1;i<=n-r;i++){
        c *=i;
    }
    cout<<a/(b*c);

}