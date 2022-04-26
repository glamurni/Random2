#include <iostream>
//#include <ctime>//
#include <random>
using namespace std;
int main()
{
	random_device rd;
	mt19937 mersenne(rd());

	 
	for (int count=0; count<48; ++count)
	{
     cout << mersenne()<<"\t";
    if ((count + 1) % 5 == 0)
	  cout <<"\n";
	}

}