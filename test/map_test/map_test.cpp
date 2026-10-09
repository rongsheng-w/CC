#include<iostream>
#include "pnc_map.h"

using namespace std;

void mapTest(){
    cout << "this is a pnc_map test" << endl;
    PncMap map;
    map.mapInfo();
}

int main(){
    mapTest();
    return 0;
}