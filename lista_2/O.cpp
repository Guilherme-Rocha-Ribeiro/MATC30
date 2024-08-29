#include <iostream>
#include <cmath>
using namespace std;

void calcEsfera(float raio, float& area, float& volume) {
    const double pi = 3.14;
    area = 4 * pi * raio * raio;
    volume = (4.0 / 3.0) * pi * pow(raio, 3);
}

int main() {
    float raio, area, volume;
    cin >> raio;

    calcEsfera(raio, area, volume);
    cout.precision(5);
    cout << area << endl;
    cout << volume << endl;

    return 0;
}


// alcEsfera(float raio, float& area, float& volume) a passagem dos parametro estao dessa forma pois é necessario que a funcao altere os valores de area e volume correto ? 

Passagem por Referência

void calcEsfera(double raio, double& area, double& volume)

    double raio: O valor do raio é passado por valor, o que significa que a função recebe uma cópia do valor do raio.
    double& area, double& volume: As variáveis area e volume são passadas por referência, o que significa que a função recebe uma referência às variáveis originais em main(). Isso permite que a função calcEsfera modifique diretamente os valores dessas variáveis.

O que Acontece na Função calcEsfera

    Dentro da função, area e volume são calculados usando o valor do raio e as fórmulas apropriadas:

    Como area e volume são passados por referência, essas operações modificam diretamente as variáveis area e volume que foram declaradas e inicializadas na função main.

Saída no main

    Depois de chamar calcEsfera, as variáveis area e volume em main contêm os valores calculados pela função.

   
