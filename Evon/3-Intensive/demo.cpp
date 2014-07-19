#include <iostream>
#include <String>
using namespace std;

int main(int argc, const char * argv[])
{

    //display "successful" when entering "demo -test" in the cmd
    //display "unsuccessful" if other
    
    string v1 = "demo", v2 = "-test";
    
    if ((argv[0] == v1) && (argv[1] == v2))
    {
        
        cout<< "Successful" <<endl;
        
    }
    else
    {
        cout <<"Unsuccessful" <<endl;
    }
    
}