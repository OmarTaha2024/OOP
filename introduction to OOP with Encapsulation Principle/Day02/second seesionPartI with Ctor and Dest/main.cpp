#include <bits/stdc++.h>
#define Tahtoh ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define el "\n"
#define sp " "
using namespace std;


class Point2D
{
    int x , y ;
    /// if No user Defined Ctor Existing
    /// compiler will generate defualt parameterless Ctor , Do nothing , not intialize any value
    /// like that --------------->  Point2D(){} Do Nothing


};
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

    ///                 Ctor            /////////
    Complex(int r , int i )
    {
        real = r;
        img = i;
    }
    Complex(int l  )
    {
        real = img = l ;
    }
    Complex( )
    {
         real = img = 0 ;
    }
///                     we will replace it by constructor         ///
    /// overloding it compare by number of parameter and its arrangement not look at difference in return type or parameter's name
     ///    Not Valid   /////
          /// int initComplex(int l , string s ){}
         ///void initComplex(int x , string number ){}
    ///     valid      /////
        ///void initComplex(string s ){}
        ///void initComplex(int l , string s ){}
        ///void initComplex( string s , int l){}
        ///void initComplex(int r , int i ){}
        ///void initComplex(int l){}
        ///void initComplex(){}

    void Print()
    {
        cout<<real<<"+"<<img<<"i"<<el;

    }

    ///Destructor ,can't use any parameter so not allow multiple distrctor
    ///but in this class i don't need any cleanup for memory because our object in stack will remove automatically  after ending of our program
    ~Complex()
    {
        cout<<Dest<<el;
    }

};


int main()
{
    Tahtoh;

   Complex C1(3,4);
   Complex C2(2);
   //Complex C3; // parameterless Ctor with intialize

   //Point2D P1 ;// Default Ctor parameterless

    C1.Print();
    C2.Print();

    return 0;
}
