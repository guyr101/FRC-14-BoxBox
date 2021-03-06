#ifndef SUBSYSTEMS_HPP
#define SUBSYSTEMS_HPP

#include "drive_base.hpp"
#include "outtake.hpp"

// A copy of each subsystem on the robot, to be shared among the commands which
// require them.
namespace Subsystems {
	extern Drive_Base * drive_base;
	extern Outtake * outtake;
	void initialize();
}

#endif // SUBSYSTEMS_HPP
