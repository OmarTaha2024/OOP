#include <bits/stdc++.h>
#define Taha ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define el "\n"
#define sp " "
using namespace std;

class Complex
{
    int real, img;

public:
    // Default constructor
    Complex()
    {
        cout << "Default Ctor ..." << el;
        real = img = 0 ;

    }

    // Parameterized constructor
    Complex(int r, int l)
    {
        cout << "Ctor ..." << el;
        real = r;
        img = l;
    }


    // Copy constructor
    Complex(const Complex &OldC)
    {
        cout << "Copy Ctor ..." << el;
        real = OldC.real;
        img = OldC.img;
    }

    // Destructor
    ~Complex()
    {
        cout << "Dest ..." << el;
    }

    int GetReal()
    {
        return real;
    }

    int GetImg()
    {
        return img;
    }



    void Print()
    {
        cout << "Complex Number is " << real << " +" << img<<"i" << el;
    }

    Complex Sum(const Complex &right)
    {
        Complex result(right.real + real, right.img + img);
        return result;
    }
    Complex operator + (const Complex &right)
    {
        Complex result(right.real + real, right.img + img);
        return result;
    }
    Complex operator + (int right)
    {
        Complex result(right + real,img);
        return result;
    }

    Complex& operator += (const Complex &right)
    {
       real += right.real;
       img += right.img;
       return *this ;
    }
/// prefix
    Complex & operator++ ()
    {
       real++ ;
       return *this ;
    }
    /// postfix
    Complex operator ++(int)
    {
        Complex temp(*this);
        real++ ;
       return temp ;
    }
    operator int()
    {
        return real;
    }
};
Complex operator + (int l,  Complex &right)
{
    Complex result(right.GetReal() + l, right.GetImg());
    return result;
}
int main()
{
    Taha;
    Complex c1(3, 2), c2(4, 5), c3 , c4;
    //c3 = c2 + C1;
    //c3 = c2 + 7;
    c3 =c1+= c2;
    c3 = c1++; /// post
    c4 = ++c2; /// pre
    int x = (int)c1;
    cout<<x<<el;
    c3.Print();
    c4.Print();
}
