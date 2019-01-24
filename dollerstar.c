# include <iostream>
using namespace std;
int main()
{

int a , b , c;

cout << " chooes your option \n" << " 1. for put your  value\n " <<" 2. for see the result \n";
cout << " enter your value: ";
cin >> c;

if (c == 1){

cout << "give two values: " ;


 
    

   
	cin >>a >> b;
for (int i = 2 ; i <= b; ++i)
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

	int a = 2,b = 8;
		cin >> a >> b;
for (int i = 2 ; i <= b; ++i)
  { 

 if (i%2==0){                     
		cout <<"\n"<< " * ";
	}
	else 
	 	cout << "\n" << " $ ";
	
	cout <<"\n";
    
  }    

 }

}

