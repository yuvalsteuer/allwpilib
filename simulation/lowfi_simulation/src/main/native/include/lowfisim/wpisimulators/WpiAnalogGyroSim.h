/*----------------------------------------------------------------------------*/
/* Copyright (c) 2008-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "lowfisim/GyroSim.h"
#include "lowfisim/SimulatorComponentBase.h"
#include "simulation/AnalogGyroSim.h"

namespace frc {
namespace sim {
namespace lowfi {

class WpiAnalogGyroSim : public SimulatorComponentBase, public GyroSim {
 public:
  explicit WpiAnalogGyroSim(int index);

  bool IsWrapperInitialized() const override;

  void SetAngle(double angle) override;
  double GetAngle() override;

 protected:
  frc::sim::AnalogGyroSim m_gyroSimulator;
};

}  // namespace lowfi
}  // namespace sim
}  // namespace frc
