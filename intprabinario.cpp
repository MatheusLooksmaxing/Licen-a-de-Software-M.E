#include <iostream>
#include <vector>
void int_pra_bin(int n) {
    std::vector<int> numbinario;
    while (n > 0) {
        numbinario.push_back(n % 2);
        n = n / 2;
    }
    std::cout << "O inteiro em binário é: ";
    for (int i = numbinario.size() - 1; i >= 0; i--) {
        std::cout << numbinario[i];
    }
}
int main() {
    int numero;
    std::cout << "Coloque um número inteiro: ";
    std::cin >> numero;
    int_pra_bin(numero);
    return 0;
}