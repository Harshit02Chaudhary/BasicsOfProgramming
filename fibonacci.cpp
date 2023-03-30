#include<iostream>
using namespace std;

int main(){
    int num;
    void fibonacci(int n);
    cout<<"enter n'th term for fibonacci series : "<<endl;
    cin>> num;
    fibonacci(num);

}

void fibonacci(int n){

    int num1=0, num2=1, no;
        cout<< num1 << " " << num2 << " ";

    for(int i=1; i < (n-1); i++){
        no = num1 + num2 ;
        cout<< no << " ";
        num1 = num2 ;
        num2 = no ;
      
    }

}