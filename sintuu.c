	#include<iostream>
using namespace std;
int main()
{
	int a  ;
	cout << "enter your value: ";
	cin >> a ;
for (int i = a; a; i = i - 1){
	if (i == 0){
		break;
	}
	cout <<" * ";
}
cout << "\n";
return(0);
}