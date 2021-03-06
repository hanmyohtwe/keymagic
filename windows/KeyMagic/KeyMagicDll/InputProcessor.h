#ifndef INPUTPROCESSOR_H_
#define INPUTPROCESSOR_H_

#include <windows.h>

#include "../global/global.h"
#include "common.h"

bool ProcessInput(WORD wcInput, LPARAM lParam);
bool matchRules(wchar_t wcInput, WORD wVk, LPBYTE KeyStates, bool user_input);
bool Undo();

#endif