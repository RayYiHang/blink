////////////////////////////////////////////////////////////////////////////////
//
// B L I N K
//
// Copyright (C) 2016-2018 Blink Mobile Shell Project
//
// This file is part of Blink.
//
// Blink is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Blink is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Blink. If not, see <http://www.gnu.org/licenses/>.
//
// In addition, Blink is also subject to certain additional terms under
// GNU GPL version 3 section 7.
//
// You should have received a copy of these additional terms immediately
// following the terms and conditions of the GNU General Public License
// which accompanied the Blink Source Code. If not, see
// <http://www.github.com/blinksh/blink>.
//
////////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

@interface BlinkPaths : NSObject

+ (NSString *) homePath;
+ (NSURL *)homeURL;

+ (NSString *) groupContainerPath;
+ (NSString *) documentsPath;
+ (NSString *) iCloudDriveDocuments;

// ~/.blink
+ (NSString *) blink;
// ~/.blink-build
+ (NSString *)blinkBuild;
// ~/.blink/agents
+ (NSString *)blinkAgentSettings;

// ~/.ssh
+ (NSString *) ssh;

+ (NSURL *) blinkURL;
+ (NSURL *) blinkAgentSettingsURL;
+ (NSURL *) blinkBuildURL;
+ (NSURL *) blinkBuildTokenURL;
+ (NSURL *)blinkBuildStagingMarkURL;
+ (NSURL *) sshURL;
+ (NSURL *) blinkSSHConfigFileURL;
+ (NSURL *) blinkGlobalSSHConfigFileURL;
+ (NSURL *) blinkKBConfigURL;

+ (NSString *) blinkKeysFile;
+ (NSString *) blinkHostsFile;
+ (NSString *) blinkDefaultsFile;
+ (NSString *) blinkSyncItemsFile;
+ (NSString *) blinkProfileFile;

+ (NSURL *) historyURL;
+ (NSString *) historyFile;
+ (NSString *) knownHostsFile;

+ (NSURL *) localSnippetsLocationURL;
+ (NSURL *) iCloudSnippetsLocationURL;

+ (NSURL *)fileProviderReplicatedURL;
+ (NSURL *)fileProviderRemotesURLWithRecreate:(BOOL)recreate;

+ (NSURL *)fileProviderErrorLogURL;
+ (NSURL *)blinkCodeErrorLogURL;

+ (void)linkICloudDriveIfNeeded;
+ (void)linkDocumentsIfNeeded;

@end
