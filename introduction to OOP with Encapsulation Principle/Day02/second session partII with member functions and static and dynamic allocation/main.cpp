#include <bits/stdc++.h>
#define Tahtoh ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define el "\n"
#define sp " "
using namespace std;


class StackV01
{
    int Tos, stk[5];
public:
    Stack()
    {
        cout<<"Ctor .."<<el;
        Tos=0;
    }
    bool ISFull()
    {
        return (Tos == 5);
    }
    bool ISEmpty()
    {
        return (Tos == 0);
    }

    void push(int N)
    {
        if(!ISFull())
            stk[Tos++]=N;
    }
    int pop()
    {
        if(!ISEmpty())
            return stk[--Tos];
        return 0 ;

    }
};

class StackV02
{
    int Tos,Size ;
    int *stk;
public:
    StackV02(int L)
    {
        cout<<"Ctor .."<<el;
        Tos=0;
        Size = L;
        stk = new int[Size];
    }
    bool ISFull()
    {
        return (Tos == Size);
    }
    bool ISEmpty()
    {
        return (Tos == 0);
    }

    void push(int N);
     int pop();
    ~StackV02()
    {
        cout<<"Des ...."<<el;
        delete []stk;
    }
};

/// member function normally , it's for arrange my code
///:: Called Scope Operator
void StackV02::push(int N)
{
        if(!ISFull())
            stk[Tos++]=N;
}
int StackV02::pop()
{
        if(!ISEmpty())
            return stk[--Tos];
        return 0 ;
}
int main()
{
    Tahtoh;

    ///With Static Allocation
        ///StackV01 S1 ;
        ///S1.push(3);
        ///S1.push(4);
        ///S1.push(5);

        ///cout<<S1.pop()<<el;
        ///cout<<S1.pop()<<el;
        ///cout<<S1.pop()<<el;cout<<S1.pop()<<el;


    /// With Dynamic Allocation

    StackV02 S2(5);
    S2.push(3);
    S2.push(4);
    S2.push(5);

    cout<<S2.pop()<<el;
    cout<<S2.pop()<<el;
    return 0;
}
