/*
rand
----------------------------------------------------------------------
Copyright (c) 2019-2020, Matthew Early matthewjearly@gmail.com
All rights reserved.
Redistribution and use of this software in source and binary forms,
with or without modification, are permitted provided that the
following conditions are met:
* Redistributions of source code must retain the above
  copyright notice, this list of conditions and the
  following disclaimer.
* Redistributions in binary form must reproduce the above
  copyright notice, this list of conditions and the
  following disclaimer in the documentation and/or other
  materials provided with the distribution.
* Neither the name of the Matthew Early, nor the names of its
  contributors may be used to endorse or promote products
  derived from this software without specific prior
  written permission from Matthew Early.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
----------------------------------------------------------------------
*/

/** @file rand.h
 *  @brief Declarations of functions that produce random results.
 */

#pragma once

#ifdef RAND_EXPORTS
#define RAND_API __declspec(dllexport)
#else
#define RAND_API __declspec(dllimport)
#endif

/**
 * Returns a random float between zero and one.
 */
RAND_API float ZTORf();

/**
 * Returns a random double between zero and one.
 */
RAND_API double ZTOR();

/**
 * Returns a random integer zero or one.
 */
RAND_API int ZOOR();

/**
 * Returns and random integer with the bounds n and k.
 */
RAND_API int NTKR(int n, int k);

/**
 * Returns a random float with the bounds n and k.
 */
RAND_API float NTKR(float n, float k);

/**
 * Returns a random double with the bounds n and k.
 */
RAND_API double NTKR(double n, double k);

