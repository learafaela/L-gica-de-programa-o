#include <iostream>

using namespace std;

int main() {
    // Declaração das variáveis
    float baseMaior, baseMenor, altura, area;

    // Inicialização das variáveis com as medidas fornecidas
    baseMaior =  6.0;  // Base maior do trapézio em metros
    baseMenor = 4.0;  // Base menor do trapézio em metros
    altura = 9.0;     // Altura do trapézio em metros

    // Cálculo da área do trapézio
   
    area = ((baseMaior + baseMenor) / 2) * altura;

    // Exibindo o resultado
    cout << "A área do trapézio é: " << area << " metros quadrados." << endl;
    cin >> area;
    return 0;
}