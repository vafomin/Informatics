#include <iostream>

using namespace std;

int main() {
    char name[25], lastname[25], grade[1], age[3];

    cout << "What is your first name: ";
    cin.getline(name, 25);
    cout << "What is your last name: ";
    cin >> lastname;
    cout << "What letter grade do your deserve: ";
    cin >> grade;
    cout << "What is your age: ";
    cin >> age;

    cout << name << " " << lastname << endl;
    cout << grade << endl;
    cout << age;
    return 0;
}
