#include <iostream>

using namespace std;

int main()
{
	int T = 0;
	int A, B;

	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		cin >> A >> B;

		cout << "Case #" << i << ": " << A + B << '\n';
	}

	return 0;
}