// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

#include PLATFORM_HEADER
#include CONFIGURATION_HEADER
#include "af.h"

// Init function declarations.
void emberAfMainInitCallback(void);  // Global
void emberAfInit(void);  // Global
void emberAfPluginEndDeviceSupportInitCallback(void);  // Plugin: end-device-support

void emAfInit(void)
{
  emberAfMainInitCallback();  // Global
  emberAfInit();  // Global
  emberAfPluginEndDeviceSupportInitCallback();  // Plugin: end-device-support
}

// Tick function declarations.
void emberAfMainTickCallback(void);  // Global
void emberAfTick(void);  // Global
void emberAfPluginEndDeviceSupportTickCallback(void);  // Plugin: end-device-support
void emberAfPluginIdleSleepTickCallback(void);  // Plugin: idle-sleep

void emAfTick(void)
{
  emberAfMainTickCallback();  // Global
  emberAfTick();  // Global
  emberAfPluginEndDeviceSupportTickCallback();  // Plugin: end-device-support
  emberAfPluginIdleSleepTickCallback();  // Plugin: idle-sleep
}

// ResetAttributes function declarations.
void emAfPluginPollControlServerResetAttributesCallback(uint8_t endpointId);  // Plugin: poll-control-server

void emAfResetAttributes(uint8_t endpointId)
{
  emAfPluginPollControlServerResetAttributesCallback(endpointId);  // Plugin: poll-control-server
}

// PreCommandReceived function declarations.
bool emberAfPreCommandReceivedCallback(EmberAfClusterCommand* cmd);  // Global

bool emAfPreCommandReceived(EmberAfClusterCommand* cmd)
{
  return emberAfPreCommandReceivedCallback(cmd);  // Global
}

// PreZDOMessageReceived function declarations.
bool emberAfPreZDOMessageReceivedCallback(EmberNodeId emberNodeId,EmberApsFrame* apsFrame,uint8_t* message,uint16_t length);  // Global

bool emAfPreZDOMessageReceived(EmberNodeId emberNodeId,EmberApsFrame* apsFrame,uint8_t* message,uint16_t length)
{
  return emberAfPreZDOMessageReceivedCallback(emberNodeId, apsFrame, message, length);  // Global
}

bool emAfRetrieveAttributeAndCraftResponse(uint8_t endpoint, EmberAfClusterId clusterId, EmberAfAttributeId attrId, uint8_t mask, uint16_t maunfacturerCode, uint16_t readLength)
{
  return 0; // false
}

// ZigbeeKeyEstablishment function declarations.
void emberAfZigbeeKeyEstablishmentCallback(EmberEUI64 partner, EmberKeyStatus status);  // Global
void emberAfPluginUpdateTcLinkKeyZigbeeKeyEstablishmentCallback(EmberEUI64 partner, EmberKeyStatus status);  // Plugin: update-tc-link-key

void emAfZigbeeKeyEstablishment(EmberEUI64 partner, EmberKeyStatus status)
{
  emberAfZigbeeKeyEstablishmentCallback(partner, status);  // Global
  emberAfPluginUpdateTcLinkKeyZigbeeKeyEstablishmentCallback(partner, status);  // Plugin: update-tc-link-key
}

// ReadAttributesResponse function declarations.
bool emberAfReadAttributesResponseCallback(EmberAfClusterId clusterId,uint8_t* buffer,uint16_t bufLen);  // Global

bool emAfReadAttributesResponse(EmberAfClusterId clusterId,uint8_t* buffer,uint16_t bufLen)
{
  return emberAfReadAttributesResponseCallback(clusterId, buffer, bufLen);  // Global
}

// ReportAttributes function declarations.
bool emberAfReportAttributesCallback(EmberAfClusterId clusterId,uint8_t * buffer,uint16_t bufLen);  // Global

bool emAfReportAttributes(EmberAfClusterId clusterId,uint8_t * buffer,uint16_t bufLen)
{
  return emberAfReportAttributesCallback(clusterId, buffer, bufLen);  // Global
}
