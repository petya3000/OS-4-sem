﻿// NumberLib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "framework.h"
#include"NumberLib.h"

	Number::Number(float param) { number = param; }
	Number Number::operator+(Number a) { return Number(number + a.number); }
	Number Number::operator-(Number a) { return Number(number - a.number); }
	Number Number::operator*(Number a) { return Number(number * a.number); }
	Number Number::operator/(Number a) { return Number(number / a.number); }
	float Number::get() { return number; }
	Number createNumber(float value) { return Number(value); }



