#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 *@file: calculoipc.c
 *
 *@brief: Programa que calcula áreas de figuras 
 *planas e volumes de sólidos.
 *
 *@author: Lucas Suzigan e Danilo Dias
 *
 *@date: 21/11/2018
 *
 *@bugs: Ao ler um caractere do teclado o programa entra em loop infinito.
 */

void menuprincipal (){ //Imprime o menu principal
  int op = 0;

  printf("\n=========================================\n");
  printf ("            Menu Principal              \n");
  printf("=========================================\n");
  printf ("1 - Cálculo de área.\n");
  printf ("2 - Cálculo de volume.\n");
  printf ("3 - Sair\n");
  printf ("\nEscolha umas das opções acima: ");
}//Fim menuprincipal

void menuarea (){ //Imprime o menu dos tipos de figuras planas para calcular a área.
  int oparea = 0;
  printf("\n=========================================\n");
  printf("    Cálculo das areas de figuras planas  \n");
  printf("=========================================\n");
  printf ("Opções:\n");
  printf ("  1 - Triangulo\n");
  printf ("  2 - Paralelogramo\n");
  printf ("  3 - Losango\n");
  printf ("  4 - Quadrado\n");
  printf ("  5 - Retangulo\n");
  printf ("  6 - Circulo\n");
  printf ("  7 - Setor Circular\n");
  printf ("  8 - Coroa Circular\n");
  printf ("  9 - Trapezio\n");
  printf (" 10 - Retornar ao menu principal\n\n");
  printf ("\nEscolha umas das opções acima: ");
}//Fim menuarea.


void menuvolume () { //Imprime o menu dos tipos de sólidos para calcular o volume.
  int opvol = 0;
  printf("\n=========================================\n");
  printf("     Cálculo dos volumes de sólidos      \n");
  printf("=========================================\n");
  printf("Opções:\n");
  printf(" 1 - Cubo\n");
  printf(" 2 - Paralelepípedo\n");
  printf(" 3 - Cilindro\n");
  printf(" 4 - Esfera\n");
  printf(" 5 - Elipsoide\n");
  printf(" 6 - Pirâmide\n");
  printf(" 7 - Cone\n");
  printf(" 8 - Prisma\n");
  printf(" 9 - Retornar ao menu principal\n\n");
  printf("\nEscolha uma das opções acima: ");
}//Fim menuvolume.

void menufinalarea () { //Imprime o menu após o calculo da área de uma figura.
  printf("________________________________________\n");
  printf("\n1 - Recalcular a área da mesma figura.\n");
  printf("2 - Retornar para o menu anterior.\n");
  printf("\nEscolha uma das opções acima: ");
} //Fim menufinalarea

void menufinalvol () { //Imprime o menu após o cáculo do volume de um sólido.
  printf("__________________________________________\n");
  printf("\n1 - Recalcular o volume do mesmo sólido.\n");
  printf("2 - Voltar para o menu anterior.\n");
  printf("\nEscolha uma das opções acima: ");
}//Fim menufinalvol

double lerdados () { //Lê os valores inseridos nas variáveis dos cálculos.
  double valor = 0.0;
  scanf("%lf", &valor);
    while (valor <= 0.0) {
      printf("\nVocê não pode usar valor negativo!\nDigite um valor positivo: ");
      scanf("%lf", &valor);
      printf("\n");
    }//Fim while

  return valor;
}//Fim lerdados

//Começo cálculos areas

void areatriangulo () { //Calcula a area de um triÂngulo.
  printf("__________________________________________\n");
  printf ("\nÁrea do Triângulo:\n");
  printf ("Digite o valor da base: ");
  double base = lerdados();
  printf("Digite o valor da altura: ");
  double altura = lerdados();
  double area = 0.0;
  area = (base * altura) / 2;
  printf ("\nA area do triangulo é: %.2lf cm²\n", area);
}//Fim Função Triangulo

void areaparalelogramo (){ //Calcula a area de um paralelogramo
  printf("__________________________________________\n");
  printf ("\nÁrea do Paralelogramo:\n");
  printf ("Digite o valor da base: ");
  double base = lerdados();
  printf ("Digite o valor da altura: ");
  double altura = lerdados();
  double area = 0.0;
  area= base * altura;
  printf ("\nA area do paralelogramo é: %.2lf cm²\n", area);
}//Fim Função paralelogramo

void arealosango (){ //Calcula a area de um losango
  printf("__________________________________________\n");
  printf ("\nÁrea do Losango:\n");
  printf ("Digite a medida diagonal maior: ");
  double diagmaior = lerdados();
  printf ("Digite a medida diagonal menor: ");
  double diagmenor = lerdados();
  double area = 0.0;
  area = (diagmaior * diagmenor) / 2;
  printf ("\nA area do losango é: %.2lf cm²\n", area);
}//Fim função losango

