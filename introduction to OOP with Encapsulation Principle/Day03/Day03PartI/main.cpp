#include <bits/stdc++.h>
#define Tahtoh ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define el "\n"
#define sp " "
using namespace std;


/// in class default access Modifier is private
class Complex
{
    int real;
    int img ;
public :
    int GetReal()
    {
        return real;
    }
    int GetImag()
    {
        return img;
    }
    void SetReal(int r)
    {
        real = r;
    }
    void SetImag(int i)
    {
        img = i;
    }
    Complex(int r, int i )
    {
        cout<<"Ctor01 ... "<<el;
        real = r;
        img = i;
    }
    Complex(int l  )
    {
        cout<<"Ctor02 ... "<<el;
        real = img = l ;
    }
    Complex( )
    {
        cout<<"Ctor03 ... "<<el;
        real = img = 0 ;
    }

    /// member fuction can access any private atrribute from the same class
    /// in cass pass by value (C) or return by value (temp object )
    /// new copy will not intalize with any normal constructors
    /// will intialize with memberwise copy (Bitwise copy)
    Complex SumV1(Complex C)
    {
        Complex result ;
        result.real = real + C.real ;
        result.img = img + C.img ;
        return result ;
    }
    ///End of sum function
    /// creation Temp anonymous object , copy data from result to temp
    /// Destructor Result ,C
    ///remove stack frame of sum function


    /// i will use pass by reference to reduce number of objects
    /// but if by mistake i change C it will reflect in C2 that is not good C.real = 0 ;
    /// to solve this problem by send to you const  to enforce you to read only
    Complex  SumV2(const Complex & C)
    {
        Complex result (real + C.real,img + C.img );

        ///C.real = 0 ; /// it will be compilation error
        return result ;
    }
    void Print()
    {
        cout<<real<<"+"<<img<<"i"<<el;

    }

    ~Complex( )
    {
        cout<<"Dest ... "<<el;
    }
};

int main()
{
    Tahtoh;

    Complex C1(3,4),C2(5),C3;
/// copy data from temp object to C3 , calling destructor of temp object
    ///C3 = C1.SumV1(C2);
/// in this case I will see it 4 Ctor and only 5 Destructor
/// because return value optimization mode so we will not see temp object Destructor


    C3 = C1.SumV2(C2);

    return 0;
}
