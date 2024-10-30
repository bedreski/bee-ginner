#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    int numeroFuncionario, horasTrabalhadas = 0;
    float valorRecebidoPorHora = 0;

    cin >> numeroFuncionario;
    cin >> horasTrabalhadas;
    cin >> valorRecebidoPorHora;

    cout << "NUMBER = " << numeroFuncionario << endl;
    cout << "SALARY = U$ ";
    cout<< fixed << setprecision(2);
    cout << horasTrabalhadas * valorRecebidoPorHora << endl;
}