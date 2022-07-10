//
// Created by aster on 7/10/22.
//
#include <iostream>

int nameAndAge(){
    using namespace std;
    cout << "Enter your first name:"<<endl;
    string firstName;
    cin >> firstName;
    cout << "Enter your secound name:"<<endl;
    string secoundName;
    cin >> secoundName;
    string name = firstName +' '+secoundName;
    int age;
    cout <<"Enter your age:"<<endl;
    cin >> age;
    cout << "Hello,"<<name<<". (age "<< age << ")"<< endl;
    return 0;
}