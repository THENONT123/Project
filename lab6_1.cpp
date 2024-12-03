#include<iostream>
using namespace std;

int main(){
    int num, even = 0 , odd = 0;
    cout << "Enter an integer: ";
    cin >> num;
    while(num != 0){
        cout << "Enter an integer: ";
        if(num%2 != 0){
        odd ++;
        }
        else if(num%2==0){
            even ++;
        }
        cin >> num;
    }
    cout << "#Even numbers = "<< even;
    cout << "\n#Odd numbers = "<< odd;
    return 0;
}
