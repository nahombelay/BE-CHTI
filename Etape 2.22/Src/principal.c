/*Partie 2.2.2*/
#include "gassp72.h"

extern short TabCos;
extern short TabSin;
extern short TabSig;
//int dftint(short *, int, short *);
int module(short *, int);
int tabMod[64];


int main(void)
{

for (int k = 0; k < 64; k++) {
	tabMod[k] = module(&TabSig, k);
}

while	(1) {}

}

