/* ESTE PROGRAMINHA TEM O OBJETIVO CALCULAR MEDIDAS DE PAREDES E CHAO. E ADEQUADO PARA QUEM
PRECISA COMPRAR REVESTIMENTOS PARA CHAO E PAREDE E NAO SABE COMO FAZER OU NAO QUER PERDER TEMPO FAZENDO
VARIOS CALCULOS MATEMATICOS. AGORA USANDO UMA ESTRUTURA DE REPETICAO FOR E UM VETOR.
ESTE CODIGO E UMA VERSAO BASICA SEM MUITO DETALHES DE SINTAXE. PODE HAVER UMA DIFICULDADE DE INTERPRETACAO, 
MAS NADA QUE UM ESTUDANTE DE PROGRAMACAO JA NAO TENHA VISTO*/ 


#include <stdio.h>
#include <math.h>

main(){
 float n[2] /* VETOR */,larg1, larg2, larg3, larg4, comp1, comp2, comp3, comp4, alt1, alt2, alt3, alt4, res, res2, res3, res4, soma;
 int op, op2,i;
 char r;
 for(i=0;i<3;i++){
 
 printf("\n\nEscolha uma opcao:");
 printf("\n\n1- para calcular piso.");
 printf("\n3- para calcular revestimento.");
 printf("\n4- para calcular revestimento lados diferentes.");
 printf("\n0- SAIR");
 printf("\n\n Escolha uma opcao: ");
 scanf("%d", &op);
 
 switch (op){
 case 0: return 0; /* esta funcao sera executada quando o 0 for utilizado*/
 case 1: printf("\n PISO ");
 printf("\n largura: ");
 scanf("%f",&larg1);
 printf("\n Comprimento: ");
 scanf("%f", &comp1);
 printf("\n Total: %.2f Mt2", larg1 * comp1);break;
 
 case 3: printf("\n REVESTIMENTO");
 printf("\n Altura: ");
 scanf("%f", &alt1);
 printf("\n Comprimento: ");
 scanf("%f", &comp1);
 printf("\n Largura: ");
 scanf("%f", &larg1);
 
 larg1 *= 2;
 comp1 *= 2;
 res = (larg1+comp1)* alt1;
 printf("\n Total: %.2f Mt2", res);break;
 
 case 4: printf("\n Quantidade de paredes (de 1 a 4): ");
 scanf("%d", &op2);
 switch (op2){
 case 1: printf("\nREVESTIMENTO");
 printf("\n Altura: ");
 scanf("%f", &alt1);
 printf("\n Largura: ");
 scanf("%f", &larg1);
 res = alt1 * larg1;
 printf("\n\n Total: %.2f Mt2", res); break;
 case 2: printf("\n PAREDE 1:");
 printf("\n Altura: ");
 scanf("%f", &alt1);
 printf("\n Largura: ");
 scanf("%f", &larg1);
 res = alt1 * larg1;
 printf("\n Resultado: %.2f Mt2", res);
 printf("\n\n PAREDE 2:");
 printf("\n Altura: ");
 scanf("%f", &alt1);
 printf("\n Largura: ");
 scanf("%f", &larg1);
 res2 = alt1 * larg1;
 printf("\n Resultado: %.2f Mt2", res2);
 printf("\n\n Total: %.2f Mt2", res + res2); break;
 case 3: printf("\n PAREDE 1:");
 printf("\n Altura: ");
 scanf("%f", &alt1);
 printf("\n Largura: ");
 scanf("%f", &larg1);
 res = alt1 * larg1;
 printf("\n Resultado: %.2f Mt2", res);
 printf("\n\n PAREDE 2:");
 printf("\n Altura: ");
 scanf("%f", &alt1);
 printf("\n Largura: ");
 scanf("%f", &larg1);
 res2 = alt1 * larg1;
 printf("\n Resultado: %.2f Mt2", res2);
 printf("\n\n PAREDE 3:");
 printf("\n Altura: ");
 scanf("%f", &alt1);
 printf("\n Largura: ");
 scanf("%f", &larg1);
 res3 = alt1 * larg1;
 printf("\n Resultado: %.2f Mt2", res3);
 printf("\n\n Total: %.2f Mt2", res + res2+ res3); break;
 case 4: printf("\n PAREDE 1");
 printf("\n Altura: ");
 scanf("%f", &alt1);
 printf("\n Largura: ");
 scanf("%f", &larg1);
 res = alt1 * larg1;
 printf("\n Resultado: %.2f Mt2", res);
 printf("\n\n PAREDE 2");
 printf("\n Altura: ");
 scanf("%f", &alt1);
 printf("\n Largura: ");
 scanf("%f", &larg1);
 res2 = alt1 * larg1;
 printf("\n Resultado: %.2f Mt2", res2);
 printf("\n\n PAREDE 3");
 printf("\n Altura: ");
 scanf("%f", &alt1);
 printf("\n Largura: ");
 scanf("%f", &larg1);
 res3 = alt1 * larg1;
 printf("\n Resultado: %.2f Mt2", res3);
 printf("\n\n PAREDE 4");
 printf("\n Altura: ");
 scanf("%f", &alt1);
 printf("\n Largura: ");
 scanf("%f", &larg1);
 res4 = alt1 * larg1;
 printf("\n RESULTADO: %.2f Mt2", res4); 
 printf("\n\n TOTAL: %.2f Mt2", res + res2 + res3 + res4); break;
 
 default: printf("\n Numero invalido!");
 }; break;
 
 
 default: printf("\n\n\n Numero invalido!");
 
 }
 
 
 i--;
 getch(); /* este getch vai parar o cursor e 
 aguardar ate a proxima acao do usuario*/
 system("cls"); /*este comando vai limpar a tela*/
 }
 
 
 getch();
 
}

