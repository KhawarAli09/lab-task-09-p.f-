#include<iostream>
using namespace std;
int main(){
    int a[3][3];
    int sum=0;
    for(int r=0;r<3;r++) {
        for(int c=0;c<3;c++){
             cout<<"enter a 3 value of row  "<<r+1<<"col number "<<c+1;
            cin>>a[r][c];
            sum=a[r][c]+sum; 
        }
    }
    cout<<"the sum of array value is : "<<sum;
}

