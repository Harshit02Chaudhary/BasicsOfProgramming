#include<iostream>
using namespace std;

int main(){
    int n;
    int nth_term(int a);
    void series(int a);
    cout<<"enter the nth no. for AP series 3*n+7 : "<<endl;
    cin>>n;
    cout<<nth_term(n)<<endl;
    cout<<"AP series till nth term : "<<endl;
    series(n);
}

int nth_term(int a){
        int ans=3*a+7;
    
    return ans;
}

void series(int a){
    int value;
    for(int i=1; i<=a; i++){
        value = 3*i+7;
        cout<<value<<" ";
    }
}