# include <iostream>
using namespace std;
int main()
{
while(1){
int a,b,c,d,e;

cout << " chooes your option \n" << " 1. for put your  value\n " <<" 2. for see the result \n";
cout << " enter your value: ";
cin >> c;

if (c == 1){

cout << "give two values: " ;


 
    

   
	cin >>a >> b;
for (int i = a ; i <= b; ++i)
{
 

 if (i%2==0){                     
		cout <<"\n"<< " * ";
	}
	else 
	 	cout << "\n" << " $ ";
	
}    
   
    cout <<"\n";
    
}


if (c == 2)
 {
cout << "give  values: " ;

	
		cin >> a >> b >> d >> e;
   for (int i = a; i = b ;++i)
 

 if (i%2==0){                     
		cout <<"\n"<< " * ";
	}
	else
	 	cout << "\n" << " $ ";
	
	cout <<"\n";
    
    break;

 }

}
}
