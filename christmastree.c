# include <iostream>
using namespace std;
int main()
{
int a,b,c ;
  cout <<"Enter first  value: ";
  cin >> a;
  cout <<"Enter 2nd value: ";
  cin >> b;
  cout<<"Enter 3rd value: ";
  cin >> c;
  
    for(int i = a; i ; i = i - 1){
     cout<<" ";
    
      
    }
  cout <<"*\n";
  
  /* 1st */ 
  
  for(int i = 1; i <= a; i++) {

    for (int j = 1; j <= a-i ; ++j)
    {
       cout<<" ";
    }

    for (int j = 1; j <= 2*i ; ++j)
    {
       cout<<"*";
    }
    cout<<"\n";
     }

     /* 2nd */

     for(int i = 1; i <= b; i++) {

    for (int j = 1; j <= b-i ; ++j)
    {
       cout<<" ";
    }

    for (int j = 1; j <= 2*i ; ++j)
    {
       cout<<"*";
    }
    cout<<"\n";
     }

    /* 3rd */ 
    
    for(int i = 1; i <= c; i++){

    for(int j = 1; j <= c-i ; j++)
    {
        cout<<" ";
    }
    for(int j = 1; j <= 2*i ; j++)
    {
        cout<<"*";
    }
        cout<<"\n";
    }
    for(int i = c; i - 1; i = i - 1){
      cout<<" ";
    }
    
       cout <<"|| \n";
       for(int i = c; i - 1; i = i - 1){
        cout<<" ";
       }
       cout <<"||\n";
   return 0;
     
}