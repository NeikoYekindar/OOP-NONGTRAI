#include<iostream>
#include<vector>
using namespace std;
class giasuc {
public:
    giasuc();
    ~giasuc();
    virtual string tiengkeu();
    virtual int chosua();
    virtual vector<giasuc*>sinhsan()const;
};


