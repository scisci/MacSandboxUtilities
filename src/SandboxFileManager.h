#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>


@interface OpenOptions : NSObject
@property (nonatomic) BOOL canChooseDirectories;
@property (nonatomic) BOOL canChooseFiles;
@end

@interface URLResource : NSObject
- (instancetype)initWithURL:(NSURL *)url isScoped:(BOOL)scoped;
- (NSURL *)url;
@end


@interface SandboxFileManager : NSObject<NSOpenSavePanelDelegate>

- (instancetype)initWithPrefix:(NSString *)prefix;
- (void)openUrl:(NSURL *)url withOptions:(OpenOptions *)options withCompletion:(void (^)(URLResource *resource))completion;
@end
