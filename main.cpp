
#include "add.hpp"
#include "base.hpp"
#include "factory.hpp"
#include<iostream>

int main(int argc, char** argv) {
	AbstractFactory test;
	Base* root = test.parse(argv, argc);
	cout << root->stringify() << endl << root->evaluate() << endl;
	

}
