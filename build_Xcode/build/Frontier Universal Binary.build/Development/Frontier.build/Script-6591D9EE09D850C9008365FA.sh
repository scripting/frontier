#!/bin/sh
#set -x

#
# paige
#

cp -f "${SRCROOT}/../Common/Paige/libpaigefat.a" "${SRCROOT}/tools/libpaigefat.a"

ranlib "${SRCROOT}/tools/libpaigefat.a"

#
# build Universal Binary MySQL libraries
#

lipo -create "${SRCROOT}/../Common/MySQL/osx10.3-powerpc/lib/libmysqlclient.a" "${SRCROOT}/../Common/MySQL/osx10.4-i686/lib/libmysqlclient.a" -output "${SRCROOT}/tools/libmysqlclient.a"

lipo -create "${SRCROOT}/../Common/MySQL/osx10.3-powerpc/lib/libz.a" "${SRCROOT}/../Common/MySQL/osx10.4-i686/lib/libz.a" -output "${SRCROOT}/tools/libz.a"
