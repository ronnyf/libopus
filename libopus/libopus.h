//
//  libopus.h
//  libopus
//
//  Created by Falk, Ronny on 6/19/23.
//

//#import <Foundation/Foundation.h>
//
////! Project version number for libopus.
//FOUNDATION_EXPORT double libopusVersionNumber;
//
////! Project version string for libopus.
//FOUNDATION_EXPORT const unsigned char libopusVersionString[];
//
// In this header, you should import all the public headers of your framework using statements like #import <libopus/PublicHeader.h>

#ifndef INCLUDE_LIBOPUS_H_
#define INCLUDE_LIBOPUS_H_

#ifndef BUILD_OPUS_FRAMEWORK
#define BUILD_OPUS_FRAMEWORK 1
#endif

#include <libopus/opus.h>
#include <libopus/opus_multistream.h>
#include <libopus/opus_custom.h>
#include <libopus/opus_types.h>
#include <libopus/opus_defines.h>
#include <libopus/opus_projection.h>

#endif
