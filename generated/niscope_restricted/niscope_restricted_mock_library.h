//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Mock of LibraryInterface for NI-SCOPE-RESTRICTED
//---------------------------------------------------------------------
#ifndef NISCOPE_RESTRICTED_GRPC_MOCK_LIBRARY_H
#define NISCOPE_RESTRICTED_GRPC_MOCK_LIBRARY_H

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "niscope_restricted_library_interface.h"

namespace ni {
namespace tests {
namespace unit {

class NiScopeRestrictedMockLibrary : public niscope_restricted_grpc::NiScopeRestrictedLibraryInterface {
 public:
  MOCK_METHOD(ViStatus, GetError, (ViSession vi, ViStatus* errorCode, ViInt32 bufferSize, ViChar description[]), (override));
  MOCK_METHOD(ViStatus, GetErrorMessage, (ViSession vi, ViStatus errorCode, ViInt32 bufferSize, ViChar errorMessage[]), (override));
  MOCK_METHOD(ViStatus, GetStartTimestampInformation, (ViSession vi, ViUInt32* sysTimeIn128BitsT1, ViUInt32* sysTimeIn128BitsT2, ViUInt32* sysTimeIn128BitsT3, ViUInt32* sysTimeIn128BitsT4, ViReal64* deviceTimeInAbsoluteTimeUnits), (override));
};

}  // namespace unit
}  // namespace tests
}  // namespace ni
#endif  // NISCOPE_RESTRICTED_GRPC_MOCK_LIBRARY_H