/*
 * Artery V2X Simulation Framework
 * Copyright 2014-2017 Hendrik-Joern Guenther, Raphael Riebl, Oliver Trauer
 * Licensed under GPLv2, see COPYING file for detailed license and warranty terms.
 */

#ifndef ENVMOD_SENSORPOSITION_H_KCWHOGMB
#define ENVMOD_SENSORPOSITION_H_KCWHOGMB

// #include <boost/units/quantity.hpp>
// #include <boost/units/systems/angle/degrees.hpp>
#include "artery/utility/Geometry.h"
#include <unordered_map>
#include <string>

namespace artery
{

enum class SensorPosition
{
    VIRTUAL,
    FRONT,
    BACK,
    LEFT,
    RIGHT
};

boost::units::quantity<boost::units::degree::plane_angle> relativeAngle(SensorPosition pos);

// // 追加
// /**
//  * Get sensor angle relative to hosting vehicle's orientation
//  * \param pos sensor position
//  * \return sensor orientation relative to host's orientation
//  */
// Angle relativeAngle(SensorPosition pos);

// /**
//  * Determine sensor position by a given string identfiier
//  *
//  * \throws runtime exception if string matches no valid sensor position
//  * \param id position identification string
//  * \return sensor position
//  */
// SensorPosition determineSensorPosition(const std::string& id);


} // namespace artery

#endif /* ENVMOD_SENSORPOSITION_H_KCWHOGMB */
