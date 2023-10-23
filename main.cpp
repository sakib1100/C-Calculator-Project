#include <iostream>

using namespace std;

int main()
{

int a, b;
char ch;

cout<<"Enter the first number : ";
cin>>a;
cout<<"Enter the second number : ";
cin>>b;
cout<<"Enter the operator : ";
cin>>ch;

switch(ch){
case '+': {
cout<<"The sum of two number is : "<<a+b;
break;
}
case '-': {
cout<<"The substraction two number is : "<< a-b;
break;
}
case '*': {
cout<<"The multiplication of two number is :"<< a*b;
break;
}
case '/': {
cout<<"The divition of two number is : "<<(float) a/b;
break;
}
default:{
cout<<"Please Enter the Valid Operation";
break;
}




}


    return 0;
}


