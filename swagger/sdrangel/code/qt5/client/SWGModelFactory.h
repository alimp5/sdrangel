/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400    --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

#ifndef ModelFactory_H_
#define ModelFactory_H_


#include "SWGAMDemodReport.h"
#include "SWGAMDemodSettings.h"
#include "SWGAMModReport.h"
#include "SWGAMModSettings.h"
#include "SWGATVModReport.h"
#include "SWGATVModSettings.h"
#include "SWGAirspyHFSettings.h"
#include "SWGAudioDevices.h"
#include "SWGAudioInputDevice.h"
#include "SWGAudioOutputDevice.h"
#include "SWGBladeRFInputSettings.h"
#include "SWGBladeRFOutputSettings.h"
#include "SWGCWKeyerSettings.h"
#include "SWGChannel.h"
#include "SWGChannelListItem.h"
#include "SWGChannelReport.h"
#include "SWGChannelSettings.h"
#include "SWGChannelsDetail.h"
#include "SWGDVSeralDevices.h"
#include "SWGDVSerialDevice.h"
#include "SWGDeviceListItem.h"
#include "SWGDeviceSet.h"
#include "SWGDeviceSetList.h"
#include "SWGDeviceSettings.h"
#include "SWGDeviceState.h"
#include "SWGErrorResponse.h"
#include "SWGFileSourceSettings.h"
#include "SWGHackRFInputSettings.h"
#include "SWGHackRFOutputSettings.h"
#include "SWGInstanceChannelsResponse.h"
#include "SWGInstanceDevicesResponse.h"
#include "SWGInstanceSummaryResponse.h"
#include "SWGLimeSdrInputSettings.h"
#include "SWGLimeSdrOutputSettings.h"
#include "SWGLocationInformation.h"
#include "SWGLoggingInfo.h"
#include "SWGNFMDemodReport.h"
#include "SWGNFMDemodSettings.h"
#include "SWGNFMModReport.h"
#include "SWGNFMModSettings.h"
#include "SWGPresetExport.h"
#include "SWGPresetGroup.h"
#include "SWGPresetIdentifier.h"
#include "SWGPresetImport.h"
#include "SWGPresetItem.h"
#include "SWGPresetTransfer.h"
#include "SWGPresets.h"
#include "SWGRtlSdrSettings.h"
#include "SWGSSBModReport.h"
#include "SWGSSBModSettings.h"
#include "SWGSamplingDevice.h"
#include "SWGSuccessResponse.h"
#include "SWGUDPSinkReport.h"
#include "SWGUDPSinkSettings.h"
#include "SWGWFMModReport.h"
#include "SWGWFMModSettings.h"

namespace SWGSDRangel {

