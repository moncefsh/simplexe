#include "get_equations.h"
#include <string>


void equation::print_eq()
{
	std::string mark;
	switch (type) {
		case smaller_eq:
			mark="<=";
			break;
		case equal_eq:
			mark="=";
			break;
		case bigger_eq:
			mark=">=";
			break;
		default:
			mark="";
			// i should throw an expection
	}
	for (int i = 0; i  <  num_var ; ++ i) {
		if(factors[i]==0) continue;
		if(factors[i]>0)
			std::cout<<"+";
		cout<<factors[i]<<" x_"<<i+1<<" ";
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



void problem::trans_eqs()
{
	for(int i=0;i < this->num_constraint ; i++)
	{
	       switch (this->constraints[i].type) {
	       	case smaller_eq :
	       		this->ecarts[i]=1; 
	       		break;
		case equal_eq :
			this->ecarts[i]=1;
			this->artifs[i]=1;
			break;
		case bigger_eq :
			this->ecarts[i]=-1;
			this->artifs[i]=1;
			break;
	       	default:
	       		ecarts[i]=0;
			artifs[i]=0;
		}
	}
}

void problem::print_table(){
	;
}

void problem::print_fulsol()
{
}
