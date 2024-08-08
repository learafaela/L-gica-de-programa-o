#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // Definição das constantes
    const double PI = 3.14;
    double raioEsfera = 10.0; // Raio da esfera externa em centímetros
    double raioFuro = 2.0;    // Raio do furo em centímetros

    // Cálculo do volume da esfera externa
    double volumeEsfera = (4.0 / 3.0) * PI * std::pow(raioEsfera, 3);

    // Cálculo do volume do cilindro que representa o furo
    // O furo é um cilindro com altura igual ao diâmetro da esfera externa
    double alturaFuro = 2 * raioEsfera;
    double volumeFuro = PI * std::pow(raioFuro, 2) * alturaFuro;

    // Cálculo do volume da esfera com o furo
    double volumeEsferaComFuro = volumeEsfera - volumeFuro;

    // Configura a precisão para a saída
    std::cout << std::fixed << std::setprecision(2);
    
    // Impressão do volume calculado
    std::cout << "O volume da esfera com o furo é: " << volumeEsferaComFuro << " cm³" << std::endl;

    return 0;
}
