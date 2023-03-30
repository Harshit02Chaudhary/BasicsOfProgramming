#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"enter first number "<<endl;
    cin>>a;
    cout<<"enter second number "<<endl;
    cin>>b;
    cout<<"enter the expression you want to perform "<<endl;
    char ch;
    cin>>ch;
    switch ( ch ) {
        case '+' : cout<< a+b;
                    break;
        case '-' : cout<< a-b;
                    break;
        case '*' : cout<< a*b;
                    break;
        case '/' : cout<< a/b;
                    break;
        case '%' : cout<< a%b;
                    break;
    }
}