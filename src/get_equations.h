#include <iostream>
#include <vector>

using namespace std;

enum EQ_TYPE { 
	smaller,
	samller_eq,
	equal_eq,
	bigger_eq,
	bigger
};


struct equation {
	EQ_TYPE type;
	int num_var;
	vector<double> factors;
	double left_num;
	equation(EQ_TYPE tp, vector<double> ft,double ln)
		:type(tp),factors(ft),left_num(ln){}
	void print_eq();
};
class problem
{
private:
	int  num_varaibles;
	std::vector<double> contrubution;
	int num_constraint;
	vector<equation> constraints;
public:
	problem(int num_var,
		int num_cons,
		vector<double> contr,
		vector<equation> constr)
		:num_varaibles(num_var),
		contrubution(contr),
		num_constraint(num_cons),
		constraints(constr){}
	
	void print_prob();
	void solve();
	void print_sol();
	void print_fulsol();
};