  inline void* create(QString type) {
    if(QString("SWGAMDemodReport").compare(type) == 0) {
      return new SWGAMDemodReport();
    }
    if(QString("SWGAMDemodSettings").compare(type) == 0) {
      return new SWGAMDemodSettings();
    }
    if(QString("SWGAMModReport").compare(type) == 0) {
      return new SWGAMModReport();
    }
    if(QString("SWGAMModSettings").compare(type) == 0) {
      return new SWGAMModSettings();
    }
    if(QString("SWGATVModReport").compare(type) == 0) {
      return new SWGATVModReport();
    }
    if(QString("SWGATVModSettings").compare(type) == 0) {
      return new SWGATVModSettings();
    }
    if(QString("SWGAirspyHFSettings").compare(type) == 0) {
      return new SWGAirspyHFSettings();
    }
    if(QString("SWGAudioDevices").compare(type) == 0) {
      return new SWGAudioDevices();
    }
    if(QString("SWGAudioInputDevice").compare(type) == 0) {
      return new SWGAudioInputDevice();
    }
    if(QString("SWGAudioOutputDevice").compare(type) == 0) {
      return new SWGAudioOutputDevice();
    }
    if(QString("SWGBladeRFInputSettings").compare(type) == 0) {
      return new SWGBladeRFInputSettings();
    }
    if(QString("SWGBladeRFOutputSettings").compare(type) == 0) {
      return new SWGBladeRFOutputSettings();
    }
    if(QString("SWGCWKeyerSettings").compare(type) == 0) {
      return new SWGCWKeyerSettings();
    }
    if(QString("SWGChannel").compare(type) == 0) {
      return new SWGChannel();
    }
    if(QString("SWGChannelListItem").compare(type) == 0) {
      return new SWGChannelListItem();
    }
    if(QString("SWGChannelReport").compare(type) == 0) {
      return new SWGChannelReport();
    }
    if(QString("SWGChannelSettings").compare(type) == 0) {
      return new SWGChannelSettings();
    }
    if(QString("SWGChannelsDetail").compare(type) == 0) {
      return new SWGChannelsDetail();
    }
    if(QString("SWGDVSeralDevices").compare(type) == 0) {
      return new SWGDVSeralDevices();
    }
    if(QString("SWGDVSerialDevice").compare(type) == 0) {
      return new SWGDVSerialDevice();
    }
    if(QString("SWGDeviceListItem").compare(type) == 0) {
      return new SWGDeviceListItem();
    }
    if(QString("SWGDeviceSet").compare(type) == 0) {
      return new SWGDeviceSet();
    }
    if(QString("SWGDeviceSetList").compare(type) == 0) {
      return new SWGDeviceSetList();
    }
    if(QString("SWGDeviceSettings").compare(type) == 0) {
      return new SWGDeviceSettings();
    }
    if(QString("SWGDeviceState").compare(type) == 0) {
      return new SWGDeviceState();
    }
    if(QString("SWGErrorResponse").compare(type) == 0) {
      return new SWGErrorResponse();
    }
    if(QString("SWGFileSourceSettings").compare(type) == 0) {
      return new SWGFileSourceSettings();
    }
    if(QString("SWGHackRFInputSettings").compare(type) == 0) {
      return new SWGHackRFInputSettings();
    }
    if(QString("SWGHackRFOutputSettings").compare(type) == 0) {
      return new SWGHackRFOutputSettings();
    }
    if(QString("SWGInstanceChannelsResponse").compare(type) == 0) {
      return new SWGInstanceChannelsResponse();
    }
    if(QString("SWGInstanceDevicesResponse").compare(type) == 0) {
      return new SWGInstanceDevicesResponse();
    }
    if(QString("SWGInstanceSummaryResponse").compare(type) == 0) {
      return new SWGInstanceSummaryResponse();
    }
    if(QString("SWGLimeSdrInputSettings").compare(type) == 0) {
      return new SWGLimeSdrInputSettings();
    }
    if(QString("SWGLimeSdrOutputSettings").compare(type) == 0) {
      return new SWGLimeSdrOutputSettings();
    }
    if(QString("SWGLocationInformation").compare(type) == 0) {
      return new SWGLocationInformation();
    }
    if(QString("SWGLoggingInfo").compare(type) == 0) {
      return new SWGLoggingInfo();
    }
    if(QString("SWGNFMDemodReport").compare(type) == 0) {
      return new SWGNFMDemodReport();
    }
    if(QString("SWGNFMDemodSettings").compare(type) == 0) {
      return new SWGNFMDemodSettings();
    }
    if(QString("SWGNFMModReport").compare(type) == 0) {
      return new SWGNFMModReport();
    }
    if(QString("SWGNFMModSettings").compare(type) == 0) {
      return new SWGNFMModSettings();
    }
    if(QString("SWGPresetExport").compare(type) == 0) {
      return new SWGPresetExport();
    }
    if(QString("SWGPresetGroup").compare(type) == 0) {
      return new SWGPresetGroup();
    }
    if(QString("SWGPresetIdentifier").compare(type) == 0) {
      return new SWGPresetIdentifier();
    }
    if(QString("SWGPresetImport").compare(type) == 0) {
      return new SWGPresetImport();
    }
    if(QString("SWGPresetItem").compare(type) == 0) {
      return new SWGPresetItem();
    }
    if(QString("SWGPresetTransfer").compare(type) == 0) {
      return new SWGPresetTransfer();
    }
    if(QString("SWGPresets").compare(type) == 0) {
      return new SWGPresets();
    }
    if(QString("SWGRtlSdrSettings").compare(type) == 0) {
      return new SWGRtlSdrSettings();
    }
    if(QString("SWGSSBModReport").compare(type) == 0) {
      return new SWGSSBModReport();
    }
    if(QString("SWGSSBModSettings").compare(type) == 0) {
      return new SWGSSBModSettings();
    }
    if(QString("SWGSamplingDevice").compare(type) == 0) {
      return new SWGSamplingDevice();
    }
    if(QString("SWGSuccessResponse").compare(type) == 0) {
      return new SWGSuccessResponse();
    }
    if(QString("SWGUDPSinkReport").compare(type) == 0) {
      return new SWGUDPSinkReport();
    }
    if(QString("SWGUDPSinkSettings").compare(type) == 0) {
      return new SWGUDPSinkSettings();
    }
    if(QString("SWGWFMModReport").compare(type) == 0) {
      return new SWGWFMModReport();
    }
    if(QString("SWGWFMModSettings").compare(type) == 0) {
      return new SWGWFMModSettings();
    }
    
    return nullptr;
  }

  inline void* create(QString json, QString type) {
    void* val = create(type);
    if(val != nullptr) {
      SWGObject* obj = static_cast<SWGObject*>(val);
      return obj->fromJson(json);
    }
    if(type.startsWith("QString")) {
      return new QString();
    }
    return nullptr;
  }

}

#endif /* ModelFactory_H_ */
