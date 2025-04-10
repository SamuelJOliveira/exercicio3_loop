/*
Dizemos que um número natural é triangular se é o produto de três 
números naturais consecutivos. Por exemplo, 120 é triangular, pois 4 x 
5 x 6 = 120. Dado um número N, imprimir na tela “TRIANGULAR” caso 
seja triangular ou “NÃO TRIANGULAR” caso não seja.
*/

#include <iostream>
using namespace std;

int main() {
    int triangulo;
    cin >> triangulo;

    int i = 1;

    while (i * (i + 1) * (i + 2) <= triangulo) {
        int produto = i * (i + 1) * (i + 2);

        if (produto == triangulo) {
            cout << "TRIANGULAR" << endl;
            return 0; // encerra o programa se encontrar
        }

        i++;
    }

    cout << "NAO TRIANGULAR" << endl;
    return 0;
}
