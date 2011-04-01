#include <iostream>
#include <cstring>
#include <vector>
#include <sys/types.h>
#include <sys/socket.h>
#include "arguments.h"
#include "CPingSweep.h"
using namespace std;


void displayParamPage();


int scanMode = 0;
vector<string> scanOptions;
string target;


int main(int argc, char* argv[]) {
	if (argc == 1) {
		displayParamPage();
		return 1;
	}
	
	// Check scan mode	
	if (argc >= 2)
	{
		// Check for ping sweep
		if (strcmp(argv[1], "-swp") == 0)
		{
			scanMode = 1;
		}
		
		// Check for FIN scan
		if (strcmp(argv[1], "-fin") == 0)
		{
			scanMode = 2;
		}
	}
	
	// Check for scan parameters
	if (argc >= 4)
	{
		for (int i = 2; i < argc - 1; i++)
		{
			scanOptions.push_back(argv[i]);
		}
	}
	
	// Check for scan target
	if (argc >= 3)
	{
		target = argv[argc - 1];
	}
	
	if (scanMode == 1)
	{
		cout << "Invoking ping sweep on target " << target << endl;
		cout << "scan options are: ";
		for (int i = 0; i < scanOptions.size(); i++)
		{
			cout << scanOptions[i] << " ";
		}
		cout << endl;
		cout << endl;
		
		CPingSweep ps(scanOptions, target);
		ps.scan();
	}
	
	
	//checkArguments(argc, argv);
	return 0;
}

void displayParamPage()
{
	cout << "GProbe 0.1" << endl;
	cout << "Written by A. Gasser 2011" << endl;
	cout << "-------------------------" << endl;
	cout << "" << endl;
	cout << "gprobe [scan type] [options] [target]" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "SCAN TYPES" << endl;
	cout << "  -swp  Perform a ICMP ping sweep" << endl;
	cout << "  -fin  Perform A TCP FIN scan" << endl;
	cout << "" << endl;
	cout << "OPTIONS" << endl;
	cout << "  None at this time" << endl;
	cout << "" << endl;
	cout << "TARGET" << endl;
	cout << "  CIDR Subnet or single IP" << endl;
	
	
	
}
