#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int combination(int n, int r)
{
	if (n == r || r == 0)
		return 1;
	else
		return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main() {
	srand((unsigned int)time(NULL));

	int N, M;
	int winner[5] = { 0, }, loser[5] = {0, };
	int mating[2];

	cout << "How Many?" << '\n';
	cout << "Winner: ";
	cin >> N;
	cout << "Loser: ";
	cin >> M;

	for (int i = 0; i < N; i++)
		cin >> winner[i];
	for (int i = 0; i < M; i++)
		cin >> loser[i];

	mating[0] = rand() % N;
	mating[1] = rand() % M;

	cout << winner[mating[0]] << ' ' << loser[mating[1]] << '\n';
	cout << '\n';

}