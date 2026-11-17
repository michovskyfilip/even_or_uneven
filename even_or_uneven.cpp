#include <iostream>

using namespace std;

int main() {
    int cislo;

    cin >> cislo;

    if (cislo % 2 == 0) {
        cout << "sude" << endl;
    }
    else {
        cout << "liche" << endl;
    }

    return 0;
}