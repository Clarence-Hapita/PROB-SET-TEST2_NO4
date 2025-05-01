#include <iostream>
using namespace std;
int main(){
    float D1= 1500;
    float D2=2300;
    float D3= 1800;
    float TS= D1+D2+D3;
    float Average= TS/3;
    string a= "Total Sales:";
    string b="Average Sales Per Day:";
    cout<<a<<TS<<endl;
    cout<<b<<Average;
    return 0;
}