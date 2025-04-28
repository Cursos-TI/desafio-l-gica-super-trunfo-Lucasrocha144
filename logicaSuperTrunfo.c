#include <stdio.h>

int main(){

    char estadoA01[60]= "Piaui",estadoB01[60]=  "RioGrandeDoNorte";

    // Definindo o estado, para definir as cidades. char para identificarcaracteres. usar no futuro.//

    char cidadeA01[60] = "Teresina", cidadeB01[60] = "Natal";

    //Definindo a cidade. //

    char codigocartaA01[60] = "carta A01",  codigocartaB01[60] = "Carta B01";

    //Código da carta. //

    unsigned long long int populacaoA01 = 3446071 , populacaoB01 = 1069000;


    // Definindo populaçao  das cidades . int para utilizar números inteiros.//


    float areaA01 = 52.797,  areaB01 = 251.529;

    //Definindo a área das cartas. Utilizando float para poder colocar números não inteiros. //

    float PIBA01 = 80180000000, PIBB01 = 64028000000

    // Definindo PIB, mesma lógica na linha de cima. // 

   int     pontosturistico = 50, pontosturisticoB01= 30;

    // definir pontos turisticos. int para números inteiros //

    // Daqui pra baixo é status com calculos. //

    float densiA01 = (float)populacaoA01 / areaA01;
    float pibpercapitaA01 = PIBA01 /  (float)populacaoA01;

    float superpoderA01;
    superpoderA01 = (1 / densiA01) + ((float)populacaoA01 + areaA01 + PIBA01 + pontosturisticoA01 + pibpercapitaA01);

    // Fim da carta A01, vamos para carta B01 //
    
    // Daqui pra baixo é status com calculos. //

    float densiB01 = (float)populacaoB01 / areaB01;
    float pibpercapitaB01 = PIBB01 / (float)populacaoB01;

    float superpoderB01;
    superpoderB01 = (1 / densiB01) + ((float)populacaoB01 + areaB01 + PIBB01 + pontosturisticoB01 + pibpercapitaB01);

    // Fim da carta B01 //

    // Aqui iremos mostrar o status das cartas //

    printf("Suas duas cartas são: \n");

    printf("-------------------------\n%s", codigocartaA01);
    printf("\nEstado: %s", estadoA01);
    printf("\nCidade: %s", cidadeA01);
    printf("\nPopulacao: %lli", populacaoA01);
    printf("\nÀrea: %.3f", areaA01);
    printf("\nPIB: %.2f bilhões", PIBA01 );
    printf("\nPturistico: %i", pontosturisticoA01);
    printf("\nPibpercapita: %.3f", pibpercapitaA01);
    printf("\nDensipopulacional: %.2f \n----------------------\n", densiA01);
    printf("\nSuperpoder: %.0f \n----------------\n", superpoderA01);


    //  //

    printf("-------------------------\n%s", codigocartaB01);
    printf("\nEstado: %s", estadoB01);
    printf("\nCidade: %s", cidadeB01);
    printf("\nPopulacao: %lli", populacaoB01);
    printf("\nÀrea: %.3f", areaB01);
    printf("\nPIB: %.2f bilhões", PIBB01);
    printf("\nPturistico: %i", pontosturisticoB01);
    printf("\nPibpercapita: %.3f", pibpercapitaB01);
    printf("\nDensipopulacional: %.2f \n----------------------\n", densiB01);
    printf("\nSuperpoder: %.0f \n----------------\n", superpoderB01);

    int menuEscolha;
    int menuEscolha1, menuEscolha2;
   float cartaA01Atri1, cartaB01Atri1;
   float cartaA01Atri2, cartaB01Atri2;
    int resultado1, resultado2;


    printf("*** Menu Super Trunfo *** \n");
    printf("1. Jogar e comparar cartas \n");
    printf("2. Regras \n");
    printf("3. Sair \n");
      scanf("%i",&menuEscolha);
    printf("Você será a carta A01 \n");
    printf("Escolha os atributos para comparar: \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos Turísticos \n");
    printf("5. Pib per capita \n");
    printf("6. Densidade Populacional \n");
      scanf("%i", &menuEscolha1);

      switch (menuEscolha)
 
 
      // Escolher o primeiro atributo!
      switch (menuEscolha1)
      {
      case 1:
      
      printf("BATTLE TIME! \n");
      cartaA01Atri1 = populacaoA01;
      cartaB01Atri1 = populacaoB01;
      resultado1 = cartaA01Atri1 > cartaB01Atri1 ? 1 : 0;
      
      
      printf("---------------------------------------------------------------------------------------------------\n");
 
      printf("Quem venceu em população? \n");
      break;
      case 2:
  
      if(populacaoA01 > populacaoB01){
          printf("%s venceu! \n", cidadeA01);
      } else if(populacaoA01 < populacaoB01){
          printf("%s venceu! \n", cidadeB01);
      } else{
          printf("Deu empate entre %s e %s!", cidadeA01, cidadeB01);
      }

      cartaA01Atri1 = areaA01;
      cartaB01Atri1 = areaB01;
      resultado1 = cartaA01Atri1 > cartaB01Atri1 ? 1 : 0;

      printf("---------------------------------------------------------------------------------------------------\n");
 
      printf("Quem venceu em área? \n");
      break;
 
      if(areaA01 > areaB01){
      printf("%s venceu! \n", codigocartaA01);
      } else if(areaA01 < areaB01){
      printf("%s venceu! \n", codigocartaB01);
      }else {
      printf("Deu empate!");
      }
      case 3:


      printf("---------------------------------------------------------------------------------------------------\n");
      cartaA01Atri1 = PIBA01;
      cartaB01Atri1 = PIBB01;
      resultado1 = cartaA01Atri1 > cartaB01Atri1 ? 1 : 0;
 
      printf("Quem venceu em PIB? \n");
 
      if(PIBA01 > PIBB01){
      printf("%s venceu! \n", codigocartaA01);
      } else if (PIBA01 < PIBB01){
      printf("%s venceu! \n", codigocartaB01);
      } else {
      printf("Deu empate!");
      }
 
      printf("---------------------------------------------------------------------------------------------------\n");
      break;
 
      printf("Quem venceu em pontos turísticos? \n");
      case 4:

      if(pontosturisticoA01 > pontosturisticoB01){
        printf("%s venceu! \n", codigocartaA01);
      } else if (pontosturisticoA01 < pontosturisticoB01){
        printf("%s venceu! \n", codigocartaB01);
      } else {
        printf("Deu empate!");
      }
      cartaA01Atri1 = pturisticoA01;
      cartaB01Atri1 = pturisticoB01;
      resultado1 = cartaA01Atri1 > cartaB01Atri1 ? 1 : 0;
    
      printf("---------------------------------------------------------------------------------------------------\n");
 
      printf("Quem venceu em Pib per capita ? \n");

      if(pibpercapitaA01 > pibpercapitaB01){
      printf("%s venceu! \n", codigocartaA01);
      } else if (pibpercapitaA01 < pibpercapitaB01){
      printf("%s venceu! \n", codigocartaB01);
      } else {
      printf("Deu empate!");
      }
      break;
    
      printf("---------------------------------------------------------------------------------------------------\n");
      case 5:

      printf("Quem venceu em densidade? \n");
      cartaA01Atri1 = pibpercapitaA01;
      cartaB01Atri1 = pibpercapitaB01;
      resultado1 = cartaA01Atri1 > cartaB01Atri1 ? 1 : 0;
 
      if(densiA01 < densiB01){
      printf("%s venceu! \n", codigocartaA01);
      } else if (densiA01 > densiB01){
      printf("%s venceu! \n", codigocartaB01);
      } else {
      printf("Deu empate!");
      }
 
      printf("---------------------------------------------------------------------------------------------------\n");
      break;
 
      case 6:

      cartaA01Atri1 = densiA01;
      cartaB01Atri1 = densiB01;
      resultado1 = cartaA01Atri1 < cartaB01Atri1 ? 1 : 0;
 
 
      printf("Quem venceu no super poder? \n");
      if(superpoderA01 > superpoderB01){
      printf("%s venceu! \n", codigocartaA01);
      } else if (superpoderA01 < superpoderB01){
      printf("%s venceu! \n", codigocartaB01);
      } else {
      printf("Deu empate!");
    break;

    default:

     printf("Você não escolheu um atributo! \n");
     break;
     }
 
     printf("---------------------------------------------------------------------------------------------------\n");


     // Escolher o segundo atributo!
     printf("Escolha o segundo atributo: \n");
     printf("1. População \n");
     printf("2. Área \n");
     printf("3. PIB \n");
     printf("4. Pontos Turísticos \n");
     printf("5. Pib per capita \n");
     printf("6. Densidade Populacional \n");
       scanf("%i", &menuEscolha2);

       switch (menuEscolha2)
     {
     case 1:
 
     cartaA01Atri2 = populacaoA01;
     cartaB01Atri2 = populacaoB01;
     resultado2 = cartaA01Atri2 > cartaB01Atri2 ? 1 : 0;
 
 
 
     break;

     case 2:
     printf("As regras, são simples, vence a carta com o maior valor no atributo escolhido. Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor. \n");
     
     cartaA01Atri2 = areaA01;
     cartaB01Atri2 = areaB01;
     resultado2 = cartaA01Atri2 > cartaB01Atri2 ? 1 : 0;
 
 
     break;

     case 3:
     printf("Saindo do jogo...");
 
 
     cartaA01Atri2 = PIBA01;
     cartaB01Atri2 = PIBB01;
     resultado2 = cartaA01Atri2 > cartaB01Atri2 ? 1 : 0;
          
     break;
 
     case 4:
       
     cartaA01Atri2 = pturisticoA01;
     cartaB01Atri2 = pturisticoB01;
     resultado2 = cartaA01Atri2 > cartaB01Atri2 ? 1 : 0;
 
 
     break;

     case 5:
     
     cartaA01Atri2 = pibpercapitaA01;
     cartaB01Atri2 = pibpercapitaB01;
     resultado2 = cartaA01Atri2 > cartaB01Atri2 ? 1 : 0;
 
 
     break;
 
     case 6:
     
     cartaA01Atri2 = densiA01;
     cartaB01Atri2 = densiB01;
     resultado2 = cartaA01Atri2 < cartaB01Atri2 ? 1 : 0;
 
 
     
     break;

     default:
     printf("Opção inválida!");
     printf("Você não escolheu um atributo! \n");
     break;
     }
 
     //Para ver quem venceu!
     printf("Vamos ver quem venceu! \n");
 
     if(cartaA01Atri1 == cartaA01Atri2){
     
     printf("Você escolheu atributos iguais! \n");
 
     }
 
     else if

     (resultado1 && resultado2){
        printf("-------------------------------------------------------------------------------------------------- \n");
        
        printf("O primeiro atributo de %s, foi de %.0f pontos \n", codigocartaA01, cartaA01Atri1);
        printf("Contra \n");
        printf("O primeiro atributo de %s, foi de %.0f pontos \n", codigocartaB01, cartaB01Atri1);
        
        resultado1 == 1 ? printf("Você venceu neste atributo! \n") : printf("Você perdeu neste atributo! \n");
        printf("***--------------------------------------*** \n");
        printf("O segundo atributo de %s, foi de %.0f pontos \n", codigocartaA01, cartaA01Atri2);
        printf("Contra \n");
        printf("O segundo atributo de %s, foi de %.0f pontos \n", codigocartaB01, cartaB01Atri2);
        
        resultado2 == 1 ? printf("Você venceu neste atributo! \n") : printf("Você perdeu neste atributo! \n");
        printf("***--------------------------------------*** \n");
        
        printf("Você venceu! \n");
        
        printf("-------------------------------------------------------------------------------------------------- \n");


 }
 
 else if(resultado1 != resultado2)
 
  {
 printf("-------------------------------------------------------------------------------------------------- \n");
 
 printf("O primeiro atributo de %s, foi de %.0f pontos \n", codigocartaA01, cartaA01Atri1);
 printf("Contra \n");
 printf("O primeiro atributo de %s, foi de %.0f pontos \n", codigocartaB01, cartaB01Atri1);
 
 resultado1 == 1 ? printf("Você venceu neste atributo! \n") : printf("Você perdeu neste atributo! \n");
 printf("***--------------------------------------*** \n");
 printf("O segundo atributo de %s, foi de %.0f pontos \n", codigocartaA01, cartaA01Atri2);
 printf("Contra \n");
 printf("O segundo atributo de %s, foi de %.0f pontos \n", codigocartaB01, cartaB01Atri2);


 resultado2 == 1 ? printf("Você venceu neste atributo! \n") : printf("Você perdeu neste atributo! \n");
 printf("***--------------------------------------*** \n");
 printf("Você empatou! \n");
 printf("-------------------------------------------------------------------------------------------------- \n");
 }
 
 else
 
 {
 
 printf("-------------------------------------------------------------------------------------------------- \n");
 
 printf("O primeiro atributo de %s, foi de %.0f pontos \n", codigocartaA01, cartaA01Atri1);
 printf("Contra \n");
 printf("O primeiro atributo de %s, foi de %.0f pontos \n", codigocartaB01, cartaB01Atri1);

 resultado1 = 1 ? printf("Você venceu neste atributo! \n") : printf("Você perdeu neste atributo! \n");
 
 printf("***--------------------------------------*** \n");
 
 printf("O segundo atributo de %s, foi de %.0f pontos \n", codigocartaA01, cartaA01Atri2);
 printf("Contra \n");
 printf("O segundo atributo de %s, foi de %.0f pontos \n", codigocartaB01, cartaB01Atri2);
 
 resultado2 = 1 ? printf("Você venceu neste atributo! \n") : printf("Você perdeu neste atributo! \n");
 
 printf("***--------------------------------------*** \n");
 
 printf("Você perdeu! \n");
 
 printf("-------------------------------------------------------------------------------------------------- \n");
 }

}