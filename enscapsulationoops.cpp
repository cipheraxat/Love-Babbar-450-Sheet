/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;


class A{
    
public:    
  int a;
  void funcA()
  {
      cout<<"Func A\n";
  }
private:
  int b;
  void funcB()
  {
      cout<<"Func B\n";
  }
protected:
  int c;
  void funcC()
  {
      cout<<"Func C\n";
  }
};


int main()
{
    A obj;
    obj.funcA();//public object
    obj.funcB();//priavte object
    obj.funcC();//protected object

    return 0;
}
