#include <iostream>

using namespace std;

void func4() 

{

    cout<<"Gprof Testing"<<endl;
    cout<<"Adding Change 1"<<endl;

}

void func3() 

{

    cout<<"Function 3"<<endl;

}

void func2()

{
    cout<<"Function 2"<<endl;
    int i = 5000;
    while(i>0){
        func3();
        i--;
    }
}

void func1()

{
    cout<<"Function 1"<<endl;
    cout<<"Adding Change 2"<<endl;
    int i=1000;
    while(i>0){
        func2();
        i--;
    }
}


int main() 
{
    func1();
    func4();
    return 0;
}