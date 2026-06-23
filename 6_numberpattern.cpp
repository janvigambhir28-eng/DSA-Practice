#include<iostream>
using namespace std;
int main(){
    int n,i ;
    cin>>n;
    int no=1;
    int r=1;
    
    while(r<=n){

        //write a loop that runs row time to print numbers
        i=1;
        while(i<=r){
            cout<<no<<" ";
            no=no+1;


            i=i+1;
        }


        cout<<'\n'; 
        r=r+1;
    }













    return 0;
}