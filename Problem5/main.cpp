#include <iostream>

using namespace std;

int main()
{
    int age;
    char lic, reco;
    cout << "Enter your age:" << endl;
    cin >> age;
    cout << "Have you driver license? (y/n)" << endl;
    cin>> lic;
    cout << "Have you driver Recommendation? (y/n)" << endl;
    cin>> reco;
    if((age > 21 && lic == 'y') || (reco == 'y'))
    {
        cout << "Hired";
    }
    else
    {
        cout << "Rejected";
    }
    return 0;
}
