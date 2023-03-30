#include<iostream>
using namespace std;
int main(){
    int num , fact = 1;
    cout << "enter a number to find factorial : " ;
    cin >> num ;
    int i = num ;
    while(i != 0){
        cout<< num <<endl;
        fact *= num ; 
        num--;
        i--;
    }
    cout<< "factorial is : " << fact ;
}