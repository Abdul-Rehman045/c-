#include<iostream>
using namespace std;
int main()
{
  float a, b;
  char op;
  cout<<"Enter value for a : ";
  cin>>a;
  cout<<"Enter value for b : ";
  cin>>b;
  cout<<"Enter operation you want to performed : ";
  cin>>op;
  switch(op)
  {
  	case '+':
  	cout<<"Sum of Values "<<a+b;
  	break;
  	
  	case '-':
  	cout<<"Differ of values  "<<a-b;
  	break;
  	
  	case '*':
  	cout<<"Multiple of values  "<<a*b;
  	break;
  	
  	case '/':
  	cout<<"Division of values  "<<a/b;
  	break;
  	
  	 default :
  	 	cout<<"Envalid operator "<<endl;
  	 	break;
  	
  }
  
   return 0;	
	}
