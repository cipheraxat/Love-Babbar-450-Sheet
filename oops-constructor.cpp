/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class student
{
    string name;
    public:
    int age;
    bool gender;
    
    student()
    {
        cout<<"default constructor"<<endl;
    }
    
    student(string s, int a, int b)
    {
        cout<<"parameterised constructor"<<endl;
        name = s;
        age = a;
        gender = b;
    }
    
    student(student &a)
    {
        cout<<"Copy constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    
    ~student()
    {
        cout<<"Destructor called"<<endl;
    }
    
    bool operator == (student &a)
    {
        if(name==a.name && age==a.age && gender==a.gender)
        {
            return true;
        }
        return false;
    }
    
};

int main()
{
 
    student a("urvi", 21, 1);
    student b;
    student c = a;
    if(c==a){
        cout<<"Same"<<endl;
    }
    else
    {
        cout<<"Not same"<<endl;
    }

    return 0;
}
