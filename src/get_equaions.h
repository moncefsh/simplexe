#include <iostream>
using namespace std;


class problem
{
private:
	class equation;
	int  num_varaibles;
	vector<double> contrubution(num_varaibles);
	int num_constraint;
	vector<equation> constraints(num_constraint)
public:
	problem();
	void print_prob();
	void solve();
	void print_sol();
	void print_fulsol();
};

