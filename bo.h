#include<iostream>
#include<random>
#include<vector>
#include"giasuc.h"
using namespace std;
class bo : public giasuc{
public:
    bo();
    ~bo();
    virtual string tiengkeu();
    virtual int chosua();
    virtual vector<giasuc*>sinhsan()const override;
    
};