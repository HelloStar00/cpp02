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
	// ���ϸ� Ŭ������ ���� ������ (����) ����
	Pokemon* pokemon;
	// �����ͷ� ���ϸ� Ŭ������ ��ü ����Ű��
	pokemon = new Pokemon();
	pokemon->attack();
	delete pokemon;
	// �����ͷ� ��ī�� Ŭ������ ��ü ����Ű��
	pokemon = new Picachu();
	pokemon->attack();
	delete pokemon;
	return 0;
}