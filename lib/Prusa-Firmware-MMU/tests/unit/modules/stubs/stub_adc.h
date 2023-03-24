#pragma once

#include <stdint.h>
#include <vector>

namespace hal {
namespace adc {

using TADCData = std::vector<uint16_t>;

/// plan a vector of ADC values for the next steps
void ReinitADC(uint8_t channel, TADCData &&d, uint8_t ovsmpl);

/// set ADC value on a channel to some fixed value from now on
void SetADC(uint8_t channel, uint16_t value);

} // namespace adc
} // namespace hal
