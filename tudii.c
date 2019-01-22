#include<iostream>
using namespace std;
int main()
{
int a , b;	
 string n , s ;
 cout << " enter your name: ";
 cin >> n;
 cin >> s;

while (1)
{
 cout << " chooes one optin \n" << " press 1 for voting the actor \n" << " press 2 for see the best actor \n" << " press 3 for exit \n";
 cout << "\n" << "enter your key: ";
 cin >> a;
   cout <<"\n\n"<< " 1. Varun Dhawan \n" << " 2. Shidarth Malhothra \n" << " 3. Ranbeer Shingh \n" << " 4. Sahid Kapoor \n";

 cout << "\n" << "Vote for Actors: ";
 cin >> b;

if (b == 1){
	cout << " your vote goes to  Varun Dhawan \n";
}    
if (b == 2){
	cout << " your vote goes to Shidarth Malhothra \n";
}
if (b == 3){
	cout << " your vote goes to Ranbeer Shingh \n";
}
if (b == 4){
	cout << " your vote goes to Sahid Kapoor \n";
} 
if (a==2){
  	cout <<   "  is the best actor \n";
}
if (a==3){
  	cout << "exit \n" ;
} 
break;
  
}


   return 0;
}



