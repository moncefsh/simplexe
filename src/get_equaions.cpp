#include "get_equations.h"


class problem::equation
{
	equation();
	void print_eq():
	enum TYPE{
		bigger,bigger_eq,equal,smaller_eq,smaller
	};
private:
	TYPE type;
	double val;
	vector<int> vars_involves;
	vetor<double> controbution(num_constraint);
};
