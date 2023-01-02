#ifndef MYHEADER_H_
#define MYHEADER_H_

#include <iostream>
using namespace std;

void showValue(int * p);
void passByValue(int value);
void passByPoint(int * pValue);

void showValue(int * p){
    cout<<*p<<endl;
}

void passByValue(int value){
    value += 100;
}

void passByPoint(int * pValue){
    *pValue += 100;
}




#endif /* MYHEADER_H_ */