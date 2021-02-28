#include "sub.hpp"

Sub::Sub(Base* l, Base*r)
{
    this->left = l;
    this->right = r;
};

double Sub::evaluate()
{
    return this->left->evaluate() - this->right->evaluate();
};

std::string Sub::stringify()
{
    return "(" + this->left->stringify() + "-" + this->right->stringify() + ")";
};
