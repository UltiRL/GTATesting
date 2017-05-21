/*
Stephen Dengel
CISS 341
Week 2 - assignment 2
4/4/15
*/
#include <iostream>
using namespace std;

void main()
{
	double gallons = 16,
		highwayMiles = 460,
		townMiles = 345,
		highwayMPG,
		townMPG;
	//Calculate the MPG in town and on the highway.
	highwayMPG = highwayMiles / gallons;
	townMPG = townMiles / gallons;
	//Display the MPG for in-Town and highway
	cout << "The Miles per gallon for driving in town is: " << townMPG << endl;
	cout << "The Miles per gallon for driving on the highway is: " << highwayMPG << endl;

}