void areaquadrado () { //Calcula a area de um quadrado
  printf("__________________________________________\n");
  printf ("\nÁrea do Quadrado:\n");
  printf ("Digite o valor de um dos lados do quadrado: ");
  double lado = lerdados();
  double area = 0.0;
  area = lado * lado;
  printf ("\nA area do quadrado é: %.2lf cm²\n", area);
}//Fim função quadrado

void arearetangulo (){ //Calcula a area de um retangulo
  printf("__________________________________________\n");
  printf ("\nÁrea do Retângulo:\n");
  printf ("Digite o valor da base: ");
  double base = lerdados();
  printf ("Digite o valor da altura: ");
  double altura = lerdados();
  double area = 0.0;
  area = base * altura;
  printf ("\nA area do retangulo é: %.2lf cm²\n", area);
}//Fim função retangulo

void areacirculo (){ //Calcula a area de um circulo
  printf("__________________________________________\n");
  printf ("\nÁrea do Círculo:\n");
  printf ("Digite o valor do raio da circunferência: ");
  double raio = lerdados();
  double area = 0.0;
  area = (raio * raio) * M_PI;
  printf ("\nA area do circulo é: %.2lf cm²\n", area);
}//Fim função circulo

void areasetorcircular (){ //Calcula a area de setor circular
  printf("__________________________________________\n");
  printf ("\nÁrea do Setor Circular:\n");
  printf ("Digite o valor do raio da circunferência: ");
  double raio = lerdados();
  printf ("Digite o valor do ângulo central: ");
  double angulo = lerdados();
  double area = 0.0; 
  area = (((raio * raio) * M_PI) * angulo) / 360;
  printf ("\nA area do setor circular é: %.2lf cm²\n", area);
}//Fim função setor circular

void areacoroacircular (){ //Calcula a area de coroa circular
  printf("__________________________________________\n");
  printf ("\nÁrea da Coroa Circular:\n");
  printf ("Digite o valor do raio maior: ");
  double raiomaior = lerdados();
  printf ("Digite o valor do raio menor: ");
  double raiomenor = lerdados();
  double area = 0.0;
  area = ((raiomaior * raiomaior) - (raiomenor * raiomenor)) * M_PI;
  printf ("\nA area da coroa circular é: %.2lf cm²\n", area);
}//Fim função coroa circular

void areatrapezio (){ //Calcula a area de um trapezio
  printf("__________________________________________\n");
  printf ("\nÁrea do Trapézio:\n");
  printf ("Digite o valor da base maior: ");
  double basemaior = lerdados();
  printf ("Digite o valor da base menor: ");
  double basemenor = lerdados();
  printf ("Digite o valor da altura: ");
  double altura = lerdados();
  double area = 0.0;
  area = ((basemaior + basemenor) * altura) / 2;
  printf ("\nA area do trapezio é: %.2lf cm²\n", area); 
}//Fim função trapezio

//Começo calculos volume.

void volcubo() { //Calcula o volume de um cubo.
  printf("__________________________________________\n");
  printf("\nVolume do Cubo\n");
  printf("\nDigite o valor da aresta do cubo: ");
  double aresta = lerdados();
  double vol = 0.0;
  vol = aresta * aresta * aresta;
  printf("\nO volume do cubo é: %.2lf cm³\n", vol);
}//Fim função cubo

void volparalelepipedo() { //Calcula o volume de um paralelepípedo.
  printf("__________________________________________\n");
  printf("\nVolume do Paralelepípedo:\n");
  printf("\nDigite o valor da largura do paralelepípedo: ");
  double largura = lerdados();
  printf("Digite o valor do comprimento do paralelepípedo: ");
  double comprimento = lerdados();
  printf("Digite o valor da altura do paralelepípedo: ");
  double altura = lerdados();
  double vol = 0.0;
  vol = largura * comprimento * altura;
  printf("\nO volume do paralelepípedo é: %.2lf cm³\n", vol);
}//Fim função paralelepipedo

void volcilindro() { //Calcula o volume de um cilindro.
  printf("__________________________________________\n");
  printf("\nVolume do Cilindro:\n");
  printf("\nDigite o valor do raio do cilindro: ");
  double raio = lerdados();
  printf("Digite o valor da altura do cilindro: ");
  double altura = lerdados();
  double vol = 0.0;
  vol = M_PI * (raio * raio) * altura;
  printf("\nO volumo do cilindro é: %.2lf cm³\n", vol);
}//Fim função cilindro

void volesfera() { //Calcula o volume de uma esfera.
  printf("__________________________________________\n");
  printf("\nVolume da Esfera:\n");
  printf("\nDigite o valor do raio da esfera: ");
  double raio = lerdados();
  double vol = 0.0;
  vol = (4/3) * M_PI * (raio * raio * raio);
  printf("\nO volume da esfera é: %.2lf cm³\n", vol);
}//Fim função esfera

