#include <iostream>

int main() {
  
  // Declar foreign currencies, followed by USD
  double pesos, reais, soles;
  double dollars;
  
  
  // Prompt for entry of each respective foreign currency
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  
  // Latest conversion rates per Google as of Wed, March 13, 2019
  double conversion_rate1, conversion_rate2, conversion_rate3;
  conversion_rate1 = 0.052; // Pesos to USD
  conversion_rate2 = 0.26; // Reais to USD
  conversion_rate3 = 0.30; // Soles to USD
  
  
  // Formula to convert foreign currenies into USD
  dollars = (conversion_rate1 * pesos) + (conversion_rate2 * reais) + (conversion_rate3 * soles);
  
  
  // Output total conversion value
  std::cout << "US Dollars = $" << dollars << "\n";
  
}
