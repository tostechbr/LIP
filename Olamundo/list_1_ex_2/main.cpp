#include <iostream>

using namespace std;

/*Notas: Implemente um programa que l� tr�s notas de um aluno em uma disciplina
 e imprime a situa��o do aluno conforme as regras da UFRN, ou seja:
 - Aprovado: m�dia das notas � maior ou igual a 5 e o aluno n�o tirou nenhuma nota abaixo de 3
 - Final: caso o aluno n�o tenha sido aprovado e ele possua m�dia maior ou igual a 3
 - Reprovado: caso a m�dia do aluno seja menor do que 3*/

int main()
{
    float nota1, nota2, nota3, media;
    float aprovado, final, reprovado;

    cin >> nota1;
    cin >> nota2;
    cin >> nota3;

    media = (nota1 + nota2 + nota3)/3;

    if(nota1 >= 3 && nota2 >= 3 && nota3 >= 3 ){
        if(media >= 5){
        cout << "Aprovado" << media << endl;
    }if(media < 5 || nota1 < 3 || nota2 < 3 || nota3 < 3 ){
                cout <<"Final" << media << endl;
        }

    }
    return 0;
}
