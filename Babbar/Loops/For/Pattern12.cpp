#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: \n";
    cin>>n;
    
    for( int i = 1 ; i <= n ; i++ )
    {
       for ( int j = 1 ; j<= n - i ; j++)
       {
          cout<< "  "; 
       }

       for ( int j = i ; j>= 1 ; j-- )
       {
          cout << j << " " ;
       }

       for ( int j = 2; j<= i; j++) // because "2" is present in second row
       {
          cout<< j << " " ;
       }
          cout<<endl;
          
    }
    
     return 0;
} 


    
    
