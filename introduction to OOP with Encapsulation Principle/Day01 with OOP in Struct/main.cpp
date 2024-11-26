#include <bits/stdc++.h>
#define Tahtoh ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define el "\n"
#define sp " "
using namespace std;
/// in class default access Modifier is private Vs struct is with public access Modifier So we should declare variable private in struct like that to reach encapsulation principle
struct Complex
{
private :
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

    void Print()
    {
        cout<<real<<"+"<<img<<"i"<<el;

    }
};


int main()
{
    Tahtoh;
    /// in c++ 8 bytes allocated in stack & inintialize but in .NET you don't allocate any thing by this line .
    Complex C1;// struct is a value type not reference type
    Complex C2;// struct is a value type not reference type



/// old version in c
    // C1.real = 7 ;
    //  C1.img = 8 ;
    // C1.real = 2 ;
    //  C1.img = 5 ;
    // cout<<C1.real<<"+"<<C1.img<<"i"<<el;

///new version in c++ with encapsulation principle

    C1.SetReal(7);
    C1.SetImag(3);

    C2.SetReal(6);
    C2.SetImag(2);

    ///cout<<"C1 is "<<C1.GetReal()<<"+"<<C1.GetImag()<<"i"<<el;
    ///cout<<"C2 is "<<C2.GetReal()<<"+"<<C2.GetImag()<<"i"<<el;

    /// this is Member function so i should call it by its object against standalone function
    C1.Print();
    C2.Print();
    return 0;
}
