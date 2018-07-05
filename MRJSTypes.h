/*
 * Author: Jan Van Boghout <github@janvan.wtf>
 *
 * Copyright (c) 2011-2018 MacRabbit.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person or
 * organization obtaining a copy of the software and accompanying
 * documentation covered by this license (the "Software") to use,
 * reproduce, display, distribute, execute, and transmit the
 * Software, and to prepare derivative works of the Software, and
 * to permit third-parties to whom the Software is furnished to do
 * so, all subject to the following:
 *
 * The copyright notices in the Software and this entire statement,
 * including the above license grant, this restriction and the
 * following disclaimer, must be included in all copies of the
 * Software, in whole or in part, and all derivative works of the
 * Software, unless such copies or derivative works are solely in
 * the form of machine-executable object code generated by a source
 * language processor.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#import <Foundation/Foundation.h>
#import <JavaScriptCore/JavaScriptCore.h>

NS_ASSUME_NONNULL_BEGIN


NS_INLINE NSUInteger MRJSValueToUInteger(JSContextRef ctx, JSValueRef value, JSValueRef __nullable *__nullable exception)
{
    return (NSUInteger)round(JSValueToNumber(ctx, value, exception));
}


@interface MRJSConsole : NSObject

@property(copy,nullable) NSString *logPrefix;
- (void)log:(NSString *)message;
- (void)logException:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
