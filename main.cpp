#include <iostream>

using namespace std;

class basicMath{
    int x;
    int y;
    float z;
    char a;
public: 
      basicmath();
      void cal();
     void show();
    
};
basicmath::basicmath()
{
    cout<<"enter two numbers";
     cin>>x>>y;
    cout<<"select operation"<<endl;
     cout<<"A for addtion"<<"\n"<<"S for subtraction"<<"\n"<<"M for multiplication"<<"\n"<<"D for divide"<<"G for remainder "<<endl
   
     cin>>a;
}
void basicmath:: cal()
{  
    if (a == 'A')
        z=x+y;
    else if (a == 'S')
        z=x-y;
     else if (a == 'M')
        z=x*y;
     else if (a == 'D'){
        if (x < 0 || y < 0){
            cout << "Invalid Numbers. \n";
        } else {
           z=(x/y);
        }
    } else if (a == 'G'){
        z=x%y;
    } else {
        cout << "Invalid Choice. \n";
    }
    void basicmath::show()
    {
        cout<<"result ="<<z<<endl;
    }
 
int main()
{
    basicmath obj();
    basicmath obj2();
    obj.cal();
    obj2.cal();
    obj.show();
    obj2.show();
    return 0;
}
