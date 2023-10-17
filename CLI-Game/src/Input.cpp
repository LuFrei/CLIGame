#include <iostream>
#include <Windows.h>
#include "Input.h"

bool GetKeyDown(KeyCode key) {
	std::cout << "calling GetKeyDown from Input namespace" << std::endl;
	return GetKeyState(key) & KeyState_Down;
}

// Would a filter for non-"Lock" keys be necessary?
bool GetKeyToggled(KeyCode key) {
	return key & KeyState_Toggled;
}
