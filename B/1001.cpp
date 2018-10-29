#include <iostream>
using namespace std;
int main() {
    int n;
    unsigned int /*n,*/ count = 0;
    cin >> n;
    while(n != 1) {
        if ((n % 2) == 0) {
            n =n / 2;
            count++;
        }
        else if ((n % 2) == 1) {
            n = (3 * n + 1) / 2;
            count++;
        }
    }
    cout << count;
    return 0;
}