#include <iostream>
#include <cmath>
using namespace std;

/*
    main()
-------------
   a  |  a'  | 0x61fe14
   p  |  p'  |
-------------
a
變數型態:int,數值:a',mem address = 0x61fe14
p
變數型態:int,數值:p',若p=&a即取a的數值,有自己的mem address
*p = pointer p 的數值
*/

int main() {
    int a;
    a = 8;
    cout<<a<<endl; //8

    int * p;
    p = &a; //p = 8
    cout<<p<<endl; //8

    *p = 10; //改了a的值=10
    cout<<*p<<endl; //10
    cout<<a<<endl; //10
    
    int * q = &a; //宣告時立刻指派
    *q = 20;
    cout<<a<<endl; //20
    cout<<*p<<endl; //20

    int * r;
    r = new int; //配一個可以放int的值的記憶體空間,名稱為r
    *r = 100;
    cout<<*r<<endl; //100
    cout<<r<<endl; //0xf91780

    int * s = r; //s跟r會指向同一個記憶體空間，都可對其修改
    *s = 200;
    cout<<*r<<endl; //200

    //釋放掉r連結的記憶體位址，要不回來了
    delete r; //可以再配，但不一定是剛才那個了
    cout<<r<<endl; //0xf91780
    cout<<*r<<endl; //亂數
    cout<<s<<endl; //多個指標只要釋放掉一個，其他都死翹翹
    cout<<*s<<endl; //亂數

    r = new int; //r deleted了還在，只是記憶體位址放掉了
    *r = 300;
    cout<<r<<endl;
    cout<<*r<<endl;

    int * const m = new int; //read-only, 若delete則消失
    *m = 100;
    *m = 200;
    cout<<*m<<endl; //200
    delete m; 
    //m = new int; //會編譯錯誤，不能再次指派

    const int * n = r; //X:const int * n = new int; 沒有意義
    //*n = 100; //不能指派因為read-only
    cout<<*n<<endl; //300
    n = s;
    cout<<*n<<endl; //300

return 0;
}
