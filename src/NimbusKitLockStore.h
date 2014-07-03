/*
 Copyright (c) 2011-present, NimbusKit. All rights reserved.

 This source code is licensed under the BSD-style license found in the LICENSE file in the root
 directory of this source tree and at the http://nimbuskit.info/license url. An additional grant of
 patent rights can be found in the PATENTS file in the same directory and url.
 */

#ifndef _NIMBUSKIT_LOCKSTORE_H_
#define _NIMBUSKIT_LOCKSTORE_H_

#import "NILockStore.h"

#pragma mark Current Version

#ifndef NIMBUSKIT_LOCKSTORE_VERSION
#define NIMBUSKIT_LOCKSTORE_VERSION NIMBUSKIT_LOCKSTORE_1_0_0
#endif

#endif // #ifndef _NIMBUSKIT_LOCKSTORE_H_

#pragma mark All Known Versions

#ifndef NIMBUSKIT_LOCKSTORE_1_0_0
#define NIMBUSKIT_LOCKSTORE_1_0_0 10000
#endif

#pragma mark Version Check

#ifndef NI_SUPPRESS_VERSION_WARNINGS

// These macros allow us to inline C-strings with macro values.
#ifndef NI_MACRO_DEFER
#define NI_MACRO_DEFER(M,...) M(__VA_ARGS__)
#endif
#ifndef NI_MACRO_STR
#define NI_MACRO_STR(X) #X
#endif
#ifndef NI_MACRO_INLINE_STR
#define NI_MACRO_INLINE_STR(str) NI_MACRO_DEFER(NI_MACRO_STR, str)
#endif

#if NIMBUSKIT_LOCKSTORE_VERSION < NIMBUSKIT_LOCKSTORE_1_0_0
#pragma message "An older version (" NI_MACRO_INLINE_STR(NIMBUSKIT_LOCKSTORE_VERSION) ") of NimbusKit's Lock Store was imported prior to this version (" NI_MACRO_INLINE_STR(NIMBUSKIT_LOCKSTORE_1_0_0) "). This may cause unexpected behavior. You may suppress this warning by defining NI_SUPPRESS_VERSION_WARNINGS"
#endif // NIMBUSKIT_LOCKSTORE_VERSION check

#endif // #ifndef NI_SUPPRESS_VERSION_WARNINGS
