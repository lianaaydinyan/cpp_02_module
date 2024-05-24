#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP


class FragTrap : public ClapTrap
{
	private:
		int		capasity;
	public:
		FragTrap(std::string str);
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap& obj);
		FragTrap operator=(const FragTrap& obj);
		void	highFivesGuys(void);
};

#endif