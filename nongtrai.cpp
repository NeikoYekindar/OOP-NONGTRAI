#include<iostream>
#include<vector>
#include"nongtrai.h"
using namespace std;
nongtrai::nongtrai():tongls(0){}

nongtrai::~nongtrai() {
    for (int i = 0; i < dscv.size(); i++) {
        delete dscv[i];
    }
}
void nongtrai::nhapgiasuc()
{
    int slb = 0, slc = 0, sld = 0;
    cout<<"Nhap so luong bo: ";cin>>slb;
    cout<<"Nhap so luong cuu: ";cin>>slc;
    cout<<"Nhap so luong de: ";cin>>sld;
    for(int i = 0; i<slb;i++){
        dscv.push_back(new bo());
    }
    for(int i = 0; i<slc;i++){
        dscv.push_back(new cuu());
    }
    for(int i = 0;i<sld;i++){
        dscv.push_back(new de());
    }
}
void nongtrai::channuoi(){
    int ls = 0;
    int slgiasuc = dscv.size();
    for (int i = 0; i < slgiasuc; i++) {
        ls += dscv[i]->chosua();

        vector<giasuc*> dsdv = dscv[i]->sinhsan();
        for (int j = 0; j < dsdv.size(); j++) {
            dscv.push_back(dsdv[j]);
            if (dynamic_cast<bo*>(dsdv[j])) {
                cout << "Sinh con bo"<<endl;
            } else if (dynamic_cast<cuu*>(dsdv[j])) {
                cout << "Sinh con cuu"<<endl;
            } else if (dynamic_cast<de*>(dsdv[j])){
                cout<< "Sinh con de"<<endl;
            }
        }
    }

    this->tongls += ls;
    int slbo = 0;
    int slcuu = 0;
    int slde = 0;

    for (int i = 0; i < dscv.size(); i++) {
        if (dynamic_cast<bo*>(dscv[i])) {
            slbo++;
        } else if (dynamic_cast<cuu*>(dscv[i])) {
            slcuu++;
        } else if (dynamic_cast<de*>(dscv[i])){
            slde++;
        } 
    }

    cout << "So luong bo sau khi sinh san: " << slbo << endl;
    cout << "So luong cuu sau khi sinh san: " << slcuu << endl;
    cout << "So luong de sau khi sinh san: "<< slde <<endl;
}
void nongtrai::farming(){
    int N = 10;
    for(int i = 0;i<N;i++){
        channuoi();
    }
}
void nongtrai::xuattiengkeu() {
    int boCount = 0;
    int cuuCount = 0;
    int deCount = 0;

    for (int i = 0; i < dscv.size(); i++) {
        cout << dscv[i]->tiengkeu() << "\n";
        if (dynamic_cast<bo*>(dscv[i])) {
            boCount++;
        } else if (dynamic_cast<cuu*>(dscv[i])) {
            cuuCount++;
        } else if (dynamic_cast<de*>(dscv[i])){
            deCount++;
        }
    }

    cout << "So luong bo ban dau: " << boCount << endl;
    cout << "So luong cuu ban dau: " << cuuCount << endl;
    cout << "So luong de ban dau: " << deCount <<endl;
}
void nongtrai::thongke() {
    int tongbo = 0;
    int tongcuu = 0;
    int tongde = 0;

    for (int i = 0; i < dscv.size(); i++) {
        if (dynamic_cast<bo*>(dscv[i])) {
            tongbo++;
        } else if (dynamic_cast<cuu*>(dscv[i])) {
            tongcuu++;
        } else if (dynamic_cast<de*>(dscv[i])){
            tongde++;
        }
    }

    cout << "Tong so luong bo: " << tongbo << endl;
    cout << "Tong so luong cuu: " << tongcuu << endl;
    cout << "Tong so luong de: " << tongde << endl;
    cout << "Tong so lit sua: " << tongls << endl;
}
