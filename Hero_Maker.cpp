#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;

void printer(int n) {

	switch (n)
	{
	case 1: cout << "Clown" << '\n';
		break;
	case 2: cout << "Abomination" << '\n';
		break;
	case 3: cout << "Leper" << '\n';
		break;
	case 4: cout << "Highwayman" << '\n';
		break;
	case 5: cout << "Grave Robber" << '\n';
		break;
	case 6: cout << "Houndmaster" << '\n';
		break;
	case 7: cout << "Arbalest" << '\n';
		break;
	case 8: cout << "Vestal" << '\n';
		break;
	case 9: cout << "Crusader" << '\n';
		break;
	case 10: cout << "Occultist" << '\n';
		break;
	case 11: cout << "Hellion" << '\n';
		break;
	case 12: cout << "Plague Doctor" << '\n';
		break;
	case 13: cout << "Antiquarian" << '\n';
		break;
	case 14: cout << "Man-At-Arms" << '\n';
		break;
	case 15: cout << "Bounty Hunter" << '\n';
		break;
	case 16: cout << "Flagellant" << '\n';
		break;
	case 17: cout << "Shieldbreaker" << '\n';
		break;
	case 18: cout << "Musketeer" << '\n';
		break;
	}
	cout << '\n';
}

int main(void) {
	srand(time(NULL));
	int i, num, j = 0;

	int n;

	while (1) {

		cin >> n;
		if (n < 0)
			break;

		int slot[4] = { 0, };

		for (int j = 0; j < 4; j++) {
		again:;
			num = rand() % 18 + 1;
			for (int k = 0; k < j; k++)
				if (num == slot[k])
					goto again;
			slot[j] = num;
		}

		printer(slot[0]);
		printer(slot[1]);
		printer(slot[2]);
		printer(slot[3]);
	}
}