#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
	srand((unsigned int)time(NULL));

	int A[4] = { 0, }, B[4] = { 0, };
	int C[4] = { 0, };

	cout << "input first chamber" << '\n'
		<< "Clown: 1" << '\n'
		<< "Abomination: 2" << '\n'
		<< "Leper: 3" << '\n'
		<< "Highwayman: 4" << '\n'
		<< "Grave Robber: 5" << '\n'
		<< "Houndmaster: 6" << '\n'
		<< "Arbalest: 7" << '\n'
		<< "Vestal: 8" << '\n'
		<< "Crusader: 9" << '\n'
		<< "Occultist: 10" << '\n'
		<< "Hellion: 11" << '\n'
		<< "Plague Doctor: 12" << '\n'
		<< "Antiquarian: 13" << '\n'
		<< "Man-At-Arms: 14" << '\n'
		<< "Bounty Hunter: 15" << '\n'
		<< "Flagellant: 16" << '\n'
		<< "Shieldbreaker: 17" << '\n'
		<< "Musketeer: 18" << '\n';

	cin >> A[0] >> A[1] >> A[2] >> A[3];

	cout << "input second chamber" << '\n'
		<< "Clown: 1" << '\n'
		<< "Abomination: 2" << '\n'
		<< "Leper: 3" << '\n'
		<< "Highwayman: 4" << '\n'
		<< "Grave Robber: 5" << '\n'
		<< "Houndmaster: 6" << '\n'
		<< "Arbalest: 7" << '\n'
		<< "Vestal: 8" << '\n'
		<< "Crusader: 9" << '\n'
		<< "Occultist: 10" << '\n'
		<< "Hellion: 11" << '\n'
		<< "Plague Doctor: 12" << '\n'
		<< "Antiquarian: 13" << '\n'
		<< "Man-At-Arms: 14" << '\n'
		<< "Bounty Hunter: 15" << '\n'
		<< "Flagellant: 16" << '\n'
		<< "Shieldbreaker: 17" << '\n'
		<< "Musketeer: 18" << '\n';

	cin >> B[0] >> B[1] >> B[2] >> B[3];

	while (1) {
		C[0] = rand() % 4;
		C[1] = rand() % 4;
		if (C[0] != C[1])
			break;
	}

	while (1) {
		C[2] = rand() % 4;
		C[3] = rand() % 4;
		if (C[2] != C[3])
			break;
	}

	int a;
	for (int i = 0; i < 2; i++) {
		a = C[i];
		switch (A[a]) {
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
	}

	int b;
	for (int i = 2; i < 4; i++) {
		b = C[i];
		switch (B[b]) {
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
	}

	return 0;
}