/*
 * Medical Image Registration ToolKit (MIRTK)
 *
 * Copyright 2016 Imperial College London
 * Copyright 2016 Andreas Schuh
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MIRTK_OpenPointData_H
#define MIRTK_OpenPointData_H

#include "mirtk/PointDataFilter.h"


namespace mirtk {


/**
 * Component-wise morphological opening of mesh node data
 */
class OpenPointData : public PointDataFilter
{
  mirtkObjectMacro(OpenPointData);

  // ---------------------------------------------------------------------------
  // Attributes

  /// Number of iterations
  mirtkPublicAttributeMacro(int, Iterations);

  /// Copy attributes of this filter from another instance
  void CopyAttributes(const OpenPointData &);

  // ---------------------------------------------------------------------------
  // Construction/Destruction

public:

  /// Default constructor
  OpenPointData();

  /// Copy constructor
  OpenPointData(const OpenPointData &);

  /// Assignment operator
  OpenPointData &operator =(const OpenPointData &);

  /// Destructor
  virtual ~OpenPointData();

  // ---------------------------------------------------------------------------
  // Execution

protected:

  /// Initialize filter
  virtual void Initialize();

  /// Execute filter
  virtual void Execute();

};


} // namespace mirtk

#endif // MIRTK_OpenPointData_H
