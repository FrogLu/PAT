#include <iostream>
#include <string>
using namespace std;
int main() {
    string str, num;
    cin >> str;
    unsigned int count = 0;
    for (unsigned int n = 0;
        n < str.size(); n++) {
        count += str[n] - '0';
    }
    while (count != 0)
    {
        switch (count % 10) {
        case 0: {
            num += '0';
            count /= 10;
            break;
        }
        case 1: {
            num += '1';
            count /= 10;
            break;
        }
        case 2: {
            num += '2';
            count /= 10;
            break;
        }
        case 3: {
            num += '3';
            count /= 10;
            break;
        }
        case 4: {
            num += '4';
            count /= 10;
            break;
        }
        case 5: {
            num += '5';
            count /= 10;
            break;
        }
        case 6: {
            num += '6';
            count /= 10;
            break;
        }
        case 7: {
            num += '7';
            count /= 10;
            break;
        }
        case 8: {
            num += '8';
            count /= 10;
            break;
        }
        case 9: {
            num += '9';
            count /= 10;
            break;
        }
        }
    }
    for (unsigned int n = num.size()+1;
        n > 0; --n) {
        switch (num[n-1])
        {
            case '0':
            {
                cout << "ling";
                if (n != 1) {
                    cout << " ";
                }
                break;
            }
            case '1':
            {
                cout << "yi";
                if (n != 1) {
                    cout << " ";
                }
                break;
            }
            case '2':
            {
                cout << "er";
                if (n != 1) {
                    cout << " ";
                }
                break;
            }
            case '3':
            {
                cout << "san";
                if (n != 1) {
                    cout << " ";
                }
                break;
            }
            case '4':
            {
                cout << "si";
                if (n != 1) {
                    cout << " ";
                }
                break;
            }
            case '5':
            {
                cout << "wu";
                if (n != 1) {
                    cout << " ";
                }
                break;
            }
            case '6':
            {
                cout << "liu";
                if (n != 1) {
                    cout << " ";
                }
                break;
            }
            case '7':
            {
                cout << "qi";
                if (n != 1) {
                    cout << " ";
                }
                break;
            }
            case '8':
            {
                cout << "ba";
                if (n != 1) {
                    cout << " ";
                }
                break;
            }
            case '9':
            {
                cout << "jiu";
                if (n != 1) {
                    cout << " ";
                }
                break;
            }
        }
    }
    return 0;
}