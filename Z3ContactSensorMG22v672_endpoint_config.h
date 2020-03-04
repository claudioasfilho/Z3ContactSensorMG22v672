// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef SILABS_AF_ENDPOINT_CONFIG
#define SILABS_AF_ENDPOINT_CONFIG


// Fixed number of defined endpoints
#define FIXED_ENDPOINT_COUNT (1)


// Generated defaults
#if BIGENDIAN_CPU
#define GENERATED_DEFAULTS { \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF /* 0,Default value: Over the Air Bootloading,OTA Upgrade Server ID */, \
0xFF, 0xFF, 0xFF, 0xFF /* 8,Default value: Over the Air Bootloading,Offset (address) into the file */, \
0x00, 0x00, 0x38, 0x40 /* 12,Default value: Poll Control,check-in interval */, \
0x00, 0x00, 0x00, 0x14 /* 16,Default value: Poll Control,long poll interval */, \
  }
#else // ! BIGENDIAN_CPU
#define GENERATED_DEFAULTS { \
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF /* 0,Default value: Over the Air Bootloading,OTA Upgrade Server ID */, \
0xFF, 0xFF, 0xFF, 0xFF /* 8,Default value: Over the Air Bootloading,Offset (address) into the file */, \
0x40, 0x38, 0x00, 0x00 /* 12,Default value: Poll Control,check-in interval */, \
0x14, 0x00, 0x00, 0x00 /* 16,Default value: Poll Control,long poll interval */, \
  }
#endif // BIGENDIAN_CPU




// Generated attributes
#define GENERATED_ATTRIBUTES { \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x03 } }, /* 0 / Basic / ZCL version*/\
    { 0x0007, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x00 } }, /* 1 / Basic / power source*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 2 / Basic / cluster revision*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 3 / Power Configuration / cluster revision*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 4 / Identify / cluster revision*/\
    { 0x0000, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x0000 } }, /* 5 / Identify / identify time*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 6 / Identify / cluster revision*/\
    { 0x0000, ZCL_IEEE_ADDRESS_ATTRIBUTE_TYPE, 8, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[0]) } }, /* 7 / Over the Air Bootloading / OTA Upgrade Server ID*/\
    { 0x0001, ZCL_INT32U_ATTRIBUTE_TYPE, 4, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[8]) } }, /* 8 / Over the Air Bootloading / Offset (address) into the file*/\
    { 0x0006, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x00 } }, /* 9 / Over the Air Bootloading / OTA Upgrade Status*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 10 / Over the Air Bootloading / cluster revision*/\
    { 0x0000, ZCL_INT32U_ATTRIBUTE_TYPE, 4, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)&(generatedDefaults[12]) } }, /* 11 / Poll Control / check-in interval*/\
    { 0x0001, ZCL_INT32U_ATTRIBUTE_TYPE, 4, (0x00), { (uint8_t*)&(generatedDefaults[16]) } }, /* 12 / Poll Control / long poll interval*/\
    { 0x0002, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0002 } }, /* 13 / Poll Control / short poll interval*/\
    { 0x0003, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x0028 } }, /* 14 / Poll Control / fast poll timeout*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 15 / Poll Control / cluster revision*/\
    { 0x0000, ZCL_INT16S_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 16 / Temperature Measurement / measured value*/\
    { 0x0001, ZCL_INT16S_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000L } }, /* 17 / Temperature Measurement / min measured value*/\
    { 0x0002, ZCL_INT16S_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000L } }, /* 18 / Temperature Measurement / max measured value*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 19 / Temperature Measurement / cluster revision*/\
    { 0x0000, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 20 / IAS Zone / zone state*/\
    { 0x0001, ZCL_ENUM16_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 21 / IAS Zone / zone type*/\
    { 0x0002, ZCL_BITMAP16_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 22 / IAS Zone / zone status*/\
    { 0x0010, ZCL_IEEE_ADDRESS_ATTRIBUTE_TYPE, 8, (ATTRIBUTE_MASK_WRITABLE), { NULL } }, /* 23 / IAS Zone / IAS CIE address*/\
    { 0x0011, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0xFF } }, /* 24 / IAS Zone / Zone ID*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 25 / IAS Zone / cluster revision*/\
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 26 / Diagnostics / cluster revision*/\
  }


// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS \
const EmberAfGenericClusterFunction emberAfFuncArrayPollControlClusterServer[] = { (EmberAfGenericClusterFunction)emberAfPollControlClusterServerInitCallback,(EmberAfGenericClusterFunction)emberAfPollControlClusterServerAttributeChangedCallback,(EmberAfGenericClusterFunction)emberAfPollControlClusterServerPreAttributeChangedCallback}; \


// Clusters definitions
#define GENERATED_CLUSTERS { \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 3, 0, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0x0001, (EmberAfAttributeMetadata*)&(generatedAttributes[3]), 1, 0, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0x0003, (EmberAfAttributeMetadata*)&(generatedAttributes[4]), 1, 2, (CLUSTER_MASK_CLIENT), NULL,  },    \
    { 0x0003, (EmberAfAttributeMetadata*)&(generatedAttributes[5]), 2, 4, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0x0019, (EmberAfAttributeMetadata*)&(generatedAttributes[7]), 4, 15, (CLUSTER_MASK_CLIENT), NULL,  },    \
    { 0x0020, (EmberAfAttributeMetadata*)&(generatedAttributes[11]), 5, 14, (CLUSTER_MASK_SERVER| CLUSTER_MASK_INIT_FUNCTION| CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION| CLUSTER_MASK_PRE_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayPollControlClusterServer, },    \
    { 0x0402, (EmberAfAttributeMetadata*)&(generatedAttributes[16]), 4, 8, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0x0500, (EmberAfAttributeMetadata*)&(generatedAttributes[20]), 6, 16, (CLUSTER_MASK_SERVER), NULL,  },    \
    { 0x0B05, (EmberAfAttributeMetadata*)&(generatedAttributes[26]), 1, 2, (CLUSTER_MASK_SERVER), NULL,  },    \
  }


// Endpoint types
#define GENERATED_ENDPOINT_TYPES {        \
    { (EmberAfCluster*)&(generatedClusters[0]), 9, 61 }, \
  }


