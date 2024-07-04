#include<iostream>

using namespace std;



int add(int,int);
int sub(int,int);
int mul(int,int);
float div(int,int);

     int main()

    {
	
	int num1,num2;
	char A,B,a,b;
	char choice;   
	char decision='Y';
	
    while(decision=='Y'||decision=='y '){
	
	cout<<"\n\nENTER FIRST NUMBER:";
	cin>>num1;
	cout<<"\n\ENTER SECOND NUMBER:";
	cin>>num2;
	
	cout<<"\nA=Addition\nB=subtraction\na=multiplication\nb=division";
	cout<<"\nenter your choice :";
	cin>>choice;
	
	if(choice=='A'){
		cout<<"addition is:"<<add(num1,num2);}
		
		if(choice=='B'){
		cout<<"subtraction is:"<<sub(num1,num2);}

           if(choice=='a'){
		     cout<<" multiplication is:"<<mul(num1,num2);}
			 
			 if(choice=='b'){
		cout<<"division is:"<<div(num1,num2);	
	
	}
	cout<<"\nDO YOU WANT TO MORE OPERATION :";
	cin>>decision;

}
return 0;
}
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b) 

{
	return a-b;
}
int mul(int a,int b)
{
    return a*b;	
}
float div(int a,int b)
{
	return a/b;
}