#! /bin/make -f
package?=neheglqt
qmake?=qmake-qt4

default: build

Makefile: ${package}.pro
	${qmake}

${package}.pro:
	${qmake} -proj .

#default: Makefile
#	INSTALL_ROOT=/tmp/ make 

orig/%: Makefile
	INSTALL_ROOT=/tmp/ make ${@F}

distclean:
	rm -rf Makefile */Makefile *~
#	rm -rfv ch[0-9]*/ch[0-9]*
	find . -iname "*.o" -exec rm -rfv '{}' \;
	find . -iname "moc_*.cpp" -exec rm -rfv '{}' \;

build: Makefile
	${MAKE} -k 

#eof
