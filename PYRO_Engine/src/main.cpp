#include <iostream>

enum BUILD_MODE {
	DEBUG_MODE = 0, RELEASE_MODE = 1
};

void LOG_GET_BUILD_MODE(BUILD_MODE* mode)
{
*mode = BUILD_MODE::RELEASE_MODE;
#ifdef _DEBUG
	*mode = BUILD_MODE::DEBUG_MODE;
#endif //DEBUG
}


int main(void)
{
	std::cout << "Hello GitHub!" << std::endl;

	std::cout << std::endl;

	BUILD_MODE currentMode;

	LOG_GET_BUILD_MODE(&currentMode);
	if (currentMode == BUILD_MODE::DEBUG_MODE)
		std::cout << "Current build mode is debug" << std::endl;
	else
		std::cout << "Current build mode is release" << std::endl;

	int x = 0;
	std::cin >> x;

	return 0;
}
