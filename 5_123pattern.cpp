#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;


    int row=1;
    while(row<=n){
        int i=1;
        while(i<=n-row){
            cout<<" ";
            i=i+1;
        }
        int j=1;
        while(j<=2*row-1){
            cout<<j;
            j=j+1;
        }
        cout<<"\n";
       row=row+1;
    }









 

    
    return 0;
}