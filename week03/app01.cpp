#include <iostream>
#include <string>
using namespace std;

class Pokemon {
public:
	virtual void attack() const { cout << "attack" << endl; }
};

class Picachu : public Pokemon	// is-a
{
public:
	virtual void attack() const { cout << "electric attack" << endl; }
};

int main() {

	Pokemon* pokemon;

	pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;

	pokemon = new Picachu();
	pokemon->attack();
	delete pokemon;
	return 0;
}

/*
	출력 :
	attack
	attack
*/

/*
	virtual 추가 후 출력:

*/