## 
## $Id$
## BzouZ Copyright (C) 2002 Cristelle Barillon, Jean-Daniel PAUGET
## A small set graphical utilities for SDL
## 
## bzouz@disjunkt.com  -  http://bzouz.disjunkt.com/
## 
## This file is part of BzouZ.
## 
## BzouZ is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; either version 2 of the License, or
## (at your option) any later version.
## 
## BzouZ is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
## 
## You should have received a copy of the GNU General Public License
## along with BzouZ; if not, write to the Free Software
## Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
## you can also try the web at http://www.gnu.org/
## 
## bzouz@disjunkt.com  -  http://bzouz.disjunkt.com/

## probably redundant with somewhere else
## CFLAGS = -O2 -Wall

SUBDIRS = src

vimtest: all
	## ./src/Caroube
	## startx -display :1 -e ./src/Caroube -- :1 -depth 16 -ac

vimtestw32: all
	## rm -f ./src/Caroube.exe
	## mv ./src/Caroube ./src/Caroube.exe


##  additional file(s) to be removed when making dist...
## DISTCLEANFILES = ./src/Caroube.exe ./src/stderr.txt ./src/stdout.txt

## bad hook for removing dummy-files created in order to have out-of-source-dir build to work
distclean-local:
	rm src/include/Makefile

