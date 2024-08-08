#include <iostream>
#include <iomanip>

using namespace std;

double calculaVolumeParalelepipedo(double largura,double altura,double profundidade){
    
    return largura * altura * profundidade;
}

int main() {
    double largura,altura,profundidade;
    
    std::cout << "Digite a largura do paralelepipedo (em metros):";
    std::cin >> largura;
    
    std::cout << "Digite a altura do paralelepipedo (em metros):";
    std::cin >> altura;
    
    std::cout << "Digite a profundidade do paralelepipedo (em metrso):";
    std::cin >> profundidade;
    
    double volume =calculaVolumeParalelepipedo (largura,altura,profundidade);
    
    
    std::cout << "O volume do paralelepipedo é:"
              << std::fixed << std::setprecision(2)
              << volume << "metros cubicos " << std::endl;
              
    return 0;
    }