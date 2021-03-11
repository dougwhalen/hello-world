#include<iostream>
#include<cmath>

// this does the samething as reletivisticball.py but in c++


int main () {


float g, t, c; 
float newton, einstein;

g = 9.81f;
t = 2.0f;
c = 299792458;

	//this is newton freefall
	newton = 0.5 * g *pow(t,2);
	
	// thisi is einstein freefall
	einstein = 2 * pow(c,2) / g *pow(sinh(0.5*(g/c) * t), 2);
	
	std::cout << "This is Newton's freefall\n"<<std::scientific;
	std::cout << newton;
	
	
	std::cout << "This is Einstein's freefall\n"<< std::scientific;
       std::cout << einstein;
	
	
	std::cout << "this is the difference in both\n"<< std::scientific;
	std::cout << newton- einstein;
	
	
	
	
	
	
	}
