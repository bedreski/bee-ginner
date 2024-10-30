#include<iostream>

using namespace std;

int main() {
    //Um jogo tem duração mínima de 1 minuto e no máximo de 24 horas
    int minutoInicial, minutoFinal, horaInicial, horaFinal, totalHorasJogo, totalMinutosJogo = 0;

    cin >> horaInicial >> minutoInicial  >> horaFinal >> minutoFinal ;

    if(minutoInicial >= 1 && minutoFinal <= 60 && (horaInicial >= 1 * horaFinal <= 24)) {


        if(horaFinal == horaInicial && minutoFinal == minutoInicial) {
            totalHorasJogo = 24;

        } else {

            if(horaFinal > horaInicial && minutoFinal > minutoInicial) {
                totalHorasJogo = horaFinal - horaInicial;
                totalMinutosJogo = minutoFinal - minutoInicial;

            } else {

                if(horaFinal > horaInicial && minutoFinal < minutoInicial) {
                    totalHorasJogo = horaFinal - horaInicial;
                    totalMinutosJogo = minutoInicial - minutoFinal;

                } else {

                    if(horaFinal < horaInicial && minutoFinal > minutoInicial) {
                        totalHorasJogo = horaInicial - horaFinal;
                        totalMinutosJogo = minutoFinal - minutoInicial;

                    } else {

                        if(horaFinal < horaInicial && minutoFinal < minutoInicial) {
                            totalHorasJogo = horaInicial - horaFinal;
                            totalMinutosJogo = minutoInicial - minutoFinal;
                        }
                    }
                }

            }
        }
    }

    cout << "O JOGO DUROU " << totalHorasJogo << " HORA (S) E " << totalMinutosJogo << " MINUTO (S) " << endl;

}