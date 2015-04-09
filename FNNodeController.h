/* 
    Copyright (C) 2015 Stephen Oliver <steve@infincia.com>
    
    This code is distributed under the GNU General Public License, version 2.
    
    3rd party libraries may be distributed under an alternate Open Source license.
    
    See the LICENSE file included with this code for details.
    
*/

@import Cocoa;

@interface FNNodeController : NSObject <FNFCPWrapperDelegate, FNFCPWrapperDataSource>

@property enum FNNodeState currentNodeState;

- (void)startFreenet;
- (void)stopFreenet;
- (void)checkNodeStatus;

@end
