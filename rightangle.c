# include <iostream>
using namespace std;
int main()
{	
	int a  ;
	cout << "enter your value: ";
	cin >> a;

	for(int i = 1; i <= a; i++) {
		int j = i;
		// while (j != 0){
		// 	cout << "*";
		//     j = j - 1;
		// }
		for(; j != 0; j = j - 1){
			cout << "*";
		}
  		cout << "\n";
	}
    
    return 0;
}