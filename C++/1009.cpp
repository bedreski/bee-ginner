#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

int main() {
    string vendedor;
    double salarioFixo, montanteDeVendas, salarioComComissao = 0;

    getline(cin, vendedor);
    cin >> salarioFixo;
    cin >> montanteDeVendas;

    salarioComComissao = salarioFixo + montanteDeVendas * 0.15;

    cout << "TOTAL = R$ ";
    cout << fixed << setprecision(2);
    cout << salarioComComissao << endl;
}