
Debian
====================
This directory contains files used to package xbid/xbi-qt
for Debian-based Linux systems. If you compile xbid/xbi-qt yourself, there are some useful files here.

## xbi: URI support ##


xbi-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install xbi-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your xbiqt binary to `/usr/bin`
and the `../../share/pixmaps/xbi128.png` to `/usr/share/pixmaps`

xbi-qt.protocol (KDE)

