#include<iostream>
using namespace std;

int main(){
    int no;
    void isPrime(int num);
    int ans;

    cout<< "Enter a number : "<< endl;
    cin>> no ;

    isPrime(no);


}

void isPrime(int num){

    //int temp;
    for(int i=2; i<num; i++){
        //cout<< i ;
        //temp = num%i;
        if(num%i==0){
            cout<< "Not Prime"<<endl;
            break;
        }
        if(i == (num-1)){
            cout<< "Prime" << endl;
        }    
    }        

}