void volelipsoide() { //Calcula o volume de um elipsoide.
  printf("__________________________________________\n");
  printf("\nVolume do Elipsoide:\n");
  printf("\nDigite o valor do semi-eixo a: ");
  double a = lerdados();
  printf("Digite o valor do semi-eixo b: ");
  double b = lerdados();
  printf("Digite o valor do semi-eixo c: ");
  double c = lerdados();
  double vol = 0.0;
  vol = (4/3) * M_PI * a * b * c;
  printf("\nO volume do elipsoide é: %.2lf cm³\n", vol);
}//Fim função elipsoide

void volpiramide() { //Calcula o volume de uma pirâmide.
  printf("__________________________________________\n");
  printf("\nVolume da Pirâmide:\n");
  printf("\nDigite o valor da área da base da pirâmide: ");
  double areabase = lerdados();
  printf("Digite o valor da altura da pirâmide: ");
  double altura = lerdados();
  double vol = 0.0;
  vol = (areabase * altura) / 3;
  printf("\nO volume da pirâmide é: %.2lf cm³\n", vol);
}//Fim função piramide

void volcone() { //Calcula o volume de um cone.
  printf("__________________________________________\n");
  printf("\nVolume do Cone:\n");
  printf("\nDigite o valor do raio da base do cone: ");
  double raiobase = lerdados();
  printf("Digite o valor da altura do cone: ");
  double altura = lerdados();
  double vol = 0.0;
  vol = (M_PI * (raiobase * raiobase) * altura) / 3.0;
  printf("\nO volume do cone é: %.2lf cm³\n", vol);
}//Fim função cone

void volprisma() { //Calcula o volume de um prisma.
  printf("__________________________________________\n");
  printf("\nVolumo do Prisma:\n");
  printf("\nDigite o valor da área da base do prisma: ");
  double areabase = lerdados();
  printf("Digite o valor da altura do prisma: ");
  double altura = lerdados();
  double vol = 0.0;
  vol = areabase * altura;
  printf("\nO volume do prisma é: %.2lf cm³\n", vol);
}//Fim função prisma

//Começo função main

int main(void){
  
int op = 0;
int calcvol = 0;
int finalarea = 0;
int finalvol = 0;

  menuprincipal (); 
  scanf ("%d", &op);
  
    switch (op){
    
    menuarea:
    case 1:
      menuarea ();
      int calcarea = lerdados();

      	do{
    			switch (calcarea){ //Calcula as areas das figuras
    		    	case 1 :
    		          areatriangulo ();
    		            break;

    		        case 2 :
    		          areaparalelogramo ();
    		            break;

    		        case 3 :
    		          arealosango ();
    		            break;

    		        case 4 :
    		          areaquadrado ();
    		            break;

    		        case 5 :
    		          arearetangulo ();
    		           break;

    		        case 6 :
    		         areacirculo ();
    		            break;

    		        case 7 :
    		          areasetorcircular ();
    		            break;

    		        case 8 :
    		          areacoroacircular ();
    		           break;

    		        case 9 :
    		         areatrapezio ();
    		            break;

    		        case 10:
    		          main ();
    		           break;

    		        default:
    		          printf ("Opção inválida! Tente novamente.\n");
    		            goto menuarea;
    		               break;

      }//Fim switch calcarea

  menufinalarea ();
  scanf("%d", &finalarea);

}	while (finalarea == 1);//Fim do

 goto menuarea;

 break;

    menuvol:
    case 2:
      menuvolume();
      scanf("%d", &calcvol);

  	    do {
  	    	switch (calcvol) { //Calcula os volumes dos sólidos
  		        case 1:
    		        volcubo();
      		        break;

  		        case 2:
    		        volparalelepipedo();
      		        break;

  		        case 3:
    		        volcilindro();
      		        break;

  		        case 4:
    		        volesfera();
      		        break;

  		        case 5:
    		        volelipsoide();
    		          break;

  		        case 6:
    		        volpiramide();
    		          break;

  		        case 7:
    		        volcone();
    		          break;

  		        case 8:
    		        volprisma();
    		          break;

  		        case 9:
    		        main();
    		          break;

  		        default:
    		        printf("Opção inválida! Tente novamente.\n");
      		        goto menuvol;
      		          break;

  			}//Fim switch calcvol

  menufinalvol (); 
  scanf ("%d", &finalvol);

}	while (finalvol == 1);//fim do

goto menuvol;

 break;
 
    case 3:
      exit (0);
        break;

    default:
      printf("Opção inválida! Tente novamente.\n");
        main ();
          break;
  
  }//Fim Switch MenuPricncipal
 exit (0);
}// fim Main
