#include <iostream>
#include <string>

int score = 750;

if (score >= 1000) {
    std::cout << "Parabéns! Você atingiu a pontuação máxima!" << std::endl;
} else if (score >= 500) {
    std::cout << "Bom trabalho! Você está indo bem!" << std::endl;
} else if (score >= 250) {
    std::cout << "Bom trabalho! Você está no caminho certo!" << std::endl;
} else {
    std::cout << "Continue tentando! Você pode melhorar!" << std::endl;
}