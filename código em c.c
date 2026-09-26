#include <stdio.h>

// Celsius para Fahrenheit
float celsiusParaFahrenheit(float celsius) {
    return (9.0 / 5.0) * celsius + 32;
}

// Celsius para Kelvin
float celsiusParaKelvin(float celsius) {
    return celsius + 273.15;
}

// Fahrenheit para Celsius
float fahrenheitParaCelsius(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

// Fahrenheit para Kelvin
float fahrenheitParaKelvin(float fahrenheit) {
    return ((5.0 / 9.0) * (fahrenheit - 32)) + 273.15;
}

// Kelvin para Celsius
float kelvinParaCelsius(float kelvin) {
    return kelvin - 273.15;
}

// Kelvin para Fahrenheit
float kelvinParaFahrenheit(float kelvin) {
    return (9.0 / 5.0) * (kelvin - 273.15) + 32;
}

int main() {

    int opcao;
    float temperatura, resultado;

    printf("       CONVERSOR DE TEMPERATURA\n");

    printf("\nEscolha uma opcao:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Fahrenheit para Kelvin\n");
    printf("5 - Kelvin para Celsius\n");
    printf("6 - Kelvin para Fahrenheit\n");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            printf("\nDigite a temperatura em Celsius: ");
            scanf("%f", &temperatura);

            resultado = celsiusParaFahrenheit(temperatura);

            printf("\nResultado: %.2f Fahrenheit\n", resultado);
            break;

        case 2:
            printf("\nDigite a temperatura em Celsius: ");
            scanf("%f", &temperatura);

            resultado = celsiusParaKelvin(temperatura);

            printf("\nResultado: %.2f Kelvin\n", resultado);
            break;

        case 3:
            printf("\nDigite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);

            resultado = fahrenheitParaCelsius(temperatura);

            printf("\nResultado: %.2f Celsius\n", resultado);
            break;

        case 4:
            printf("\nDigite a temperatura em Fahrenheit: ");
            scanf("%f", &temperatura);

            resultado = fahrenheitParaKelvin(temperatura);

            printf("\nResultado: %.2f Kelvin\n", resultado);
            break;

        case 5:
            printf("\nDigite a temperatura em Kelvin: ");
            scanf("%f", &temperatura);

            resultado = kelvinParaCelsius(temperatura);

            printf("\nResultado: %.2f Celsius\n", resultado);
            break;

        case 6:
            printf("\nDigite a temperatura em Kelvin: ");
            scanf("%f", &temperatura);

            resultado = kelvinParaFahrenheit(temperatura);

            printf("\nResultado: %.2f Fahrenheit\n", resultado);
            break;

        default:
            printf("\nOpcao invalida!\n");
            break;
    }

    return 0;
}
