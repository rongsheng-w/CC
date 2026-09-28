#include<iostream>
using namespace std;
#include "process.h"

void Process::planProcess() {
    cout << "This is a process" << endl;
    my_map.mapInfo();
    cout << "Process planning completed" << endl;
}
