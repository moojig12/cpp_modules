#pragma once

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
private:
    bool    _guardStatus;
public:
    void    guardGate();
}

#endif