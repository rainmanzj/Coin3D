#ifndef COIN_SOENABLEDELEMENTSLIST_H
#define COIN_SOENABLEDELEMENTSLIST_H

/**************************************************************************\
 *
 *  This file is part of the Coin 3D visualization library.
 *  Copyright (C) by Kongsberg Oil & Gas Technologies.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  ("GPL") version 2 as published by the Free Software Foundation.
 *  See the file LICENSE.GPL at the root directory of this source
 *  distribution for additional information about the GNU GPL.
 *
 *  For using Coin with software that can not be combined with the GNU
 *  GPL, and for taking advantage of the additional benefits of our
 *  support services, please contact Kongsberg Oil & Gas Technologies
 *  about acquiring a Coin Professional Edition License.
 *
 *  See http://www.coin3d.org/ for more information.
 *
 *  Kongsberg Oil & Gas Technologies, Bygdoy Alle 5, 0257 Oslo, NORWAY.
 *  http://www.sim.no/  sales@sim.no  coin-support@coin3d.org
 *
\**************************************************************************/

#include <Inventor/lists/SoTypeList.h>

class COIN_DLL_API SoEnabledElementsList {
public:
  SoEnabledElementsList(SoEnabledElementsList * const parentlist);
  ~SoEnabledElementsList();

  const SoTypeList & getElements(void) const;
  void enable(const SoType elementtype, const int stackindex);
  void merge(const SoEnabledElementsList & eel);

  static int getCounter(void);

private:
  class SoEnabledElementsListP * pimpl;
};

#endif // !COIN_SOENABLEDELEMENTSLIST_H
