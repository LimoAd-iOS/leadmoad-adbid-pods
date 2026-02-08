Pod::Spec.new do |spec|
  spec.name         = "AdbidSDK"
  spec.version      = "2.1.0.3"
  spec.summary      = "Adbid广告SDK"
  spec.description  = <<-DESC
                    Adbid广告SDK提供了广告展示和管理功能
                   DESC
  spec.homepage     = "https://github.com/LimoAd-iOS/leadmoad-adbid-pods"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author       = { "chaizhiyong" => "developer@limoad.com" }
  spec.platform     = :ios, "13.0"
  spec.source       = { :git => "https://github.com/LimoAd-iOS/leadmoad-adbid-pods.git", :tag => "#{spec.version}" }
  spec.vendored_frameworks = "AdbidSDK.xcframework"
  spec.swift_version = "5.0"
  spec.frameworks   = "UIKit", "Foundation"
  spec.requires_arc = true
     
end
