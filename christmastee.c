# include <iostream>
using namespace std;
int main()
{
	int a , c ;
	cout <<"Enter your value: ";
	cin >> a;
   
    for(int i = a; i ; i = i - 1){
     cout<<" ";
    
      
    }
  cout <<"*\n";

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
    for(int i = 1; i <= a; i++){

    for(int j = 1; j <= a-i ; j++)
    {
        cout<<" ";
    }
    for(int j = 1; j <= 2*i ; j++)
    {
        cout<<"*";
    }
        cout<<"\n";
    }
    for(int i = a; i - 1; i = i - 1){
      cout<<" ";
    }
    
       cout <<"|| \n";
       for(int i = a; i - 1; i = i - 1){
        cout<<" ";
       }
       cout <<"||\n";
    return 0;
     
}