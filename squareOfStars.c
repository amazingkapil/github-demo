	#include<iostream>
using namespace std;
int main()
{
	int a , c ,b;
	cout << "enter your value: ";
	cin >> a;

	/* Step 1 */

	b = a;
	c = a;
	a = a * a ;
	for (int i = a ; i; i = i - 1){
        cout  << "*";
        c--;
        if(c == 0)
        {
        	cout<<"\n";
        	c = b;
        }
	}
	cout << "\n";

	/* Step 2 */

		string s = "" ;
	for (int i = b; i; i = i - 1){
		s =  s +"*";
	}
	for (int i = b; i; i = i - 1){
		cout << s ;
	   cout << "\n";
	}
     cout << "\n";

	/* Step 3 */
	 
	 for (int i = 0; i < b; i++){
	
	   cout << "\n";

	 	for (int j = 0; j < b; j++){
	 		cout << "*";
	 	}
	 	cout << "\n";
	 }

	return(0);
}