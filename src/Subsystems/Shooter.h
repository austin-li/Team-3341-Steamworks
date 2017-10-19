#ifndef Shooter_H
#define Shooter_H
#include <WPILib.h>
#include "Commands/Subsystem.h"
#include "Encoder.h"
#include "ctrlib/CANTalon.h"
using namespace frc;
//using namespace
class Shooter: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	CANTalon* shooter;
	double setPoint;
	Servo* servo;
public:
	Shooter();
	//void InitDefaultCommand();
	void setSpeed(double speed);
	double getSpeed();
	double getEncoderVel();
	void setPID();bool disable(bool button);
	void loadBall();
	void setPIDConstants(double F, double P, double I, double D);
	void setServo(int angle);

};

#endif  // Shooter_H
