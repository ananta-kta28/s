#include<iostream>
using namespace std;
// Write a program that takes an input of age
// an prints if you are adult or not
int main(){
    int age;
    cin >> age;
    if (age>=18) {
        cout << "you are adult";
    }
    else if(age<18){
        cout << "not adult";
    }
    return 0;
}