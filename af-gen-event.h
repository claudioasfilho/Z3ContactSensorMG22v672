// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef __AF_GEN_EVENT__
#define __AF_GEN_EVENT__


// Code used to configure the cluster event mechanism
#define EMBER_AF_GENERATED_EVENT_CODE \
  EmberEventControl emberAfPollControlClusterServerTickCallbackControl1; \
  extern EmberEventControl commissioningEventControl; \
  extern EmberEventControl emberAfPluginFindAndBindInitiatorCheckTargetResponsesEventControl; \
  extern EmberEventControl emberAfPluginInterpanFragmentReceiveEventControl; \
  extern EmberEventControl emberAfPluginInterpanFragmentTransmitEventControl; \
  extern EmberEventControl emberAfPluginNetworkSteeringFinishSteeringEventControl; \
  extern EmberEventControl emberAfPluginScanDispatchScanEventControl; \
  extern EmberEventControl emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventControl; \
  extern EmberEventControl findingAndBindingEventControl; \
  extern EmberEventControl ledEventControl; \
  extern void commissioningEventHandler(void); \
  extern void emberAfPluginFindAndBindInitiatorCheckTargetResponsesEventHandler(void); \
  extern void emberAfPluginInterpanFragmentReceiveEventHandler(void); \
  extern void emberAfPluginInterpanFragmentTransmitEventHandler(void); \
  extern void emberAfPluginNetworkSteeringFinishSteeringEventHandler(void); \
  extern void emberAfPluginScanDispatchScanEventHandler(void); \
  extern void emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventHandler(void); \
  extern void findingAndBindingEventHandler(void); \
  extern void ledEventHandler(void); \
  static void networkEventWrapper(EmberEventControl *control, EmberAfNetworkEventHandler handler, uint8_t networkIndex) \
  { \
    emberAfPushNetworkIndex(networkIndex); \
    emberEventControlSetInactive(*control); \
    (*handler)(); \
    emberAfPopNetworkIndex(); \
  } \
  EmberEventControl emberAfPluginEndDeviceSupportMoveNetworkEventControls[1]; \
  extern void emberAfPluginEndDeviceSupportMoveNetworkEventHandler(void); \
  void emberAfPluginEndDeviceSupportMoveNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginEndDeviceSupportMoveNetworkEventControls[0], emberAfPluginEndDeviceSupportMoveNetworkEventHandler, 0); } \
  EmberEventControl emberAfPluginEndDeviceSupportPollingNetworkEventControls[1]; \
  extern void emberAfPluginEndDeviceSupportPollingNetworkEventHandler(void); \
  void emberAfPluginEndDeviceSupportPollingNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginEndDeviceSupportPollingNetworkEventControls[0], emberAfPluginEndDeviceSupportPollingNetworkEventHandler, 0); } \
  static void clusterTickWrapper(EmberEventControl *control, EmberAfTickFunction callback, uint8_t endpoint) \
  { \
    emberAfPushEndpointNetworkIndex(endpoint); \
    emberEventControlSetInactive(*control); \
    (*callback)(endpoint); \
    emberAfPopNetworkIndex(); \
  } \
  void emberAfPollControlClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfPollControlClusterServerTickCallbackControl1, emberAfPollControlClusterServerTickCallback, 1); } \
  EmberEventControl emberAfPluginPollControlServerCheckInEndpointEventControls[1]; \
  extern void emberAfPluginPollControlServerCheckInEndpointEventHandler(uint8_t endpoint); \
  void emberAfPluginPollControlServerCheckInEndpointEventWrapper1(void) { clusterTickWrapper(&emberAfPluginPollControlServerCheckInEndpointEventControls[0], emberAfPluginPollControlServerCheckInEndpointEventHandler, 1); } \


// EmberEventData structs used to populate the EmberEventData table
#define EMBER_AF_GENERATED_EVENTS   \
  { &emberAfPollControlClusterServerTickCallbackControl1, emberAfPollControlClusterServerTickCallbackWrapperFunction1 }, \
  { &commissioningEventControl, commissioningEventHandler }, \
  { &emberAfPluginFindAndBindInitiatorCheckTargetResponsesEventControl, emberAfPluginFindAndBindInitiatorCheckTargetResponsesEventHandler }, \
  { &emberAfPluginInterpanFragmentReceiveEventControl, emberAfPluginInterpanFragmentReceiveEventHandler }, \
  { &emberAfPluginInterpanFragmentTransmitEventControl, emberAfPluginInterpanFragmentTransmitEventHandler }, \
  { &emberAfPluginNetworkSteeringFinishSteeringEventControl, emberAfPluginNetworkSteeringFinishSteeringEventHandler }, \
  { &emberAfPluginScanDispatchScanEventControl, emberAfPluginScanDispatchScanEventHandler }, \
  { &emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventControl, emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventHandler }, \
  { &findingAndBindingEventControl, findingAndBindingEventHandler }, \
  { &ledEventControl, ledEventHandler }, \
  { &emberAfPluginEndDeviceSupportMoveNetworkEventControls[0], emberAfPluginEndDeviceSupportMoveNetworkEventWrapper0 }, \
  { &emberAfPluginEndDeviceSupportPollingNetworkEventControls[0], emberAfPluginEndDeviceSupportPollingNetworkEventWrapper0 }, \
  { &emberAfPluginPollControlServerCheckInEndpointEventControls[0], emberAfPluginPollControlServerCheckInEndpointEventWrapper1 }, \


#define EMBER_AF_GENERATED_EVENT_STRINGS   \
  "Poll Control Cluster Server EP 1",  \
  "Commissioning event control",  \
  "Find and Bind Initiator Plugin CheckTargetResponses",  \
  "Interpan Plugin FragmentReceive",  \
  "Interpan Plugin FragmentTransmit",  \
  "Network Steering Plugin FinishSteering",  \
  "Scan Dispatch Plugin Scan",  \
  "Update TC Link Key Plugin BeginTcLinkKeyUpdate",  \
  "Finding and binding event control",  \
  "Led event control",  \
  "End Device Support Plugin Move NWK 0", \
  "End Device Support Plugin Polling NWK 0", \
  "Poll Control Server Cluster Plugin CheckIn EP 1", \


// The length of the event context table used to track and retrieve cluster events
#define EMBER_AF_EVENT_CONTEXT_LENGTH 1

// EmberAfEventContext structs used to populate the EmberAfEventContext table
#define EMBER_AF_GENERATED_EVENT_CONTEXT { 0x1, 0x20, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfPollControlClusterServerTickCallbackControl1}


#endif // __AF_GEN_EVENT__
