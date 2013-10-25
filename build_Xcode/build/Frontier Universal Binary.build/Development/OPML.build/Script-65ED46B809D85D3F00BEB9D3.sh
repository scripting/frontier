#!/bin/sh
#set -x
cp -f "${SRCROOT}/../Common/Paige/libpaigefat.a" "${SRCROOT}/tools/libpaigefat.a"
ranlib "${SRCROOT}/tools/libpaigefat.a"
