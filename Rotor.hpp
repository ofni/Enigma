#ifndef DEF_ROTOR
#define DEF_ROTOR

#include <vector>
#include <string>
#include <iostream>
#include <string>


class Rotor
{
public:
    // Constructeur
    Rotor();
    Rotor(char internalWiring[2][26], const int &ringSetting, const int &startPosition, const char &stepping1 = 'z', const char &stepping2 = ' ', const std::string &name = "noName");
    // Methodes
    void get_permutationTab();
	int get_ringSetting();
	int get_rotorPosition();

	void set_rotorPosition(int i);
	void set_ringSetting(int i);

    char activate(char charToPermute,int sens=1);
    void rotate(int decalage=0);
	int isValidChar(char c);


private :
    // Attributs

	std::string m_name;

	int m_ringSetting;
	int m_startPosition;
	int m_position;

	char m_steppingPosition1;
	char m_steppingPosition2;

	char m_internalWiringTab[2][26];
	//char (*m_internalWiring)[26][2];

    //Methodes
    int m_seek(char x, char S);
	int charToInt(char x);
	char intToChar(int i);

};

#endif


