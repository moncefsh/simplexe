#include <iostream>
#include <vector>

using namespace std;

enum EQ_TYPE { 
	smaller_eq,
	equal_eq,
	bigger_eq,
};

enum OPTI {min_pb, max_pb  };
	
struct equation {
	EQ_TYPE type;
	int num_var;
	vector<double> factors;
	double left_num;
	equation(EQ_TYPE tp,int nv, vector<double> ft,double ln)
		:type(tp),num_var(nv),factors(ft),left_num(ln){}
	void print_eq();
};
class problem
{
private:
	OPTI prb_type;
	int  num_varaibles;
	std::vector<double> contrubution;
	int num_constraint;
	vector<equation> constraints;
	vector<double> ecarts;
	vector<double> artifs;
	vector<double> zj;
public:
	problem(OPTI type,
		int num_var,
		int num_cons,
		vector<double> contr,
		vector<equation> constr)
		:prb_type(type),
		num_varaibles(num_var),
		contrubution(contr),
		num_constraint(num_cons),
		constraints(constr),
		ecarts(num_cons),
		artifs(num_cons){}
	
	void trans_eqs();
	void print_table();
	void print_prob();
	void solve();
	void print_fulsol();
};

