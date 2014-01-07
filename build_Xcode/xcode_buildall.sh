#!/bin/sh


# clean build directory
rm -Rf ./build/*

# build all targets

xcodebuild -project "Frontier Universal Binary.xcodeproj" -alltargets -configuration Development
xcodebuild -project "Frontier Universal Binary.xcodeproj" -alltargets -configuration Deployment
