/*Partie 2.2*/
#include "gassp72.h"

extern short TabCos;
extern short TabSin;
extern short TabSig;
int dftint(short *, int, short *);
int TabReel[64];
int TabIm[64];
//int res = 0;


int main(void)
{

for (int k = 0; k < 64; k++) {
	TabReel[k] = dftint(&TabSig,k,&TabCos);
	TabIm[k] = dftint(&TabSig,k,&TabSin);
}

while	(1) {}

}

