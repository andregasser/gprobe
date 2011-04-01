#include <iostream>
#include <vector>
#include "CPingSweep.h"
using namespace std;

CPingSweep::CPingSweep(const vector<string> scanOptions, const string target)
{
	m_scanOptions = scanOptions;
	m_target = target;
}

void CPingSweep::scan(void)
{
	cout << "ping sweep invoked" << endl;
}
