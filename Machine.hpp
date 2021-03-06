#ifndef MACHINE_H
#define MACHINE_H

#include <string>
#include <vector>
#include <map>

#include "Rotor.hpp"
#include "Reflector.hpp"
#include "PlugBoard.hpp"

// To use without precompilation





class Machine
{
    public:
		Machine();

        Machine(std::string name,
				std::map<std::string, Rotor> availableRotor,
				std::map<std::string, Reflector> availableReflector,
				int rotorMumber,
				PlugBoard usedPlugboard);

        ~Machine();
		
		char initMachine(char c);
		char activate(char charToCrype);

		void initStartPosition(int rotorIndex, int postion);
		void initRingSetting(int rotorIndex, int setting);

		void setRotor(std::string rotorName, int position);


    protected:

		std::string m_name;
		
		int m_rotorMumber;
		
		std::map<std::string, Rotor> m_availableRotor;
		std::map<std::string, Reflector> m_availableReflector;
		
		std::vector<std::string> m_usedRotor;
		std::string m_usedReflector;
		PlugBoard m_usedPlugboard;

    private:

};

#endif // MACHINE_H
