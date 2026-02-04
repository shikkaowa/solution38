#include "logic.h"

bool is_power_of_two(int number) {
	if (number > 0 && (number & (number - 1)) == 0) {
		return 1;
	}
	else {
		return 0;
	}
}