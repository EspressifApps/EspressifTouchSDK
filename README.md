# EspressifTouchSDK

To configure network for Esp8266/Esp32 devices, the devices need run on smart-config.

## Requirements

* Xcode 9.2 and later
* iOS 8 and later

## Using the EspressifTouchSDK

### CocoaPods

1. The EspressifTouchSDK is available through [CocoaPods](http://cocoapods.org). If you have not installed CocoaPods, install CocoaPods:

		sudo gem install cocoapods
		pod setup

2. To install EspressifTouchSDK, simply add the following line to your Podfile:

		pod 'EspressifTouchSDK'

### Manual

1. Download [EspressifTouchSDK](https://github.com/EspressifApps/EspressifTouchSDK) project.
2. Add the [EspTouch](https://github.com/EspressifApps/EspressifTouchSDK/tree/master/EspTouch) folders to your project.

## Usage

```Objective-C
// Start config network
ESPTouchTask  *esptouchTask = [[ESPTouchTask alloc]initWithApSsid:apSsid andApBssid:apBssid andApPwd:apPwd];

// set delegate
[esptouchTask setEsptouchDelegate:self._esptouchDelegate];

// Set config mode
[esptouchTask setPackageBroadcast:broadcast];

// Results
NSArray *esptouchResults = [esptouchTask executeForResults:taskCount];
```

## Notes

1. You need to open the location permission to get Wi Fi information. Please go to settings - > Privacy - > location service to open the [esptouch] location service.
2. The device is connected after startup, Please make sure the network is 2.4G, The device only supports 2.4G.


## License

EspressifTouchSDK is released under the MIT license. See [LICENSE](https://github.com/EspressifApps/EspressifTouchSDK/blob/master/LICENSE) for details.