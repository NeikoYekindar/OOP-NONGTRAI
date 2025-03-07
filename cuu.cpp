#include<iostream>
#include<vector>
#include<random>
#include"cuu.h"
using namespace std;
cuu::cuu(){}
cuu::~cuu(){}
string cuu::tiengkeu(){
    return "cuu ";
}
int cuu::chosua()const{
    return rand()%6;
}
vector<giasuc*>cuu::sinhsan()const{
        vector<giasuc*>dsdv;
        int sldv = rand() % 4; 
        for (int i = 0; i<sldv;i++){
            dsdv.push_back(new cuu());
        }
        return dsdv;
}
