#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
    float dd[8][8];
    float a[8];
        for(int i=0;i<9;i++){
            a[i] = 2*M_PI*i/8 ;
        }
    for(int i=0;i<8;i++){
        dd[i][0] = pow(sin(a[i]),2);
    }
    float c2,c1;
    for(int j=1;j<8;j++){
        for(int i=0;i<8-j;i++){
            c1 = dd[i+1][j-1]-dd[i][j-1];
            c2 = a[i+j]-a[i];
            dd[i][j] = c1/c2;
        }
    }
    cout<<endl;
    cout<<"The divided difference Matrix is :"<<endl;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cout<<dd[i][j]<<" ";
        }
        cout<<endl;
    }
    float x;
    cout<<"Enter x : ";
    cin>>x;
    float sum=0;
    for(int i=1;i<8;i++){
        float s = 1;
        for(int j=0;j<i;j++){
            s=s*(x-a[j]) ;
        }
        sum = sum + s*dd[0][i];
    }
    sum = sum + dd[0][0];
    
    cout<<"The value of f(x) at x = "<<x<<" is :  "<<sum;

    }