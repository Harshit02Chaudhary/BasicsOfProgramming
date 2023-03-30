#include<iostream>
using namespace std;
int main(){
    int num, rem, rev = 0;
    cout<< "enter a number : " ;
    cin>> num ; 
    while(num>0){
        rem = num%10 ;
        rev = rev*10 + rem ;
        num = num/10 ;   
    }
    cout << "reverse of your number : "<< rev ;
}

