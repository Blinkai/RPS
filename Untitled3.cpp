#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	int y,z;
	char x[10];
	cout << "Rock, Paper, or Scissors? ";
	cin >> x;
	srand(time(NULL));
	y=rand() % 3;
	if(x[0]=='r'|| x[0]=='R')
	z=0;
	else
	if(x[0]=='p'||x[0]=='P')
	z=1;
	else
	if(x[0]=='s'||x[0]=='S')
	z=2;
	if(y==0)
	{
		cout << "You Chose " << x << "\n";
		cout << "Computer Chose Rock\n";
		if(z==0)
		cout << "It's a Draw\n";
		else 
		if(z==1)
		cout << "You Win\n";
		else
		if(z==2)
		cout << "You Lose\n";
	}
	else
	if(y==1)
	{
		cout <<"You Chose "<<x<<"\n";
		cout <<"Computer Chose Paper\n";
		if(z==0)
		cout <<"You Lose\n";
		else
		if(z==1)
		cout <<"You Win\n";
		else
		if(z==2)
		cout << "It's a Draw'\n";
	}
	else
	if(y==2)
	{
		cout <<"You Chose "<<x<<"\n";
		cout <<"Computer Chose Scissors\n";
		if(z==0)
		cout <<"You Win\n";
		else
		if(z==1)
		cout <<"You Lose\n";
		else
		if(z==2)
		cout<<"It's a Draw\n";
	}
}
