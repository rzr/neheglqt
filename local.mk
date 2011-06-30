#! /usr/bin/make -f
package?=neheglqt
qmake?=$(shell which qmake-qt4 && qmake-qt4 || qmake )

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
	rm -rf Makefile */Makefile *~ MANIFEST debian/${package}
#	rm -rfv ch[0-9]*/ch[0-9]*
	find . -iname "*.o" -exec rm -rfv '{}' \;
	find . -iname "moc_*.cpp" -exec rm -rfv '{}' \;
	find . -iname "Makefile" -exec rm -rfv '{}' \;
	rm -fv ch*/ch*[0-9]

build: Makefile
	${MAKE} -k 

#eof
