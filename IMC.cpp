#include <iostream>
using namespace std;

int main() {
    float peso, altura, imc;

    // Solicita o peso do usuário
    cout << "Digite seu peso em kg: ";
    cin >> peso;

    // Solicita a altura do usuário
    cout << "Digite sua altura em metros: ";
    cin >> altura;

    // Calcula o IMC
    imc = peso / (altura * altura);

    // Exibe o resultado do IMC
    cout << "Seu IMC é: " << imc << endl;

    // Interpreta o valor do IMC
    if (imc < 18.5) {
        cout << "Você está abaixo do peso." << endl;
    } else if (imc >= 18.5 && imc < 24.9) {
        cout << "Você está com peso normal." << endl;
    } else if (imc >= 25 && imc < 29.9) {
        cout << "Você está com sobrepeso." << endl;
    } else {
        cout << "Você está com obesidade." << endl;
    }

    return 0;
}
