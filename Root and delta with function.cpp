#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void f ( int a , int b , int c )
{
	double root1 , root2, d;
	if ( a != 0 )
	{
		d = b * b - 4 * a * c;
		if ( d >= 0 )
		{
			root1 = ( -b + sqrt(d)) / ( 2 * a );
			root2 = ( -b - sqrt(d)) / ( 2 * a );
			cout<<"ROOT1 = "<<root1<<endl;
			cout<<"ROOT2 = "<<root2;
		}
		else 
		{
			cout<<"ERROR";
		}
	}
}

main()
{
	double  a , b , c;
	
	cout<<"PLease enter a , b , c:"<<endl;
	cin>>a>>b>>c;
	
	f( a  , b , c );
	
	
}
