Pod::Spec.new do |s|
  s.name         = 'XtifyLib'
  s.version      = '2.60'
  s.summary      = 'Xtify library for iOS application with CocoaPods integration.'
  s.platform = :ios, '6.0'
  s.author = {
    'gilad melamed' => 'gilad2.m@gmail.com'
  }
  s.license =  'Apache License, Version 2.0'
  s.homepage = 'https://github.com/gilad-xtify/XtifyLib'
  s.source = {
    :git => 'https://github.com/gilad-xtify/XtifyLib.git',
    :tag => 'v2.60'
  }

  s.ios.dependency 'Reachability'
  s.ios.dependency 'SBJson'
  s.ios.dependency 'ASIHTTPRequest'

  s.source_files = 'XtifyLib/**/*.{h,m}',
  s.ios.vendored_frameworks = 'XtifyLib/XtifyPushNoDependencies.embeddedframework'
  s.preserve_paths = 'XtifyLib/XtifyPushNoDependencies.embeddedframework/*'
  s.frameworks = 'XtifyPushNoDependencies', 'Foundation', 'UIKit', 'CoreGraphics', 'SystemConfiguration', 'MapKit', 'CoreData', 'MessageUI', 'CoreLocation', 'CFNetwork', 'MobileCoreServices', 'CoreTelephony'
  s.library = 'xml2.2', 'z'

  s.xcconfig = { 'FRAMEWORK_SEARCH_PATHS' => '"$(PODS_ROOT)/XtifyLib"', 'HEADER_SEARCH_PATHS' => '$(SDKROOT)/usr/include/libz' '$(SDKROOT)/usr/include/libxml' }
end
