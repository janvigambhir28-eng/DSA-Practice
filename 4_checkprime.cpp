#include<iostream>
using namespace std;
int main(){
    //1.take input of number we need to check
    int n;
    cin>>n;
    //2.logic
    int i =2;
    while(i<=n-1){
        //if n gets divided by any i that means it is not a prime number
        if(n%i==0){
            cout<<"Not prime\n";
            return 0;
        }
        i=i+1;
    }
    //if you are here your loop condition is failed thus number will be prime only
    cout<<"prime\n";


    return 0;
    
}