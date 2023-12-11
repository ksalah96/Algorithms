#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "The number its Even" << endl;
    }
    else
    {
        cout << "The number its odd" << endl;
    }
    return 0;
}
