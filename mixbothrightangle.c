# include <iostream>
using namespace std ;
int main()
{
	int a , i;
	 cout << "enter an value: ";
	 cin >> a;
	 i = a;
	for (int i = 1; i <= a; i++){
		int j = i;
		while (j != 0){
			cout << "*";
			j = j - 1;
		}
		cout << "\n";
	}
	
	while (i != 0){
		int j = i;
		i = i - 1;
		while (j != 0){
         cout << "*";
         j = j - 1;
		}
		cout << "\n";
	}
	return 0;
}