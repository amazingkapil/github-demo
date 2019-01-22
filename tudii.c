#include<iostream>
using namespace std;
int main()
{
int a;	
 string n , s ;
 cout << " enter your name: ";
 cin >> n;
 cin >> s;


 cout << " chooes one optin \n" << " press 1 for voting the actor \n" << " press 2 for see the best actor \n" << " press 3 for exit \n";
 cout << "\n" << "enter your key: ";
 cin >> a;
  cout <<"\n\n"<< " 1. Varun Dhawan \n" << " 2. Shidarth Malhothra \n" << " 3. Ranbeer Shingh \n" << " 4. Sahid Kapoor \n";

cout << "\n" << "enter your key: ";
 cin >> a;

if (a==1){
	cout << " your vote goes to  Varun Dhawan \n";
}
if (a==2){
	cout << " your vote goes to Shidarth Malhothra \n";
}
if (a==3){
	cout << " your vote goes to Ranbeer Shingh \n";
}
if (a==4){
	cout << " your vote goes to Sahid Kapoor \n";
}

cout<<"\n\n"  << " press 1 for voting the actor \n" << " press 2 for see the best actor \n" << " press 3 for exit \n";
 cout << "\n" << "enter your key: ";
 cin >> a;

   return 0;
}



