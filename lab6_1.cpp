#include<iostream>
using namespace std;

int main(){
    int i=1,j = 0,k = 0;
    while(i!=0){
    cout << "Enter an integer: ";
    cin >> i;
    if(i%2==0){
    j++;
    }
    else
    {
    k++;
    }
    }
    cout << "#Even numbers = "<< j-1 << '\n';
    cout << "#Odd numbers = "<< k;
    return 0;
}
