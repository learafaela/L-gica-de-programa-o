#include <iostream>
#include <iomanip>//Para usar setprecision()

using namespace std;

int main()
{
    //Declaração das variaveis 
    float base, altura, area;
    
    //Solicita que o usuário insira a base e a altura do triângulo
    cout << "Digite o valor da base do triângulo em metros:";
    cin >> base;
    
    cout << "Digite o valor da altura do triângulo em metros:";
    cin >> altura;
    
    //Cálculo da área do triângulo retângulo
    area = (base * altura) / 2.0;
    
    // exibinfo o resultado com duas casas decimais
    cout << "A área do triângulo retângulo é:"
         << fixed << setprecision(2)
         << area << "metros quadrdos." << endl;
         
    return 0;
}