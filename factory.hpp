#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__


#include "base.hpp"
#include "op.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "pow.hpp"


#include<iostream>
#include<string>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

class AbstractFactory {
	public:
		Base* parse(char** input, int length) {
			
			char charInt;
			int intChar;
			Base* temp;
			Base* hold;
			for(int i = 1; i < length; i++) {		
				if(strcmp(input[i],"1") == 0 ) {
					temp = new Op(1);
				}
				else if(strcmp(input[i],"2") == 0) {
					temp = new Op(2);
				}
				else if(strcmp(input[i],"3") == 0) {
					temp = new Op(3);
				}
				else if(strcmp(input[i],"4") == 0) {
					temp = new Op(4);
				}
				else if(strcmp(input[i],"5") == 0) {
					temp = new Op(5);
				}
				else if(strcmp(input[i],"6") == 0) {
					temp = new Op(6);
				}
				else if(strcmp(input[i],"7") == 0) {
					temp = new Op(7);
				}
				else if(strcmp(input[i],"8") == 0) {
					temp = new Op(8);
				}
				else if(strcmp(input[i],"9") == 0) {
					temp = new Op(9);
				}
				else if(strcmp(input[i],"+") == 0) {	
					if(strcmp(input[i+1],"1") == 0 ) {
                        	                hold = new Op(1);
                        	        }
                        	        else if(strcmp(input[i+1],"2") == 0) {
                        	                hold = new Op(2);
                        	        }
                        	        else if(strcmp(input[i+1],"3") == 0) {
                        	                hold = new Op(3);
                        	        }
                        	        else if(strcmp(input[i+1],"4") == 0) {
                                        	hold = new Op(4);
	                                }
	                                else if(strcmp(input[i+1],"5") == 0) {
	                                        hold = new Op(5);
	                                }
	                                else if(strcmp(input[i+1],"6") == 0) {
	                                        hold = new Op(6);
	                                }
	                                else if(strcmp(input[i+1],"7") == 0) {
	                                        hold = new Op(7);
	                                }
	                                else if(strcmp(input[i+1],"8") == 0) {
	                                        hold = new Op(8);
	                                }
	                                else if(strcmp(input[i+1],"9") == 0) {
	                                        hold = new Op(9);
	                                }
					temp = new Add(temp,hold);
					++i;
				}
                                else if(strcmp(input[i],"-") == 0) {
                                        if(strcmp(input[i+1],"1") == 0 ) {
                                                hold = new Op(1);
                                        }
                                        else if(strcmp(input[i+1],"2") == 0) {
                                                hold = new Op(2);
                                        }
                                        else if(strcmp(input[i+1],"3") == 0) {
                                                hold = new Op(3);
                                        }
                                        else if(strcmp(input[i+1],"4") == 0) {
                                                hold = new Op(4);
                                        }
                                        else if(strcmp(input[i+1],"5") == 0) {
                                                hold = new Op(5);
                                        }
                                        else if(strcmp(input[i+1],"6") == 0) {
                                                hold = new Op(6);
                                        }
                                        else if(strcmp(input[i+1],"7") == 0) {
                                                hold = new Op(7);
                                        }
                                        else if(strcmp(input[i+1],"8") == 0) {
                                                hold = new Op(8);
                                        }
                                        else if(strcmp(input[i+1],"9") == 0) {
                                                hold = new Op(9);
                                        }
                                        temp = new Sub(temp,hold);
                                        ++i;
                                }
				else if(strcmp(input[i],"/") == 0) {
                                        if(strcmp(input[i+1],"1") == 0 ) {
                                                hold = new Op(1);
                                        }
                                        else if(strcmp(input[i+1],"2") == 0) {
                                                hold = new Op(2);
                                        }
                                        else if(strcmp(input[i+1],"3") == 0) {
                                                hold = new Op(3);
                                        }
                                        else if(strcmp(input[i+1],"4") == 0) {
                                                hold = new Op(4);
                                        }
                                        else if(strcmp(input[i+1],"5") == 0) {
                                                hold = new Op(5);
                                        }
                                        else if(strcmp(input[i+1],"6") == 0) {
                                                hold = new Op(6);
                                        }
                                        else if(strcmp(input[i+1],"7") == 0) {
                                                hold = new Op(7);
                                        }
                                        else if(strcmp(input[i+1],"8") == 0) {
                                                hold = new Op(8);
                                        }
                                        else if(strcmp(input[i+1],"9") == 0) {
                                                hold = new Op(9);
                                        }
                                        temp = new Div(temp,hold);
                                        ++i;
				}
				else if(strcmp(input[i],"*") == 0) {
                                        if(strcmp(input[i+1],"1") == 0 ) {
                                                hold = new Op(1);
                                        }
                                        else if(strcmp(input[i+1],"2") == 0) {
                                                hold = new Op(2);
                                        }
                                        else if(strcmp(input[i+1],"3") == 0) {
                                                hold = new Op(3);
                                        }
                                        else if(strcmp(input[i+1],"4") == 0) {
                                                hold = new Op(4);
                                        }
                                        else if(strcmp(input[i+1],"5") == 0) {
                                                hold = new Op(5);
                                        }
                                        else if(strcmp(input[i+1],"6") == 0) {
                                                hold = new Op(6);
                                        }
                                        else if(strcmp(input[i+1],"7") == 0) {
                                                hold = new Op(7);
                                        }
                                        else if(strcmp(input[i+1],"8") == 0) {
                                                hold = new Op(8);
                                        }
                                        else if(strcmp(input[i+1],"9") == 0) {
                                                hold = new Op(9);
                                        }
                                        temp = new Mult(temp,hold);
                                        ++i;
				}
                                else if(strcmp(input[i],"**") == 0) {
                                        if(strcmp(input[i+1],"1") == 0 ) {
                                                hold = new Op(1);
                                        }
                                        else if(strcmp(input[i+1],"2") == 0) {
                                                hold = new Op(2);
                                        }
                                        else if(strcmp(input[i+1],"3") == 0) {
                                                hold = new Op(3);
                                        }
                                        else if(strcmp(input[i+1],"4") == 0) {
                                                hold = new Op(4);
                                        }
                                        else if(strcmp(input[i+1],"5") == 0) {
                                                hold = new Op(5);
                                        }
                                        else if(strcmp(input[i+1],"6") == 0) {
                                                hold = new Op(6);
                                        }
                                        else if(strcmp(input[i+1],"7") == 0) {
                                                hold = new Op(7);
                                        }
                                        else if(strcmp(input[i+1],"8") == 0) {
                                                hold = new Op(8);
                                        }
                                        else if(strcmp(input[i+1],"9") == 0) {
                                                hold = new Op(9);
                                        }
                                        temp = new Pow(temp,hold);
                                        ++i;
                                }

			}
			return temp;
		}
};

			

#endif //__FACTORY_HPP__
