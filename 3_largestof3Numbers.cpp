#include<iostream>
using namespace std;
int main(){
    //1. create three buckets to take input
    int a,b,c;
    //2. take input from user
    cin>>a>>b>>c;
    //3.logic
    if(a>=b&&a>=c){
        cout<<"Largest:"<<a<<'\n';

    }
    else if(b>=a&&b>=c){
        cout<<"Largest:"<<b<<'\n';
    }
    else{
        cout<<"Largest:"<<c<<'\n';
    }

    return 0;
    
}