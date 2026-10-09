#include<iostream>
#include "process.h"
using namespace std;

int main(){
    cout << "starting planning" << endl;
    Process pro;
    pro.planProcess();
    cout << "planning completed" << endl;
    return 0;
}