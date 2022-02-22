#include <stdio.h>
#include <math.h>

int main()
{
    printf("___CALCULO TAXA METABOLICA BASAL___\n\n");
    
    //Variáveis para coleta de informações em cálculo
    float sexo, peso, idade, altura, atividade;
    
    //Variaveis para calculo tmb
    float valor1, valor2, valor3, tmb;
    
    //coleta de informacoes necessarias
    printf("Sexo:\n (1) Homem\n (2) Mulher\n");
    scanf("%f", &sexo);
    printf("\nPeso [kg]: ");
    scanf("%f", &peso);
    printf("Idade: ");
    scanf("%f", &idade);
    printf("Altura [cm]: ");
    scanf("%f", &altura);
    printf("\nNivel de atividade:\n (1) Leve\n (2) Moderado\n (3) Intenso\n");
    scanf("%f", &atividade);
    
    //Condições para calculo de taxa metabólica
    if(sexo == 1 && atividade == 1){
        valor1 = 13.7 * peso;
        valor2 = 5 * altura;
        valor3 = 6.8 * idade;
        tmb = 1.55 * (66 + ((valor1 + valor2) - valor3));
        printf("\nSua taxa metabolica basal eh %.1f Kcal", tmb);
    } else if(sexo == 1 && atividade == 2){
        valor1 = 13.7 * peso;
        valor2 = 5 * altura;
        valor3 = 6.8 * idade;
        tmb = 1.78 * (66 + ((valor1 + valor2) - valor3));
        printf("\nSua taxa metabolica basal eh %.1f Kcal", tmb);
    } else if(sexo == 1 && atividade == 3){
        valor1 = 13.7 * peso;
        valor2 = 5 * altura;
        valor3 = 6.8 * idade;
        tmb = 2.1 * (66 + ((valor1 + valor2) - valor3));
        printf("\nSua taxa metabolica basal eh %.1f Kcal", tmb);
    } else if(sexo == 2 && atividade == 1){
        valor1 = 9.6 * peso;
        valor2 = 1.8 * altura;
        valor3 = 4.7 * idade;
        tmb = 1.56 * (655 + ((valor1 + valor2) - valor3));
        printf("\nSua taxa metabolica basal eh %.1f Kcal", tmb);
    } else if(sexo == 2 && atividade == 2){
        valor1 = 9.6 * peso;
        valor2 = 1.8 * altura;
        valor3 = 4.7 * idade;
        tmb = 1.64 * (655 + (valor1 + valor2 - valor3));
        printf("\nSua taxa metabolica basal eh %.1f Kcal", tmb);
    } else if(sexo == 2 && atividade == 3){
        valor1 = 9.6 * peso;
        valor2 = 1.8 * altura;
        valor3 = 4.7 * idade;
        tmb = 1.82 * (655 + (valor1 + valor2 - valor3));
        printf("\nSua taxa metabolica basal eh %.1f Kcal", tmb);
    } else {
        printf("\nOpção inválida");
    }    
}
