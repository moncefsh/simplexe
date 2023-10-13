#include "get_equations.h"
#include <string>


void equation::print_eq()
{
	std::string mark;
	switch (type) {
		case smaller:
			mark="<";
			break;
		case samller_eq:
			mark="<=";
			break;
		case equal_eq:
			mark="=";
			break;
		case bigger_eq:
			mark=">=";
			break;
		case bigger:
			mark=">";
			break;
		default:
			mark="";
			// i should throw an expection
	}
	for (int i = 0; i  <  num_var ; ++ i) {
		if(factors[i]>=0)
			std::cout<<"+";
		cout<<factors[i]<<"x_"<<i+1<<" ";
	}
	std::cout<<mark<<" "<<left_num<<std::endl;
}	
void problem::print_prob()
{
	std::cout<<"the optimazation equation\n";
	for (int i =0; i < this->num_varaibles ; ++ i) {
		if(this->contrubution[i]>=0)
			std::cout<<"+";

		std::cout<< this->contrubution[i] <<"x_"<<i+1<< " ";
	}
	std::cout<<"\nconstraints equation:\n";
	for(int i=0;i < this->num_constraint; i++)
	{
		constraints[i].print_eq();		
	}

}

void problem::solve()
{
}

void problem::print_sol()
{
}

void print_fulsol()
{
}
