#include<iostream>
#include <map>

using std::cin;
using std::copy;
using std::cout;
using std::endl;
using std::map;
using std::string;
using namespace std;

template <typename Map>
void PrintMap(Map& m) {
  cout << "[ ";
  for (auto& item : m) {
    cout << item.first << ":" << item.second << " ";
  }
  cout << "]\n";
}

int main() {
    //Um jogo tem duração mínima de 1 minuto e no máximo de 24 horas
    int minutoInicial, minutoFinal, horaInicial, horaFinal, totalHorasJogo, totalMinutosJogo = 0;
    map<int, string> horasDoDia;

    cin >> horaInicial >> minutoInicial  >> horaFinal >> minutoFinal ;

    //intervalo do dia valendo 24 horas

    

    //cout << "O JOGO DUROU " << totalHorasJogo << " HORA (S) E " << totalMinutosJogo << " MINUTO (S) " << endl;

}