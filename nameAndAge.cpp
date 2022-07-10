//
// Created by aster on 7/10/22.
//
#include <iostream>

int nameAndAge(){
    using namespace std;
    cout << "Enter your name:"<<endl;
    string name;
    int age;
    cin >>name;
    cout <<"Enter your age:"<<endl;
    cin >> age;
    cout << "Hello,"<<name<<"(age "<< age << ")"<< endl;
    return 0;
}