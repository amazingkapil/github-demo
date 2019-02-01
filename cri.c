# include <bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c,j;
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
    
    int largest = max(a,b);
    int largest = max( largest,c);

    int smallest = min(a,b);
    int smallest = min( smallest,c);

    if(min<= a <=max){
      if(min<= b <=max){
        if(min<= c <=max){}
    }
   }
  /* 1st */
  // if(c- j){ 
  for(int i = 1; i <= a; i++) {

    for (int j = 1; j <= c-i ; ++j)
    {
       cout<<" ";
    }

    for (int j = 1; j <= 2*i ; ++j)
    {
       cout<<"*";
    }
    cout<<"\n";
     }
   // }

     /* 2nd */
   
     for(int i = 1; i <= b; i++) {

    for (int j = 1; j <= c-i ; ++j)
    {
       cout<<" ";
    }

    for (int j  = 1; j <= 2*i ; ++j)
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