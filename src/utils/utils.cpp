#include "utils/utils.hpp"

std::string Utils::tolower(std::string &str) {
	std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {
		return std::tolower(c);
	});
	return str;
}