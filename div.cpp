#include "div.hpp"

Div::Div(Base* l, Base*r)
{
    this->left = l;
    this->right = r;
};

double Div::evaluate()
{
    return this->left->evaluate() / this->right->evaluate();
};

std::string Div::stringify()
{
    return "(" + this->left->stringify() + "/" + this->right->stringify() + ")";
};
