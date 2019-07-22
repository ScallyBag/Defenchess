/*
    Defenchess, a chess engine
    Copyright 2017-2019 Can Cetin, Dogac Eldenk

    Defenchess is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Defenchess is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Defenchess.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifdef __TUNE__

#ifndef TUNE_H
#define TUNE_H

#include <vector>
#include <iostream>

typedef struct Parameter {
    int *variable;
    int value;
    std::string name;
    bool increasing;
    int stability;
} Parameter;

void init_parameters(std::vector<Parameter> &parameters);
void init_pst(std::vector<Parameter> &parameters);
void init_mobility(std::vector<Parameter> &parameters);
void tune();

#endif

#endif