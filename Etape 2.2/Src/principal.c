/*Partie 2.2*/
#include "gassp72.h"

extern short TabCos;
extern short TabSin;
extern short TabSig;
int dftint(short *, int, short *);
int TabRes[64];
int res = 0;


int main(void)
{

for (int k = 0; k < 64; k++) {
	res = dftint(&TabSig,k,&TabCos);
	TabRes[k] = res;
}

while	(1) {}

}

