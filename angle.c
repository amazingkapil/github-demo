#include <iostream>
using namespace std;
int main()
{
 int a;
 
 cout <<"Enter your value: ";
 cin >> a;
  
 for(int i = 1; i <= a; i++)
 {
 for(int j = 1; j <= i; j++)
 {
 cout<<" ";
 if(j%2 !=0){
   	cout<<"*";
   }
   if(j%2 == 0){
 cout<<j;}

   }
 cout<<"\n";
 }
 
}
