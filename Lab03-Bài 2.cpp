#include <iostream>
using namespace std;
int main()
{
	float a,b,c,d;
	char dau;
	cout <<"Enter first number:";
	cin >> a;
	cout <<"Enter second number:";
	cin >> b;
	cout <<"Enter operation:";
	cin >> dau;
	cout <<"Enter third number:";
	cin >> c;
	cout <<"Enter fourth number:";
	cin >> d;
	cout <<"Calculator:";
	cout << "(" << a << "/" << b << ")" << dau << "(" << c << "/" << d  << ")" << endl;
	char Chon;
	double Total;
	while(true)
	{
		switch(dau)
		{
			case'+':
				Total=(float)(a/b)+(float)(c/d);
				cout <<"Total:"<< Total<< endl;
			break;
			
			case'-':
				Total=(float)(a/b)-(float)(c/d);
				cout <<"Total:"<< Total<< endl;
			break;
			
			case'*':
				Total=(float)(a/b)*(float)(c/d);
				cout <<"Total:"<< Total<< endl;
			break;
			
			case'/':
				Total=(float)(a/b)/(float)(c/d);
				cout <<"Total:"<< Total<< endl;
			break;
		defauft:
			cout <<"Invalid calculator.Please write again"<< endl;
		}
		
		YesNo:
			cout <<"Do you want to continue? (y/n)"<< endl;
			cin >> Chon;
		if(Chon=='y')
		{
			cout <<"Enter first number:";
			cin >> a;
			cout <<"Enter second number:";
			cin >> b;
			cout <<"Enter operation:";
			cin >> dau;
			cout <<"Enter third number:";
			cin >> c;
			cout <<"Enter fourth number:";
			cin >> d;
			cout <<"Calculator:";
			cout << a << "/" << b << dau << c << "/" << d << endl;
		}
		if(Chon=='n')
		{
			break;
		}
		else if(Chon!='y')
		{
			cout << "Check again"<< endl;
			
		}
	}
	return 0;
}
