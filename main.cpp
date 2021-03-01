
#include "add.hpp"
#include "base.hpp"
#include "factory.hpp"
#include<iostream>

int main(int argc, char** argv) {
	AbstractFactory test;
	Base* root = test.parse(argv, argc);
	if(root == nullptr) { cout << "null pointer returned" << endl; }
	else {
		cout << root->stringify() << endl << root->evaluate() << endl;
	}
	

}
