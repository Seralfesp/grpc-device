
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-RFMXINSTR.
//---------------------------------------------------------------------
#ifndef NIRFMXINSTR_GRPC_CLIENT_H
#define NIRFMXINSTR_GRPC_CLIENT_H

#include <grpcpp/grpcpp.h>

#include <nirfmxinstr.grpc.pb.h>
#include <tests/utilities/client_helpers.h>

#include <memory>
#include <vector>

namespace nirfmxinstr_grpc::experimental::client {

namespace pb = ::google::protobuf;
using StubPtr = std::unique_ptr<NiRFmxInstr::Stub>;
using namespace nidevice_grpc::experimental::client;


BuildCalibrationPlaneStringResponse build_calibration_plane_string(const StubPtr& stub, const pb::string& calibration_plane_name);
BuildInstrumentStringResponse build_instrument_string(const StubPtr& stub, const pb::string& selector_string, const pb::int32& instrument_number);
BuildLOStringResponse build_lo_string(const StubPtr& stub, const pb::string& selector_string, const pb::int32& lo_index);
BuildModuleStringResponse build_module_string(const StubPtr& stub, const pb::string& selector_string, const pb::string& module_name);
BuildPortStringResponse build_port_string(const StubPtr& stub, const pb::string& selector_string, const pb::string& port_name, const pb::string& device_name, const pb::int32& channel_number);
CfgExternalAttenuationInterpolationLinearResponse cfg_external_attenuation_interpolation_linear(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const pb::string& table_name, const simple_variant<LinearInterpolationFormat, pb::int32>& format);
CfgExternalAttenuationInterpolationNearestResponse cfg_external_attenuation_interpolation_nearest(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const pb::string& table_name);
CfgExternalAttenuationInterpolationSplineResponse cfg_external_attenuation_interpolation_spline(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const pb::string& table_name);
CfgExternalAttenuationTableResponse cfg_external_attenuation_table(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const pb::string& table_name, const std::vector<double>& frequency, const std::vector<double>& external_attenuation);
CfgFrequencyReferenceResponse cfg_frequency_reference(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const simple_variant<FrequencyReferenceSource, std::string>& frequency_reference_source, const double& frequency_reference_frequency);
CfgMechanicalAttenuationResponse cfg_mechanical_attenuation(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const simple_variant<MechanicalAttenuationAuto, pb::int32>& mechanical_attenuation_auto, const double& mechanical_attenuation_value);
CfgRFAttenuationResponse cfg_rf_attenuation(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const simple_variant<RFAttenuationAuto, pb::int32>& rf_attenuation_auto, const double& rf_attenuation_value);
CfgSParameterExternalAttenuationTableResponse cfg_s_parameter_external_attenuation_table(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const pb::string& table_name, const std::vector<double>& frequency, const std::vector<nidevice_grpc::NIComplexNumber>& s_parameters, const pb::int32& number_of_ports, const simple_variant<SParameterOrientation, pb::int32>& s_parameter_orientation);
CfgSParameterExternalAttenuationTypeResponse cfg_s_parameter_external_attenuation_type(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<SParameterType, pb::int32>& s_parameter_type);
CheckAcquisitionStatusResponse check_acquisition_status(const StubPtr& stub, const nidevice_grpc::Session& instrument);
CheckIfListExistsResponse check_if_list_exists(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& list_name);
CheckIfSignalConfigurationExistsResponse check_if_signal_configuration_exists(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& signal_name);
CloseResponse close(const StubPtr& stub, const nidevice_grpc::Session& instrument, const simple_variant<Boolean, pb::int32>& force_destroy);
DeleteAllExternalAttenuationTablesResponse delete_all_external_attenuation_tables(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string);
DeleteExternalAttenuationTableResponse delete_external_attenuation_table(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const pb::string& table_name);
DisableCalibrationPlaneResponse disable_calibration_plane(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string);
EnableCalibrationPlaneResponse enable_calibration_plane(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string);
ExportSignalResponse export_signal(const StubPtr& stub, const nidevice_grpc::Session& instrument, const simple_variant<ExportSignalSource, pb::int32>& export_signal_source, const pb::string& export_signal_output_terminal);
GetAttributeF32Response get_attribute_f32(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeF32ArrayResponse get_attribute_f32_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeF64Response get_attribute_f64(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeF64ArrayResponse get_attribute_f64_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeI16Response get_attribute_i16(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeI32Response get_attribute_i32(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeI32ArrayResponse get_attribute_i32_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeI64Response get_attribute_i64(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeI64ArrayResponse get_attribute_i64_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeI8Response get_attribute_i8(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeI8ArrayResponse get_attribute_i8_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeNIComplexDoubleArrayResponse get_attribute_ni_complex_double_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeNIComplexSingleArrayResponse get_attribute_ni_complex_single_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeStringResponse get_attribute_string(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeU16Response get_attribute_u16(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeU32Response get_attribute_u32(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeU32ArrayResponse get_attribute_u32_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeU64ArrayResponse get_attribute_u64_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeU8Response get_attribute_u8(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAttributeU8ArrayResponse get_attribute_u8_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
GetAvailablePortsResponse get_available_ports(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string);
GetErrorResponse get_error(const StubPtr& stub, const nidevice_grpc::Session& instrument);
GetErrorStringResponse get_error_string(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::int32& error_code);
GetExternalAttenuationTableActualValueResponse get_external_attenuation_table_actual_value(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string);
GetListNamesResponse get_list_names(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<Personality, pb::int32>& personality_filter);
GetNIRFSASessionResponse get_nirfsa_session(const StubPtr& stub, const nidevice_grpc::Session& instrument);
GetNIRFSASessionArrayResponse get_nirfsa_session_array(const StubPtr& stub, const nidevice_grpc::Session& instrument);
GetSelfCalibrateLastDateAndTimeResponse get_self_calibrate_last_date_and_time(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<SelfCalStep, pb::int64>& self_calibrate_step);
GetSelfCalibrateLastTemperatureResponse get_self_calibrate_last_temperature(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<SelfCalStep, pb::int64>& self_calibrate_step);
GetSignalConfigurationNamesResponse get_signal_configuration_names(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<Personality, pb::int32>& personality_filter);
InitializeResponse initialize(const StubPtr& stub, const pb::string& resource_name, const pb::string& option_string);
InitializeFromNIRFSASessionResponse initialize_from_nirfsa_session(const StubPtr& stub, const nidevice_grpc::Session& nirfsa_session);
InitializeFromNIRFSASessionArrayResponse initialize_from_nirfsa_session_array(const StubPtr& stub, const std::vector<pb::uint32>& nirfsa_sessions);
IsSelfCalibrateValidResponse is_self_calibrate_valid(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string);
LoadAllConfigurationsResponse load_all_configurations(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& file_path, const pb::int32& load_rf_instr_configuration);
LoadSParameterExternalAttenuationTableFromS2PFileResponse load_s_parameter_external_attenuation_table_from_s2p_file(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const pb::string& table_name, const pb::string& s2_p_file_path, const simple_variant<SParameterOrientation, pb::int32>& s_parameter_orientation);
ResetAttributeResponse reset_attribute(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id);
ResetDriverResponse reset_driver(const StubPtr& stub, const nidevice_grpc::Session& instrument);
ResetEntireSessionResponse reset_entire_session(const StubPtr& stub, const nidevice_grpc::Session& instrument);
ResetToDefaultResponse reset_to_default(const StubPtr& stub, const nidevice_grpc::Session& instrument);
SaveAllConfigurationsResponse save_all_configurations(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& file_path);
SelectActiveExternalAttenuationTableResponse select_active_external_attenuation_table(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const pb::string& table_name);
SelfCalibrateResponse self_calibrate(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<SelfCalStep, pb::int32>& steps_to_omit);
SelfCalibrateRangeResponse self_calibrate_range(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& selector_string, const simple_variant<SelfCalStep, pb::int32>& steps_to_omit, const double& minimum_frequency, const double& maximum_frequency, const double& minimum_reference_level, const double& maximum_reference_level);
SendSoftwareEdgeAdvanceTriggerResponse send_software_edge_advance_trigger(const StubPtr& stub, const nidevice_grpc::Session& instrument);
SendSoftwareEdgeStartTriggerResponse send_software_edge_start_trigger(const StubPtr& stub, const nidevice_grpc::Session& instrument);
SetAttributeF32Response set_attribute_f32(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const float& attr_val);
SetAttributeF32ArrayResponse set_attribute_f32_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const std::vector<float>& attr_val);
SetAttributeF64Response set_attribute_f64(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const double& attr_val);
SetAttributeF64ArrayResponse set_attribute_f64_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const std::vector<double>& attr_val);
SetAttributeI16Response set_attribute_i16(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const pb::int32& attr_val);
SetAttributeI32Response set_attribute_i32(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const simple_variant<NiRFmxInstrInt32AttributeValues, pb::int32>& attr_val);
SetAttributeI32ArrayResponse set_attribute_i32_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const std::vector<pb::int32>& attr_val);
SetAttributeI64Response set_attribute_i64(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const pb::int64& attr_val);
SetAttributeI64ArrayResponse set_attribute_i64_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const std::vector<pb::int64>& attr_val);
SetAttributeI8Response set_attribute_i8(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const pb::int32& attr_val);
SetAttributeI8ArrayResponse set_attribute_i8_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const std::vector<pb::int32>& attr_val);
SetAttributeNIComplexDoubleArrayResponse set_attribute_ni_complex_double_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const std::vector<nidevice_grpc::NIComplexNumber>& attr_val);
SetAttributeNIComplexSingleArrayResponse set_attribute_ni_complex_single_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const std::vector<nidevice_grpc::NIComplexNumberF32>& attr_val);
SetAttributeStringResponse set_attribute_string(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const simple_variant<NiRFmxInstrStringAttributeValuesMapped, std::string>& attr_val);
SetAttributeU16Response set_attribute_u16(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const pb::uint32& attr_val);
SetAttributeU32Response set_attribute_u32(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const pb::uint32& attr_val);
SetAttributeU32ArrayResponse set_attribute_u32_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const std::vector<pb::uint32>& attr_val);
SetAttributeU64ArrayResponse set_attribute_u64_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const std::vector<pb::uint64>& attr_val);
SetAttributeU8Response set_attribute_u8(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const pb::uint32& attr_val);
SetAttributeU8ArrayResponse set_attribute_u8_array(const StubPtr& stub, const nidevice_grpc::Session& instrument, const pb::string& channel_name, const NiRFmxInstrAttribute& attribute_id, const pb::string& attr_val);
TimestampFromValuesResponse timestamp_from_values(const StubPtr& stub, const pb::int64& seconds_since1970, const double& fractional_seconds);
ValuesFromTimestampResponse values_from_timestamp(const StubPtr& stub, const google::protobuf::Timestamp& timestamp);
WaitForAcquisitionCompleteResponse wait_for_acquisition_complete(const StubPtr& stub, const nidevice_grpc::Session& instrument, const double& timeout);

} // namespace nirfmxinstr_grpc::experimental::client

#endif /* NIRFMXINSTR_GRPC_CLIENT_H */