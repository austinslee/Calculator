#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

using namespace std;

class Op : public Base {
    public:
	double val;
        Op(double value) : Base() { this->val = value; }
        virtual double evaluate() { return val; }
        virtual string stringify() { 
		string stringVal = to_string(val);
		return stringVal;
	}
	
};




#endif //__OP_HPP__
