#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    float peso, altura, imc;

    cout <<  "Peso em kilos e altura em metros: ";
    cin >> peso >> altura;

    imc = peso/(altura*altura);

    cout << "IMC: " << imc << endl;

    if(imc<18.5){
        cout << "Abaixo do peso\n";
        return 0;
    }
    if(imc<=25){
        cout << "Peso normal\n";
        return 0;
    }
    if(imc<=30){
        cout << "Sobrepeso\n";
        return 0;
    }
    if(imc<=35){
        cout << "Obesidade Grau I\n";
        return 0;
    }
    if(imc<=40){
        cout << "Obesidade Grau II\n";
        return 0;
    }
    else{
        cout << "Obesidade Grau III (Mórbida)\n";
    }

    return 0;
}