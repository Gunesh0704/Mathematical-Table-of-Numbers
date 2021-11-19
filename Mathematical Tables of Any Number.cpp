// This is Project About to Dispaly Multiplication Table of Any Number..................
//This is Project is Created By Gunesh Mohane
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	cout<<"This is Project is Created By Gunesh Mohane...."<<endl;
	int a;
	cout<<"\n.........Dispaly Multiplication Table of Any Number........."<<endl;
	cout<<"\nEnter Number to display table :-  ";                                     //for getting value of number
	cin>>a;
                                                                                    //for Calculating the Table
	for(int i=1; i<=10; i++)
	{
		cout << a << "  *  " <<setw(2)<<i << "  =  " << a * i << endl;
	}
	
	system("pause");
	return 0;
}
