//
// Created by a on 2019/7/30.
//
#include <iostream>

int main() {
    using namespace std;
    int rats = 101;
    int &rodents = rats;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;
    return 0;
}
