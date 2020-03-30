/*Partie 2.1*/
#include "gassp72.h"

extern short TabCos;
extern short TabSin;
int test(short);
int TabRes[64];
int res = 0;



short angle;

int main(void)
{

for (short k = 0; k < 64; k++) {
	res = test(k);
	TabRes[k] = res;
}

while	(1) {}

}

