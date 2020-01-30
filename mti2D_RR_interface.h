//This file is automatically generated. DO NOT EDIT!
#include <boost/asio.hpp> 
#include <RobotRaconteur.h>
#include "robotraconteur_generated.h"
#include <boost/signals2.hpp>
#pragma once
using namespace RobotRaconteur;
namespace pointcloud = com::robotraconteur::pointcloud;
namespace mti2D_RR_interface
{

class LineProfile;
class MTI2D;

class LineProfile : public RobotRaconteur::RRStructure {
public:
	int32_t length;
	RRArrayPtr<double > X_data;
	RRArrayPtr<double > Z_data;
	RRArrayPtr<int32_t >  I_data;

	//virtual std::string RRType() {return "mti2D_RR_interface.LineProfile";  }
};

class MTI2D
{
public:
//virtual RR_SHARED_PTR<LineProfile > get_lineProfile()=0;
//virtual void set_lineProfile(RR_SHARED_PTR<LineProfile > value)=0;

virtual pointcloud::PointCloudfPtr Capture()=0;

virtual std::string getPropertyValue(std::string propertyName)=0;

virtual void setExposureTime(std::string exposureTime)=0;

virtual void setAcquisitionLineTime(std::string acquisitionLineTime)=0;

virtual void setLaserDeactivated(std::string isOff)=0;

virtual void setSignalSelection(std::string signal)=0;

virtual void setIsDoubleSampling(std::string isDblSmpling)=0;


//virtual std::string RRType() {return "mti2D_RR_interface.MTI2D";  }
};

}
