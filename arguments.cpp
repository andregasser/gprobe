#include <iostream>
using namespace std;

void checkArguments(int argc, char* argv[]) {
	for (int i = 0; i < argc; i++) {
		cout << "argv[" << i << "] = " << argv[i] << endl;
	}
}
