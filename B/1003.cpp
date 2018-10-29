#include <iostream>
#include <string>
using namespace std;

int main() {
    unsigned int n;
    unsigned int posP=0, posT=0;
    unsigned int countA=0,countP=0,countT=0;
    bool flag = 1;
    string str,strflag;
    cin >> n;
    while(cin>>str) {
        posP = 0, posT = 0;
        countA = 0, countP = 0, countT = 0;
        for (unsigned int count = 0;
            count < str.length();count++) {
            if (str[count] != 'P'&&str[count] != 'A'&&str[count] != 'T') {
                flag = 0;
                break;
            }
            else if (str[count] == 'P') {
                posP = count;
                countP++;
            }
            else if (str[count] == 'T') {
                posT = count;
                countT++;
            }
            else if (str[count] == 'A') {
                countA++;
            }
        }
        if (countP == 1 && countT == 1 && countA != 0) {
            if ((posP*(posT - posP - 1) == str.length() - posT - 1) && posT - posP > 1) {
                flag = 1;
            }
            else{
                flag = 0;
            }
        }
        else {
            flag = 0;
        }
        if (flag == 0)
            strflag += '0';
        else if (flag == 1)
            strflag += '1';
    }
    for (unsigned int count = 0; count < n; count++)
    {
        if (strflag[count] == '0')
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}