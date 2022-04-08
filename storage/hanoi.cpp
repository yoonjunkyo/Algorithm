#include <iostream>
using namespace std;

void hanoi(int disc, char from, char other, char to) {
	if (disc == 1) {
		cout << "move " << disc << " from " << from << " to " << to << endl;
		return;
	}
	hanoi(disc - 1, from, to, other);
	cout << "move " << disc << " from " << from << " to " << to<<endl;
	hanoi(disc - 1, other, from, to);
}

int main() {

	hanoi(3, 'a', 'b', 'c');

	return 0;
}