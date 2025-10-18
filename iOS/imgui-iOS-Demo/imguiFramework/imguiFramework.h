//
//  imguiFramework.h
//  imguiFramework
//
//  Created by cuipanjun on 2025/10/18.
//

#import <Foundation/Foundation.h>

//! Project version number for imguiFramework.
FOUNDATION_EXPORT double imguiFrameworkVersionNumber;

//! Project version string for imguiFramework.
FOUNDATION_EXPORT const unsigned char imguiFrameworkVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <imguiFramework/PublicHeader.h>

// TODO: how can i expose public headers?
// I have tried #import <imguiFramework/imgui.h> and other headers #import <imguiFramework/xxx.h>, and add these files in Xcode Build Phases -> Headers -> Public/Project, and also configed the Header Search Path,
// but always failed to compile the framework target. The errors are headers including.
