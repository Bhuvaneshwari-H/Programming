//HOW MANY NUMBERS BETWEEN 1 AND N ARE DIVISIBLE BY A AND B

#include<iostream>
using namespace std;
int divisible(int n,int a,int b){
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    return c1+c2-c3;
}
int main(){
    int n,a,b;
    cout<<"Enter the end"<<endl;
    cin>>n;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    cout<<divisible(n,a,b);
    return 0;
}
