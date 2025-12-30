// TODO: ????????????? swap ???? pointer
#include <iostream>
using namespace std;
void swapValue(int* a, int* b) {
	// TODO
	int tmp = *a;
	*a = *b;
	*b = tmp;

}
int main() {
	int x = 5, y = 10;
	swapValue(&x, &y);
	cout << x << " " << y << endl;
	return 0;
}