/*
*   This file is part of DarkStore
*   Copyright (C) 2019-2021 Universal-Team
*
*   This program is free software: you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation, either version 3 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
*   Additional Terms 7.b and 7.c of GPLv3 apply to this file:
*       * Requiring preservation of specified reasonable legal notices or
*         author attributions in that material or in the Appropriate Legal
*         Notices displayed by works containing it.
*       * Prohibiting misrepresentation of the origin of that material,
*         or requiring that modified versions of such material be marked in
*         reasonable ways as different from the original version.
*/

#ifndef _DARKSTORE_ARGUMENT_PARSER_HPP
#define _DARKSTORE_ARGUMENT_PARSER_HPP

#include "json.hpp"
#include "store.hpp"
#include <string>

class ArgumentParser {
public:
	ArgumentParser(const std::string &file, const std::string &entry, int dlIndex);
	void Load();
	void Execute();
	bool GetValid() const { return this->isValid; };
private:
	std::unique_ptr<Store> store = nullptr;
	bool isValid = false;
	std::string file = "", executeEntry = "", entry = "";
	int dlIndex = -1, entryIndex = -1;
};

#endif