#include <iostream>
#include <cmath>
#include <iomanip>

const double PI = 3.14;

double calculaAreaSuperficieCilindro(double raio,double altura){
    
    double areaBase = 2 * PI * std::pow(raio,2);
    double areaLateral = 2 * PI *raio * altura;
    return areaBase + areaLateral;
}

int main(){
    double raio,altura;
    
    std::cout << "Digite da base do cilindro (em metros)";
    std::cin >> raio;
     
    std::cout << "Digite a altura do cilindro (em metros:)";
    std::cin >>altura;
    
    double areaSuperficie = calculaAreaSuperficieCilindro(raio, altura);
    
    std::cout << "A área da superficie do cilindro é"
              << std::fixed << std::setprecision(2)
              << areaSuperficie << "metro quadrado" << std::endl;
              
    return 0;
             
            
    
}