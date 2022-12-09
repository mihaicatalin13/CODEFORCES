#include <iostream>
using namespace std;

int main()
{
    int m, n;
    // read dimensions of the board
    cin >> m >> n;

    // divide number of squares on the board by two
    // since we always either fill up the board or one square remains empty
    cout << m * n / 2;
    return 0;
}