//--------------------------------------------------------
//  Zelda Classic
//
//  alleg_compat.cpp
//
//  Compatibility between allegro versions.
//
//--------------------------------------------------------

#include <allegro.h>

PACKFILE *pack_fopen_password(const char *filename, const char *mode, const char *password) {
	packfile_password(password);
	PACKFILE *result = pack_fopen(filename, mode);
	packfile_password("");
	return result;
}

uint64_t file_size_ex_password(const char *filename, const char *password) {
	packfile_password(password);
	uint64_t result = file_size_ex(filename);
	packfile_password("");
	return result;
}
