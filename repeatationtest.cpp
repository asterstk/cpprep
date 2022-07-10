//
// Created by aster on 7/11/22.
//
#include <iostream>
void repeatationtest(){
    using namespace std;
    string previous = "";
    string current;
    while(getline(cin,current)){
        if(previous == current)
            cout<<"Repeated word:"<<current<<endl;
        previous = current;
    }
}