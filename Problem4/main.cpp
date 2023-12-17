#include <iostream>

using namespace std;

int main()
{
    int age;
    char lic;
    cout << "Enter your age:" << endl;
    cin >> age;
    cout << "Have you driver license? (y/n)" << endl;
    cin>> lic;
    if(age > 21 && lic == 'y')
    {
        cout << "Hired";
    }
    else
    {
        cout << "Rejected";
    }
    return 0;
}
