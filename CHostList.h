#ifndef _CHOSTLIST_H_
#define _CHOSTLIST_H_

#include <string>
#include <vector>
using namespace std;

class CHostList
{
	public:
		CHostList();
		void add(string target);

	private:
		vector<string> m_hosts;
};

#endif // _CHOSTLIST_H_
