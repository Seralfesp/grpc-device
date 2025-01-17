
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-RFMXWLAN-RESTRICTED.
//---------------------------------------------------------------------
#include "nirfmxwlan_restricted_client.h"

#include <grpcpp/grpcpp.h>

#include <nirfmxwlan_restricted.grpc.pb.h>

#include <cstdint>
#include <memory>
#include <stdexcept>
#include <vector>

namespace nirfmxwlan_restricted_grpc::experimental::client {

GetChannelListResponse
get_channel_list(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& selector_string, const pb::int32& wlan_band)
{
  ::grpc::ClientContext context;

  auto request = GetChannelListRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_selector_string(selector_string);
  request.set_wlan_band(wlan_band);

  auto response = GetChannelListResponse{};

  raise_if_error(
      stub->GetChannelList(&context, request, &response),
      context);

  return response;
}

OFDMModAccFetchCommonPilotErrorTraceIndBResponse
ofdm_mod_acc_fetch_common_pilot_error_trace_ind_b(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& selector_string, const double& timeout)
{
  ::grpc::ClientContext context;

  auto request = OFDMModAccFetchCommonPilotErrorTraceIndBRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_selector_string(selector_string);
  request.set_timeout(timeout);

  auto response = OFDMModAccFetchCommonPilotErrorTraceIndBResponse{};

  raise_if_error(
      stub->OFDMModAccFetchCommonPilotErrorTraceIndB(&context, request, &response),
      context);

  return response;
}

OFDMModAccNoiseCalibrateResponse
ofdm_mod_acc_noise_calibrate(const StubPtr& stub, const nidevice_grpc::Session& instrument, const std::string& selector_string, const pb::int32& shared_lo_connection)
{
  ::grpc::ClientContext context;

  auto request = OFDMModAccNoiseCalibrateRequest{};
  request.mutable_instrument()->CopyFrom(instrument);
  request.set_selector_string(selector_string);
  request.set_shared_lo_connection(shared_lo_connection);

  auto response = OFDMModAccNoiseCalibrateResponse{};

  raise_if_error(
      stub->OFDMModAccNoiseCalibrate(&context, request, &response),
      context);

  return response;
}


} // namespace nirfmxwlan_restricted_grpc::experimental::client
