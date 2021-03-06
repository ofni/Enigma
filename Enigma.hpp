#ifndef ENIGMA_H
#define ENIGMA_H

#include "Rotor.hpp"
#include "Reflector.hpp"
#include "Machine.hpp"

// To use without precompilation
#include<string>
#include<vector>
#include<map>

#include <iostream>
#include <fstream>
#include <iostream>



#include <boost/property_tree/xml_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost/foreach.hpp>
#include <boost/tokenizer.hpp>
#include <boost/token_iterator.hpp>




class Enigma
{

public:
	
	Enigma();
	~Enigma();

	void init();

	Machine get_machine(std::string name);






protected:



private:
	std::map<std::string, Machine> m_availableMachine;
	std::map<std::string, Rotor> m_availableRotor;
	std::map<std::string, Reflector> m_availableReflector;

};



#endif // ENIGMA_H