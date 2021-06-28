// Inverted Pattern 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number for pattern";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){  // columns are n + 1 - row_no.
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0; 
}