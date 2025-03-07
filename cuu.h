#include<iostream>
#include<vector>
#include<string>
#include"giasuc.h"
using namespace std;
class cuu:public giasuc{
public:
    cuu();
    ~cuu();
    virtual string tiengkeu();
    virtual int chosua()const;
    virtual vector<giasuc*>sinhsan()const override;
};

