﻿#include <iostream>
using namespace std;

int main() {
//one way if statement
int num;
cout << "enter the number to know it" << endl;
cim >> num;
if(num == 7){
    cout << "it's is 7" << endl;
}

//two way if else statement
int num2;
cout << "enter the number to know it" << endl;
cin >> num2;
if(num2 == 8){
    cout << "it's 'eight" << endl;
}
else{
    cout << "not eight" << endl;
}

//multi way if else statement
int num3;
cout << "enter the number to know it" << endl;
cin >> num3;
if(num3 == 2){
    cout << "it's two" << endl;
}
else if(num3 == 4){
    cout << "it's four" << endl;
}
else{
    cout << "not two or four" << endl;
}

//nedted if else statement
if(num3 == 6){
    if(num2 == 8){
        cout << "both correct" << endl;
    }
}
else{
    cout << "both not correct";
}
    return 0;
}

