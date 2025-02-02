#include  <iostream>
#include <Windows.h>
#include<TLHelp32.h>
#include "client_dll.hpp"
#include "offsets.hpp"
#include "buttons.hpp"
#include <vector>
#include "vector.hpp"


class C_CSPlayerPawn
{
public:
	int health, team;

	Vector Position;

	uintptr_t pCSPlayerPawn;
};

inline C_CSPlayerPawn CCSPlayerPawn;

class Reader
{
public:
	uintptr_t client = 0;

	std::vector<C_CSPlayerPawn> playerList;

	void Main();
private:
	void FilterPlayers();
};