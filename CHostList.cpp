#include <string>
#include <vector>
#include "CHostList.h"
using namespace std;

CHostList::CHostList()
{
	
}

void CHostList::add(string target)
{
	m_hosts.push_back(target);
}
