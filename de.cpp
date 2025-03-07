#include<iostream>
#include<vector>
#include<random>
#include"de.h"
de::de(){}
de::~de(){}
string de::tiengkeu(){
    return "de ";
}
int de::chosua()const{
    return rand()%11;
}
vector<giasuc*>de::sinhsan()const{
        vector<giasuc*>dsdv;
        int sldv = rand() % 8; 
        for (int i = 0; i<sldv;i++){
            dsdv.push_back(new de());
        }
        return dsdv;
}