#include "lab05-templates.h"


int main() {
	auto a1 = min_my(std::string("a"), std::string(100, 'x'));
	assert(a1 == "a");
}
