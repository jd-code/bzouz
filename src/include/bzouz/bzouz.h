/* 
 * $Id$
 * BzouZ Copyright (C) 2002,2003,2004 Cristelle Barillon & Jean-Daniel Pauget
 * a wholeset of small common utilities
 *
 * bzouz@disjunkt.com  -  http://bzouz.disjunkt.com/
 * 
 * BzouZ is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * BzouZ is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with BzouZ; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 * 
 * you can also try the web at http://www.gnu.org/
 *
 *
 * bzouz@disjunkt.com  -  http://bzouz.disjunkt.com/
 */

#ifndef BZOUZ_H_INC
#define BZOUZ_H_INC

#include <string>
#include <iostream>
#include <strstream>

#ifndef bzouzerr
#define bzouzerr cerr << __FILE__  << ':'  << __LINE__ << ':' << __PRETTY_FUNCTION__ << ':'
#endif

using namespace std;

//! returns the release-name of this module
inline const char * get_bzouz_version (void)
{
#ifdef BZOUTOTALOCAL
    return ("Total-Local� $Id$");
#else
    return ("$Id$");
#endif
}

//! returns a string from an int (internally via a strstream) [CB]
inline string itos (int i)
{
    strstream buffstr;
    buffstr << i << ends;	 
    return buffstr.str();
}

//! returns a string from a double (internally via a strstream) [CB]
inline string itos (double i) 
{
    strstream buffstr;
    buffstr << i << ends;	 
    return buffstr.str();
}

//! returns the square of some double x by multiplying it by itself [CB]
inline double sq (double a)
{
    return a * a ;
}

//! returns a random integer in the set :  [1;max]	[CB]
inline int randint ( int max) { return 1+(int) ((double)max * rand()/(RAND_MAX+1.0));}

//! returns a random integer  in the set :  [a;b]	[CB]
inline int randinter ( int a, int b)
{	    
    int min, max;			    // attention autrefois �a renvoyait un entier hasardeux entre min et max-1
    if (a<b) min = a, max = b;		    // aujourd'hui c'est entre min et max compris !
    else min = b, max = a;
    return (min + (int)(((double)(max-min+1) * rand())/(RAND_MAX + 1.0))) ; 
}

//! returns a random double in the set [0.0 ; 1.0]
inline double rand01 () { return ( (1.0 * rand()) / RAND_MAX);  }

#endif // BZOUZ_H_INC

