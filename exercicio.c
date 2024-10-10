//Crie um programa onde o usuário digita dois valores e imprima a soma, subtração, 
//multiplicação e divisão do primeiro valor pelo segundo, sendo que deverá ser 
//criada uma função para cada operação.

#include <stdio.h>

float somar(float num1, float num2) {
    return num1 + num2;
}

float subtrair(float num1, float num2) {
    return num1 - num2;
}

float multiplicar(float num1, float num2) {
    return num1 * num2;
}
float divisao (float num1, float num2){
    return num1/num2; 
}

 int main(){
    float num1, num2;
    printf("digite num1:");
    scanf("%f", &num1);
    printf("digite o segundo valor:");
    scanf("%f", &num2);
    printf ("soma: %.2f\n", somar(num1,num2));
    printf("subtrair: %.2f\n", subtrair(num1, num2));
    printf("multiplicar:%.2f\n",multiplicar(num1, num2));
    printf("divisao:%.2f\n", divisao(num1,num2));
 }