#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter a number: ";
  cin>>n;

  for (int a = 1; a <= n; a++){
    for (int b = 1; b <= a; b++){
      cout << b ;
    }
cout <<"\n";
  }

  return 0;
}


