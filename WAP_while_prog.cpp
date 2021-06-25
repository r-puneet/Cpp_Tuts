// WAP which keep the while loop going as long as val is less than or equal to user derived n

#include<iostream>
using namespace std;

int main()
{
    int val = 1, sum = 0, n;
    cout<<"Enter the number till that you want loop to continue = ";
    cin>>n;
    while (val<=n){
        sum +=val;
        ++val;
    }
    cout<<"Sum of 1 to "<<n<<" inclusive is "<<sum<<endl;
}
