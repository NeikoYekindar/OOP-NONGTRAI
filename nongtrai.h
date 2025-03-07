#include<iostream>
#include<vector>
#include"bo.h"
#include"cuu.h"
#include"de.h"
#include"giasuc.h"
using namespace std;
class nongtrai{
protected:
    vector<giasuc*>dscv;
    int tongls;
public:
    nongtrai();
    ~nongtrai();
    void channuoi();
    void nhapgiasuc();
    void xuattiengkeu();
    void farming();
    void thongke();
       
};