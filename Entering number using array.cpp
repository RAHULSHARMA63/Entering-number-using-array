#include <iostream>
using namespace std;
int main()
{
   int a[5],i;
   cout<<"Enter the numbers in array \n";
   
   for(i=0;i<5;i++)
   cin>>a[i];
   cout<<"The numbers entered by user in array are : ";
   
   for(i=0;i<5;i++)
   cout<<a[i]<<"  ";
   return 0;
}
