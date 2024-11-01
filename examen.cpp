#include <iostream>
#include <vector>
using namespace std;

struct ISR
{
    double li;
    double cf;
    double tasa;
};


void iniciarTabla(vector<ISR>& v)
{
    v.push_back({ 0.01, 0.00, 1.92 });
    v.push_back({ 578.53, 11.11, 6.40 });
    v.push_back({ 4910.19, 288.33, 10.88 });
    v.push_back({ 8629.21, 692.96, 16.00 });
    v.push_back({ 10031.08, 917.26, 17.92 });
    v.push_back({ 12009.95, 1271.87, 21.36 });
    v.push_back({ 24222.32, 3880.44, 23.52 });
    v.push_back({ 38177.70, 7162.74, 30.00 });
    v.push_back({ 72887.51, 17575.69, 32.00 });
    v.push_back({ 97183.34, 25350.35, 34.00 });
    v.push_back({ 291550.01, 91435.02, 35.00 });
}

void imprimirTabla(vector<ISR> v)
{
    for (auto renglon : v)
    {
        cout << renglon.li << endl;
        cout << renglon.cf << endl;
        cout << renglon.tasa << endl;
    }
}
void calculaISR(double s, vector<ISR> v)
{
    for (auto renglon : v)
    {
        if (s >= renglon.li)
        {
            // calcular el salario
            // break;
        }
    }
}
int main()
{
    vector<ISR> visr;
    iniciarTabla(visr);
    imprimirTabla(visr);
    double salario;
    cout << "salario ";
    cin >> salario;
    cout << endl;
    calculaISR(salario, visr);
}
