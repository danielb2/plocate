#ifndef PLOCATE_DEFAULT_DB_H
#define PLOCATE_DEFAULT_DB_H

#include <cstdlib>
#include <string>

inline std::string default_database_path()
{
#ifdef __APPLE__
	const char *home = std::getenv("HOME");
	if (home != nullptr && home[0] != '\0') {
		return std::string(home) + "/Library/Application Support/plocate/plocate.db";
	}
#endif
	return DBFILE;
}

#endif  // PLOCATE_DEFAULT_DB_H
