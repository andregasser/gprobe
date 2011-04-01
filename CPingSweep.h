#ifndef _CPINGSWEEP_H_
#define _CPINGSWEEP_H_

#include <string>
#include <vector>
#include "CHostList.h"
using namespace std;

class CPingSweep
{
	public:
		CPingSweep(const vector<string> scanOptions, const string target);
		void scan(void);

	private:
		string m_target;
		vector<string> m_scanOptions;
		CHostList hostList;
};

#endif // _CPINGSWEEP_H_
