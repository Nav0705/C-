#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp ;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int num1, num2;
    cout<<"enter number a = ";
    cin>>num1;
    cout<<"enter number b = ";
    cin>>num2;  
    swap(num1, num2);
    cout<<"value of a and b swapped  = "<<num1<<" and "<<num2; 

    return 0;
}