#
# paige
#

cp -f "../Common/Paige/libpaigemacho.a" "./tools/libpaigemacho.a"

ranlib "./tools/libpaigefat.a"

#
# copy MySQL libraries
#

cp -fp "../Common/MySQL/osx10.4-i686/lib/libmysqlclient.a" "./tools/libmysqlclient.a"

cp -fp "../Common/MySQL/osx10.4-i686/lib/libz.a" "./tools/libz.a"
