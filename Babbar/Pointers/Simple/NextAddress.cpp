#include <iostream>
using namespace std ;

int main ( )
{
    
    int i = 3 ;
    int *t = &i ;
    cout << *t << endl ;
    cout << " before t " << t <<  endl;
    t = t + 1 ;
    cout << "after" << t << endl ; // memory address to 4 byte 

    return 0 ;
}