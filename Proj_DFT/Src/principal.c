#include "gassp72.h"
#include <stdio.h>
//part 1
int Periode_en_Tck = 100; //A determiner
void timer_callback(void);
int currentVal = 0;

//part 2
extern short TabCos;
extern short TabSin;
extern short TabSig;
int reel(short *, int, short *);
int test(short);




short angle;

int main(void)
{
// activation de la PLL qui multiplie la fr�quence du quartz par 9
//CLOCK_Configure();
// config port PB1 pour �tre utilis� en sortie
//GPIO_Configure(GPIOB, 1, OUTPUT, OUTPUT_PPULL);
// initialisation du timer 4
// Periode_en_Tck doit fournir la dur�e entre interruptions,
// exprim�e en p�riodes Tck de l'horloge principale du STM32 (72 MHz)
//Timer_1234_Init_ff( TIM4, Periode_en_Tck );
// enregistrement de la fonction de traitement de l'interruption timer
// ici le 2 est la priorit�, timer_callback est l'adresse de cette fonction, a cr��r en asm,
// cette fonction doit �tre conforme � l'AAPCS
//Active_IT_Debordement_Timer( TIM4, 2, timer_callback );
// lancement du timer
//Run_Timer( TIM4 );


//test(63);
//short N = 64;
int res = 0;
int k = 40;


res = reel(&TabSig,k,&TabCos); //je sais pas comment retrouver le resultat � la fin :/
printf("%d", res);


while	(1) {}

}

