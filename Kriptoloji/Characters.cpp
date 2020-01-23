#include "Characters.h"

int Characters::findIndexofTurkish(char temp)
{
	for (int i = 0; i < 29; i++) {
		if (temp == Turkish[i]) {
			return i;
		}
	}
	for (int i = 0; i < 29; i++) {
		if (temp == UpperTurkish[i]) {
			return i;
		}
	}
}