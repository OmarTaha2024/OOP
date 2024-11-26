#include <bits/stdc++.h>
#define Taha ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define el "\n"
#define sp " "
using namespace std;

class Stack
{
    int Tos,Size ;
    int *stk;
public:
    Stack(int L)
    {
        cout<<"Ctor .."<<el;
        Tos=0;
        Size = L;
        stk = new int[Size];
    }
    /// copy Ctor
    Stack(Stack &OldS)
    {
        Size = OldS.Size;
        Tos = OldS.Tos;
        stk = new int[Size];
        for(int i = 0 ; i < Tos ; i++)
        {
            stk[i] = OldS.stk[i];
        }
        cout<<"copy Ctor .."<<el;
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
    friend void viewcontent( Stack s); /// Not a member function and can access the private attributes directly
    ~Stack()
    {
        cout<<"Des ...."<<el;
        for(int i = 0 ; i < 5 ; i++)
            stk[i] = -1 ;
        delete []stk;

    }
};

/// member function normally , it's for arrange my code
///:: Called Scope Operator
void Stack::push(int N)
{
    if(!ISFull())
        stk[Tos++]=N;
}
int Stack::pop()
{
    if(!ISEmpty())
        return stk[--Tos];
    return 0 ;
}

/// only in c++ and this function only can violate encapsulation principle
void viewcontent(  Stack s)  /// Pass by reference to avoid copying
{
    cout << "stack content .." << sp;

    for (int i = 0; i < s.Tos; i++)
    {
        cout << s.stk[i] << sp;
    }
    cout << el;
    // s.Tos++;  compilation error because attribute of object is protected

    s.stk[2] = 15 ; // it is not protected
}
int main()
{
    Taha;


    Stack S1(5);

    S1.push(3);
    S1.push(4);
    S1.push(5);

    viewcontent(S1);
/// without optimization ,it will print -1 because here i have to object point to the same array when i destroy S in function i will destroy all array
///so we solve it by pass by reference
    cout<<S1.pop()<<el;
    return 0;
}
