// JOHN ALEXANDER LE ROUX
#include "main.hpp"

MainClass mainClass;

int main(int argc, char* argv[])
{
	// Terminal interaction
	if (argc >= 2)
	{
		if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)
		{
			std::cout << "Commands: \n";
			std::cout << "-h or --help        Help Menu\n";
			std::cout << "-v or --version     Program Version\n";
			std::cout << "-c or --copyright   Copyright Notice\n";
			return 0;
		}

		if (strcmp(argv[1], "-v") == 0 || strcmp(argv[1], "--version") == 0)
		{
			std::cout << "   Name: " << PROJECT_NAME << '\n';
			std::cout << "Version: " << PROJECT_VER << '\n';
			return 0;
		}

		if (strcmp(argv[1], "-c") == 0 || strcmp(argv[1], "--copyright") == 0)
		{
			std::string licenseText;
			std::ifstream licenseFile("LICENSE");
			if (licenseFile.fail())
			{
				std::cout << "Can NOT find the license! Please DO NOT remove the license from this project!!\n";
			}
			while (std::getline(licenseFile, licenseText))
			{
				std::cout << licenseText << '\n';
			}
			return 0;
		}
		std::cout << "Sorry, \"" << argv[1] << "\" is not a command!\n";
		std::cout << "Please use '--help' for a list of commands\n";
		return 1;
	}

	// Regular interaction
	std::cout << "Hello World!\n";
	return 0;
}
