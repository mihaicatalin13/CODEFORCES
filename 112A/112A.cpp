#include <iostream>
using namespace std;
int main()
{
    string a, b;
    // reading the two strings
    cin >> a >> b;

    // the strings have the same length
    // we iterate through them
    for (int i = 0; i < a.size(); ++i) {
        // since case doesn't matter, we just compare lowercase
        // and stop at the first inequality
        if (tolower(a[i]) < tolower(b[i])) {
            cout << -1;
            return 0;
        }
        else if (tolower(a[i]) > tolower(b[i])) {
            cout << 1;
            return 0;
        }
    }
    // if we got out of the for, that means strings are equal
    cout << 0;
    return 0;
}