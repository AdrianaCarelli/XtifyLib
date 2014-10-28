XtifyLib
========

Xtify library for iOS application with CocoaPods integration.

Example of usage
========

Using cocoapods. Podfile:

```
platform :ios, '8.0'

pod 'XtifyLib'

post_install do |installer|
    config = <<-XTIFYGLOBAL_H
#define xAppKey @"<your app key>"
#define xLocationRequired NO
#define xRunAlsoInBackground FALSE
#define xDesiredLocationAccuracy kCLLocationAccuracyKilometer  // kCLLocationAccuracyBest
#define xBadgeManagerMethod XLInboxManagedMethod
#define xLogging TRUE
#define xNewsstandContent FALSE
#define xGeofenceEnabled TRUE
#define xBeaconSupport FALSE
#define xMultipleMarkets FALSE
#define xUUID @"REPLACE_WITH_YOUR_UUID"
XTIFYGLOBAL_H
    File.open("Pods/XtifyLib/XtifyLib/XtifyGlobal.h", "w") do |file|
      file.puts config
    end
end
```
