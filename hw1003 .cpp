#include<iostream>
#include<string>
using namespace std;

int main()
{
	//#쨁업1
	int n1=2;
	double n2=2.0,n3;

	cout<<"n1= "<<n1<<" and n2= "<<n2<<endl;
	cout<<"Enter n3 (a double):";
	cin>>n3;
	cout<<"n3 is stored in your computer as: "<<n3<<endl<<endl<<endl;
	//try: 0.20338755 and 367000000000000000.0 and 3.67e17 and 0.00000589
	//try: 2147483647 and 1e308
	//(*)


	//#쨁업2
	cout<<"We now test how cin reads char variables.\n";
	char c1,c2;
	cout<<"Enter two characters,without any periods:\n";
	cin>>c1>>c2;   //tryJ B
	cout<<c1<<c2<<endl;
	cin>>c1>>c2;   //try JB
	cout<<c1<<c2<<endl<<endl<<endl;

	/*
	//#쨁업3
	string dat;
	day="Monday"+"Tuesday";
	cout<<day;  //you should get "MondayTuesday"
	day="Monday "+"Tuesday"
	cout<<day<<endl<<endl<<endl;  //you should get "Monday Tuesday"*/
	

	//#쨁업4
	cout<<"We now test how cin reads string variables.\n";
	string another_day;
	cout<<"Enter the value of string variable another_day: "<<endl;
	cin>>another_day;  //try    Our teacher is Miss Chen.
	cout<<another_day<<endl;
	cout<<"Again,enter the value of string variable another_day: "<<endl;
	cin>>another_day;  //try Our teacher is Miss Chen.
	cout<<another_day<<endl<<endl<<endl;
	
	//#쨁업5
	int i;
	i=2.99;
	cout<<"i="<<i<<endl<<endl<<endl;


	/*#쨁업6
	char c = 65; //Assign an int to a char.
	int i ='Z';  //Assign a char to an int.*/
	
	system("PAUSE");
	return 0;
}