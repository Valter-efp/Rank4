#include "./Includes/Harl.hpp"

static int	find_level(std::string level) {
	std::string	arr[4] = { "debug", "info", "warning", "error" };

	for(int i = 0; i < 4; i++) {
		if (!arr[i].compare(level))
			return (i);
	}
	return (-1);
}

void	Harl::complain( std::string level ) {
	void	(Harl::*fn[])(void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	int		index;

	index = find_level(level);
	if (index != -1)
		(this->*fn[index])();
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::debug( void ) {
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
	std::cout << std::endl;
}

void	Harl::info( void ) {
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}

void	Harl::error( void ) {
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}