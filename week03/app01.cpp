#include <iostream>
#include <string>
using namespace std;

class Pokemon {
public:
	void attack() const { cout << "attack" << endl; }
};

class Picachu : public Pokemon	// is-a
{
public:
	void attack() const { cout << "electric attack" << endl; }
};

int main() {
	// 포켓몬 클래스에 대한 포인터 (소켓) 생성
	Pokemon* pokemon;
	// 포인터로 포켓몬 클래스의 객체 가리키기
	pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;
	// 포인터로 피카츄 클래스의 객체 가리키기
	pokemon = new Picachu();
	pokemon->attack();
	delete pokemon;
	return 0;
}