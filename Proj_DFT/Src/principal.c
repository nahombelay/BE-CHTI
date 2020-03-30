#include "gassp72.h"
#include <stdio.h>
//part 1
int Periode_en_Tck = 100; //A determiner
void timer_callback(void);
int currentVal = 0;
int res;

//part 2
extern short TabCos;
extern short TabSin;
extern short TabSig;
//int reel(short *, int, short *);
int dftint(short *, int, short *);
int test(short);
int TabRes[64];
int res = 0;



short angle;

int main(void)
{
// activation de la PLL qui multiplie la fréquence du quartz par 9
//CLOCK_Configure();
// config port PB1 pour être utilisé en sortie
//GPIO_Configure(GPIOB, 1, OUTPUT, OUTPUT_PPULL);
// initialisation du timer 4
// Periode_en_Tck doit fournir la durée entre interruptions,
// exprimée en périodes Tck de l'horloge principale du STM32 (72 MHz)
//Timer_1234_Init_ff( TIM4, Periode_en_Tck );
// enregistrement de la fonction de traitement de l'interruption timer
// ici le 2 est la priorité, timer_callback est l'adresse de cette fonction, a créér en asm,
// cette fonction doit être conforme à l'AAPCS
//Active_IT_Debordement_Timer( TIM4, 2, timer_callback );
// lancement du timer
//Run_Timer( TIM4 );

//test(63);
//short N = 64;

//int k = 40;

for (int k = 0; k < 64; k++) {
	res = dftint(&TabSig,k,&TabCos);
	TabRes[k] = res;
}



while	(1) {}

}

