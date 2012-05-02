/******************************************************************************

  This source file is part of the Avogadro project.

  Copyright 2012 Kitware, Inc.

  This source code is released under the New BSD License, (the "License").

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

******************************************************************************/

#ifndef AVOGADRO_CORE_VECTOR_H
#define AVOGADRO_CORE_VECTOR_H

#include "avogadrocore.h"
#include <Eigen/Dense>

namespace Avogadro {
namespace Core {

/// Typedefs for vector types.
typedef Eigen::Matrix<Real, 2, 1> Vector2;
typedef Eigen::Matrix<Real, 3, 1> Vector3;
typedef Eigen::Matrix<Real, 4, 1> Vector4;

} // end Core namespace
} // end Avogadro namespace

#endif // AVOGADRO_CORE_VECTOR_H