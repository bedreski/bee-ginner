#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    
    double a, b, c = 0;
    double pesoA = 0.2, pesoB = 0.3, pesoC = 0.5;
    double mediaAluno, pesoTotal = 0;

    cin >> a;
    cin >> b; 
    cin >> c;

    if(c >= 0 && c <= 10.0 && (b >=0 && b <= 10.0 && (a >=0 && a <= 10.0))) {
        pesoTotal = pesoA + pesoB + pesoC;
        mediaAluno = (a * pesoA + b * pesoB + c * pesoC)/pesoTotal;
    }

    cout << "MEDIA = ";
    cout<< fixed << setprecision(1);
    cout << mediaAluno << endl;
}