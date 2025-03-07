#include<iostream>
#include<string>
#include<vector>
#include"giasuc.h"
class de:public giasuc{
public:
    de();
    ~de();
    virtual string tiengkeu();
    virtual int chosua()const;
    virtual vector<giasuc*>sinhsan()const override;
};