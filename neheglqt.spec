# Define package name 
%define neheglqt org.gitorious.user.rzr.neheglqt

Name: neheglqt
Version: 0.0.0
Release: 0
License: OpenSource
Summary: 3D demos tutorial
URL: http://rzr.online.fr/q/gl
Group: Amusements/Games
Requires: libqt >= 4.7.0 
Requires:  opengl-games-utils

%description
3D Demos to lean OpenGL using Qt4

%prep 
%setup -q 
qmake

%build 
make 

%install 
make install INSTALL_ROOT=%{buildroot} 

%files 
%defattr(-,root,root,-) 

/opt/%{app_name} 
%{_datadir}/applications/*.desktop 
%{_datadir}/icons/*.png 
%{_datadir}/icons/hicolor/16x16/apps/*.png 
%{_datadir}/icons/hicolor/32x32/apps/*.png
%{_datadir}/icons/hicolor/64x64/apps/*.png
%{_datadir}/icons/hicolor/128x128/apps/*.png
/var/opt/%{app_name}/sounds/*.wav 
/var/opt/%{app_name}/UI/*.*
/var/opt/%{app_name}/UI/Stars/*.*
/var/opt/%{app_name}/UI/Icons/*.* 
