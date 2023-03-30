#include<iostream>
using namespace std;

int main() {
    /*int a=6 ;               //binary operator ('&')
    bool res;
    res = a&1;
    cout<< res;*/
    
    /*int num, fact;
    int factorial(int num);
    cout<<"enter a number : "<<endl;
    cin>>num;
    fact = factorial(num);
    cout<< "Factorial of your number is : "<< fact ;*/

    int n, r, ans;
    int factorial(int num);
    int nCr(int n, int r);                             //function declaration
    cout<< "enter value of n : ";
    cin>> n ;
    cout<< "enter value of r : ";
    cin>>r;

    ans = nCr(n, r);                                 //function calling
    cout<<"nCr is : " << ans;
}

int factorial(int num){
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact = fact*i;
    }
    return fact;
}
   
int nCr(int n, int r){                               //function definition
    int num = factorial (n);                            
    int den = (factorial(r) * factorial(n-r) );
    int ans = num/den;

    return ans ;
}