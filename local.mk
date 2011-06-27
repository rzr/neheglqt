#! /bin/make
package?=neheglqt

Makefile: ${package}.pro
	qmake

${package}.pro:
	qmake -proj .

#default: Makefile
#	INSTALL_ROOT=/tmp/ make 

%: Makefile
	INSTALL_ROOT=/tmp/ make $@

#eof
