/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

template <class t>
class mysc
{
    t a,b;
    public:
    mysc(t p, t q)
    {
        a=p;
        b=q;
    }
    int max()
    {
        if(a>b)
        return a;
        else
        return b;
        
    }
};

int main()
{
    int p,q;
    cout<<"enter no. :";
    cin>>p>>q;
  mysc<int> o1(p,q);
  cout<<"maximum of two no .:"<<max(p,q)<<endl;
  
    return 0;
}