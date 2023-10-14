#include "src/get_equations.h"

int main(int argc, char *argv[])
{
	int n_v=4;
	int n_c=2;
	vector<double> fc={1,2,0,5};
	vector<double> fc2={-2.3,0,-2,0.2};
	vector<double> cons={3,0.5,9,-3.5};
	equation eq(smaller_eq,n_v,fc,7.5);
	equation eq2(bigger_eq,n_v,fc2,98.9);
	//eq.print_eq();
	vector<equation> eqs={eq,eq2};
	problem pb(max_pb ,n_v,n_c,cons,eqs);
	pb.print_prob();
	return 0;
}
