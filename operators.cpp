#include<iostream>

using namespace std;

int main(){

    int num1=7;
    int num2=8;

    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1%num2<<endl;
    cout<<num1/num2<<endl;

    cout<<(num1==num2)<<endl;
    cout<<(num1!=num2)<<endl;
    cout<<(num1>=num2)<<endl;

    num1+=10;
    num2-=5;
    cout<<num1<<endl;
    cout<<num2<<endl;

    return 0;
}