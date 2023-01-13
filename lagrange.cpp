#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
    
    float a[8];
        for(int i=0;i<9;i++){
            a[i] = 2*M_PI*i/8 ;
        }
    float y[8];
    for(int i=0;i<8;i++){
        y[i] = pow(sin(a[i]),2);
    }
    float yp =0;
    float s;
    float x;
    cout<<"Enter x : ";
    cin>>x;
    for(int i=0;i<8;i++){
        s=1;
        for(int j=0;j<8;j++){
            if(i!=j){
                s = s*((x-a[j])/(a[i]-a[j]));
            }
        }
        yp= yp+s*y[i];
    } 
    cout<<"The value of f(x) at x = "<<x<<" is :  "<<yp;
}