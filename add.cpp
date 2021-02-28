#include "add.hpp"


Add::Add(Base* l, Base* r)
{
    this->left=l;
    this->right=r;
};

double Add::evaluate()
{
    return this->left->evaluate() + this->right->evaluate();
};

std::string Add::stringify()
{
    return "(" + this->left->stringify() + "+" + this->right->stringify() + ")";
};
