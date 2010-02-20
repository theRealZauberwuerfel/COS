#ifndef COS_ITERATOR_H
#define COS_ITERATOR_H

/*
 o---------------------------------------------------------------------o
 |
 | COS Iterator
 |
 o---------------------------------------------------------------------o
 |
 | C Object System
 |
 | Copyright (c) 2006+ Laurent Deniau, laurent.deniau@cern.ch
 |
 | For more information, see:
 | http://cern.ch/laurent.deniau/cos.html
 |
 o---------------------------------------------------------------------o
 |
 | This file is part of the C Object System framework.
 |
 | The C Object System is free software; you can redistribute it and/or
 | modify it under the terms of the GNU Lesser General Public License
 | as published by the Free Software Foundation; either version 3 of
 | the License, or (at your option) any later version.
 |
 | The C Object System is distributed in the hope that it will be
 | useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 | of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 |
 | See <http://www.gnu.org/licenses> for more details.
 |
 o---------------------------------------------------------------------o
 |
 | $Id: Iterator.h,v 1.1 2010/01/21 14:52:53 ldeniau Exp $
 |
*/

#include <cos/Object.h>

/* NOTE-USER: Iterator subclasses

  - Iterators are low-level abstract classes used to traverse collections.
  - All iterators support gnext which returns the next object or Nil.
  - All iterators support gallNext which returns the an array of
    remaining objects (possibly empty). The Iterator class provides a default
    implementation based on gnext.
*/

defclass(Iterator)
endclass

#endif // COS_COLLECTION_H
