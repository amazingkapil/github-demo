 #include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter a value: ";
    cin >> a;

    for (int i = 1; i <= a; ++i) {
        cout << i << "\n";
    }
    
    return 0;
}