Pod::Spec.new do |s|
  s.name = "EagleSDK"
  s.version = "0.0.3"
  s.summary = "EagleSDK of Linkstec."
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"linkstec@linkstec.com"=>"linkstec@linkstec.com"}
  s.homepage = "http://www.linkstec.com"
  s.description = "This is Linkstec's Product."
  s.source = { :git => 'git@github.com:LKG-TEAM/EagleSDK-iOS.git', :branch=>'V0.0.3' }

  s.ios.deployment_target    = '8.0'
  s.ios.vendored_frameworks   = ' EagleSDK.framework'
  s.frameworks = 'UIKit', 'MapKit' ,'WebKit', 'SystemConfiguration', 'MobileCoreServices','AVFoundation','CoreLocation','Photos','AssetsLibrary','JavaScriptCore','CoreMedia'
  s.libraries  = 'z'
  s.dependency 'AFNetworking', '~> 3.1.0'
  s.dependency 'SSZipArchive'
  s.dependency 'Masonry', '~> 1.1.0'
  s.dependency 'MMDrawerController', '~> 0.6.0'
  s.dependency 'ReactiveObjC', '~> 3.0.0'
  s.dependency 'EGIconFont', '0.0.1'
  s.dependency 'TZImagePickerController'
end

