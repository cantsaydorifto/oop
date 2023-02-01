#include <iostream>

using namespace std;

int main() {
    string name = "sHuBHranSH";
    string n1 = "aaaaaaaaaa";
    for (int i = 0; i < name.length(); i++) {
        name[i] = toupper(name[i]);
        n1[i] = tolower(name[i]);
    }
    // transform(name.begin(), name.end(), name.begin(), ::toupper);
    cout << name<<"\n";
    cout << n1;
    return 0;
}