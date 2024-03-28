#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

class student
{
    private:
    int age;
    string first_name;
    string last_name;
    int standard;
    
    public:
   int a,s;
   string f,l;
    void set(int a,string f,string l,int s)
    {
        age=a;
        first_name=f;
        last_name=l;
        standard=s;
    }

    int get_age(){
       return age;
    }

    string get_first_name(){
        return first_name;
    }
    string get_last_name(){
        return last_name;
    }
    int get_standard(){
        return standard;
    }
    string addall(){
    stringstream ss;
    ss<<age<<","<<first_name<<","<<last_name<<","<<standard;
    string addedstring;
    ss>>addedstring;
    return addedstring;

    }
};


int main()
{
student student1;
cin>>student1.a;
cin>>student1.f;
cin>>student1.l;
cin>>student1.s;
student1.set( student1.a,student1.f,student1.l,student1.s);
cout<<student1.get_age()<<endl;
cout<<student1.get_last_name()<<", "<<student1.get_first_name()<<endl;
cout<<student1.get_standard()<<endl;
cout<<endl;
cout<<student1.addall();

return 0;
}