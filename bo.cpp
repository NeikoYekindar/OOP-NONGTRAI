#include<iostream>
#include<random>
#include<vector>
#include"bo.h"
using namespace std;
bo::bo(){
}
bo::~bo(){

}
string bo::tiengkeu(){
    return "bo ";
}
int bo::chosua(){
    return rand()%21;
}
vector<giasuc*>bo::sinhsan()const{
        vector<giasuc*>dsdv;
        int sldv = rand() % 5 + 1;
        for (int i = 0; i<sldv;i++){
            dsdv.push_back(new bo());
        }
        return dsdv;
}
