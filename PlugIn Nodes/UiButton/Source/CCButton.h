/*
 * cocos2d for iPhone: http://www.cocos2d-iphone.org
 *
 * Copyright (c) 2013 Apportable Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#import "CCNode.h"

@class CCScale9Sprite;
@class CCLabelTTF;
@class CCSpriteFrame;

typedef NS_ENUM(NSInteger, CCButtonState) {
    CCButtonStateNormal     = 1 << 1,
    CCButtonStatePressed    = 1 << 2,
    CCButtonStateDisabled   = 1 << 3
};

@interface CCButton : CCNode {
    NSMutableDictionary*    buttonRenderers_;
    CCLabelTTF*             titleRenderer_;
    
    NSMutableDictionary*    buttonRenderersEnabled_;
}

@property (nonatomic, assign) BOOL pressedActionEnabled;
@property (nonatomic, assign) CGFloat zoomScale;

@property (nonatomic, assign) BOOL touchEnabled;
@property (nonatomic, assign) BOOL swallowTouches;
@property (nonatomic, assign) BOOL propagateTouchEvents;

@property (nonatomic, assign) NSString* titleText;
@property (nonatomic, assign) ccColor3B titleColor;
@property (nonatomic, assign) CGFloat titleFontSize;
@property (nonatomic, assign) NSString* fontName;
//@property (nonatomic, assign) CCTextAlignment horizontalAlignment;
//@property (nonatomic, assign) CCVerticalTextAlignment verticalAlignment;

//- (void) setTitleAlignment:(CCTextAlignment) hAlignment;
//
//- (void) setTitleAlignment:(CCTextAlignment) hAlignment
//                       and:(CCVerticalTextAlignment) vAlignment;

- (void) setBackgroundSpriteEnabled:(BOOL) enabled
                           forState:(CCButtonState) state;

- (BOOL) backgroundSpriteEnabledForState:(CCButtonState) state;

- (void) setBackgroundSprite:(CCScale9Sprite*) sprite
                    forState:(CCButtonState) state;

- (void) setBackgroundSpriteFrame:(CCSpriteFrame*) spriteFrame
                         forState:(CCButtonState) state;

- (CCScale9Sprite*) backgroundSpriteForState:(CCButtonState) state;

@end