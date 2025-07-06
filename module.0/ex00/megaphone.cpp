// ╔═══════════════════════════════════════════════════════════════════════════╗
// ║   file:       megaphone.cpp                                               ║
// ║   created:    2025/07/06 04:23                                            ║
// ║   updated:    2025/07/06 04:23                                            ║
// ║                                                                           ║
// ║   ── code signed by .frnki <frnki@frnki.dev>                              ║
// ╚═══════════════════════════════════════════════════════════════════════════╝
#include <iostream>
#include <string>
#include <cctype>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return(0);
	}
	for (int i = 1; i < argc; ++i)
	{
		std::string arg = argv[i];
		for (size_t j = 0; j < arg.length(); ++j)
			std::cout << static_cast<char>(std::toupper(arg[j]));
	}
	std::cout << std::endl;
	return (0);
}
