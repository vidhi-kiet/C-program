/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

template<class T>

void swapt(T &a,T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
    
}

int main()
{
    char a='p' ,b='m';
    int x=5,y=8;
    float p=4.5 ,q=9.8;
    cout<<"before char swaping :"<<a<<" "<<b<<endl;
    swapt(a,b);
    cout<<"character swapping :"<<a<<" "<<b<<endl;
    cout<<"before int swaping :"<<x<<" "<<y<<endl;
    swapt(x,y);
    cout<<"character swapping :"<<x<<" "<<y<<endl;
    cout<<"before float swaping :"<<p<<" "<<q<<endl;
    swapt(p,q);
    cout<<"character swapping :"<<p<<" "<<q<<endl;


    return 0;
}