#include<iostream>


using namespace std;

int main()
{
	int cols;
	while ( true )
	{
		cin>>cols;
		if(cols == 0 )
			break;

		string msg;
		cin>>msg ;
		int rows = msg.size()/cols;
		char matrix[rows][cols];
		int switcher = 1;
		int count = 0 ;
		for ( int i = 0 ; i<rows; i++ )
		{
			for ( int j = 0 ; j<cols ; j++ )
			{
				if( switcher == 1 )
				{
					matrix[i][j] = msg[count];
				}
				else
				{
					matrix[i][cols-j-1] = msg[count];
				}
				count++;
			}
			switcher *=-1;

		}
		for ( int i = 0  ; i < cols ; i++ )
		{
			for( int j  = 0 ; j< rows ; j++ )
				cout<<matrix[j][i] ;

		}

		cout<<endl;

	}
}