// Cluster manufacturer codes
#define GENERATED_CLUSTER_MANUFACTURER_CODES {      \
{0x00, 0x00} \
  }
#define GENERATED_CLUSTER_MANUFACTURER_CODE_COUNT (0)

// Attribute manufacturer codes
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODES {      \
{0x00, 0x00} \
  }
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODE_COUNT (0)


// Largest attribute size is needed for various buffers
#define ATTRIBUTE_LARGEST (8)
// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE (6)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE 61

// Array of endpoints that are supported
#define FIXED_ENDPOINT_ARRAY { 1 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 260 }

// Array of device ids
#define FIXED_DEVICE_IDS { 1026 }

// Array of device versions
#define FIXED_DEVICE_VERSIONS { 1 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0 }


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginEepromInitCallback(void); \
  void emberAfPluginInterpanInitCallback(void); \
  void emberAfPluginIdleSleepInitCallback(void); \
  void emberAfPluginCountersInitCallback(void); \


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_CALLS \
  emberAfPluginEepromInitCallback(); \
  emberAfPluginInterpanInitCallback(); \
  emberAfPluginIdleSleepInitCallback(); \
  emberAfPluginCountersInitCallback(); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginInterpanNcpInitCallback(bool memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_CALLS \
  emberAfPluginInterpanNcpInitCallback(memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_DECLARATIONS \
  void emberAfPluginEndDeviceSupportStackStatusCallback(EmberStatus status); \
  void emberAfPluginPollControlServerStackStatusCallback(EmberStatus status); \
  void emberAfPluginNetworkSteeringStackStatusCallback(EmberStatus status); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_CALLS \
  emberAfPluginEndDeviceSupportStackStatusCallback(status); \
  emberAfPluginPollControlServerStackStatusCallback(status); \
  emberAfPluginNetworkSteeringStackStatusCallback(status); \


// Generated data for the command discovery
#define GENERATED_COMMANDS { \
    { 0x0003, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* Identify / Identify */ \
    { 0x0003, 0x00, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Identify / IdentifyQueryResponse */ \
    { 0x0003, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* Identify / IdentifyQuery */ \
    { 0x0019, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* Over the Air Bootloading / QueryNextImageRequest */ \
    { 0x0019, 0x03, COMMAND_MASK_OUTGOING_CLIENT }, /* Over the Air Bootloading / ImageBlockRequest */ \
    { 0x0019, 0x06, COMMAND_MASK_OUTGOING_CLIENT }, /* Over the Air Bootloading / UpgradeEndRequest */ \
    { 0x0020, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Poll Control / CheckIn */ \
    { 0x0020, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Poll Control / CheckInResponse */ \
    { 0x0020, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Poll Control / FastPollStop */ \
    { 0x0020, 0x02, COMMAND_MASK_INCOMING_SERVER }, /* Poll Control / SetLongPollInterval */ \
    { 0x0020, 0x03, COMMAND_MASK_INCOMING_SERVER }, /* Poll Control / SetShortPollInterval */ \
    { 0x0500, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* IAS Zone / ZoneStatusChangeNotification */ \
    { 0x0500, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* IAS Zone / ZoneEnrollRequest */ \
  }
#define EMBER_AF_GENERATED_COMMAND_COUNT (13)

// Command manufacturer codes
#define GENERATED_COMMAND_MANUFACTURER_CODES {      \
{0x00, 0x00} \
  }
#define GENERATED_COMMAND_MANUFACTURER_CODE_COUNT (0)


// Generated reporting configuration defaults
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS {\
  { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0402, 0x0000, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
}
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS_TABLE_SIZE (1)
#endif // SILABS_AF_ENDPOINT_CONFIG