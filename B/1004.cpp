#include <iostream>
#include <string>
using namespace std;

int main() {
    unsigned int globaln;
    cin >> globaln;
    unsigned int grade[3] = { 0 };
    string strName[3], strNum[3];
    if (globaln > 1) {
        for (unsigned int count = 0;
            count < 2; count++) {
            cin >> strName[count] >> strNum[count] >> grade[count];
        }
        if (grade[0] < grade[1]) {
            strName[2] = strName[0];
            strNum[2] = strNum[0];
            grade[2] = grade[0];
            strName[0] = strName[1];
            strNum[0] = strNum[1];
            grade[0] = grade[1];
            strName[1] = strName[2];
            strNum[1] = strNum[2];
            grade[1] = grade[2];
        }
        for (unsigned int count = 0;
            count < globaln - 2; count++) {
            cin >> strName[2] >> strNum[2] >> grade[2];
            if (grade[2] > grade[0]) {
                strName[0] = strName[2];
                strNum[0] = strNum[2];
                grade[0] = grade[2];
            }
            else if (grade[2] < grade[1]) {
                strName[1] = strName[2];
                strNum[1] = strNum[2];
                grade[1] = grade[2];
            }
        }
        cout << strName[0] << " " << strNum[0] << endl;
        cout << strName[1] << " " << strNum[1] << endl;
    }
    else {//n=1的情况
        cin >> strName[0] >> strNum[0] >> grade[0];
        cout << strName[0] << " " << strNum[0] << endl;
        cout << strName[0] << " " << strNum[0] << endl;
    }
    return 0;
}