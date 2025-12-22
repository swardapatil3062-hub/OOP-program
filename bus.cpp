#include<iostream>
using namespace std;

#define row 35
#define col 4
int booking(int **bus, int s)
{
	
	for(int r = 0 ; r < row ; r++)
	{
		for(int c =0 ; c < col * r  ; c++ )
		{
			if(s==bus[r][c])
			{
					int colno=(s-1)%4;
                  	int rowno=(s-1)/4;
                  	cout<<"Seat is avaiable!!\n";
				cout<<"Seat is booked"<<endl;
			}
			else
			{
				cout<<"Seat is not booked"<<endl;
			}
		}
	}
}

int main(void)
{
	int bus[row][col];
	int s;
	cout<<"Enter seat no ="<<endl;
	cin>>s;
     booking(s);
	
	return 0;
	
}


