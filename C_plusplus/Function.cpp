#include <iostream>
using namespace std;

#include "Myheader.h"

int main(){
    /*
    int a = 10;
    showValue(&a); //括號內放記憶體位址，不是指標
    
    int * b = new int;
    *b = 20;
    //參數的傳遞也是一種指派
    showValue(b); //記憶體位址
    int * p;
    p = &a;
    p = b;
    showValue(p);
    */

    int value = 1;
    //由呼叫敘述做指派value的動作
    //不是傳的動作，而是複製貼上
    passByValue(value); //命名
    cout<<value<<endl; // 1 

    //&記憶體位址的植被複製存到func中
    passByPoint(&value); //記憶體位址的值
    cout<<value<<endl; //101

    return 0;
}