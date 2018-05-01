#include<iostream>
using namespace std;
class a
{ public:
    a() {cout<< "base constructor a "<<endl;}
    void sing()
    {
        cout<<"la la la class a";
    }

};
class b
{ public:
     b(){cout<<"base constructor b"<<endl;};
   void sing()
    {
        cout<<"la la la class b";
    }
};
class c:public b,public a
{ public:
    c():a(),b(){
    cout<< "derived";
    }


};
int main()
{
    c join;
    join.sing();
}
