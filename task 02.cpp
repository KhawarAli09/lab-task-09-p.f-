#include<iostream>
using namespace std;
int main(){
    int a[3][4];
    for(int r=0;r<3;r++){
        cout<<"enter a 4 value of row  "<<r+1;
        for(int c=0;c<4;c++){
            cin>>a[r][c]; 
        }
    }
for(int r=0;r<3;r++){
        for(int c=0;c<4;c++){
            cout<<a[r][c]<<"\t";
        }
        cout<<"\n";
    }
}

