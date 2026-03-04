#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NSData, PelogicCacheStatus, PelogicCalibrationValue, PelogicCalibrationValueCompanion, PelogicCalibrationValues, PelogicCalibrationValuesJsonRoot, PelogicCalibrationValuesJsonRootCompanion, PelogicCalibrationValuesQueries, PelogicCalibrationValuesRepositoryImplCompanion, PelogicConstants, PelogicDbDownloadConfig, PelogicErrorCodes, PelogicFileSystemUtilCompanion, PelogicFilterType, PelogicFingerprintRepositoryException, PelogicFloor, PelogicFloorCompanion, PelogicFloorDetectionAndFilterResult, PelogicFloorDetectionData, PelogicFloorDetectionDataStatistics, PelogicFloorDetectionDefaultValue, PelogicFloorDetectionDefaultValueEntry, PelogicFloorDetectionDefaultValueQueries, PelogicFloorDetectionDefaultValueQueries_, PelogicFloorDetectionDefaultValue_, PelogicFloorDetectionException, PelogicFloorDetectionMacFloorMapping, PelogicFloorDetectionMacFloorMappingEntry, PelogicFloorDetectionMacFloorMappingQueries, PelogicFloorDetectionMacFloorMappingQueries_, PelogicFloorDetectionMacFloorMapping_, PelogicFloorDetectionService, PelogicFloorDetectionStatTable, PelogicFloorDetectionStatTableEntry, PelogicFloorDetectionStatTableQueries, PelogicFloorDetectionStatTableQueries_, PelogicFloorDetectionStatTable_, PelogicFloorRssiAverage, PelogicFloorRssiAverageEntry, PelogicFloorRssiAverageQueries, PelogicFloorSettings, PelogicFloorSettingsCompanion, PelogicFloorSettings_, PelogicFloorSettings__, PelogicFloorStats, PelogicFloorTransitionResult, PelogicFloorTransitionResultSuccess, PelogicInMemoryFingerprintRepository, PelogicInMemoryFloorDetectionRepository, PelogicInMemorySettingsRepository, PelogicInMemoryVenueDetectionRepository, PelogicInitializationError, PelogicInitializationResult, PelogicInitializationResultFailure, PelogicInitializationResultSuccess, PelogicKermitLogger, PelogicKermitLoggerCompanion, PelogicKermit_coreBaseLogger, PelogicKermit_coreLogWriter, PelogicKermit_coreSeverity, PelogicKotlinArray<T>, PelogicKotlinByteArray, PelogicKotlinByteIterator, PelogicKotlinEnum<E>, PelogicKotlinEnumCompanion, PelogicKotlinException, PelogicKotlinIllegalStateException, PelogicKotlinNothing, PelogicKotlinPair<__covariant A, __covariant B>, PelogicKotlinRuntimeException, PelogicKotlinThrowable, PelogicKotlinUnit, PelogicKotlinx_datetimeInstant, PelogicKotlinx_datetimeInstantCompanion, PelogicKotlinx_serialization_coreSerialKind, PelogicKotlinx_serialization_coreSerializersModule, PelogicLegacyErrorMessage, PelogicLog, PelogicLogExportUtil, PelogicLogQueries, PelogicMacListStringSerializer, PelogicMacMetadata, PelogicMacReadingFilter, PelogicMacStringSerializer, PelogicMathHelperCompanion, PelogicMobilityModelSettings, PelogicMobilityModelSettingsCompanion, PelogicMobilityModelSettings_, PelogicMobilityModelSettings__, PelogicOkioByteString, PelogicOkioByteStringCompanion, PelogicOkioPath, PelogicOkioPathCompanion, PelogicPEConfiguration, PelogicPELogger, PelogicPELoggerLogEntry, PelogicPELogicInMemoryDBCompanion, PelogicPELogicPersistentDBCompanion, PelogicParticle, PelogicParticleCompanion, PelogicParticleFilterFlowSettings, PelogicParticleFilterFlowSettingsCompanion, PelogicParticleFilterFlowSettings_, PelogicParticleFilterFlowSettings_Adapter, PelogicParticleFilterFlowSettings__, PelogicParticleFilterFlowSettings__Adapter, PelogicParticleFilterResponse, PelogicParticleFilterResponseCompanion, PelogicParticleFilterResponseError, PelogicParticleFilterResponseErrorCompanion, PelogicParticleFilterResponseProcessing, PelogicParticleFilterResponseProcessingCompanion, PelogicParticleFilterResponseSuccess, PelogicParticleFilterResponseSuccessCompanion, PelogicParticleFilterResultData, PelogicParticleFilterResultDataCompanion, PelogicParticleQueries, PelogicParticleQueries_, PelogicParticle_, PelogicParticle__, PelogicPerformanceMonitor, PelogicPersistentFingerprintRepository, PelogicPersistentFloorDetectionRepository, PelogicPersistentSettingsRepository, PelogicPersistentVenueDetectionRepository, PelogicPoint, PelogicPointCompanion, PelogicPosition, PelogicPositionCompanion, PelogicPositionError, PelogicPositionErrorCompanion, PelogicPositionResponse, PelogicPositionResponseCompanion, PelogicPositioningErrorCodes, PelogicPositioningRequest, PelogicPositioningRequestCompanion, PelogicPositioningResult, PelogicPositioningResultCompanion, PelogicPositioningResultError, PelogicPositioningResultSuccess, PelogicPreferencesRepository, PelogicRepositorySettingsBundle, PelogicRequestPositionData, PelogicRequestPositionDataCompanion, PelogicResamplingSettings, PelogicResamplingSettingsCompanion, PelogicResamplingSettings_, PelogicResamplingSettings__, PelogicResourceLoader, PelogicResourceLoaderFactory, PelogicRssiCalibrationUtils, PelogicRssiData, PelogicRssiMovingAverageUtil, PelogicRssiReading, PelogicRssiReadingCompanion, PelogicRssiReadingInput, PelogicRssiReadingInputCompanion, PelogicRssiReadingQueries, PelogicRssiReadingQueries_, PelogicRssiReading_, PelogicRssiReading__, PelogicRssiStatisticsModel, PelogicRssiStatisticsModel_, PelogicRssiStatisticsModel__, PelogicRssiValidationUtils, PelogicRuntimeAfterVersion, PelogicRuntimeBaseTransacterImpl, PelogicRuntimeExecutableQuery<__covariant RowType>, PelogicRuntimeQuery<__covariant RowType>, PelogicRuntimeTransacterImpl, PelogicRuntimeTransacterTransaction, PelogicSelectAllDefaultValueEntries, PelogicSelectAllDefaultValueEntries_, PelogicSelectAllMacFloorMappingEntries, PelogicSelectAllMacFloorMappingEntries_, PelogicSelectAllMacsWithMetadata, PelogicSelectAllMacsWithMetadata_, PelogicSelectAllMappings, PelogicSelectAllMappings_, PelogicSelectAllParticlesWithRssi, PelogicSelectAllStatTableEntries, PelogicSelectAllStatTableEntries_, PelogicSelectByMacSuffix, PelogicSelectByMacSuffix_, PelogicSelectDefaultValueByVenueAndFloor, PelogicSelectDefaultValueByVenueAndFloor_, PelogicSelectDefaultValuesByVenue, PelogicSelectDefaultValuesByVenue_, PelogicSelectFloorParticlesWithRssi, PelogicSelectFloorParticlesWithRssi_, PelogicSelectMacFloorMappingsByVenue, PelogicSelectMacFloorMappingsByVenue_, PelogicSelectStatTableByVenue, PelogicSelectStatTableByVenueAndFloor, PelogicSelectStatTableByVenueAndFloor_, PelogicSelectStatTableByVenue_, PelogicSettingItem, PelogicSettingItemCompanion, PelogicSettingsData, PelogicSettingsDataCompanion, PelogicSettingsJsonLoader, PelogicSettingsJsonRoot, PelogicSettingsJsonRootCompanion, PelogicSettingsQueries, PelogicSettingsQueries_, PelogicSettingsRepositoryException, PelogicSignatureFilterSettings, PelogicSignatureFilterSettingsCompanion, PelogicSignatureFilterSettings_, PelogicSignatureFilterSettings__, PelogicSmartFloorCounterCheckCompanion, PelogicSmartVenueCounterCheckCompanion, PelogicUser, PelogicUserParticles, PelogicUserParticlesQueries, PelogicUserQueries, PelogicUserRepositoryException, PelogicUserRepositoryImpl, PelogicUserRssiReading, PelogicUserRssiReadingQueries, PelogicUser_, PelogicUser_Adapter, PelogicValidationUtil, PelogicVenueDetectionAndFilterResult, PelogicVenueDetectionMapping, PelogicVenueDetectionMappingQueries, PelogicVenueDetectionMappingQueries_, PelogicVenueDetectionMapping_, PelogicVenueDetectionMapping__, PelogicVenueDetectionResult, PelogicVenueDetectionResultCompanion, PelogicVenueDetectionService, PelogicVenueTransitionResult, PelogicVenueTransitionResultSuccess, PelogicWeightCalculationParams;

@protocol PelogicCalibrationValuesRepository, PelogicFingerprintRepository, PelogicFloorDetectionLoader, PelogicFloorDetectionRepository, PelogicJsonFingerprintLoader, PelogicKermit_coreLoggerConfig, PelogicKermit_coreMutableLoggerConfig, PelogicKotlinAnnotation, PelogicKotlinAppendable, PelogicKotlinComparable, PelogicKotlinCoroutineContext, PelogicKotlinCoroutineContextElement, PelogicKotlinCoroutineContextKey, PelogicKotlinFunction, PelogicKotlinIterator, PelogicKotlinKAnnotatedElement, PelogicKotlinKClass, PelogicKotlinKClassifier, PelogicKotlinKDeclarationContainer, PelogicKotlinSuspendFunction0, PelogicKotlinx_coroutines_coreCoroutineScope, PelogicKotlinx_datetimeDateTimeFormat, PelogicKotlinx_serialization_coreCompositeDecoder, PelogicKotlinx_serialization_coreCompositeEncoder, PelogicKotlinx_serialization_coreDecoder, PelogicKotlinx_serialization_coreDeserializationStrategy, PelogicKotlinx_serialization_coreEncoder, PelogicKotlinx_serialization_coreKSerializer, PelogicKotlinx_serialization_coreSerialDescriptor, PelogicKotlinx_serialization_coreSerializationStrategy, PelogicKotlinx_serialization_coreSerializersModuleCollector, PelogicPE, PelogicPELogicInMemoryDB, PelogicPELogicPersistentDB, PelogicPenguinProvider, PelogicRuntimeCloseable, PelogicRuntimeColumnAdapter, PelogicRuntimeQueryListener, PelogicRuntimeQueryResult, PelogicRuntimeSqlCursor, PelogicRuntimeSqlDriver, PelogicRuntimeSqlPreparedStatement, PelogicRuntimeSqlSchema, PelogicRuntimeTransacter, PelogicRuntimeTransacterBase, PelogicRuntimeTransactionCallbacks, PelogicRuntimeTransactionWithReturn, PelogicRuntimeTransactionWithoutReturn, PelogicSettingsRepository, PelogicUserRepository, PelogicVenueDetectionLoader, PelogicVenueDetectionRepository;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface PelogicBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface PelogicBase (PelogicBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface PelogicMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PelogicMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorPelogicKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface PelogicNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface PelogicByte : PelogicNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface PelogicUByte : PelogicNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface PelogicShort : PelogicNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface PelogicUShort : PelogicNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface PelogicInt : PelogicNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface PelogicUInt : PelogicNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface PelogicLong : PelogicNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface PelogicULong : PelogicNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface PelogicFloat : PelogicNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface PelogicDouble : PelogicNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface PelogicBoolean : PelogicNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintLoader")))
@interface PelogicFingerprintLoader : PelogicBase
- (instancetype)initWithLoader:(id<PelogicJsonFingerprintLoader>)loader repo:(id<PelogicFingerprintRepository>)repo settingsRepo:(id<PelogicSettingsRepository>)settingsRepo runInTransaction:(void (^)(PelogicKotlinUnit *(^)(void)))runInTransaction __attribute__((swift_name("init(loader:repo:settingsRepo:runInTransaction:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadAllFloorsParticlesAsyncWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("loadAllFloorsParticlesAsync(completionHandler:)")));
- (void)seedFloorFloorId:(int64_t)floorId __attribute__((swift_name("seedFloor(floorId:)")));
@end

__attribute__((swift_name("FingerprintRepository")))
@protocol PelogicFingerprintRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllMacsWithCompletionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllMacs(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFloorMacsFloorID:(int64_t)floorID completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFloorMacs(floorID:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFloorParticlesFloorID:(int64_t)floorID completionHandler:(void (^)(NSArray<PelogicParticle *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFloorParticles(floorID:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVenueMacsVenueID:(int64_t)venueID completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVenueMacs(venueID:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasVenueMacsVenueId:(int64_t)venueId completionHandler:(void (^)(PelogicBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasVenueMacs(venueId:completionHandler:)")));
- (void)saveAllParticlesAllParticles:(NSDictionary<PelogicLong *, NSArray<PelogicParticle *> *> *)allParticles __attribute__((swift_name("saveAllParticles(allParticles:)")));
- (void)saveFloorParticlesFloorID:(int64_t)floorID particles:(NSArray<PelogicParticle *> *)particles __attribute__((swift_name("saveFloorParticles(floorID:particles:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InMemoryFingerprintRepository")))
@interface PelogicInMemoryFingerprintRepository : PelogicBase <PelogicFingerprintRepository>
- (instancetype)initWithDatabase:(id<PelogicPELogicInMemoryDB>)database __attribute__((swift_name("init(database:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearCacheWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearCache(completionHandler:)")));
- (void)clearParticles __attribute__((swift_name("clearParticles()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllMacsWithCompletionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllMacs(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFloorMacsFloorID:(int64_t)floorID completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFloorMacs(floorID:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFloorParticlesFloorID:(int64_t)floorID completionHandler:(void (^)(NSArray<PelogicParticle *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFloorParticles(floorID:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVenueMacsVenueID:(int64_t)venueID completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVenueMacs(venueID:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasVenueMacsVenueId:(int64_t)venueId completionHandler:(void (^)(PelogicBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasVenueMacs(venueId:completionHandler:)")));
- (void)saveAllParticlesAllParticles:(NSDictionary<PelogicLong *, NSArray<PelogicParticle *> *> *)allParticles __attribute__((swift_name("saveAllParticles(allParticles:)")));
- (void)saveFloorParticlesFloorID:(int64_t)floorID particles:(NSArray<PelogicParticle *> *)particles __attribute__((swift_name("saveFloorParticles(floorID:particles:)")));
- (void)shutdown __attribute__((swift_name("shutdown()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LegacyErrorMessage")))
@interface PelogicLegacyErrorMessage : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)legacyErrorMessage __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicLegacyErrorMessage *shared __attribute__((swift_name("shared")));
- (NSString *)createResetParticle:(BOOL)resetParticle resetSDK:(BOOL)resetSDK InvalidScan:(BOOL)InvalidScan message:(NSString *)message __attribute__((swift_name("create(resetParticle:resetSDK:InvalidScan:message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsLoader")))
@interface PelogicSettingsLoader : PelogicBase
- (instancetype)initWithLoader:(PelogicSettingsJsonLoader *)loader repo:(id<PelogicSettingsRepository>)repo runInTransaction:(void (^)(PelogicKotlinUnit *(^)(void)))runInTransaction __attribute__((swift_name("init(loader:repo:runInTransaction:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadAllFloorsSettingsAsyncWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("loadAllFloorsSettingsAsync(completionHandler:)")));
- (void)loadFloorSettingFloorId:(int64_t)floorId __attribute__((swift_name("loadFloorSetting(floorId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DbDownloadConfig")))
@interface PelogicDbDownloadConfig : PelogicBase
- (instancetype)initWithUrl:(NSString *)url forceDownload:(BOOL)forceDownload onProgress:(void (^ _Nullable)(PelogicLong *, PelogicLong * _Nullable))onProgress onDownloadComplete:(void (^ _Nullable)(void))onDownloadComplete __attribute__((swift_name("init(url:forceDownload:onProgress:onDownloadComplete:)"))) __attribute__((objc_designated_initializer));
- (PelogicDbDownloadConfig *)doCopyUrl:(NSString *)url forceDownload:(BOOL)forceDownload onProgress:(void (^ _Nullable)(PelogicLong *, PelogicLong * _Nullable))onProgress onDownloadComplete:(void (^ _Nullable)(void))onDownloadComplete __attribute__((swift_name("doCopy(url:forceDownload:onProgress:onDownloadComplete:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL forceDownload __attribute__((swift_name("forceDownload")));
@property (readonly) void (^ _Nullable onDownloadComplete)(void) __attribute__((swift_name("onDownloadComplete")));
@property (readonly) void (^ _Nullable onProgress)(PelogicLong *, PelogicLong * _Nullable) __attribute__((swift_name("onProgress")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DriverFactory")))
@interface PelogicDriverFactory : PelogicBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<PelogicRuntimeSqlDriver>)createInMemoryDBDriver __attribute__((swift_name("createInMemoryDBDriver()")));
- (id<PelogicRuntimeSqlDriver>)createPersistentDBDriver __attribute__((swift_name("createPersistentDBDriver()")));
@end

__attribute__((swift_name("PE")))
@protocol PelogicPE
@required
- (void)destroy __attribute__((swift_name("destroy()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentPositionUserRssiReadings:(NSArray<PelogicRssiReading *> *)userRssiReadings request:(PelogicRequestPositionData *)request shouldResetParticlesByRequest:(BOOL)shouldResetParticlesByRequest completionHandler:(void (^)(PelogicParticleFilterResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentPosition(userRssiReadings:request:shouldResetParticlesByRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)initializeConfig:(PelogicPEConfiguration *)config onResult:(void (^)(PelogicInitializationResult *))onResult completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("initialize(config:onResult:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PEImpl")))
@interface PelogicPEImpl : PelogicBase <PelogicPE>
- (instancetype)initWithPersistentDB:(id<PelogicPELogicPersistentDB>)persistentDB inMemoryDB:(id<PelogicPELogicInMemoryDB>)inMemoryDB resourceLoader:(PelogicResourceLoader *)resourceLoader inMemorySettingsRepository:(PelogicInMemorySettingsRepository *)inMemorySettingsRepository userRepository:(PelogicUserRepositoryImpl *)userRepository inMemoryfingerprintRepository:(PelogicInMemoryFingerprintRepository *)inMemoryfingerprintRepository persistentSettingsRepository:(PelogicPersistentSettingsRepository *)persistentSettingsRepository persistentFingerprintRepository:(PelogicPersistentFingerprintRepository *)persistentFingerprintRepository calibrationValuesRepository:(id<PelogicCalibrationValuesRepository>)calibrationValuesRepository persistentVenueDetectionRepository:(PelogicPersistentVenueDetectionRepository *)persistentVenueDetectionRepository inMemoryVenueDetectionRepository:(PelogicInMemoryVenueDetectionRepository *)inMemoryVenueDetectionRepository persistentFloorDetectionRepository:(PelogicPersistentFloorDetectionRepository *)persistentFloorDetectionRepository inMemoryFloorDetectionRepository:(PelogicInMemoryFloorDetectionRepository *)inMemoryFloorDetectionRepository peLogger:(PelogicPELogger *)peLogger preferencesRepository:(PelogicPreferencesRepository *)preferencesRepository macFilter:(PelogicMacReadingFilter *)macFilter venueDetectionService:(PelogicVenueDetectionService *)venueDetectionService floorDetectionService:(PelogicFloorDetectionService *)floorDetectionService __attribute__((swift_name("init(persistentDB:inMemoryDB:resourceLoader:inMemorySettingsRepository:userRepository:inMemoryfingerprintRepository:persistentSettingsRepository:persistentFingerprintRepository:calibrationValuesRepository:persistentVenueDetectionRepository:inMemoryVenueDetectionRepository:persistentFloorDetectionRepository:inMemoryFloorDetectionRepository:peLogger:preferencesRepository:macFilter:venueDetectionService:floorDetectionService:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllLogsWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllLogs(completionHandler:)")));
- (void)destroy __attribute__((swift_name("destroy()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)flushLogsWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("flushLogs(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentPositionUserRssiReadings:(NSArray<PelogicRssiReading *> *)userRssiReadings request:(PelogicRequestPositionData *)request shouldResetParticlesByRequest:(BOOL)shouldResetParticlesByRequest completionHandler:(void (^)(PelogicParticleFilterResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentPosition(userRssiReadings:request:shouldResetParticlesByRequest:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPendingLogCountWithCompletionHandler:(void (^)(PelogicInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPendingLogCount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)initializeConfig:(PelogicPEConfiguration *)config onResult:(void (^)(PelogicInitializationResult *))onResult completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("initialize(config:onResult:completionHandler:)")));
@end

__attribute__((swift_name("PenguinProvider")))
@protocol PelogicPenguinProvider
@required
- (void)destroy __attribute__((swift_name("destroy()")));
- (PelogicPEConfiguration * _Nullable)getConfiguration __attribute__((swift_name("getConfiguration()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPositioningDataRequest:(PelogicPositioningRequest *)request completionHandler:(void (^)(PelogicPositioningResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPositioningData(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)initializeConfig:(PelogicPEConfiguration *)config onResult:(void (^)(PelogicInitializationResult *))onResult completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("initialize(config:onResult:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PenguinLocationProvider")))
@interface PelogicPenguinLocationProvider : PelogicBase <PelogicPenguinProvider>
- (instancetype)initWithPersistentDB:(id<PelogicPELogicPersistentDB>)persistentDB inMemoryDB:(id<PelogicPELogicInMemoryDB>)inMemoryDB resourceLoader:(PelogicResourceLoader *)resourceLoader preferencesRepository:(PelogicPreferencesRepository * _Nullable)preferencesRepository __attribute__((swift_name("init(persistentDB:inMemoryDB:resourceLoader:preferencesRepository:)"))) __attribute__((objc_designated_initializer));
- (void)destroy __attribute__((swift_name("destroy()")));
- (PelogicPEConfiguration * _Nullable)getConfiguration __attribute__((swift_name("getConfiguration()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPositioningDataRequest:(PelogicPositioningRequest *)request completionHandler:(void (^)(PelogicPositioningResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPositioningData(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)initializeConfig:(PelogicPEConfiguration *)config onResult:(void (^)(PelogicInitializationResult *))onResult completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("initialize(config:onResult:completionHandler:)")));
- (void)setConnectedToInternetIsConnected:(BOOL)isConnected __attribute__((swift_name("setConnectedToInternet(isConnected:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalibrationValuesJsonLoader")))
@interface PelogicCalibrationValuesJsonLoader : PelogicBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<PelogicCalibrationValue *> *)parseCalibrationValuesJsonString:(NSString *)jsonString __attribute__((swift_name("parseCalibrationValues(jsonString:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalibrationValuesJsonRoot")))
@interface PelogicCalibrationValuesJsonRoot : PelogicBase
- (instancetype)initWithResult:(BOOL)result message:(NSString *)message data:(NSArray<PelogicCalibrationValue *> *)data __attribute__((swift_name("init(result:message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicCalibrationValuesJsonRootCompanion *companion __attribute__((swift_name("companion")));
- (PelogicCalibrationValuesJsonRoot *)doCopyResult:(BOOL)result message:(NSString *)message data:(NSArray<PelogicCalibrationValue *> *)data __attribute__((swift_name("doCopy(result:message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PelogicCalibrationValue *> *data __attribute__((swift_name("data")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) BOOL result __attribute__((swift_name("result")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalibrationValuesJsonRoot.Companion")))
@interface PelogicCalibrationValuesJsonRootCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicCalibrationValuesJsonRootCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface PelogicKotlinThrowable : PelogicBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (PelogicKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PelogicKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface PelogicKotlinException : PelogicKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintLoadException")))
@interface PelogicFingerprintLoadException : PelogicKotlinException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionData")))
@interface PelogicFloorDetectionData : PelogicBase
- (instancetype)initWithStatTableEntries:(NSArray<PelogicFloorDetectionStatTableEntry *> *)statTableEntries defaultValueEntries:(NSArray<PelogicFloorDetectionDefaultValueEntry *> *)defaultValueEntries macFloorMappingEntries:(NSArray<PelogicFloorDetectionMacFloorMappingEntry *> *)macFloorMappingEntries __attribute__((swift_name("init(statTableEntries:defaultValueEntries:macFloorMappingEntries:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorDetectionData *)doCopyStatTableEntries:(NSArray<PelogicFloorDetectionStatTableEntry *> *)statTableEntries defaultValueEntries:(NSArray<PelogicFloorDetectionDefaultValueEntry *> *)defaultValueEntries macFloorMappingEntries:(NSArray<PelogicFloorDetectionMacFloorMappingEntry *> *)macFloorMappingEntries __attribute__((swift_name("doCopy(statTableEntries:defaultValueEntries:macFloorMappingEntries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PelogicFloorDetectionDefaultValueEntry *> *defaultValueEntries __attribute__((swift_name("defaultValueEntries")));
@property (readonly) NSArray<PelogicFloorDetectionMacFloorMappingEntry *> *macFloorMappingEntries __attribute__((swift_name("macFloorMappingEntries")));
@property (readonly) NSArray<PelogicFloorDetectionStatTableEntry *> *statTableEntries __attribute__((swift_name("statTableEntries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionLoadException")))
@interface PelogicFloorDetectionLoadException : PelogicKotlinException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("FloorDetectionLoader")))
@protocol PelogicFloorDetectionLoader
@required
- (NSArray<PelogicLong *> *)getAvailableVenueIds __attribute__((swift_name("getAvailableVenueIds()")));
- (BOOL)isFloorDetectionDataAvailableVenueId:(int64_t)venueId __attribute__((swift_name("isFloorDetectionDataAvailable(venueId:)")));
- (NSDictionary<PelogicLong *, PelogicFloorDetectionData *> *)loadAllFloorDetectionData __attribute__((swift_name("loadAllFloorDetectionData()")));
- (PelogicFloorDetectionData * _Nullable)loadFloorDetectionDataVenueId:(int64_t)venueId __attribute__((swift_name("loadFloorDetectionData(venueId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionLoaderImpl")))
@interface PelogicFloorDetectionLoaderImpl : PelogicBase <PelogicFloorDetectionLoader>
- (instancetype)initWithResourceLoader:(PelogicResourceLoader *)resourceLoader resourcePathPrefix:(NSString *)resourcePathPrefix __attribute__((swift_name("init(resourceLoader:resourcePathPrefix:)"))) __attribute__((objc_designated_initializer));
- (NSArray<PelogicLong *> *)getAvailableVenueIds __attribute__((swift_name("getAvailableVenueIds()")));
- (BOOL)isFloorDetectionDataAvailableVenueId:(int64_t)venueId __attribute__((swift_name("isFloorDetectionDataAvailable(venueId:)")));
- (NSDictionary<PelogicLong *, PelogicFloorDetectionData *> *)loadAllFloorDetectionData __attribute__((swift_name("loadAllFloorDetectionData()")));
- (PelogicFloorDetectionData * _Nullable)loadFloorDetectionDataVenueId:(int64_t)venueId __attribute__((swift_name("loadFloorDetectionData(venueId:)")));
@end

__attribute__((swift_name("JsonFingerprintLoader")))
@protocol PelogicJsonFingerprintLoader
@required
- (NSArray<PelogicLong *> *)availableFloorIds __attribute__((swift_name("availableFloorIds()")));
- (NSArray<PelogicParticle *> *)loadFloorParticlesFloorId:(int64_t)floorId __attribute__((swift_name("loadFloorParticles(floorId:)")));
- (PelogicRssiStatisticsModel *)loadOfflineEPTrustFloorId:(int64_t)floorId __attribute__((swift_name("loadOfflineEPTrust(floorId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonFingerprintLoaderImpl")))
@interface PelogicJsonFingerprintLoaderImpl : PelogicBase <PelogicJsonFingerprintLoader>
- (instancetype)initWithResourceLoader:(PelogicResourceLoader *)resourceLoader resourceDir:(NSString *)resourceDir __attribute__((swift_name("init(resourceLoader:resourceDir:)"))) __attribute__((objc_designated_initializer));
- (NSArray<PelogicLong *> *)availableFloorIds __attribute__((swift_name("availableFloorIds()")));
- (NSArray<PelogicParticle *> *)loadFloorParticlesFloorId:(int64_t)floorId __attribute__((swift_name("loadFloorParticles(floorId:)")));
- (PelogicRssiStatisticsModel *)loadOfflineEPTrustFloorId:(int64_t)floorId __attribute__((swift_name("loadOfflineEPTrust(floorId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RepositorySettingsBundle")))
@interface PelogicRepositorySettingsBundle : PelogicBase
- (instancetype)initWithFloorSettings:(PelogicFloorSettings *)floorSettings mobilityModelSettings:(PelogicMobilityModelSettings *)mobilityModelSettings rssiStatisticsModel:(PelogicRssiStatisticsModel *)rssiStatisticsModel signatureFilterSettings:(PelogicSignatureFilterSettings *)signatureFilterSettings resamplingSettings:(PelogicResamplingSettings *)resamplingSettings particleFilterFlowSettings:(PelogicParticleFilterFlowSettings *)particleFilterFlowSettings __attribute__((swift_name("init(floorSettings:mobilityModelSettings:rssiStatisticsModel:signatureFilterSettings:resamplingSettings:particleFilterFlowSettings:)"))) __attribute__((objc_designated_initializer));
- (PelogicRepositorySettingsBundle *)doCopyFloorSettings:(PelogicFloorSettings *)floorSettings mobilityModelSettings:(PelogicMobilityModelSettings *)mobilityModelSettings rssiStatisticsModel:(PelogicRssiStatisticsModel *)rssiStatisticsModel signatureFilterSettings:(PelogicSignatureFilterSettings *)signatureFilterSettings resamplingSettings:(PelogicResamplingSettings *)resamplingSettings particleFilterFlowSettings:(PelogicParticleFilterFlowSettings *)particleFilterFlowSettings __attribute__((swift_name("doCopy(floorSettings:mobilityModelSettings:rssiStatisticsModel:signatureFilterSettings:resamplingSettings:particleFilterFlowSettings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PelogicFloorSettings *floorSettings __attribute__((swift_name("floorSettings")));
@property (readonly) PelogicMobilityModelSettings *mobilityModelSettings __attribute__((swift_name("mobilityModelSettings")));
@property (readonly) PelogicParticleFilterFlowSettings *particleFilterFlowSettings __attribute__((swift_name("particleFilterFlowSettings")));
@property (readonly) PelogicResamplingSettings *resamplingSettings __attribute__((swift_name("resamplingSettings")));
@property (readonly) PelogicRssiStatisticsModel *rssiStatisticsModel __attribute__((swift_name("rssiStatisticsModel")));
@property (readonly) PelogicSignatureFilterSettings *signatureFilterSettings __attribute__((swift_name("signatureFilterSettings")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceLoader")))
@interface PelogicResourceLoader : PelogicBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)directoryExistsPath:(NSString *)path __attribute__((swift_name("directoryExists(path:)")));
- (BOOL)fileExistsPath:(NSString *)path __attribute__((swift_name("fileExists(path:)")));
- (NSArray<NSString *> *)listDirectoryPath:(NSString *)path __attribute__((swift_name("listDirectory(path:)")));
- (NSString *)readFilePath:(NSString *)path __attribute__((swift_name("readFile(path:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceLoaderFactory")))
@interface PelogicResourceLoaderFactory : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resourceLoaderFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicResourceLoaderFactory *shared __attribute__((swift_name("shared")));
- (PelogicResourceLoader *)createResourceLoader __attribute__((swift_name("createResourceLoader()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingItem")))
@interface PelogicSettingItem : PelogicBase
- (instancetype)initWithRefernceId:(int32_t)refernceId description:(NSString *)description value:(NSString *)value __attribute__((swift_name("init(refernceId:description:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicSettingItemCompanion *companion __attribute__((swift_name("companion")));
- (PelogicSettingItem *)doCopyRefernceId:(int32_t)refernceId description:(NSString *)description value:(NSString *)value __attribute__((swift_name("doCopy(refernceId:description:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t refernceId __attribute__((swift_name("refernceId")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingItem.Companion")))
@interface PelogicSettingItemCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicSettingItemCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsData")))
@interface PelogicSettingsData : PelogicBase
- (instancetype)initWithId:(int32_t)id data:(NSArray<PelogicSettingItem *> *)data __attribute__((swift_name("init(id:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicSettingsDataCompanion *companion __attribute__((swift_name("companion")));
- (PelogicSettingsData *)doCopyId:(int32_t)id data:(NSArray<PelogicSettingItem *> *)data __attribute__((swift_name("doCopy(id:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PelogicSettingItem *> *data __attribute__((swift_name("data")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsData.Companion")))
@interface PelogicSettingsDataCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicSettingsDataCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsJsonLoader")))
@interface PelogicSettingsJsonLoader : PelogicBase
- (instancetype)initWithResourceLoader:(PelogicResourceLoader *)resourceLoader resourceDir:(NSString *)resourceDir __attribute__((swift_name("init(resourceLoader:resourceDir:)"))) __attribute__((objc_designated_initializer));
- (NSArray<PelogicLong *> *)availableFloorIds __attribute__((swift_name("availableFloorIds()")));
- (PelogicSettingsJsonRoot *)loadFloorSettingsFloorId:(int64_t)floorId __attribute__((swift_name("loadFloorSettings(floorId:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsJsonRoot")))
@interface PelogicSettingsJsonRoot : PelogicBase
- (instancetype)initWithResult:(BOOL)result message:(NSString *)message data:(PelogicSettingsData *)data __attribute__((swift_name("init(result:message:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicSettingsJsonRootCompanion *companion __attribute__((swift_name("companion")));
- (PelogicSettingsJsonRoot *)doCopyResult:(BOOL)result message:(NSString *)message data:(PelogicSettingsData *)data __attribute__((swift_name("doCopy(result:message:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PelogicSettingsData *data __attribute__((swift_name("data")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) BOOL result __attribute__((swift_name("result")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsJsonRoot.Companion")))
@interface PelogicSettingsJsonRootCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicSettingsJsonRootCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsLoadException")))
@interface PelogicSettingsLoadException : PelogicKotlinException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionLoadException")))
@interface PelogicVenueDetectionLoadException : PelogicKotlinException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("VenueDetectionLoader")))
@protocol PelogicVenueDetectionLoader
@required
- (BOOL)isVenueDetectionDataAvailable __attribute__((swift_name("isVenueDetectionDataAvailable()")));
- (NSArray<PelogicVenueDetectionMapping *> *)loadVenueDetectionData __attribute__((swift_name("loadVenueDetectionData()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionLoaderImpl")))
@interface PelogicVenueDetectionLoaderImpl : PelogicBase <PelogicVenueDetectionLoader>
- (instancetype)initWithResourceLoader:(PelogicResourceLoader *)resourceLoader resourcePath:(NSString *)resourcePath __attribute__((swift_name("init(resourceLoader:resourcePath:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isVenueDetectionDataAvailable __attribute__((swift_name("isVenueDetectionDataAvailable()")));
- (NSArray<PelogicVenueDetectionMapping *> *)loadVenueDetectionData __attribute__((swift_name("loadVenueDetectionData()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CacheStatus")))
@interface PelogicCacheStatus : PelogicBase
- (instancetype)initWithIsInitialized:(BOOL)isInitialized cachedItemCount:(int32_t)cachedItemCount lastCacheUpdate:(NSString *)lastCacheUpdate __attribute__((swift_name("init(isInitialized:cachedItemCount:lastCacheUpdate:)"))) __attribute__((objc_designated_initializer));
- (PelogicCacheStatus *)doCopyIsInitialized:(BOOL)isInitialized cachedItemCount:(int32_t)cachedItemCount lastCacheUpdate:(NSString *)lastCacheUpdate __attribute__((swift_name("doCopy(isInitialized:cachedItemCount:lastCacheUpdate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t cachedItemCount __attribute__((swift_name("cachedItemCount")));
@property (readonly) BOOL isInitialized __attribute__((swift_name("isInitialized")));
@property (readonly) NSString *lastCacheUpdate __attribute__((swift_name("lastCacheUpdate")));
@end

__attribute__((swift_name("CalibrationValuesRepository")))
@protocol PelogicCalibrationValuesRepository
@required
- (void)clearAllCalibrationValues __attribute__((swift_name("clearAllCalibrationValues()")));
- (NSArray<PelogicCalibrationValue *> *)getAllCalibrationValues __attribute__((swift_name("getAllCalibrationValues()")));
- (PelogicCalibrationValue * _Nullable)getCalibrationValuePlatform:(NSString *)platform manufactur:(NSString *)manufactur model:(NSString *)model __attribute__((swift_name("getCalibrationValue(platform:manufactur:model:)")));
- (NSArray<PelogicCalibrationValue *> *)getCalibrationValuesByManufacturerManufactur:(NSString *)manufactur __attribute__((swift_name("getCalibrationValuesByManufacturer(manufactur:)")));
- (NSArray<PelogicCalibrationValue *> *)getCalibrationValuesByPlatformPlatform:(NSString *)platform __attribute__((swift_name("getCalibrationValuesByPlatform(platform:)")));
- (void)saveCalibrationValueCalibrationValue:(PelogicCalibrationValue *)calibrationValue __attribute__((swift_name("saveCalibrationValue(calibrationValue:)")));
- (void)seedCalibrationValues __attribute__((swift_name("seedCalibrationValues()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalibrationValuesRepositoryImpl")))
@interface PelogicCalibrationValuesRepositoryImpl : PelogicBase <PelogicCalibrationValuesRepository>
- (instancetype)initWithDatabase:(id<PelogicPELogicPersistentDB>)database resourceLoader:(PelogicResourceLoader *)resourceLoader __attribute__((swift_name("init(database:resourceLoader:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicCalibrationValuesRepositoryImplCompanion *companion __attribute__((swift_name("companion")));
- (void)clearAllCalibrationValues __attribute__((swift_name("clearAllCalibrationValues()")));
- (void)clearCache __attribute__((swift_name("clearCache()")));
- (NSArray<PelogicCalibrationValue *> *)getAllCalibrationValues __attribute__((swift_name("getAllCalibrationValues()")));
- (PelogicCacheStatus *)getCacheStatus __attribute__((swift_name("getCacheStatus()")));
- (PelogicCalibrationValue * _Nullable)getCalibrationValuePlatform:(NSString *)platform manufactur:(NSString *)manufactur model:(NSString *)model __attribute__((swift_name("getCalibrationValue(platform:manufactur:model:)")));
- (NSArray<PelogicCalibrationValue *> *)getCalibrationValuesByManufacturerManufactur:(NSString *)manufactur __attribute__((swift_name("getCalibrationValuesByManufacturer(manufactur:)")));
- (NSArray<PelogicCalibrationValue *> *)getCalibrationValuesByPlatformPlatform:(NSString *)platform __attribute__((swift_name("getCalibrationValuesByPlatform(platform:)")));
- (void)refreshCache __attribute__((swift_name("refreshCache()")));
- (void)saveCalibrationValueCalibrationValue:(PelogicCalibrationValue *)calibrationValue __attribute__((swift_name("saveCalibrationValue(calibrationValue:)")));
- (void)seedCalibrationValues __attribute__((swift_name("seedCalibrationValues()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalibrationValuesRepositoryImpl.Companion")))
@interface PelogicCalibrationValuesRepositoryImplCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicCalibrationValuesRepositoryImplCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("UserRepositoryException")))
@interface PelogicUserRepositoryException : PelogicKotlinException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDatabaseException")))
@interface PelogicUserDatabaseException : PelogicUserRepositoryException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserNotFoundException")))
@interface PelogicUserNotFoundException : PelogicUserRepositoryException
- (instancetype)initWithUserId:(NSString *)userId __attribute__((swift_name("init(userId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("UserRepository")))
@protocol PelogicUserRepository
@required
- (PelogicUser * _Nullable)getUserId:(NSString *)id __attribute__((swift_name("getUser(id:)")));
- (void)saveUserUser:(PelogicUser *)user __attribute__((swift_name("saveUser(user:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserRepositoryImpl")))
@interface PelogicUserRepositoryImpl : PelogicBase <PelogicUserRepository>
- (instancetype)initWithDatabase:(id<PelogicPELogicInMemoryDB>)database __attribute__((swift_name("init(database:)"))) __attribute__((objc_designated_initializer));
- (PelogicUser * _Nullable)getUserId:(NSString *)id __attribute__((swift_name("getUser(id:)")));
- (void)saveUserUser:(PelogicUser *)user __attribute__((swift_name("saveUser(user:)")));
@end

__attribute__((swift_name("FingerprintRepositoryException")))
@interface PelogicFingerprintRepositoryException : PelogicKotlinException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintDatabaseException")))
@interface PelogicFingerprintDatabaseException : PelogicFingerprintRepositoryException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintMacCacheManager")))
@interface PelogicFingerprintMacCacheManager : PelogicBase
- (instancetype)initWithQueryMacMetadata:(id<PelogicKotlinSuspendFunction0>)queryMacMetadata __attribute__((swift_name("init(queryMacMetadata:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearCacheWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearCache(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllMacsWithCompletionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllMacs(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCachedVenueIdsWithCompletionHandler:(void (^)(NSSet<PelogicLong *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCachedVenueIds(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFloorMacsFloorID:(int64_t)floorID completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFloorMacs(floorID:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVenueMacsVenueID:(int64_t)venueID completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVenueMacs(venueID:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasExpiredMacsWithCompletionHandler:(void (^)(PelogicBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasExpiredMacs(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasVenueMacsVenueId:(int64_t)venueId completionHandler:(void (^)(PelogicBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasVenueMacs(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeExpiredMacsWithCompletionHandler:(void (^)(NSSet<PelogicLong *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("removeExpiredMacs(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateMacCacheIncrementalParticles:(NSArray<PelogicParticle *> *)particles completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateMacCacheIncremental(particles:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FingerprintNotFoundException")))
@interface PelogicFingerprintNotFoundException : PelogicFingerprintRepositoryException
- (instancetype)initWithFloorId:(int64_t)floorId __attribute__((swift_name("init(floorId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MacMetadata")))
@interface PelogicMacMetadata : PelogicBase
- (instancetype)initWithMac:(NSString *)mac floorId:(PelogicLong * _Nullable)floorId venueId:(PelogicLong * _Nullable)venueId __attribute__((swift_name("init(mac:floorId:venueId:)"))) __attribute__((objc_designated_initializer));
- (PelogicMacMetadata *)doCopyMac:(NSString *)mac floorId:(PelogicLong * _Nullable)floorId venueId:(PelogicLong * _Nullable)venueId __attribute__((swift_name("doCopy(mac:floorId:venueId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PelogicLong * _Nullable floorId __attribute__((swift_name("floorId")));
@property (readonly) NSString *mac __attribute__((swift_name("mac")));
@property (readonly) PelogicLong * _Nullable venueId __attribute__((swift_name("venueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PersistentFingerprintRepository")))
@interface PelogicPersistentFingerprintRepository : PelogicBase <PelogicFingerprintRepository>
- (instancetype)initWithDatabase:(id<PelogicPELogicPersistentDB>)database __attribute__((swift_name("init(database:)"))) __attribute__((objc_designated_initializer));
- (void)clearParticles __attribute__((swift_name("clearParticles()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)doCopyAllToTarget:(PelogicInMemoryFingerprintRepository *)target completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("doCopyAllTo(target:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)doCopyToTarget:(PelogicInMemoryFingerprintRepository *)target floorId:(int64_t)floorId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("doCopyTo(target:floorId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)doCopyToByFloorIdsTarget:(PelogicInMemoryFingerprintRepository *)target floorIDs:(NSArray<PelogicLong *> *)floorIDs completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("doCopyToByFloorIds(target:floorIDs:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllMacsWithCompletionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllMacs(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDistinctMacCountWithCompletionHandler:(void (^)(PelogicLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDistinctMacCount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFloorMacsFloorID:(int64_t)floorID completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFloorMacs(floorID:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFloorParticlesFloorID:(int64_t)floorID completionHandler:(void (^)(NSArray<PelogicParticle *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFloorParticles(floorID:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getParticleCountWithCompletionHandler:(void (^)(PelogicLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getParticleCount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVenueMacsVenueID:(int64_t)venueID completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVenueMacs(venueID:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasVenueMacsVenueId:(int64_t)venueId completionHandler:(void (^)(PelogicBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasVenueMacs(venueId:completionHandler:)")));
- (void)saveAllParticlesAllParticles:(NSDictionary<PelogicLong *, NSArray<PelogicParticle *> *> *)allParticles __attribute__((swift_name("saveAllParticles(allParticles:)")));
- (void)saveFloorParticlesFloorID:(int64_t)floorID particles:(NSArray<PelogicParticle *> *)particles __attribute__((swift_name("saveFloorParticles(floorID:particles:)")));
@end

__attribute__((swift_name("FloorDetectionException")))
@interface PelogicFloorDetectionException : PelogicKotlinException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionDatabaseException")))
@interface PelogicFloorDetectionDatabaseException : PelogicFloorDetectionException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionNotFoundException")))
@interface PelogicFloorDetectionNotFoundException : PelogicFloorDetectionException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("FloorDetectionRepository")))
@protocol PelogicFloorDetectionRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllDefaultValueEntriesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllDefaultValueEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllFloorDetectionDataWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllFloorDetectionData(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllMacFloorMappingEntriesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllMacFloorMappingEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllStatTableEntriesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllStatTableEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteDefaultValueEntryVenueId:(int64_t)venueId floorId:(int64_t)floorId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteDefaultValueEntry(venueId:floorId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteMacFloorMappingEntryVenueId:(int64_t)venueId macAddress:(NSString *)macAddress completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteMacFloorMappingEntry(venueId:macAddress:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteStatTableEntryVenueId:(int64_t)venueId floorId:(int64_t)floorId macAddress:(NSString *)macAddress completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteStatTableEntry(venueId:floorId:macAddress:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllDefaultValueEntriesWithCompletionHandler:(void (^)(NSArray<PelogicFloorDetectionDefaultValueEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllDefaultValueEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllMacFloorMappingEntriesWithCompletionHandler:(void (^)(NSArray<PelogicFloorDetectionMacFloorMappingEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllMacFloorMappingEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllStatTableEntriesWithCompletionHandler:(void (^)(NSArray<PelogicFloorDetectionStatTableEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllStatTableEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDefaultValueEntriesByVenueVenueId:(int64_t)venueId completionHandler:(void (^)(NSArray<PelogicFloorDetectionDefaultValueEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDefaultValueEntriesByVenue(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDefaultValueEntriesCountWithCompletionHandler:(void (^)(PelogicLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDefaultValueEntriesCount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDefaultValueEntryByVenueAndFloorVenueId:(int64_t)venueId floorId:(int64_t)floorId completionHandler:(void (^)(PelogicFloorDetectionDefaultValueEntry * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getDefaultValueEntryByVenueAndFloor(venueId:floorId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDefaultValuesVenueId:(int64_t)venueId completionHandler:(void (^)(NSDictionary<PelogicLong *, PelogicFloorStats *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDefaultValues(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDistinctFloorIdsByVenueVenueId:(int64_t)venueId completionHandler:(void (^)(NSArray<PelogicLong *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDistinctFloorIdsByVenue(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDistinctVenueIdsWithCompletionHandler:(void (^)(NSArray<PelogicLong *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDistinctVenueIds(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFloorIdByMacAddressVenueId:(int64_t)venueId macAddress:(NSString *)macAddress completionHandler:(void (^)(PelogicLong * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFloorIdByMacAddress(venueId:macAddress:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMacFloorMappingEntriesByVenueVenueId:(int64_t)venueId completionHandler:(void (^)(NSArray<PelogicFloorDetectionMacFloorMappingEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMacFloorMappingEntriesByVenue(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMacFloorMappingEntriesCountWithCompletionHandler:(void (^)(PelogicLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMacFloorMappingEntriesCount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMacFloorMappingsVenueId:(int64_t)venueId completionHandler:(void (^)(NSDictionary<PelogicLong *, NSDictionary<NSString *, PelogicLong *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMacFloorMappings(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStatTableEntriesByVenueVenueId:(int64_t)venueId completionHandler:(void (^)(NSArray<PelogicFloorDetectionStatTableEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStatTableEntriesByVenue(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStatTableEntriesByVenueAndFloorVenueId:(int64_t)venueId floorId:(int64_t)floorId completionHandler:(void (^)(NSArray<PelogicFloorDetectionStatTableEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStatTableEntriesByVenueAndFloor(venueId:floorId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStatTableEntriesCountWithCompletionHandler:(void (^)(PelogicLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStatTableEntriesCount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStatTablesVenueId:(int64_t)venueId completionHandler:(void (^)(NSDictionary<PelogicLong *, NSDictionary<PelogicLong *, NSDictionary<NSString *, PelogicFloorStats *> *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStatTables(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasAnyFloorDetectionDataWithCompletionHandler:(void (^)(PelogicBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasAnyFloorDetectionData(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasFloorDetectionDataVenueId:(int64_t)venueId completionHandler:(void (^)(PelogicBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasFloorDetectionData(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertDefaultValueEntriesBatchEntries:(NSArray<PelogicFloorDetectionDefaultValueEntry *> *)entries completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertDefaultValueEntriesBatch(entries:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertDefaultValueEntryEntry:(PelogicFloorDetectionDefaultValueEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertDefaultValueEntry(entry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertMacFloorMappingEntriesBatchEntries:(NSArray<PelogicFloorDetectionMacFloorMappingEntry *> *)entries completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertMacFloorMappingEntriesBatch(entries:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertMacFloorMappingEntryEntry:(PelogicFloorDetectionMacFloorMappingEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertMacFloorMappingEntry(entry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertStatTableEntriesBatchEntries:(NSArray<PelogicFloorDetectionStatTableEntry *> *)entries completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertStatTableEntriesBatch(entries:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertStatTableEntryEntry:(PelogicFloorDetectionStatTableEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertStatTableEntry(entry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateDefaultValueEntryEntry:(PelogicFloorDetectionDefaultValueEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateDefaultValueEntry(entry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateMacFloorMappingEntryEntry:(PelogicFloorDetectionMacFloorMappingEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateMacFloorMappingEntry(entry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateStatTableEntryEntry:(PelogicFloorDetectionStatTableEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateStatTableEntry(entry:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionRepositoryException")))
@interface PelogicFloorDetectionRepositoryException : PelogicFloorDetectionException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InMemoryFloorDetectionRepository")))
@interface PelogicInMemoryFloorDetectionRepository : PelogicBase <PelogicFloorDetectionRepository>
- (instancetype)initWithDatabase:(id<PelogicPELogicInMemoryDB>)database __attribute__((swift_name("init(database:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllDefaultValueEntriesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllDefaultValueEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllFloorDetectionDataWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllFloorDetectionData(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllMacFloorMappingEntriesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllMacFloorMappingEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllStatTableEntriesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllStatTableEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteDefaultValueEntryVenueId:(int64_t)venueId floorId:(int64_t)floorId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteDefaultValueEntry(venueId:floorId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteMacFloorMappingEntryVenueId:(int64_t)venueId macAddress:(NSString *)macAddress completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteMacFloorMappingEntry(venueId:macAddress:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteStatTableEntryVenueId:(int64_t)venueId floorId:(int64_t)floorId macAddress:(NSString *)macAddress completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteStatTableEntry(venueId:floorId:macAddress:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllDefaultValueEntriesWithCompletionHandler:(void (^)(NSArray<PelogicFloorDetectionDefaultValueEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllDefaultValueEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllMacFloorMappingEntriesWithCompletionHandler:(void (^)(NSArray<PelogicFloorDetectionMacFloorMappingEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllMacFloorMappingEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllStatTableEntriesWithCompletionHandler:(void (^)(NSArray<PelogicFloorDetectionStatTableEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllStatTableEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDefaultValueEntriesByVenueVenueId:(int64_t)venueId completionHandler:(void (^)(NSArray<PelogicFloorDetectionDefaultValueEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDefaultValueEntriesByVenue(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDefaultValueEntriesCountWithCompletionHandler:(void (^)(PelogicLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDefaultValueEntriesCount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDefaultValueEntryByVenueAndFloorVenueId:(int64_t)venueId floorId:(int64_t)floorId completionHandler:(void (^)(PelogicFloorDetectionDefaultValueEntry * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getDefaultValueEntryByVenueAndFloor(venueId:floorId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDefaultValuesVenueId:(int64_t)venueId completionHandler:(void (^)(NSDictionary<PelogicLong *, PelogicFloorStats *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDefaultValues(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDistinctFloorIdsByVenueVenueId:(int64_t)venueId completionHandler:(void (^)(NSArray<PelogicLong *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDistinctFloorIdsByVenue(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDistinctVenueIdsWithCompletionHandler:(void (^)(NSArray<PelogicLong *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDistinctVenueIds(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFloorIdByMacAddressVenueId:(int64_t)venueId macAddress:(NSString *)macAddress completionHandler:(void (^)(PelogicLong * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFloorIdByMacAddress(venueId:macAddress:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMacFloorMappingEntriesByVenueVenueId:(int64_t)venueId completionHandler:(void (^)(NSArray<PelogicFloorDetectionMacFloorMappingEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMacFloorMappingEntriesByVenue(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMacFloorMappingEntriesCountWithCompletionHandler:(void (^)(PelogicLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMacFloorMappingEntriesCount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMacFloorMappingsVenueId:(int64_t)venueId completionHandler:(void (^)(NSDictionary<PelogicLong *, NSDictionary<NSString *, PelogicLong *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMacFloorMappings(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStatTableEntriesByVenueVenueId:(int64_t)venueId completionHandler:(void (^)(NSArray<PelogicFloorDetectionStatTableEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStatTableEntriesByVenue(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStatTableEntriesByVenueAndFloorVenueId:(int64_t)venueId floorId:(int64_t)floorId completionHandler:(void (^)(NSArray<PelogicFloorDetectionStatTableEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStatTableEntriesByVenueAndFloor(venueId:floorId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStatTableEntriesCountWithCompletionHandler:(void (^)(PelogicLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStatTableEntriesCount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStatTablesVenueId:(int64_t)venueId completionHandler:(void (^)(NSDictionary<PelogicLong *, NSDictionary<PelogicLong *, NSDictionary<NSString *, PelogicFloorStats *> *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStatTables(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasAnyFloorDetectionDataWithCompletionHandler:(void (^)(PelogicBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasAnyFloorDetectionData(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasFloorDetectionDataVenueId:(int64_t)venueId completionHandler:(void (^)(PelogicBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasFloorDetectionData(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertDefaultValueEntriesBatchEntries:(NSArray<PelogicFloorDetectionDefaultValueEntry *> *)entries completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertDefaultValueEntriesBatch(entries:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertDefaultValueEntryEntry:(PelogicFloorDetectionDefaultValueEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertDefaultValueEntry(entry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertMacFloorMappingEntriesBatchEntries:(NSArray<PelogicFloorDetectionMacFloorMappingEntry *> *)entries completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertMacFloorMappingEntriesBatch(entries:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertMacFloorMappingEntryEntry:(PelogicFloorDetectionMacFloorMappingEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertMacFloorMappingEntry(entry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertStatTableEntriesBatchEntries:(NSArray<PelogicFloorDetectionStatTableEntry *> *)entries completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertStatTableEntriesBatch(entries:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertStatTableEntryEntry:(PelogicFloorDetectionStatTableEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertStatTableEntry(entry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)preloadCacheWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("preloadCache(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateDefaultValueEntryEntry:(PelogicFloorDetectionDefaultValueEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateDefaultValueEntry(entry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateMacFloorMappingEntryEntry:(PelogicFloorDetectionMacFloorMappingEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateMacFloorMappingEntry(entry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateStatTableEntryEntry:(PelogicFloorDetectionStatTableEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateStatTableEntry(entry:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PersistentFloorDetectionRepository")))
@interface PelogicPersistentFloorDetectionRepository : PelogicBase <PelogicFloorDetectionRepository>
- (instancetype)initWithDatabase:(id<PelogicPELogicPersistentDB>)database __attribute__((swift_name("init(database:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllDefaultValueEntriesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllDefaultValueEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllFloorDetectionDataWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllFloorDetectionData(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllMacFloorMappingEntriesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllMacFloorMappingEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllStatTableEntriesWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllStatTableEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)doCopyToTarget:(PelogicInMemoryFloorDetectionRepository *)target completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("doCopyTo(target:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteDefaultValueEntryVenueId:(int64_t)venueId floorId:(int64_t)floorId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteDefaultValueEntry(venueId:floorId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteMacFloorMappingEntryVenueId:(int64_t)venueId macAddress:(NSString *)macAddress completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteMacFloorMappingEntry(venueId:macAddress:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteStatTableEntryVenueId:(int64_t)venueId floorId:(int64_t)floorId macAddress:(NSString *)macAddress completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteStatTableEntry(venueId:floorId:macAddress:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllDefaultValueEntriesWithCompletionHandler:(void (^)(NSArray<PelogicFloorDetectionDefaultValueEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllDefaultValueEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllMacFloorMappingEntriesWithCompletionHandler:(void (^)(NSArray<PelogicFloorDetectionMacFloorMappingEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllMacFloorMappingEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllStatTableEntriesWithCompletionHandler:(void (^)(NSArray<PelogicFloorDetectionStatTableEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllStatTableEntries(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDefaultValueEntriesByVenueVenueId:(int64_t)venueId completionHandler:(void (^)(NSArray<PelogicFloorDetectionDefaultValueEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDefaultValueEntriesByVenue(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDefaultValueEntriesCountWithCompletionHandler:(void (^)(PelogicLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDefaultValueEntriesCount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDefaultValueEntryByVenueAndFloorVenueId:(int64_t)venueId floorId:(int64_t)floorId completionHandler:(void (^)(PelogicFloorDetectionDefaultValueEntry * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getDefaultValueEntryByVenueAndFloor(venueId:floorId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDefaultValuesVenueId:(int64_t)venueId completionHandler:(void (^)(NSDictionary<PelogicLong *, PelogicFloorStats *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDefaultValues(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDistinctFloorIdsByVenueVenueId:(int64_t)venueId completionHandler:(void (^)(NSArray<PelogicLong *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDistinctFloorIdsByVenue(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDistinctVenueIdsWithCompletionHandler:(void (^)(NSArray<PelogicLong *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDistinctVenueIds(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFloorIdByMacAddressVenueId:(int64_t)venueId macAddress:(NSString *)macAddress completionHandler:(void (^)(PelogicLong * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFloorIdByMacAddress(venueId:macAddress:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMacFloorMappingEntriesByVenueVenueId:(int64_t)venueId completionHandler:(void (^)(NSArray<PelogicFloorDetectionMacFloorMappingEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMacFloorMappingEntriesByVenue(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMacFloorMappingEntriesCountWithCompletionHandler:(void (^)(PelogicLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMacFloorMappingEntriesCount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMacFloorMappingsVenueId:(int64_t)venueId completionHandler:(void (^)(NSDictionary<PelogicLong *, NSDictionary<NSString *, PelogicLong *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMacFloorMappings(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStatTableEntriesByVenueVenueId:(int64_t)venueId completionHandler:(void (^)(NSArray<PelogicFloorDetectionStatTableEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStatTableEntriesByVenue(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStatTableEntriesByVenueAndFloorVenueId:(int64_t)venueId floorId:(int64_t)floorId completionHandler:(void (^)(NSArray<PelogicFloorDetectionStatTableEntry *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStatTableEntriesByVenueAndFloor(venueId:floorId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStatTableEntriesCountWithCompletionHandler:(void (^)(PelogicLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStatTableEntriesCount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStatTablesVenueId:(int64_t)venueId completionHandler:(void (^)(NSDictionary<PelogicLong *, NSDictionary<PelogicLong *, NSDictionary<NSString *, PelogicFloorStats *> *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStatTables(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasAnyFloorDetectionDataWithCompletionHandler:(void (^)(PelogicBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasAnyFloorDetectionData(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasFloorDetectionDataVenueId:(int64_t)venueId completionHandler:(void (^)(PelogicBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasFloorDetectionData(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertDefaultValueEntriesBatchEntries:(NSArray<PelogicFloorDetectionDefaultValueEntry *> *)entries completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertDefaultValueEntriesBatch(entries:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertDefaultValueEntryEntry:(PelogicFloorDetectionDefaultValueEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertDefaultValueEntry(entry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertMacFloorMappingEntriesBatchEntries:(NSArray<PelogicFloorDetectionMacFloorMappingEntry *> *)entries completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertMacFloorMappingEntriesBatch(entries:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertMacFloorMappingEntryEntry:(PelogicFloorDetectionMacFloorMappingEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertMacFloorMappingEntry(entry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertStatTableEntriesBatchEntries:(NSArray<PelogicFloorDetectionStatTableEntry *> *)entries completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertStatTableEntriesBatch(entries:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertStatTableEntryEntry:(PelogicFloorDetectionStatTableEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertStatTableEntry(entry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)preloadCacheWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("preloadCache(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateDefaultValueEntryEntry:(PelogicFloorDetectionDefaultValueEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateDefaultValueEntry(entry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateMacFloorMappingEntryEntry:(PelogicFloorDetectionMacFloorMappingEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateMacFloorMappingEntry(entry:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateStatTableEntryEntry:(PelogicFloorDetectionStatTableEntry *)entry completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateStatTableEntry(entry:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreferencesRepository")))
@interface PelogicPreferencesRepository : PelogicBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (PelogicDouble * _Nullable)getDoubleKey:(NSString *)key __attribute__((swift_name("getDouble(key:)")));
- (PelogicInt * _Nullable)getIntKey:(NSString *)key __attribute__((swift_name("getInt(key:)")));
- (void)putDoubleKey:(NSString *)key value:(double)value __attribute__((swift_name("putDouble(key:value:)")));
- (void)putIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("putInt(key:value:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
@end

__attribute__((swift_name("SettingsRepository")))
@protocol PelogicSettingsRepository
@required
- (PelogicFloorSettings *)getFloorSettingsFloorID:(int64_t)floorID __attribute__((swift_name("getFloorSettings(floorID:)")));
- (PelogicMobilityModelSettings *)getMobilityModelSettingsFloorID:(int64_t)floorID __attribute__((swift_name("getMobilityModelSettings(floorID:)")));
- (PelogicParticleFilterFlowSettings *)getParticleFilterFlowSettingsFloorID:(int64_t)floorID __attribute__((swift_name("getParticleFilterFlowSettings(floorID:)")));
- (PelogicResamplingSettings *)getResamplingSettingsFloorID:(int64_t)floorID __attribute__((swift_name("getResamplingSettings(floorID:)")));
- (PelogicRssiStatisticsModel *)getRssiStatisticsModelFloorID:(int64_t)floorID __attribute__((swift_name("getRssiStatisticsModel(floorID:)")));
- (PelogicSignatureFilterSettings *)getSignatureFilterSettingsFloorID:(int64_t)floorID __attribute__((swift_name("getSignatureFilterSettings(floorID:)")));
- (void)saveFloorSettingsFloorID:(int64_t)floorID settings:(PelogicFloorSettings *)settings __attribute__((swift_name("saveFloorSettings(floorID:settings:)")));
- (void)saveMobilityModelSettingsFloorID:(int64_t)floorID settings:(PelogicMobilityModelSettings *)settings __attribute__((swift_name("saveMobilityModelSettings(floorID:settings:)")));
- (void)saveParticleFilterFlowSettingsFloorID:(int64_t)floorID settings:(PelogicParticleFilterFlowSettings *)settings __attribute__((swift_name("saveParticleFilterFlowSettings(floorID:settings:)")));
- (void)saveResamplingSettingsFloorID:(int64_t)floorID settings:(PelogicResamplingSettings *)settings __attribute__((swift_name("saveResamplingSettings(floorID:settings:)")));
- (void)saveRssiStatisticsModelFloorID:(int64_t)floorID model:(PelogicRssiStatisticsModel *)model __attribute__((swift_name("saveRssiStatisticsModel(floorID:model:)")));
- (void)saveSignatureFilterSettingsFloorID:(int64_t)floorID settings:(PelogicSignatureFilterSettings *)settings __attribute__((swift_name("saveSignatureFilterSettings(floorID:settings:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InMemorySettingsRepository")))
@interface PelogicInMemorySettingsRepository : PelogicBase <PelogicSettingsRepository>
- (instancetype)initWithDatabase:(id<PelogicPELogicInMemoryDB>)database __attribute__((swift_name("init(database:)"))) __attribute__((objc_designated_initializer));
- (void)clearAllSettings __attribute__((swift_name("clearAllSettings()")));
- (void)fillFromRepositorySettingsBundleBundle:(PelogicRepositorySettingsBundle *)bundle __attribute__((swift_name("fillFromRepositorySettingsBundle(bundle:)")));
- (PelogicFloorSettings *)getFloorSettingsFloorID:(int64_t)floorID __attribute__((swift_name("getFloorSettings(floorID:)")));
- (PelogicMobilityModelSettings *)getMobilityModelSettingsFloorID:(int64_t)floorID __attribute__((swift_name("getMobilityModelSettings(floorID:)")));
- (PelogicParticleFilterFlowSettings *)getParticleFilterFlowSettingsFloorID:(int64_t)floorID __attribute__((swift_name("getParticleFilterFlowSettings(floorID:)")));
- (PelogicResamplingSettings *)getResamplingSettingsFloorID:(int64_t)floorID __attribute__((swift_name("getResamplingSettings(floorID:)")));
- (PelogicRssiStatisticsModel *)getRssiStatisticsModelFloorID:(int64_t)floorID __attribute__((swift_name("getRssiStatisticsModel(floorID:)")));
- (PelogicRepositorySettingsBundle *)getSettingsAsBundleFloorID:(int64_t)floorID __attribute__((swift_name("getSettingsAsBundle(floorID:)")));
- (PelogicSignatureFilterSettings *)getSignatureFilterSettingsFloorID:(int64_t)floorID __attribute__((swift_name("getSignatureFilterSettings(floorID:)")));
- (void)saveFloorSettingsFloorID:(int64_t)floorID settings:(PelogicFloorSettings *)settings __attribute__((swift_name("saveFloorSettings(floorID:settings:)")));
- (void)saveMobilityModelSettingsFloorID:(int64_t)floorID settings:(PelogicMobilityModelSettings *)settings __attribute__((swift_name("saveMobilityModelSettings(floorID:settings:)")));
- (void)saveParticleFilterFlowSettingsFloorID:(int64_t)floorID settings:(PelogicParticleFilterFlowSettings *)settings __attribute__((swift_name("saveParticleFilterFlowSettings(floorID:settings:)")));
- (void)saveResamplingSettingsFloorID:(int64_t)floorID settings:(PelogicResamplingSettings *)settings __attribute__((swift_name("saveResamplingSettings(floorID:settings:)")));
- (void)saveRssiStatisticsModelFloorID:(int64_t)floorID model:(PelogicRssiStatisticsModel *)model __attribute__((swift_name("saveRssiStatisticsModel(floorID:model:)")));
- (void)saveSignatureFilterSettingsFloorID:(int64_t)floorID settings:(PelogicSignatureFilterSettings *)settings __attribute__((swift_name("saveSignatureFilterSettings(floorID:settings:)")));
- (void)shutdown __attribute__((swift_name("shutdown()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PersistentSettingsRepository")))
@interface PelogicPersistentSettingsRepository : PelogicBase <PelogicSettingsRepository>
- (instancetype)initWithDatabase:(id<PelogicPELogicPersistentDB>)database __attribute__((swift_name("init(database:)"))) __attribute__((objc_designated_initializer));
- (void)clearAllSettings __attribute__((swift_name("clearAllSettings()")));
- (void)clearGlobalSettings __attribute__((swift_name("clearGlobalSettings()")));
- (void)doCopyToTarget:(PelogicInMemorySettingsRepository *)target floorID:(int64_t)floorID __attribute__((swift_name("doCopyTo(target:floorID:)")));
- (void)doCopyToAllTarget:(PelogicInMemorySettingsRepository *)target __attribute__((swift_name("doCopyToAll(target:)")));
- (void)doCopyToByFloorIdsTarget:(PelogicInMemorySettingsRepository *)target floorIDs:(NSArray<PelogicLong *> *)floorIDs __attribute__((swift_name("doCopyToByFloorIds(target:floorIDs:)")));
- (void)fillFromRepositorySettingsBundleBundle:(PelogicRepositorySettingsBundle *)bundle __attribute__((swift_name("fillFromRepositorySettingsBundle(bundle:)")));
- (PelogicFloorSettings *)getFloorSettingsFloorID:(int64_t)floorID __attribute__((swift_name("getFloorSettings(floorID:)")));
- (PelogicMobilityModelSettings *)getMobilityModelSettingsFloorID:(int64_t)floorID __attribute__((swift_name("getMobilityModelSettings(floorID:)")));
- (PelogicParticleFilterFlowSettings *)getParticleFilterFlowSettingsFloorID:(int64_t)floorID __attribute__((swift_name("getParticleFilterFlowSettings(floorID:)")));
- (PelogicResamplingSettings *)getResamplingSettingsFloorID:(int64_t)floorID __attribute__((swift_name("getResamplingSettings(floorID:)")));
- (PelogicRssiStatisticsModel *)getRssiStatisticsModelFloorID:(int64_t)floorID __attribute__((swift_name("getRssiStatisticsModel(floorID:)")));
- (PelogicRepositorySettingsBundle *)getSettingsAsBundleFloorID:(int64_t)floorID __attribute__((swift_name("getSettingsAsBundle(floorID:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSettingsFloorCountWithCompletionHandler:(void (^)(PelogicLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSettingsFloorCount(completionHandler:)")));
- (PelogicSignatureFilterSettings *)getSignatureFilterSettingsFloorID:(int64_t)floorID __attribute__((swift_name("getSignatureFilterSettings(floorID:)")));
- (void)saveFloorSettingsFloorID:(int64_t)floorID settings:(PelogicFloorSettings *)settings __attribute__((swift_name("saveFloorSettings(floorID:settings:)")));
- (void)saveMobilityModelSettingsFloorID:(int64_t)floorID settings:(PelogicMobilityModelSettings *)settings __attribute__((swift_name("saveMobilityModelSettings(floorID:settings:)")));
- (void)saveParticleFilterFlowSettingsFloorID:(int64_t)floorID settings:(PelogicParticleFilterFlowSettings *)settings __attribute__((swift_name("saveParticleFilterFlowSettings(floorID:settings:)")));
- (void)saveResamplingSettingsFloorID:(int64_t)floorID settings:(PelogicResamplingSettings *)settings __attribute__((swift_name("saveResamplingSettings(floorID:settings:)")));
- (void)saveRssiStatisticsModelFloorID:(int64_t)floorID model:(PelogicRssiStatisticsModel *)model __attribute__((swift_name("saveRssiStatisticsModel(floorID:model:)")));
- (void)saveSignatureFilterSettingsFloorID:(int64_t)floorID settings:(PelogicSignatureFilterSettings *)settings __attribute__((swift_name("saveSignatureFilterSettings(floorID:settings:)")));
@end

__attribute__((swift_name("SettingsRepositoryException")))
@interface PelogicSettingsRepositoryException : PelogicKotlinException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsDatabaseException")))
@interface PelogicSettingsDatabaseException : PelogicSettingsRepositoryException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsNotFoundException")))
@interface PelogicSettingsNotFoundException : PelogicSettingsRepositoryException
- (instancetype)initWithFloorId:(int64_t)floorId type:(NSString *)type __attribute__((swift_name("init(floorId:type:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("VenueDetectionRepository")))
@protocol PelogicVenueDetectionRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllVenueDetectionMappingsWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllVenueDetectionMappings(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteVenueDetectionMappingMacSuffix:(NSString *)macSuffix macAddress:(NSString *)macAddress venueId:(int64_t)venueId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteVenueDetectionMapping(macSuffix:macAddress:venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllVenueDetectionMappingsWithCompletionHandler:(void (^)(NSDictionary<NSString *, NSDictionary<NSString *, NSArray<PelogicLong *> *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllVenueDetectionMappings(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDistinctMacSuffixesWithCompletionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDistinctMacSuffixes(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDistinctVenueIdsWithCompletionHandler:(void (^)(NSArray<PelogicLong *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDistinctVenueIds(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVenueDetectionMappingsCountWithCompletionHandler:(void (^)(PelogicLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVenueDetectionMappingsCount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVenueIdsByMacAddressMacAddress:(NSString *)macAddress completionHandler:(void (^)(NSArray<PelogicLong *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVenueIdsByMacAddress(macAddress:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVenueIdsByMacSuffixMacSuffix:(NSString *)macSuffix completionHandler:(void (^)(NSDictionary<NSString *, NSArray<PelogicLong *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVenueIdsByMacSuffix(macSuffix:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasVenueDetectionDataWithCompletionHandler:(void (^)(PelogicBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasVenueDetectionData(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertVenueDetectionMappingMacSuffix:(NSString *)macSuffix macAddress:(NSString *)macAddress venueId:(int64_t)venueId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertVenueDetectionMapping(macSuffix:macAddress:venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateVenueDetectionMappingMacSuffix:(NSString *)macSuffix macAddress:(NSString *)macAddress venueId:(int64_t)venueId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateVenueDetectionMapping(macSuffix:macAddress:venueId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InMemoryVenueDetectionRepository")))
@interface PelogicInMemoryVenueDetectionRepository : PelogicBase <PelogicVenueDetectionRepository>
- (instancetype)initWithDatabase:(id<PelogicPELogicInMemoryDB>)database __attribute__((swift_name("init(database:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllVenueDetectionMappingsWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllVenueDetectionMappings(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteVenueDetectionMappingMacSuffix:(NSString *)macSuffix macAddress:(NSString *)macAddress venueId:(int64_t)venueId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteVenueDetectionMapping(macSuffix:macAddress:venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllVenueDetectionMappingsWithCompletionHandler:(void (^)(NSDictionary<NSString *, NSDictionary<NSString *, NSArray<PelogicLong *> *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllVenueDetectionMappings(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDistinctMacSuffixesWithCompletionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDistinctMacSuffixes(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDistinctVenueIdsWithCompletionHandler:(void (^)(NSArray<PelogicLong *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDistinctVenueIds(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVenueDetectionMappingsCountWithCompletionHandler:(void (^)(PelogicLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVenueDetectionMappingsCount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVenueIdsByMacAddressMacAddress:(NSString *)macAddress completionHandler:(void (^)(NSArray<PelogicLong *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVenueIdsByMacAddress(macAddress:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVenueIdsByMacSuffixMacSuffix:(NSString *)macSuffix completionHandler:(void (^)(NSDictionary<NSString *, NSArray<PelogicLong *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVenueIdsByMacSuffix(macSuffix:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasVenueDetectionDataWithCompletionHandler:(void (^)(PelogicBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasVenueDetectionData(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertVenueDetectionMappingMacSuffix:(NSString *)macSuffix macAddress:(NSString *)macAddress venueId:(int64_t)venueId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertVenueDetectionMapping(macSuffix:macAddress:venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertVenueDetectionMappingsBatchMappings:(NSArray<PelogicVenueDetectionMapping *> *)mappings completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertVenueDetectionMappingsBatch(mappings:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)preloadCacheWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("preloadCache(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateVenueDetectionMappingMacSuffix:(NSString *)macSuffix macAddress:(NSString *)macAddress venueId:(int64_t)venueId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateVenueDetectionMapping(macSuffix:macAddress:venueId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PersistentVenueDetectionRepository")))
@interface PelogicPersistentVenueDetectionRepository : PelogicBase <PelogicVenueDetectionRepository>
- (instancetype)initWithDatabase:(id<PelogicPELogicPersistentDB>)database __attribute__((swift_name("init(database:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllVenueDetectionMappingsWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllVenueDetectionMappings(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)doCopyToTarget:(PelogicInMemoryVenueDetectionRepository *)target completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("doCopyTo(target:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteVenueDetectionMappingMacSuffix:(NSString *)macSuffix macAddress:(NSString *)macAddress venueId:(int64_t)venueId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("deleteVenueDetectionMapping(macSuffix:macAddress:venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllVenueDetectionMappingsWithCompletionHandler:(void (^)(NSDictionary<NSString *, NSDictionary<NSString *, NSArray<PelogicLong *> *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAllVenueDetectionMappings(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDistinctMacSuffixesWithCompletionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDistinctMacSuffixes(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDistinctVenueIdsWithCompletionHandler:(void (^)(NSArray<PelogicLong *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDistinctVenueIds(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVenueDetectionMappingsCountWithCompletionHandler:(void (^)(PelogicLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVenueDetectionMappingsCount(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVenueIdsByMacAddressMacAddress:(NSString *)macAddress completionHandler:(void (^)(NSArray<PelogicLong *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVenueIdsByMacAddress(macAddress:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getVenueIdsByMacSuffixMacSuffix:(NSString *)macSuffix completionHandler:(void (^)(NSDictionary<NSString *, NSArray<PelogicLong *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getVenueIdsByMacSuffix(macSuffix:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasVenueDetectionDataWithCompletionHandler:(void (^)(PelogicBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasVenueDetectionData(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertVenueDetectionMappingMacSuffix:(NSString *)macSuffix macAddress:(NSString *)macAddress venueId:(int64_t)venueId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertVenueDetectionMapping(macSuffix:macAddress:venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertVenueDetectionMappingsBatchMappings:(NSArray<PelogicVenueDetectionMapping *> *)mappings completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertVenueDetectionMappingsBatch(mappings:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)preloadCacheWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("preloadCache(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateVenueDetectionMappingMacSuffix:(NSString *)macSuffix macAddress:(NSString *)macAddress venueId:(int64_t)venueId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("updateVenueDetectionMapping(macSuffix:macAddress:venueId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionDatabaseException")))
@interface PelogicVenueDetectionDatabaseException : PelogicKotlinException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionEmptyMacAddressesException")))
@interface PelogicVenueDetectionEmptyMacAddressesException : PelogicKotlinException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionException")))
@interface PelogicVenueDetectionException : PelogicKotlinException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionNotFoundException")))
@interface PelogicVenueDetectionNotFoundException : PelogicKotlinException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionRepositoryException")))
@interface PelogicVenueDetectionRepositoryException : PelogicKotlinException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionSeeder")))
@interface PelogicFloorDetectionSeeder : PelogicBase
- (instancetype)initWithLoader:(id<PelogicFloorDetectionLoader>)loader repo:(id<PelogicFloorDetectionRepository>)repo runInTransaction:(void (^)(PelogicKotlinUnit *(^)(void)))runInTransaction __attribute__((swift_name("init(loader:repo:runInTransaction:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadFloorDetectionDataAsyncWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("loadFloorDetectionDataAsync(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)seedFloorDetectionDataWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("seedFloorDetectionData(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionSeeder")))
@interface PelogicVenueDetectionSeeder : PelogicBase
- (instancetype)initWithLoader:(id<PelogicVenueDetectionLoader>)loader repo:(id<PelogicVenueDetectionRepository>)repo runInTransaction:(void (^)(PelogicKotlinUnit *(^)(void)))runInTransaction __attribute__((swift_name("init(loader:repo:runInTransaction:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loadVenueDetectionDataAsyncWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("loadVenueDetectionDataAsync(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)seedVenueDetectionDataWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("seedVenueDetectionData(completionHandler:)")));
@end

__attribute__((swift_name("RuntimeTransacterBase")))
@protocol PelogicRuntimeTransacterBase
@required
@end

__attribute__((swift_name("RuntimeTransacter")))
@protocol PelogicRuntimeTransacter <PelogicRuntimeTransacterBase>
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<PelogicRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<PelogicRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((swift_name("PELogicInMemoryDB")))
@protocol PelogicPELogicInMemoryDB <PelogicRuntimeTransacter>
@required
@property (readonly) PelogicFloorDetectionDefaultValueQueries *floorDetectionDefaultValueQueries __attribute__((swift_name("floorDetectionDefaultValueQueries")));
@property (readonly) PelogicFloorDetectionMacFloorMappingQueries *floorDetectionMacFloorMappingQueries __attribute__((swift_name("floorDetectionMacFloorMappingQueries")));
@property (readonly) PelogicFloorDetectionStatTableQueries *floorDetectionStatTableQueries __attribute__((swift_name("floorDetectionStatTableQueries")));
@property (readonly) PelogicParticleQueries *particleQueries __attribute__((swift_name("particleQueries")));
@property (readonly) PelogicRssiReadingQueries *rssiReadingQueries __attribute__((swift_name("rssiReadingQueries")));
@property (readonly) PelogicSettingsQueries *settingsQueries __attribute__((swift_name("settingsQueries")));
@property (readonly) PelogicUserParticlesQueries *userParticlesQueries __attribute__((swift_name("userParticlesQueries")));
@property (readonly) PelogicUserQueries *userQueries __attribute__((swift_name("userQueries")));
@property (readonly) PelogicUserRssiReadingQueries *userRssiReadingQueries __attribute__((swift_name("userRssiReadingQueries")));
@property (readonly) PelogicVenueDetectionMappingQueries *venueDetectionMappingQueries __attribute__((swift_name("venueDetectionMappingQueries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PELogicInMemoryDBCompanion")))
@interface PelogicPELogicInMemoryDBCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicPELogicInMemoryDBCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicPELogicInMemoryDB>)invokeDriver:(id<PelogicRuntimeSqlDriver>)driver ParticleFilterFlowSettingsAdapter:(PelogicParticleFilterFlowSettings_Adapter *)ParticleFilterFlowSettingsAdapter UserAdapter:(PelogicUser_Adapter *)UserAdapter __attribute__((swift_name("invoke(driver:ParticleFilterFlowSettingsAdapter:UserAdapter:)")));
@property (readonly) id<PelogicRuntimeSqlSchema> Schema __attribute__((swift_name("Schema")));
@end

__attribute__((swift_name("PELogicPersistentDB")))
@protocol PelogicPELogicPersistentDB <PelogicRuntimeTransacter>
@required
@property (readonly) PelogicCalibrationValuesQueries *calibrationValuesQueries __attribute__((swift_name("calibrationValuesQueries")));
@property (readonly) PelogicFloorDetectionDefaultValueQueries_ *floorDetectionDefaultValueQueries __attribute__((swift_name("floorDetectionDefaultValueQueries")));
@property (readonly) PelogicFloorDetectionMacFloorMappingQueries_ *floorDetectionMacFloorMappingQueries __attribute__((swift_name("floorDetectionMacFloorMappingQueries")));
@property (readonly) PelogicFloorDetectionStatTableQueries_ *floorDetectionStatTableQueries __attribute__((swift_name("floorDetectionStatTableQueries")));
@property (readonly) PelogicFloorRssiAverageQueries *floorRssiAverageQueries __attribute__((swift_name("floorRssiAverageQueries")));
@property (readonly) PelogicLogQueries *logQueries __attribute__((swift_name("logQueries")));
@property (readonly) PelogicParticleQueries_ *particleQueries __attribute__((swift_name("particleQueries")));
@property (readonly) PelogicRssiReadingQueries_ *rssiReadingQueries __attribute__((swift_name("rssiReadingQueries")));
@property (readonly) PelogicSettingsQueries_ *settingsQueries __attribute__((swift_name("settingsQueries")));
@property (readonly) PelogicVenueDetectionMappingQueries_ *venueDetectionMappingQueries __attribute__((swift_name("venueDetectionMappingQueries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PELogicPersistentDBCompanion")))
@interface PelogicPELogicPersistentDBCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicPELogicPersistentDBCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicPELogicPersistentDB>)invokeDriver:(id<PelogicRuntimeSqlDriver>)driver ParticleFilterFlowSettingsAdapter:(PelogicParticleFilterFlowSettings__Adapter *)ParticleFilterFlowSettingsAdapter __attribute__((swift_name("invoke(driver:ParticleFilterFlowSettingsAdapter:)")));
@property (readonly) id<PelogicRuntimeSqlSchema> Schema __attribute__((swift_name("Schema")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionDataStatistics")))
@interface PelogicFloorDetectionDataStatistics : PelogicBase
- (instancetype)initWithVenueCount:(int32_t)venueCount statTableEntriesCount:(int64_t)statTableEntriesCount defaultValueEntriesCount:(int64_t)defaultValueEntriesCount macFloorMappingEntriesCount:(int64_t)macFloorMappingEntriesCount __attribute__((swift_name("init(venueCount:statTableEntriesCount:defaultValueEntriesCount:macFloorMappingEntriesCount:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorDetectionDataStatistics *)doCopyVenueCount:(int32_t)venueCount statTableEntriesCount:(int64_t)statTableEntriesCount defaultValueEntriesCount:(int64_t)defaultValueEntriesCount macFloorMappingEntriesCount:(int64_t)macFloorMappingEntriesCount __attribute__((swift_name("doCopy(venueCount:statTableEntriesCount:defaultValueEntriesCount:macFloorMappingEntriesCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t defaultValueEntriesCount __attribute__((swift_name("defaultValueEntriesCount")));
@property (readonly) int64_t macFloorMappingEntriesCount __attribute__((swift_name("macFloorMappingEntriesCount")));
@property (readonly) int64_t statTableEntriesCount __attribute__((swift_name("statTableEntriesCount")));
@property (readonly) int32_t venueCount __attribute__((swift_name("venueCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionService")))
@interface PelogicFloorDetectionService : PelogicBase
- (instancetype)initWithPersistentFloorDetectionRepository:(PelogicPersistentFloorDetectionRepository *)persistentFloorDetectionRepository inMemoryFloorDetectionRepository:(PelogicInMemoryFloorDetectionRepository *)inMemoryFloorDetectionRepository inMemoryFingerprintRepository:(PelogicInMemoryFingerprintRepository *)inMemoryFingerprintRepository userRepository:(id<PelogicUserRepository>)userRepository macFilter:(PelogicMacReadingFilter *)macFilter __attribute__((swift_name("init(persistentFloorDetectionRepository:inMemoryFloorDetectionRepository:inMemoryFingerprintRepository:userRepository:macFilter:)"))) __attribute__((objc_designated_initializer));
- (PelogicKotlinPair<PelogicBoolean *, PelogicLong *> *)allMacsSameFloorWithIdVenueId:(int64_t)venueId rssiReadings:(NSArray<PelogicRssiReading *> *)rssiReadings macFloorMappings:(NSDictionary<PelogicLong *, NSDictionary<NSString *, PelogicLong *> *> *)macFloorMappings __attribute__((swift_name("allMacsSameFloorWithId(venueId:rssiReadings:macFloorMappings:)")));
- (void)destroy __attribute__((swift_name("destroy()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)detectFloorAndFilterRssiRssiReadings:(NSArray<PelogicRssiReading *> *)rssiReadings venueId:(int64_t)venueId userId:(NSString *)userId isVenueChanged:(BOOL)isVenueChanged completionHandler:(void (^)(PelogicFloorDetectionAndFilterResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("detectFloorAndFilterRssi(rssiReadings:venueId:userId:isVenueChanged:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)initializeWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("initialize(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)validateFloorBelongsToVenueVenueId:(int64_t)venueId floorId:(int64_t)floorId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("validateFloorBelongsToVenue(venueId:floorId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SmartFloorCounterCheck")))
@interface PelogicSmartFloorCounterCheck : PelogicBase
- (instancetype)initWithUserRepository:(id<PelogicUserRepository>)userRepository __attribute__((swift_name("init(userRepository:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicSmartFloorCounterCheckCompanion *companion __attribute__((swift_name("companion")));
- (PelogicFloorTransitionResult *)processFloorTransitionUserId:(NSString *)userId newKnnFloor:(int64_t)newKnnFloor __attribute__((swift_name("processFloorTransition(userId:newKnnFloor:)")));
- (void)resetUserId:(NSString *)userId estimatedFloorId:(int64_t)estimatedFloorId __attribute__((swift_name("reset(userId:estimatedFloorId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SmartFloorCounterCheck.Companion")))
@interface PelogicSmartFloorCounterCheckCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicSmartFloorCounterCheckCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MacReadingFilter")))
@interface PelogicMacReadingFilter : PelogicBase
- (instancetype)initWithFloorDetectionRepository:(id<PelogicFloorDetectionRepository>)floorDetectionRepository inMemoryFingerprintRepository:(PelogicInMemoryFingerprintRepository *)inMemoryFingerprintRepository __attribute__((swift_name("init(floorDetectionRepository:inMemoryFingerprintRepository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)filterValidMacAddressesRssiReadings:(NSArray<PelogicRssiReading *> *)rssiReadings completionHandler:(void (^)(NSArray<PelogicRssiReading *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("filterValidMacAddresses(rssiReadings:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)filterValidMacAddressesForFloorRssiReadings:(NSArray<PelogicRssiReading *> *)rssiReadings floorId:(int64_t)floorId completionHandler:(void (^)(NSArray<PelogicRssiReading *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("filterValidMacAddressesForFloor(rssiReadings:floorId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)filterValidMacAddressesForVenueRssiReadings:(NSArray<PelogicRssiReading *> *)rssiReadings venueId:(int64_t)venueId completionHandler:(void (^)(NSArray<PelogicRssiReading *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("filterValidMacAddressesForVenue(rssiReadings:venueId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilter")))
@interface PelogicParticleFilter : PelogicBase
- (instancetype)initWithSettingsRepository:(id<PelogicSettingsRepository>)settingsRepository userRepository:(id<PelogicUserRepository>)userRepository getResamplingRandomDouble:(PelogicDouble *(^)(void))getResamplingRandomDouble getMobilityModelRandomDouble:(PelogicDouble *(^)(void))getMobilityModelRandomDouble getMobilityModelRandomInt:(PelogicInt *(^)(PelogicInt *))getMobilityModelRandomInt cleanSignatureReadingsFn:(NSArray<PelogicRssiReading *> *(^)(NSArray<PelogicRssiReading *> *, PelogicFloor *))cleanSignatureReadingsFn filterFPBasedOnReadingsFn:(NSArray<PelogicParticle *> *(^)(NSArray<PelogicParticle *> *, NSArray<PelogicRssiReading *> *, PelogicSignatureFilterSettings *))filterFPBasedOnReadingsFn resampleParticlesFn:(NSArray<PelogicParticle *> *(^)(NSArray<PelogicParticle *> *, PelogicResamplingSettings *, PelogicInt *, PelogicDouble *(^)(void)))resampleParticlesFn updateParticlesWeightsFn:(NSArray<PelogicParticle *> *(^)(NSArray<PelogicParticle *> *, NSArray<PelogicRssiReading *> *, PelogicDouble *, PelogicLong *))updateParticlesWeightsFn normalizeWeightsFn:(NSArray<PelogicParticle *> *(^)(NSArray<PelogicParticle *> *))normalizeWeightsFn runMobilityModelFn:(NSArray<PelogicParticle *> *(^)(NSArray<PelogicParticle *> *, NSArray<PelogicParticle *> *, PelogicMobilityModelSettings *, PelogicDouble *(^)(void), PelogicInt *(^)(PelogicInt *)))runMobilityModelFn __attribute__((swift_name("init(settingsRepository:userRepository:getResamplingRandomDouble:getMobilityModelRandomDouble:getMobilityModelRandomInt:cleanSignatureReadingsFn:filterFPBasedOnReadingsFn:resampleParticlesFn:updateParticlesWeightsFn:normalizeWeightsFn:runMobilityModelFn:)"))) __attribute__((objc_designated_initializer));
- (PelogicParticleFilterResponse *)runUserID:(NSString *)userID readings:(NSArray<PelogicRssiReading *> *)readings venueID:(int64_t)venueID floor:(PelogicFloor *)floor shouldResetParticle:(BOOL)shouldResetParticle __attribute__((swift_name("run(userID:readings:venueID:floor:shouldResetParticle:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RssiReadingFilterException")))
@interface PelogicRssiReadingFilterException : PelogicKotlinException
- (instancetype)initWithMessage:(NSString *)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SmartVenueCounterCheck")))
@interface PelogicSmartVenueCounterCheck : PelogicBase
- (instancetype)initWithUserRepository:(id<PelogicUserRepository>)userRepository __attribute__((swift_name("init(userRepository:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicSmartVenueCounterCheckCompanion *companion __attribute__((swift_name("companion")));
- (PelogicVenueTransitionResult *)processVenueTransitionUserId:(NSString *)userId newDetectedVenue:(int64_t)newDetectedVenue __attribute__((swift_name("processVenueTransition(userId:newDetectedVenue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SmartVenueCounterCheck.Companion")))
@interface PelogicSmartVenueCounterCheckCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicSmartVenueCounterCheckCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionService")))
@interface PelogicVenueDetectionService : PelogicBase
- (instancetype)initWithPersistentFloorDetectionRepository:(PelogicPersistentFloorDetectionRepository *)persistentFloorDetectionRepository persistentSettingsRepository:(PelogicPersistentSettingsRepository *)persistentSettingsRepository inMemorySettingsRepository:(PelogicInMemorySettingsRepository *)inMemorySettingsRepository persistentFingerprintRepository:(PelogicPersistentFingerprintRepository *)persistentFingerprintRepository inMemoryFingerprintRepository:(PelogicInMemoryFingerprintRepository *)inMemoryFingerprintRepository persistentVenueDetectionRepository:(PelogicPersistentVenueDetectionRepository *)persistentVenueDetectionRepository inMemoryVenueDetectionRepository:(PelogicInMemoryVenueDetectionRepository *)inMemoryVenueDetectionRepository inMemoryFloorDetectionRepository:(PelogicInMemoryFloorDetectionRepository *)inMemoryFloorDetectionRepository userRepository:(id<PelogicUserRepository>)userRepository macFilters:(PelogicMacReadingFilter *)macFilters __attribute__((swift_name("init(persistentFloorDetectionRepository:persistentSettingsRepository:inMemorySettingsRepository:persistentFingerprintRepository:inMemoryFingerprintRepository:persistentVenueDetectionRepository:inMemoryVenueDetectionRepository:inMemoryFloorDetectionRepository:userRepository:macFilters:)"))) __attribute__((objc_designated_initializer));
- (PelogicKotlinPair<PelogicBoolean *, PelogicLong *> *)allMacsSameVenueWithIdRssiReadings:(NSArray<PelogicRssiReading *> *)rssiReadings venueDetectionMappings:(NSDictionary<NSString *, NSDictionary<NSString *, NSArray<PelogicLong *> *> *> *)venueDetectionMappings __attribute__((swift_name("allMacsSameVenueWithId(rssiReadings:venueDetectionMappings:)")));
- (void)destroy __attribute__((swift_name("destroy()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)detectVenueAndFilterRssiRssiReadings:(NSArray<PelogicRssiReading *> *)rssiReadings userId:(NSString *)userId triggerVenueDetection:(BOOL)triggerVenueDetection completionHandler:(void (^)(PelogicVenueDetectionAndFilterResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("detectVenueAndFilterRssi(rssiReadings:userId:triggerVenueDetection:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)ensureVenueCachedVenueId:(int64_t)venueId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("ensureVenueCached(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)initializeWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("initialize(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionDefaultValue")))
@interface PelogicFloorDetectionDefaultValue : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("init(venue_id:floor_id:mean:std:score:created_at:updated_at:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorDetectionDefaultValue *)doCopyVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("doCopy(venue_id:floor_id:mean:std:score:created_at:updated_at:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t created_at __attribute__((swift_name("created_at")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t updated_at __attribute__((swift_name("updated_at")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((swift_name("RuntimeBaseTransacterImpl")))
@interface PelogicRuntimeBaseTransacterImpl : PelogicBase
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)createArgumentsCount:(int32_t)count __attribute__((swift_name("createArguments(count:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)notifyQueriesIdentifier:(int32_t)identifier tableProvider:(void (^)(PelogicKotlinUnit *(^)(NSString *)))tableProvider __attribute__((swift_name("notifyQueries(identifier:tableProvider:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)postTransactionCleanupTransaction:(PelogicRuntimeTransacterTransaction *)transaction enclosing:(PelogicRuntimeTransacterTransaction * _Nullable)enclosing thrownException:(PelogicKotlinThrowable * _Nullable)thrownException returnValue:(id _Nullable)returnValue __attribute__((swift_name("postTransactionCleanup(transaction:enclosing:thrownException:returnValue:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<PelogicRuntimeSqlDriver> driver __attribute__((swift_name("driver")));
@end

__attribute__((swift_name("RuntimeTransacterImpl")))
@interface PelogicRuntimeTransacterImpl : PelogicRuntimeBaseTransacterImpl <PelogicRuntimeTransacter>
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<PelogicRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<PelogicRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionDefaultValueQueries")))
@interface PelogicFloorDetectionDefaultValueQueries : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (PelogicRuntimeQuery<PelogicLong *> *)countFloorDetectionDefaultValue __attribute__((swift_name("countFloorDetectionDefaultValue()")));
- (void)deleteAllFloorDetectionDefaultValue __attribute__((swift_name("deleteAllFloorDetectionDefaultValue()")));
- (void)deleteFloorDetectionDefaultValueVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id __attribute__((swift_name("deleteFloorDetectionDefaultValue(venue_id:floor_id:)")));
- (void)insertFloorDetectionDefaultValueVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("insertFloorDetectionDefaultValue(venue_id:floor_id:mean:std:score:created_at:updated_at:)")));
- (void)insertFloorDetectionDefaultValueBatchVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("insertFloorDetectionDefaultValueBatch(venue_id:floor_id:mean:std:score:created_at:updated_at:)")));
- (PelogicRuntimeQuery<PelogicSelectAllDefaultValueEntries *> *)selectAllDefaultValueEntries __attribute__((swift_name("selectAllDefaultValueEntries()")));
- (PelogicRuntimeQuery<id> *)selectAllDefaultValueEntriesMapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *))mapper __attribute__((swift_name("selectAllDefaultValueEntries(mapper:)")));
- (PelogicRuntimeQuery<PelogicSelectDefaultValueByVenueAndFloor *> *)selectDefaultValueByVenueAndFloorVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id __attribute__((swift_name("selectDefaultValueByVenueAndFloor(venue_id:floor_id:)")));
- (PelogicRuntimeQuery<id> *)selectDefaultValueByVenueAndFloorVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *))mapper __attribute__((swift_name("selectDefaultValueByVenueAndFloor(venue_id:floor_id:mapper:)")));
- (PelogicRuntimeQuery<PelogicSelectDefaultValuesByVenue *> *)selectDefaultValuesByVenueVenue_id:(int64_t)venue_id __attribute__((swift_name("selectDefaultValuesByVenue(venue_id:)")));
- (PelogicRuntimeQuery<id> *)selectDefaultValuesByVenueVenue_id:(int64_t)venue_id mapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *))mapper __attribute__((swift_name("selectDefaultValuesByVenue(venue_id:mapper:)")));
- (PelogicRuntimeQuery<PelogicLong *> *)selectDistinctVenueIdsFromDefaultValue __attribute__((swift_name("selectDistinctVenueIdsFromDefaultValue()")));
- (void)updateFloorDetectionDefaultValueMean:(double)mean std:(double)std score:(double)score updated_at:(int64_t)updated_at venue_id:(int64_t)venue_id floor_id:(int64_t)floor_id __attribute__((swift_name("updateFloorDetectionDefaultValue(mean:std:score:updated_at:venue_id:floor_id:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionMacFloorMapping")))
@interface PelogicFloorDetectionMacFloorMapping : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address floor_id:(int64_t)floor_id created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("init(venue_id:mac_address:floor_id:created_at:updated_at:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorDetectionMacFloorMapping *)doCopyVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address floor_id:(int64_t)floor_id created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("doCopy(venue_id:mac_address:floor_id:created_at:updated_at:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t created_at __attribute__((swift_name("created_at")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) int64_t updated_at __attribute__((swift_name("updated_at")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionMacFloorMappingQueries")))
@interface PelogicFloorDetectionMacFloorMappingQueries : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (PelogicRuntimeQuery<PelogicLong *> *)countFloorDetectionMacFloorMapping __attribute__((swift_name("countFloorDetectionMacFloorMapping()")));
- (void)deleteAllFloorDetectionMacFloorMapping __attribute__((swift_name("deleteAllFloorDetectionMacFloorMapping()")));
- (void)deleteFloorDetectionMacFloorMappingVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address __attribute__((swift_name("deleteFloorDetectionMacFloorMapping(venue_id:mac_address:)")));
- (void)insertFloorDetectionMacFloorMappingVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address floor_id:(int64_t)floor_id created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("insertFloorDetectionMacFloorMapping(venue_id:mac_address:floor_id:created_at:updated_at:)")));
- (void)insertFloorDetectionMacFloorMappingBatchVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address floor_id:(int64_t)floor_id created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("insertFloorDetectionMacFloorMappingBatch(venue_id:mac_address:floor_id:created_at:updated_at:)")));
- (PelogicRuntimeQuery<PelogicSelectAllMacFloorMappingEntries *> *)selectAllMacFloorMappingEntries __attribute__((swift_name("selectAllMacFloorMappingEntries()")));
- (PelogicRuntimeQuery<id> *)selectAllMacFloorMappingEntriesMapper:(id (^)(PelogicLong *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectAllMacFloorMappingEntries(mapper:)")));
- (PelogicRuntimeQuery<PelogicLong *> *)selectDistinctVenueIdsFromMacFloorMapping __attribute__((swift_name("selectDistinctVenueIdsFromMacFloorMapping()")));
- (PelogicRuntimeQuery<PelogicLong *> *)selectFloorIdByMacAddressVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address __attribute__((swift_name("selectFloorIdByMacAddress(venue_id:mac_address:)")));
- (PelogicRuntimeQuery<PelogicSelectMacFloorMappingsByVenue *> *)selectMacFloorMappingsByVenueVenue_id:(int64_t)venue_id __attribute__((swift_name("selectMacFloorMappingsByVenue(venue_id:)")));
- (PelogicRuntimeQuery<id> *)selectMacFloorMappingsByVenueVenue_id:(int64_t)venue_id mapper:(id (^)(PelogicLong *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectMacFloorMappingsByVenue(venue_id:mapper:)")));
- (void)updateFloorDetectionMacFloorMappingFloor_id:(int64_t)floor_id updated_at:(int64_t)updated_at venue_id:(int64_t)venue_id mac_address:(NSString *)mac_address __attribute__((swift_name("updateFloorDetectionMacFloorMapping(floor_id:updated_at:venue_id:mac_address:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionStatTable")))
@interface PelogicFloorDetectionStatTable : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("init(venue_id:floor_id:mac_address:mean:std:score:created_at:updated_at:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorDetectionStatTable *)doCopyVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("doCopy(venue_id:floor_id:mac_address:mean:std:score:created_at:updated_at:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t created_at __attribute__((swift_name("created_at")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t updated_at __attribute__((swift_name("updated_at")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionStatTableQueries")))
@interface PelogicFloorDetectionStatTableQueries : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (PelogicRuntimeQuery<PelogicLong *> *)countFloorDetectionStatTable __attribute__((swift_name("countFloorDetectionStatTable()")));
- (void)deleteAllFloorDetectionStatTable __attribute__((swift_name("deleteAllFloorDetectionStatTable()")));
- (void)deleteFloorDetectionStatTableVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address __attribute__((swift_name("deleteFloorDetectionStatTable(venue_id:floor_id:mac_address:)")));
- (void)insertFloorDetectionStatTableVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("insertFloorDetectionStatTable(venue_id:floor_id:mac_address:mean:std:score:created_at:updated_at:)")));
- (void)insertFloorDetectionStatTableBatchVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("insertFloorDetectionStatTableBatch(venue_id:floor_id:mac_address:mean:std:score:created_at:updated_at:)")));
- (PelogicRuntimeQuery<PelogicSelectAllStatTableEntries *> *)selectAllStatTableEntries __attribute__((swift_name("selectAllStatTableEntries()")));
- (PelogicRuntimeQuery<id> *)selectAllStatTableEntriesMapper:(id (^)(PelogicLong *, PelogicLong *, NSString *, PelogicDouble *, PelogicDouble *, PelogicDouble *))mapper __attribute__((swift_name("selectAllStatTableEntries(mapper:)")));
- (PelogicRuntimeQuery<PelogicLong *> *)selectDistinctFloorIdsByVenueVenue_id:(int64_t)venue_id __attribute__((swift_name("selectDistinctFloorIdsByVenue(venue_id:)")));
- (PelogicRuntimeQuery<PelogicLong *> *)selectDistinctVenueIdsFromStatTable __attribute__((swift_name("selectDistinctVenueIdsFromStatTable()")));
- (PelogicRuntimeQuery<PelogicSelectStatTableByVenue *> *)selectStatTableByVenueVenue_id:(int64_t)venue_id __attribute__((swift_name("selectStatTableByVenue(venue_id:)")));
- (PelogicRuntimeQuery<id> *)selectStatTableByVenueVenue_id:(int64_t)venue_id mapper:(id (^)(PelogicLong *, PelogicLong *, NSString *, PelogicDouble *, PelogicDouble *, PelogicDouble *))mapper __attribute__((swift_name("selectStatTableByVenue(venue_id:mapper:)")));
- (PelogicRuntimeQuery<PelogicSelectStatTableByVenueAndFloor *> *)selectStatTableByVenueAndFloorVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id __attribute__((swift_name("selectStatTableByVenueAndFloor(venue_id:floor_id:)")));
- (PelogicRuntimeQuery<id> *)selectStatTableByVenueAndFloorVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mapper:(id (^)(PelogicLong *, PelogicLong *, NSString *, PelogicDouble *, PelogicDouble *, PelogicDouble *))mapper __attribute__((swift_name("selectStatTableByVenueAndFloor(venue_id:floor_id:mapper:)")));
- (void)updateFloorDetectionStatTableMean:(double)mean std:(double)std score:(double)score updated_at:(int64_t)updated_at venue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address __attribute__((swift_name("updateFloorDetectionStatTable(mean:std:score:updated_at:venue_id:floor_id:mac_address:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorSettings_")))
@interface PelogicFloorSettings_ : PelogicBase
- (instancetype)initWithFloorID:(int64_t)floorID rssiCutoff:(int64_t)rssiCutoff standardDeviation:(double)standardDeviation particlesMaxSize:(int64_t)particlesMaxSize particlesMinSize:(int64_t)particlesMinSize scaleFactor:(double)scaleFactor __attribute__((swift_name("init(floorID:rssiCutoff:standardDeviation:particlesMaxSize:particlesMinSize:scaleFactor:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorSettings_ *)doCopyFloorID:(int64_t)floorID rssiCutoff:(int64_t)rssiCutoff standardDeviation:(double)standardDeviation particlesMaxSize:(int64_t)particlesMaxSize particlesMinSize:(int64_t)particlesMinSize scaleFactor:(double)scaleFactor __attribute__((swift_name("doCopy(floorID:rssiCutoff:standardDeviation:particlesMaxSize:particlesMinSize:scaleFactor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) int64_t particlesMaxSize __attribute__((swift_name("particlesMaxSize")));
@property (readonly) int64_t particlesMinSize __attribute__((swift_name("particlesMinSize")));
@property (readonly) int64_t rssiCutoff __attribute__((swift_name("rssiCutoff")));
@property (readonly) double scaleFactor __attribute__((swift_name("scaleFactor")));
@property (readonly) double standardDeviation __attribute__((swift_name("standardDeviation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MobilityModelSettings_")))
@interface PelogicMobilityModelSettings_ : PelogicBase
- (instancetype)initWithFloorID:(int64_t)floorID normalStepCount:(double)normalStepCount alternativeStepCount:(double)alternativeStepCount averageStepLength:(double)averageStepLength standardDeviation:(double)standardDeviation particleCountMinimum:(int64_t)particleCountMinimum particleCountMaximum:(int64_t)particleCountMaximum particleSearchRadius:(double)particleSearchRadius distanceScaleFactor:(double)distanceScaleFactor __attribute__((swift_name("init(floorID:normalStepCount:alternativeStepCount:averageStepLength:standardDeviation:particleCountMinimum:particleCountMaximum:particleSearchRadius:distanceScaleFactor:)"))) __attribute__((objc_designated_initializer));
- (PelogicMobilityModelSettings_ *)doCopyFloorID:(int64_t)floorID normalStepCount:(double)normalStepCount alternativeStepCount:(double)alternativeStepCount averageStepLength:(double)averageStepLength standardDeviation:(double)standardDeviation particleCountMinimum:(int64_t)particleCountMinimum particleCountMaximum:(int64_t)particleCountMaximum particleSearchRadius:(double)particleSearchRadius distanceScaleFactor:(double)distanceScaleFactor __attribute__((swift_name("doCopy(floorID:normalStepCount:alternativeStepCount:averageStepLength:standardDeviation:particleCountMinimum:particleCountMaximum:particleSearchRadius:distanceScaleFactor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double alternativeStepCount __attribute__((swift_name("alternativeStepCount")));
@property (readonly) double averageStepLength __attribute__((swift_name("averageStepLength")));
@property (readonly) double distanceScaleFactor __attribute__((swift_name("distanceScaleFactor")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) double normalStepCount __attribute__((swift_name("normalStepCount")));
@property (readonly) int64_t particleCountMaximum __attribute__((swift_name("particleCountMaximum")));
@property (readonly) int64_t particleCountMinimum __attribute__((swift_name("particleCountMinimum")));
@property (readonly) double particleSearchRadius __attribute__((swift_name("particleSearchRadius")));
@property (readonly) double standardDeviation __attribute__((swift_name("standardDeviation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Particle_")))
@interface PelogicParticle_ : PelogicBase
- (instancetype)initWithId:(int64_t)id partId:(int64_t)partId x:(double)x y:(double)y zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(PelogicDouble * _Nullable)weight floorID:(int64_t)floorID userID:(NSString * _Nullable)userID __attribute__((swift_name("init(id:partId:x:y:zeroDistance:zeroAngle:weight:floorID:userID:)"))) __attribute__((objc_designated_initializer));
- (PelogicParticle_ *)doCopyId:(int64_t)id partId:(int64_t)partId x:(double)x y:(double)y zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(PelogicDouble * _Nullable)weight floorID:(int64_t)floorID userID:(NSString * _Nullable)userID __attribute__((swift_name("doCopy(id:partId:x:y:zeroDistance:zeroAngle:weight:floorID:userID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int64_t partId __attribute__((swift_name("partId")));
@property (readonly) NSString * _Nullable userID __attribute__((swift_name("userID")));
@property (readonly) PelogicDouble * _Nullable weight __attribute__((swift_name("weight")));
@property (readonly) double x __attribute__((swift_name("x")));
@property (readonly) double y __attribute__((swift_name("y")));
@property (readonly) double zeroAngle __attribute__((swift_name("zeroAngle")));
@property (readonly) double zeroDistance __attribute__((swift_name("zeroDistance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterFlowSettings_")))
@interface PelogicParticleFilterFlowSettings_ : PelogicBase
- (instancetype)initWithFloorID:(int64_t)floorID scaleFactor:(double)scaleFactor unscaledRadius:(int64_t)unscaledRadius runsCountThreshold:(int64_t)runsCountThreshold durationTillParticleReset:(int64_t)durationTillParticleReset shouldCalculateTrustScore:(BOOL)shouldCalculateTrustScore __attribute__((swift_name("init(floorID:scaleFactor:unscaledRadius:runsCountThreshold:durationTillParticleReset:shouldCalculateTrustScore:)"))) __attribute__((objc_designated_initializer));
- (PelogicParticleFilterFlowSettings_ *)doCopyFloorID:(int64_t)floorID scaleFactor:(double)scaleFactor unscaledRadius:(int64_t)unscaledRadius runsCountThreshold:(int64_t)runsCountThreshold durationTillParticleReset:(int64_t)durationTillParticleReset shouldCalculateTrustScore:(BOOL)shouldCalculateTrustScore __attribute__((swift_name("doCopy(floorID:scaleFactor:unscaledRadius:runsCountThreshold:durationTillParticleReset:shouldCalculateTrustScore:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t durationTillParticleReset __attribute__((swift_name("durationTillParticleReset")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) int64_t runsCountThreshold __attribute__((swift_name("runsCountThreshold")));
@property (readonly) double scaleFactor __attribute__((swift_name("scaleFactor")));
@property (readonly) BOOL shouldCalculateTrustScore __attribute__((swift_name("shouldCalculateTrustScore")));
@property (readonly) int64_t unscaledRadius __attribute__((swift_name("unscaledRadius")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterFlowSettings_.Adapter")))
@interface PelogicParticleFilterFlowSettings_Adapter : PelogicBase
- (instancetype)initWithDurationTillParticleResetAdapter:(id<PelogicRuntimeColumnAdapter>)durationTillParticleResetAdapter __attribute__((swift_name("init(durationTillParticleResetAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<PelogicRuntimeColumnAdapter> durationTillParticleResetAdapter __attribute__((swift_name("durationTillParticleResetAdapter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleQueries")))
@interface PelogicParticleQueries : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteAllParticles __attribute__((swift_name("deleteAllParticles()")));
- (void)insertOrReplaceParticleId:(PelogicLong * _Nullable)id partId:(int64_t)partId x:(double)x y:(double)y zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(PelogicDouble * _Nullable)weight floorID:(int64_t)floorID userID:(NSString * _Nullable)userID __attribute__((swift_name("insertOrReplaceParticle(id:partId:x:y:zeroDistance:zeroAngle:weight:floorID:userID:)")));
- (void)insertParticleId:(PelogicLong * _Nullable)id partId:(int64_t)partId x:(double)x y:(double)y zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(PelogicDouble * _Nullable)weight floorID:(int64_t)floorID userID:(NSString * _Nullable)userID __attribute__((swift_name("insertParticle(id:partId:x:y:zeroDistance:zeroAngle:weight:floorID:userID:)")));
- (PelogicRuntimeQuery<PelogicParticle_ *> *)selectAll __attribute__((swift_name("selectAll()")));
- (PelogicRuntimeQuery<id> *)selectAllMapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble * _Nullable, PelogicLong *, NSString * _Nullable))mapper __attribute__((swift_name("selectAll(mapper:)")));
- (PelogicRuntimeQuery<NSString *> *)selectAllMacs __attribute__((swift_name("selectAllMacs()")));
- (PelogicRuntimeQuery<PelogicSelectAllMacsWithMetadata *> *)selectAllMacsWithMetadata __attribute__((swift_name("selectAllMacsWithMetadata()")));
- (PelogicRuntimeQuery<id> *)selectAllMacsWithMetadataMapper:(id (^)(NSString *, PelogicLong *, PelogicLong *))mapper __attribute__((swift_name("selectAllMacsWithMetadata(mapper:)")));
- (PelogicRuntimeQuery<NSString *> *)selectFloorMacsFloorID:(int64_t)floorID __attribute__((swift_name("selectFloorMacs(floorID:)")));
- (PelogicRuntimeQuery<PelogicParticle_ *> *)selectFloorParticlesFloorID:(int64_t)floorID __attribute__((swift_name("selectFloorParticles(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectFloorParticlesFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble * _Nullable, PelogicLong *, NSString * _Nullable))mapper __attribute__((swift_name("selectFloorParticles(floorID:mapper:)")));
- (PelogicRuntimeQuery<PelogicSelectFloorParticlesWithRssi *> *)selectFloorParticlesWithRssiFloorID:(int64_t)floorID __attribute__((swift_name("selectFloorParticlesWithRssi(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectFloorParticlesWithRssiFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble * _Nullable, PelogicLong *, NSString * _Nullable, PelogicLong * _Nullable, NSString * _Nullable, PelogicLong * _Nullable, PelogicLong * _Nullable, PelogicLong * _Nullable, PelogicLong * _Nullable, PelogicLong * _Nullable))mapper __attribute__((swift_name("selectFloorParticlesWithRssi(floorID:mapper:)")));
- (PelogicRuntimeQuery<PelogicParticle_ *> *)selectParticlesByUserIdUserID:(NSString * _Nullable)userID __attribute__((swift_name("selectParticlesByUserId(userID:)")));
- (PelogicRuntimeQuery<id> *)selectParticlesByUserIdUserID:(NSString * _Nullable)userID mapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble * _Nullable, PelogicLong *, NSString * _Nullable))mapper __attribute__((swift_name("selectParticlesByUserId(userID:mapper:)")));
- (PelogicRuntimeQuery<NSString *> *)selectVenueMacsVenueId:(int64_t)venueId __attribute__((swift_name("selectVenueMacs(venueId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResamplingSettings_")))
@interface PelogicResamplingSettings_ : PelogicBase
- (instancetype)initWithFloorID:(int64_t)floorID isParticleSpreadControlEnabled:(BOOL)isParticleSpreadControlEnabled particleSpreadThreshold:(double)particleSpreadThreshold maxResamplingRepeats:(int64_t)maxResamplingRepeats distanceScaleFactor:(double)distanceScaleFactor __attribute__((swift_name("init(floorID:isParticleSpreadControlEnabled:particleSpreadThreshold:maxResamplingRepeats:distanceScaleFactor:)"))) __attribute__((objc_designated_initializer));
- (PelogicResamplingSettings_ *)doCopyFloorID:(int64_t)floorID isParticleSpreadControlEnabled:(BOOL)isParticleSpreadControlEnabled particleSpreadThreshold:(double)particleSpreadThreshold maxResamplingRepeats:(int64_t)maxResamplingRepeats distanceScaleFactor:(double)distanceScaleFactor __attribute__((swift_name("doCopy(floorID:isParticleSpreadControlEnabled:particleSpreadThreshold:maxResamplingRepeats:distanceScaleFactor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double distanceScaleFactor __attribute__((swift_name("distanceScaleFactor")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) BOOL isParticleSpreadControlEnabled __attribute__((swift_name("isParticleSpreadControlEnabled")));
@property (readonly) int64_t maxResamplingRepeats __attribute__((swift_name("maxResamplingRepeats")));
@property (readonly) double particleSpreadThreshold __attribute__((swift_name("particleSpreadThreshold")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RssiReading_")))
@interface PelogicRssiReading_ : PelogicBase
- (instancetype)initWithId:(int64_t)id mac:(NSString *)mac rssi:(int64_t)rssi particleID:(int64_t)particleID floorId:(int64_t)floorId venueId:(int64_t)venueId adjusted_rssi:(PelogicLong * _Nullable)adjusted_rssi __attribute__((swift_name("init(id:mac:rssi:particleID:floorId:venueId:adjusted_rssi:)"))) __attribute__((objc_designated_initializer));
- (PelogicRssiReading_ *)doCopyId:(int64_t)id mac:(NSString *)mac rssi:(int64_t)rssi particleID:(int64_t)particleID floorId:(int64_t)floorId venueId:(int64_t)venueId adjusted_rssi:(PelogicLong * _Nullable)adjusted_rssi __attribute__((swift_name("doCopy(id:mac:rssi:particleID:floorId:venueId:adjusted_rssi:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PelogicLong * _Nullable adjusted_rssi __attribute__((swift_name("adjusted_rssi")));
@property (readonly) int64_t floorId __attribute__((swift_name("floorId")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *mac __attribute__((swift_name("mac")));
@property (readonly) int64_t particleID __attribute__((swift_name("particleID")));
@property (readonly) int64_t rssi __attribute__((swift_name("rssi")));
@property (readonly) int64_t venueId __attribute__((swift_name("venueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RssiReadingQueries")))
@interface PelogicRssiReadingQueries : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteAllRssi __attribute__((swift_name("deleteAllRssi()")));
- (void)insertOrReplaceMac:(NSString *)mac rssi:(int64_t)rssi particleID:(int64_t)particleID floorId:(int64_t)floorId venueId:(int64_t)venueId adjusted_rssi:(PelogicLong * _Nullable)adjusted_rssi __attribute__((swift_name("insertOrReplace(mac:rssi:particleID:floorId:venueId:adjusted_rssi:)")));
- (void)insertRssiReadingMac:(NSString *)mac rssi:(int64_t)rssi particleID:(int64_t)particleID floorId:(int64_t)floorId venueId:(int64_t)venueId adjusted_rssi:(PelogicLong * _Nullable)adjusted_rssi __attribute__((swift_name("insertRssiReading(mac:rssi:particleID:floorId:venueId:adjusted_rssi:)")));
- (PelogicRuntimeQuery<PelogicRssiReading_ *> *)selectAllRssiReadings __attribute__((swift_name("selectAllRssiReadings()")));
- (PelogicRuntimeQuery<id> *)selectAllRssiReadingsMapper:(id (^)(PelogicLong *, NSString *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong * _Nullable))mapper __attribute__((swift_name("selectAllRssiReadings(mapper:)")));
- (PelogicRuntimeQuery<PelogicRssiReading_ *> *)selectByFloorFloorId:(int64_t)floorId __attribute__((swift_name("selectByFloor(floorId:)")));
- (PelogicRuntimeQuery<id> *)selectByFloorFloorId:(int64_t)floorId mapper:(id (^)(PelogicLong *, NSString *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong * _Nullable))mapper __attribute__((swift_name("selectByFloor(floorId:mapper:)")));
- (PelogicRuntimeQuery<PelogicRssiReading_ *> *)selectByFloorAndVenueFloorId:(int64_t)floorId venueId:(int64_t)venueId __attribute__((swift_name("selectByFloorAndVenue(floorId:venueId:)")));
- (PelogicRuntimeQuery<id> *)selectByFloorAndVenueFloorId:(int64_t)floorId venueId:(int64_t)venueId mapper:(id (^)(PelogicLong *, NSString *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong * _Nullable))mapper __attribute__((swift_name("selectByFloorAndVenue(floorId:venueId:mapper:)")));
- (PelogicRuntimeQuery<PelogicRssiReading_ *> *)selectByParticleParticleID:(int64_t)particleID __attribute__((swift_name("selectByParticle(particleID:)")));
- (PelogicRuntimeQuery<id> *)selectByParticleParticleID:(int64_t)particleID mapper:(id (^)(PelogicLong *, NSString *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong * _Nullable))mapper __attribute__((swift_name("selectByParticle(particleID:mapper:)")));
- (PelogicRuntimeQuery<PelogicRssiReading_ *> *)selectByParticleIdsParticleID:(id)particleID __attribute__((swift_name("selectByParticleIds(particleID:)")));
- (PelogicRuntimeQuery<id> *)selectByParticleIdsParticleID:(id)particleID mapper:(id (^)(PelogicLong *, NSString *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong * _Nullable))mapper __attribute__((swift_name("selectByParticleIds(particleID:mapper:)")));
- (PelogicRuntimeQuery<PelogicRssiReading_ *> *)selectByVenueVenueId:(int64_t)venueId __attribute__((swift_name("selectByVenue(venueId:)")));
- (PelogicRuntimeQuery<id> *)selectByVenueVenueId:(int64_t)venueId mapper:(id (^)(PelogicLong *, NSString *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong * _Nullable))mapper __attribute__((swift_name("selectByVenue(venueId:mapper:)")));
- (void)updateAdjustedRssiAdjusted_rssi:(PelogicLong * _Nullable)adjusted_rssi id:(int64_t)id __attribute__((swift_name("updateAdjustedRssi(adjusted_rssi:id:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RssiStatisticsModel_")))
@interface PelogicRssiStatisticsModel_ : PelogicBase
- (instancetype)initWithFloorID:(int64_t)floorID mean:(double)mean standardDeviation:(double)standardDeviation filterSigma:(double)filterSigma filterMu:(double)filterMu __attribute__((swift_name("init(floorID:mean:standardDeviation:filterSigma:filterMu:)"))) __attribute__((objc_designated_initializer));
- (PelogicRssiStatisticsModel_ *)doCopyFloorID:(int64_t)floorID mean:(double)mean standardDeviation:(double)standardDeviation filterSigma:(double)filterSigma filterMu:(double)filterMu __attribute__((swift_name("doCopy(floorID:mean:standardDeviation:filterSigma:filterMu:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double filterMu __attribute__((swift_name("filterMu")));
@property (readonly) double filterSigma __attribute__((swift_name("filterSigma")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double standardDeviation __attribute__((swift_name("standardDeviation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectAllDefaultValueEntries")))
@interface PelogicSelectAllDefaultValueEntries : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("init(venue_id:floor_id:mean:std:score:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectAllDefaultValueEntries *)doCopyVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("doCopy(venue_id:floor_id:mean:std:score:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectAllMacFloorMappingEntries")))
@interface PelogicSelectAllMacFloorMappingEntries : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address floor_id:(int64_t)floor_id __attribute__((swift_name("init(venue_id:mac_address:floor_id:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectAllMacFloorMappingEntries *)doCopyVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address floor_id:(int64_t)floor_id __attribute__((swift_name("doCopy(venue_id:mac_address:floor_id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectAllMacsWithMetadata")))
@interface PelogicSelectAllMacsWithMetadata : PelogicBase
- (instancetype)initWithMac:(NSString *)mac floorId:(int64_t)floorId venueId:(int64_t)venueId __attribute__((swift_name("init(mac:floorId:venueId:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectAllMacsWithMetadata *)doCopyMac:(NSString *)mac floorId:(int64_t)floorId venueId:(int64_t)venueId __attribute__((swift_name("doCopy(mac:floorId:venueId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorId __attribute__((swift_name("floorId")));
@property (readonly) NSString *mac __attribute__((swift_name("mac")));
@property (readonly) int64_t venueId __attribute__((swift_name("venueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectAllMappings")))
@interface PelogicSelectAllMappings : PelogicBase
- (instancetype)initWithMac_suffix:(NSString *)mac_suffix mac_address:(NSString *)mac_address venue_id:(int64_t)venue_id __attribute__((swift_name("init(mac_suffix:mac_address:venue_id:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectAllMappings *)doCopyMac_suffix:(NSString *)mac_suffix mac_address:(NSString *)mac_address venue_id:(int64_t)venue_id __attribute__((swift_name("doCopy(mac_suffix:mac_address:venue_id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) NSString *mac_suffix __attribute__((swift_name("mac_suffix")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectAllStatTableEntries")))
@interface PelogicSelectAllStatTableEntries : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("init(venue_id:floor_id:mac_address:mean:std:score:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectAllStatTableEntries *)doCopyVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("doCopy(venue_id:floor_id:mac_address:mean:std:score:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectByMacSuffix")))
@interface PelogicSelectByMacSuffix : PelogicBase
- (instancetype)initWithMac_address:(NSString *)mac_address venue_id:(int64_t)venue_id __attribute__((swift_name("init(mac_address:venue_id:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectByMacSuffix *)doCopyMac_address:(NSString *)mac_address venue_id:(int64_t)venue_id __attribute__((swift_name("doCopy(mac_address:venue_id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectDefaultValueByVenueAndFloor")))
@interface PelogicSelectDefaultValueByVenueAndFloor : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("init(venue_id:floor_id:mean:std:score:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectDefaultValueByVenueAndFloor *)doCopyVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("doCopy(venue_id:floor_id:mean:std:score:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectDefaultValuesByVenue")))
@interface PelogicSelectDefaultValuesByVenue : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("init(venue_id:floor_id:mean:std:score:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectDefaultValuesByVenue *)doCopyVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("doCopy(venue_id:floor_id:mean:std:score:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectFloorParticlesWithRssi")))
@interface PelogicSelectFloorParticlesWithRssi : PelogicBase
- (instancetype)initWithId:(int64_t)id partId:(int64_t)partId x:(double)x y:(double)y zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(PelogicDouble * _Nullable)weight floorID:(int64_t)floorID userID:(NSString * _Nullable)userID id_:(PelogicLong * _Nullable)id_ mac:(NSString * _Nullable)mac rssi:(PelogicLong * _Nullable)rssi particleID:(PelogicLong * _Nullable)particleID floorId:(PelogicLong * _Nullable)floorId venueId:(PelogicLong * _Nullable)venueId adjusted_rssi:(PelogicLong * _Nullable)adjusted_rssi __attribute__((swift_name("init(id:partId:x:y:zeroDistance:zeroAngle:weight:floorID:userID:id_:mac:rssi:particleID:floorId:venueId:adjusted_rssi:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectFloorParticlesWithRssi *)doCopyId:(int64_t)id partId:(int64_t)partId x:(double)x y:(double)y zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(PelogicDouble * _Nullable)weight floorID:(int64_t)floorID userID:(NSString * _Nullable)userID id_:(PelogicLong * _Nullable)id_ mac:(NSString * _Nullable)mac rssi:(PelogicLong * _Nullable)rssi particleID:(PelogicLong * _Nullable)particleID floorId:(PelogicLong * _Nullable)floorId venueId:(PelogicLong * _Nullable)venueId adjusted_rssi:(PelogicLong * _Nullable)adjusted_rssi __attribute__((swift_name("doCopy(id:partId:x:y:zeroDistance:zeroAngle:weight:floorID:userID:id_:mac:rssi:particleID:floorId:venueId:adjusted_rssi:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PelogicLong * _Nullable adjusted_rssi __attribute__((swift_name("adjusted_rssi")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) PelogicLong * _Nullable floorId __attribute__((swift_name("floorId")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) PelogicLong * _Nullable id_ __attribute__((swift_name("id_")));
@property (readonly) NSString * _Nullable mac __attribute__((swift_name("mac")));
@property (readonly) int64_t partId __attribute__((swift_name("partId")));
@property (readonly) PelogicLong * _Nullable particleID __attribute__((swift_name("particleID")));
@property (readonly) PelogicLong * _Nullable rssi __attribute__((swift_name("rssi")));
@property (readonly) NSString * _Nullable userID __attribute__((swift_name("userID")));
@property (readonly) PelogicLong * _Nullable venueId __attribute__((swift_name("venueId")));
@property (readonly) PelogicDouble * _Nullable weight __attribute__((swift_name("weight")));
@property (readonly) double x __attribute__((swift_name("x")));
@property (readonly) double y __attribute__((swift_name("y")));
@property (readonly) double zeroAngle __attribute__((swift_name("zeroAngle")));
@property (readonly) double zeroDistance __attribute__((swift_name("zeroDistance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectMacFloorMappingsByVenue")))
@interface PelogicSelectMacFloorMappingsByVenue : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address floor_id:(int64_t)floor_id __attribute__((swift_name("init(venue_id:mac_address:floor_id:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectMacFloorMappingsByVenue *)doCopyVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address floor_id:(int64_t)floor_id __attribute__((swift_name("doCopy(venue_id:mac_address:floor_id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectStatTableByVenue")))
@interface PelogicSelectStatTableByVenue : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("init(venue_id:floor_id:mac_address:mean:std:score:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectStatTableByVenue *)doCopyVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("doCopy(venue_id:floor_id:mac_address:mean:std:score:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectStatTableByVenueAndFloor")))
@interface PelogicSelectStatTableByVenueAndFloor : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("init(venue_id:floor_id:mac_address:mean:std:score:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectStatTableByVenueAndFloor *)doCopyVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("doCopy(venue_id:floor_id:mac_address:mean:std:score:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsQueries")))
@interface PelogicSettingsQueries : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver ParticleFilterFlowSettingsAdapter:(PelogicParticleFilterFlowSettings_Adapter *)ParticleFilterFlowSettingsAdapter __attribute__((swift_name("init(driver:ParticleFilterFlowSettingsAdapter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)deleteAllSettings __attribute__((swift_name("deleteAllSettings()")));
- (PelogicRuntimeQuery<PelogicLong *> *)selectAllFloorIDs __attribute__((swift_name("selectAllFloorIDs()")));
- (PelogicRuntimeQuery<PelogicFloorSettings_ *> *)selectFloorSettingsFloorID:(int64_t)floorID __attribute__((swift_name("selectFloorSettings(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectFloorSettingsFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicLong *, PelogicLong *, PelogicDouble *))mapper __attribute__((swift_name("selectFloorSettings(floorID:mapper:)")));
- (PelogicRuntimeQuery<PelogicMobilityModelSettings_ *> *)selectMobilityModelSettingsFloorID:(int64_t)floorID __attribute__((swift_name("selectMobilityModelSettings(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectMobilityModelSettingsFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *))mapper __attribute__((swift_name("selectMobilityModelSettings(floorID:mapper:)")));
- (PelogicRuntimeQuery<PelogicParticleFilterFlowSettings_ *> *)selectParticleFilterFlowSettingsFloorID:(int64_t)floorID __attribute__((swift_name("selectParticleFilterFlowSettings(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectParticleFilterFlowSettingsFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, PelogicDouble *, PelogicLong *, PelogicLong *, id, PelogicBoolean *))mapper __attribute__((swift_name("selectParticleFilterFlowSettings(floorID:mapper:)")));
- (PelogicRuntimeQuery<PelogicResamplingSettings_ *> *)selectResamplingSettingsFloorID:(int64_t)floorID __attribute__((swift_name("selectResamplingSettings(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectResamplingSettingsFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, PelogicBoolean *, PelogicDouble *, PelogicLong *, PelogicDouble *))mapper __attribute__((swift_name("selectResamplingSettings(floorID:mapper:)")));
- (PelogicRuntimeQuery<PelogicRssiStatisticsModel_ *> *)selectRssiStatisticsModelFloorID:(int64_t)floorID __attribute__((swift_name("selectRssiStatisticsModel(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectRssiStatisticsModelFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble *))mapper __attribute__((swift_name("selectRssiStatisticsModel(floorID:mapper:)")));
- (PelogicRuntimeQuery<PelogicSignatureFilterSettings_ *> *)selectSignatureFilterSettingsFloorID:(int64_t)floorID __attribute__((swift_name("selectSignatureFilterSettings(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectSignatureFilterSettingsFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *))mapper __attribute__((swift_name("selectSignatureFilterSettings(floorID:mapper:)")));
- (void)updateFloorSettingsFloorID:(PelogicLong * _Nullable)floorID rssiCutoff:(int64_t)rssiCutoff standardDeviation:(double)standardDeviation particlesMaxSize:(int64_t)particlesMaxSize particlesMinSize:(int64_t)particlesMinSize scaleFactor:(double)scaleFactor __attribute__((swift_name("updateFloorSettings(floorID:rssiCutoff:standardDeviation:particlesMaxSize:particlesMinSize:scaleFactor:)")));
- (void)updateMobilityModelSettingsFloorID:(int64_t)floorID normalStepCount:(double)normalStepCount alternativeStepCount:(double)alternativeStepCount averageStepLength:(double)averageStepLength standardDeviation:(double)standardDeviation particleCountMinimum:(int64_t)particleCountMinimum particleCountMaximum:(int64_t)particleCountMaximum particleSearchRadius:(double)particleSearchRadius distanceScaleFactor:(double)distanceScaleFactor __attribute__((swift_name("updateMobilityModelSettings(floorID:normalStepCount:alternativeStepCount:averageStepLength:standardDeviation:particleCountMinimum:particleCountMaximum:particleSearchRadius:distanceScaleFactor:)")));
- (void)updateParticleFilterFlowSettingsFloorID:(int64_t)floorID scaleFactor:(double)scaleFactor unscaledRadius:(int64_t)unscaledRadius runsCountThreshold:(int64_t)runsCountThreshold durationTillParticleReset:(int64_t)durationTillParticleReset shouldCalculateTrustScore:(BOOL)shouldCalculateTrustScore __attribute__((swift_name("updateParticleFilterFlowSettings(floorID:scaleFactor:unscaledRadius:runsCountThreshold:durationTillParticleReset:shouldCalculateTrustScore:)")));
- (void)updateResamplingSettingsFloorID:(int64_t)floorID isParticleSpreadControlEnabled:(BOOL)isParticleSpreadControlEnabled particleSpreadThreshold:(double)particleSpreadThreshold maxResamplingRepeats:(int64_t)maxResamplingRepeats distanceScaleFactor:(double)distanceScaleFactor __attribute__((swift_name("updateResamplingSettings(floorID:isParticleSpreadControlEnabled:particleSpreadThreshold:maxResamplingRepeats:distanceScaleFactor:)")));
- (void)updateRssiStatisticsModelFloorID:(int64_t)floorID mean:(double)mean standardDeviation:(double)standardDeviation filterSigma:(double)filterSigma filterMu:(double)filterMu __attribute__((swift_name("updateRssiStatisticsModel(floorID:mean:standardDeviation:filterSigma:filterMu:)")));
- (void)updateSignatureFilterSettingsFloorID:(int64_t)floorID minRssiMatches:(int64_t)minRssiMatches maxRssiReadings:(int64_t)maxRssiReadings rssiMatchingThreshold:(int64_t)rssiMatchingThreshold defaultMinimumMACIntersections:(int64_t)defaultMinimumMACIntersections __attribute__((swift_name("updateSignatureFilterSettings(floorID:minRssiMatches:maxRssiReadings:rssiMatchingThreshold:defaultMinimumMACIntersections:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignatureFilterSettings_")))
@interface PelogicSignatureFilterSettings_ : PelogicBase
- (instancetype)initWithFloorID:(int64_t)floorID minRssiMatches:(int64_t)minRssiMatches maxRssiReadings:(int64_t)maxRssiReadings rssiMatchingThreshold:(int64_t)rssiMatchingThreshold defaultMinimumMACIntersections:(int64_t)defaultMinimumMACIntersections __attribute__((swift_name("init(floorID:minRssiMatches:maxRssiReadings:rssiMatchingThreshold:defaultMinimumMACIntersections:)"))) __attribute__((objc_designated_initializer));
- (PelogicSignatureFilterSettings_ *)doCopyFloorID:(int64_t)floorID minRssiMatches:(int64_t)minRssiMatches maxRssiReadings:(int64_t)maxRssiReadings rssiMatchingThreshold:(int64_t)rssiMatchingThreshold defaultMinimumMACIntersections:(int64_t)defaultMinimumMACIntersections __attribute__((swift_name("doCopy(floorID:minRssiMatches:maxRssiReadings:rssiMatchingThreshold:defaultMinimumMACIntersections:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t defaultMinimumMACIntersections __attribute__((swift_name("defaultMinimumMACIntersections")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) int64_t maxRssiReadings __attribute__((swift_name("maxRssiReadings")));
@property (readonly) int64_t minRssiMatches __attribute__((swift_name("minRssiMatches")));
@property (readonly) int64_t rssiMatchingThreshold __attribute__((swift_name("rssiMatchingThreshold")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User_")))
@interface PelogicUser_ : PelogicBase
- (instancetype)initWithId:(NSString *)id runsCount:(int64_t)runsCount estimatedFloorId:(int64_t)estimatedFloorId lastUpdate:(PelogicKotlinx_datetimeInstant *)lastUpdate lastX:(PelogicDouble * _Nullable)lastX lastY:(PelogicDouble * _Nullable)lastY isRunningPE:(PelogicBoolean * _Nullable)isRunningPE prevFloor:(PelogicLong * _Nullable)prevFloor prevKnnFloor:(PelogicLong * _Nullable)prevKnnFloor trustedPointCounter:(PelogicLong * _Nullable)trustedPointCounter floorInitialized:(PelogicBoolean * _Nullable)floorInitialized estimatedVenueId:(PelogicLong * _Nullable)estimatedVenueId venueDetectionTimer:(PelogicKotlinx_datetimeInstant *)venueDetectionTimer prevVenueId:(PelogicLong * _Nullable)prevVenueId prevDetectedVenueId:(PelogicLong * _Nullable)prevDetectedVenueId trustedVenueCounter:(PelogicLong * _Nullable)trustedVenueCounter venueInitialized:(PelogicBoolean * _Nullable)venueInitialized rssiMovingAverage:(PelogicDouble * _Nullable)rssiMovingAverage rssiMovingAverageCount:(int64_t)rssiMovingAverageCount __attribute__((swift_name("init(id:runsCount:estimatedFloorId:lastUpdate:lastX:lastY:isRunningPE:prevFloor:prevKnnFloor:trustedPointCounter:floorInitialized:estimatedVenueId:venueDetectionTimer:prevVenueId:prevDetectedVenueId:trustedVenueCounter:venueInitialized:rssiMovingAverage:rssiMovingAverageCount:)"))) __attribute__((objc_designated_initializer));
- (PelogicUser_ *)doCopyId:(NSString *)id runsCount:(int64_t)runsCount estimatedFloorId:(int64_t)estimatedFloorId lastUpdate:(PelogicKotlinx_datetimeInstant *)lastUpdate lastX:(PelogicDouble * _Nullable)lastX lastY:(PelogicDouble * _Nullable)lastY isRunningPE:(PelogicBoolean * _Nullable)isRunningPE prevFloor:(PelogicLong * _Nullable)prevFloor prevKnnFloor:(PelogicLong * _Nullable)prevKnnFloor trustedPointCounter:(PelogicLong * _Nullable)trustedPointCounter floorInitialized:(PelogicBoolean * _Nullable)floorInitialized estimatedVenueId:(PelogicLong * _Nullable)estimatedVenueId venueDetectionTimer:(PelogicKotlinx_datetimeInstant *)venueDetectionTimer prevVenueId:(PelogicLong * _Nullable)prevVenueId prevDetectedVenueId:(PelogicLong * _Nullable)prevDetectedVenueId trustedVenueCounter:(PelogicLong * _Nullable)trustedVenueCounter venueInitialized:(PelogicBoolean * _Nullable)venueInitialized rssiMovingAverage:(PelogicDouble * _Nullable)rssiMovingAverage rssiMovingAverageCount:(int64_t)rssiMovingAverageCount __attribute__((swift_name("doCopy(id:runsCount:estimatedFloorId:lastUpdate:lastX:lastY:isRunningPE:prevFloor:prevKnnFloor:trustedPointCounter:floorInitialized:estimatedVenueId:venueDetectionTimer:prevVenueId:prevDetectedVenueId:trustedVenueCounter:venueInitialized:rssiMovingAverage:rssiMovingAverageCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t estimatedFloorId __attribute__((swift_name("estimatedFloorId")));
@property (readonly) PelogicLong * _Nullable estimatedVenueId __attribute__((swift_name("estimatedVenueId")));
@property (readonly) PelogicBoolean * _Nullable floorInitialized __attribute__((swift_name("floorInitialized")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) PelogicBoolean * _Nullable isRunningPE __attribute__((swift_name("isRunningPE")));
@property (readonly) PelogicKotlinx_datetimeInstant *lastUpdate __attribute__((swift_name("lastUpdate")));
@property (readonly) PelogicDouble * _Nullable lastX __attribute__((swift_name("lastX")));
@property (readonly) PelogicDouble * _Nullable lastY __attribute__((swift_name("lastY")));
@property (readonly) PelogicLong * _Nullable prevDetectedVenueId __attribute__((swift_name("prevDetectedVenueId")));
@property (readonly) PelogicLong * _Nullable prevFloor __attribute__((swift_name("prevFloor")));
@property (readonly) PelogicLong * _Nullable prevKnnFloor __attribute__((swift_name("prevKnnFloor")));
@property (readonly) PelogicLong * _Nullable prevVenueId __attribute__((swift_name("prevVenueId")));
@property (readonly) PelogicDouble * _Nullable rssiMovingAverage __attribute__((swift_name("rssiMovingAverage")));
@property (readonly) int64_t rssiMovingAverageCount __attribute__((swift_name("rssiMovingAverageCount")));
@property (readonly) int64_t runsCount __attribute__((swift_name("runsCount")));
@property (readonly) PelogicLong * _Nullable trustedPointCounter __attribute__((swift_name("trustedPointCounter")));
@property (readonly) PelogicLong * _Nullable trustedVenueCounter __attribute__((swift_name("trustedVenueCounter")));
@property (readonly) PelogicKotlinx_datetimeInstant *venueDetectionTimer __attribute__((swift_name("venueDetectionTimer")));
@property (readonly) PelogicBoolean * _Nullable venueInitialized __attribute__((swift_name("venueInitialized")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User_.Adapter")))
@interface PelogicUser_Adapter : PelogicBase
- (instancetype)initWithLastUpdateAdapter:(id<PelogicRuntimeColumnAdapter>)lastUpdateAdapter venueDetectionTimerAdapter:(id<PelogicRuntimeColumnAdapter>)venueDetectionTimerAdapter __attribute__((swift_name("init(lastUpdateAdapter:venueDetectionTimerAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<PelogicRuntimeColumnAdapter> lastUpdateAdapter __attribute__((swift_name("lastUpdateAdapter")));
@property (readonly) id<PelogicRuntimeColumnAdapter> venueDetectionTimerAdapter __attribute__((swift_name("venueDetectionTimerAdapter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserParticles")))
@interface PelogicUserParticles : PelogicBase
- (instancetype)initWithId:(int64_t)id partId:(int64_t)partId x:(double)x y:(double)y zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(PelogicDouble * _Nullable)weight floorID:(int64_t)floorID userID:(NSString * _Nullable)userID __attribute__((swift_name("init(id:partId:x:y:zeroDistance:zeroAngle:weight:floorID:userID:)"))) __attribute__((objc_designated_initializer));
- (PelogicUserParticles *)doCopyId:(int64_t)id partId:(int64_t)partId x:(double)x y:(double)y zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(PelogicDouble * _Nullable)weight floorID:(int64_t)floorID userID:(NSString * _Nullable)userID __attribute__((swift_name("doCopy(id:partId:x:y:zeroDistance:zeroAngle:weight:floorID:userID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int64_t partId __attribute__((swift_name("partId")));
@property (readonly) NSString * _Nullable userID __attribute__((swift_name("userID")));
@property (readonly) PelogicDouble * _Nullable weight __attribute__((swift_name("weight")));
@property (readonly) double x __attribute__((swift_name("x")));
@property (readonly) double y __attribute__((swift_name("y")));
@property (readonly) double zeroAngle __attribute__((swift_name("zeroAngle")));
@property (readonly) double zeroDistance __attribute__((swift_name("zeroDistance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserParticlesQueries")))
@interface PelogicUserParticlesQueries : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteAllUserParticles __attribute__((swift_name("deleteAllUserParticles()")));
- (void)deleteUserParticlesByUserIdUserID:(NSString * _Nullable)userID __attribute__((swift_name("deleteUserParticlesByUserId(userID:)")));
- (void)insertOrIgnoreUserParticlePartId:(int64_t)partId x:(double)x y:(double)y zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(PelogicDouble * _Nullable)weight floorID:(int64_t)floorID userID:(NSString * _Nullable)userID __attribute__((swift_name("insertOrIgnoreUserParticle(partId:x:y:zeroDistance:zeroAngle:weight:floorID:userID:)")));
- (void)insertUserParticleId:(PelogicLong * _Nullable)id partId:(int64_t)partId x:(double)x y:(double)y zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(PelogicDouble * _Nullable)weight floorID:(int64_t)floorID userID:(NSString * _Nullable)userID __attribute__((swift_name("insertUserParticle(id:partId:x:y:zeroDistance:zeroAngle:weight:floorID:userID:)")));
- (PelogicRuntimeQuery<PelogicUserParticles *> *)selectAll __attribute__((swift_name("selectAll()")));
- (PelogicRuntimeQuery<id> *)selectAllMapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble * _Nullable, PelogicLong *, NSString * _Nullable))mapper __attribute__((swift_name("selectAll(mapper:)")));
- (PelogicRuntimeQuery<PelogicUserParticles *> *)selectFloorUserParticlesFloorID:(int64_t)floorID __attribute__((swift_name("selectFloorUserParticles(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectFloorUserParticlesFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble * _Nullable, PelogicLong *, NSString * _Nullable))mapper __attribute__((swift_name("selectFloorUserParticles(floorID:mapper:)")));
- (PelogicRuntimeQuery<NSString *> *)selectFloorUserParticlesMacsFloorID:(int64_t)floorID __attribute__((swift_name("selectFloorUserParticlesMacs(floorID:)")));
- (PelogicRuntimeQuery<PelogicUserParticles *> *)selectUserParticlesByUserIdUserID:(NSString * _Nullable)userID __attribute__((swift_name("selectUserParticlesByUserId(userID:)")));
- (PelogicRuntimeQuery<id> *)selectUserParticlesByUserIdUserID:(NSString * _Nullable)userID mapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble * _Nullable, PelogicLong *, NSString * _Nullable))mapper __attribute__((swift_name("selectUserParticlesByUserId(userID:mapper:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserQueries")))
@interface PelogicUserQueries : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver UserAdapter:(PelogicUser_Adapter *)UserAdapter __attribute__((swift_name("init(driver:UserAdapter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (PelogicRuntimeQuery<PelogicUser_ *> *)selectUserByIdId:(NSString *)id __attribute__((swift_name("selectUserById(id:)")));
- (PelogicRuntimeQuery<id> *)selectUserByIdId:(NSString *)id mapper:(id (^)(NSString *, PelogicLong *, PelogicLong *, PelogicKotlinx_datetimeInstant *, PelogicDouble * _Nullable, PelogicDouble * _Nullable, PelogicBoolean * _Nullable, PelogicLong * _Nullable, PelogicLong * _Nullable, PelogicLong * _Nullable, PelogicBoolean * _Nullable, PelogicLong * _Nullable, PelogicKotlinx_datetimeInstant *, PelogicLong * _Nullable, PelogicLong * _Nullable, PelogicLong * _Nullable, PelogicBoolean * _Nullable, PelogicDouble * _Nullable, PelogicLong *))mapper __attribute__((swift_name("selectUserById(id:mapper:)")));
- (void)updateUserId:(NSString *)id runsCount:(int64_t)runsCount estimatedFloorId:(int64_t)estimatedFloorId lastUpdate:(PelogicKotlinx_datetimeInstant *)lastUpdate lastX:(PelogicDouble * _Nullable)lastX lastY:(PelogicDouble * _Nullable)lastY isRunningPE:(PelogicBoolean * _Nullable)isRunningPE prevFloor:(PelogicLong * _Nullable)prevFloor prevKnnFloor:(PelogicLong * _Nullable)prevKnnFloor trustedPointCounter:(PelogicLong * _Nullable)trustedPointCounter floorInitialized:(PelogicBoolean * _Nullable)floorInitialized estimatedVenueId:(PelogicLong * _Nullable)estimatedVenueId venueDetectionTimer:(PelogicKotlinx_datetimeInstant *)venueDetectionTimer prevVenueId:(PelogicLong * _Nullable)prevVenueId prevDetectedVenueId:(PelogicLong * _Nullable)prevDetectedVenueId trustedVenueCounter:(PelogicLong * _Nullable)trustedVenueCounter venueInitialized:(PelogicBoolean * _Nullable)venueInitialized rssiMovingAverage:(PelogicDouble * _Nullable)rssiMovingAverage rssiMovingAverageCount:(int64_t)rssiMovingAverageCount __attribute__((swift_name("updateUser(id:runsCount:estimatedFloorId:lastUpdate:lastX:lastY:isRunningPE:prevFloor:prevKnnFloor:trustedPointCounter:floorInitialized:estimatedVenueId:venueDetectionTimer:prevVenueId:prevDetectedVenueId:trustedVenueCounter:venueInitialized:rssiMovingAverage:rssiMovingAverageCount:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserRssiReading")))
@interface PelogicUserRssiReading : PelogicBase
- (instancetype)initWithId:(int64_t)id mac:(NSString *)mac rssi:(int64_t)rssi particleID:(int64_t)particleID floorId:(int64_t)floorId venueId:(int64_t)venueId __attribute__((swift_name("init(id:mac:rssi:particleID:floorId:venueId:)"))) __attribute__((objc_designated_initializer));
- (PelogicUserRssiReading *)doCopyId:(int64_t)id mac:(NSString *)mac rssi:(int64_t)rssi particleID:(int64_t)particleID floorId:(int64_t)floorId venueId:(int64_t)venueId __attribute__((swift_name("doCopy(id:mac:rssi:particleID:floorId:venueId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorId __attribute__((swift_name("floorId")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *mac __attribute__((swift_name("mac")));
@property (readonly) int64_t particleID __attribute__((swift_name("particleID")));
@property (readonly) int64_t rssi __attribute__((swift_name("rssi")));
@property (readonly) int64_t venueId __attribute__((swift_name("venueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserRssiReadingQueries")))
@interface PelogicUserRssiReadingQueries : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteAllUserRssi __attribute__((swift_name("deleteAllUserRssi()")));
- (void)deleteUserRssiByUserIdUserID:(NSString * _Nullable)userID __attribute__((swift_name("deleteUserRssiByUserId(userID:)")));
- (void)insertOrIgnoreUserRssiReadingMac:(NSString *)mac rssi:(int64_t)rssi particleID:(int64_t)particleID floorId:(int64_t)floorId venueId:(int64_t)venueId __attribute__((swift_name("insertOrIgnoreUserRssiReading(mac:rssi:particleID:floorId:venueId:)")));
- (void)insertOrReplaceUserRssiReadingMac:(NSString *)mac rssi:(int64_t)rssi particleID:(int64_t)particleID floorId:(int64_t)floorId venueId:(int64_t)venueId __attribute__((swift_name("insertOrReplaceUserRssiReading(mac:rssi:particleID:floorId:venueId:)")));
- (void)insertUserRssiReadingMac:(NSString *)mac rssi:(int64_t)rssi particleID:(int64_t)particleID floorId:(int64_t)floorId venueId:(int64_t)venueId __attribute__((swift_name("insertUserRssiReading(mac:rssi:particleID:floorId:venueId:)")));
- (PelogicRuntimeQuery<PelogicUserRssiReading *> *)selectByUserParticleParticleID:(int64_t)particleID __attribute__((swift_name("selectByUserParticle(particleID:)")));
- (PelogicRuntimeQuery<id> *)selectByUserParticleParticleID:(int64_t)particleID mapper:(id (^)(PelogicLong *, NSString *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *))mapper __attribute__((swift_name("selectByUserParticle(particleID:mapper:)")));
- (PelogicRuntimeQuery<PelogicUserRssiReading *> *)selectByUserParticleIdsParticleID:(id)particleID __attribute__((swift_name("selectByUserParticleIds(particleID:)")));
- (PelogicRuntimeQuery<id> *)selectByUserParticleIdsParticleID:(id)particleID mapper:(id (^)(PelogicLong *, NSString *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *))mapper __attribute__((swift_name("selectByUserParticleIds(particleID:mapper:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionMapping_")))
@interface PelogicVenueDetectionMapping_ : PelogicBase
- (instancetype)initWithId:(int64_t)id mac_suffix:(NSString *)mac_suffix mac_address:(NSString *)mac_address venue_id:(int64_t)venue_id created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("init(id:mac_suffix:mac_address:venue_id:created_at:updated_at:)"))) __attribute__((objc_designated_initializer));
- (PelogicVenueDetectionMapping_ *)doCopyId:(int64_t)id mac_suffix:(NSString *)mac_suffix mac_address:(NSString *)mac_address venue_id:(int64_t)venue_id created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("doCopy(id:mac_suffix:mac_address:venue_id:created_at:updated_at:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t created_at __attribute__((swift_name("created_at")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) NSString *mac_suffix __attribute__((swift_name("mac_suffix")));
@property (readonly) int64_t updated_at __attribute__((swift_name("updated_at")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionMappingQueries")))
@interface PelogicVenueDetectionMappingQueries : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (PelogicRuntimeQuery<PelogicLong *> *)countVenueDetectionMappings __attribute__((swift_name("countVenueDetectionMappings()")));
- (void)deleteAllVenueDetectionMappings __attribute__((swift_name("deleteAllVenueDetectionMappings()")));
- (void)deleteVenueDetectionMappingMac_suffix:(NSString *)mac_suffix mac_address:(NSString *)mac_address venue_id:(int64_t)venue_id __attribute__((swift_name("deleteVenueDetectionMapping(mac_suffix:mac_address:venue_id:)")));
- (void)insertVenueDetectionMappingMac_suffix:(NSString *)mac_suffix mac_address:(NSString *)mac_address venue_id:(int64_t)venue_id created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("insertVenueDetectionMapping(mac_suffix:mac_address:venue_id:created_at:updated_at:)")));
- (PelogicRuntimeQuery<PelogicSelectAllMappings *> *)selectAllMappings __attribute__((swift_name("selectAllMappings()")));
- (PelogicRuntimeQuery<id> *)selectAllMappingsMapper:(id (^)(NSString *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectAllMappings(mapper:)")));
- (PelogicRuntimeQuery<PelogicSelectByMacSuffix *> *)selectByMacSuffixMac_suffix:(NSString *)mac_suffix __attribute__((swift_name("selectByMacSuffix(mac_suffix:)")));
- (PelogicRuntimeQuery<id> *)selectByMacSuffixMac_suffix:(NSString *)mac_suffix mapper:(id (^)(NSString *, PelogicLong *))mapper __attribute__((swift_name("selectByMacSuffix(mac_suffix:mapper:)")));
- (PelogicRuntimeQuery<NSString *> *)selectDistinctMacSuffixes __attribute__((swift_name("selectDistinctMacSuffixes()")));
- (PelogicRuntimeQuery<PelogicLong *> *)selectDistinctVenueIds __attribute__((swift_name("selectDistinctVenueIds()")));
- (PelogicRuntimeQuery<PelogicLong *> *)selectVenueIdsByMacMac_address:(NSString *)mac_address __attribute__((swift_name("selectVenueIdsByMac(mac_address:)")));
- (void)updateVenueDetectionMappingVenue_id:(int64_t)venue_id updated_at:(int64_t)updated_at mac_suffix:(NSString *)mac_suffix mac_address:(NSString *)mac_address __attribute__((swift_name("updateVenueDetectionMapping(venue_id:updated_at:mac_suffix:mac_address:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalibrationValue")))
@interface PelogicCalibrationValue : PelogicBase
- (instancetype)initWithPlatform:(NSString *)platform manufactur:(NSString *)manufactur model:(NSString *)model description:(NSString *)description value:(int32_t)value __attribute__((swift_name("init(platform:manufactur:model:description:value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicCalibrationValueCompanion *companion __attribute__((swift_name("companion")));
- (PelogicCalibrationValue *)doCopyPlatform:(NSString *)platform manufactur:(NSString *)manufactur model:(NSString *)model description:(NSString *)description value:(int32_t)value __attribute__((swift_name("doCopy(platform:manufactur:model:description:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *manufactur __attribute__((swift_name("manufactur")));
@property (readonly) NSString *model __attribute__((swift_name("model")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalibrationValue.Companion")))
@interface PelogicCalibrationValueCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicCalibrationValueCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Floor")))
@interface PelogicFloor : PelogicBase
- (instancetype)initWithId:(int64_t)id macs:(NSArray<NSString *> *)macs particles:(NSArray<PelogicParticle *> *)particles __attribute__((swift_name("init(id:macs:particles:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicFloorCompanion *companion __attribute__((swift_name("companion")));
- (PelogicFloor *)doCopyId:(int64_t)id macs:(NSArray<NSString *> *)macs particles:(NSArray<PelogicParticle *> *)particles __attribute__((swift_name("doCopy(id:macs:particles:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/penguinin/pe/logic/model/MacListStringSerializer))
*/
@property (readonly) NSArray<NSString *> *macs __attribute__((swift_name("macs")));
@property (readonly) NSArray<PelogicParticle *> *particles __attribute__((swift_name("particles")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Floor.Companion")))
@interface PelogicFloorCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicFloorCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionAndFilterResult")))
@interface PelogicFloorDetectionAndFilterResult : PelogicBase
- (instancetype)initWithFloorId:(int64_t)floorId filteredRssiReadings:(NSArray<PelogicRssiReading *> *)filteredRssiReadings shouldResetParticles:(BOOL)shouldResetParticles __attribute__((swift_name("init(floorId:filteredRssiReadings:shouldResetParticles:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorDetectionAndFilterResult *)doCopyFloorId:(int64_t)floorId filteredRssiReadings:(NSArray<PelogicRssiReading *> *)filteredRssiReadings shouldResetParticles:(BOOL)shouldResetParticles __attribute__((swift_name("doCopy(floorId:filteredRssiReadings:shouldResetParticles:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PelogicRssiReading *> *filteredRssiReadings __attribute__((swift_name("filteredRssiReadings")));
@property (readonly) int64_t floorId __attribute__((swift_name("floorId")));
@property (readonly) BOOL shouldResetParticles __attribute__((swift_name("shouldResetParticles")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionDefaultValueEntry")))
@interface PelogicFloorDetectionDefaultValueEntry : PelogicBase
- (instancetype)initWithVenueId:(int64_t)venueId floorId:(int64_t)floorId mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("init(venueId:floorId:mean:std:score:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorDetectionDefaultValueEntry *)doCopyVenueId:(int64_t)venueId floorId:(int64_t)floorId mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("doCopy(venueId:floorId:mean:std:score:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorId __attribute__((swift_name("floorId")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t venueId __attribute__((swift_name("venueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionMacFloorMappingEntry")))
@interface PelogicFloorDetectionMacFloorMappingEntry : PelogicBase
- (instancetype)initWithVenueId:(int64_t)venueId macAddress:(NSString *)macAddress floorId:(int64_t)floorId __attribute__((swift_name("init(venueId:macAddress:floorId:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorDetectionMacFloorMappingEntry *)doCopyVenueId:(int64_t)venueId macAddress:(NSString *)macAddress floorId:(int64_t)floorId __attribute__((swift_name("doCopy(venueId:macAddress:floorId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorId __attribute__((swift_name("floorId")));
@property (readonly) NSString *macAddress __attribute__((swift_name("macAddress")));
@property (readonly) int64_t venueId __attribute__((swift_name("venueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionStatTableEntry")))
@interface PelogicFloorDetectionStatTableEntry : PelogicBase
- (instancetype)initWithVenueId:(int64_t)venueId floorId:(int64_t)floorId macAddress:(NSString *)macAddress mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("init(venueId:floorId:macAddress:mean:std:score:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorDetectionStatTableEntry *)doCopyVenueId:(int64_t)venueId floorId:(int64_t)floorId macAddress:(NSString *)macAddress mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("doCopy(venueId:floorId:macAddress:mean:std:score:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorId __attribute__((swift_name("floorId")));
@property (readonly) NSString *macAddress __attribute__((swift_name("macAddress")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t venueId __attribute__((swift_name("venueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorRssiAverageEntry")))
@interface PelogicFloorRssiAverageEntry : PelogicBase
- (instancetype)initWithVenueId:(int64_t)venueId floorId:(int64_t)floorId averageRssi:(double)averageRssi __attribute__((swift_name("init(venueId:floorId:averageRssi:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorRssiAverageEntry *)doCopyVenueId:(int64_t)venueId floorId:(int64_t)floorId averageRssi:(double)averageRssi __attribute__((swift_name("doCopy(venueId:floorId:averageRssi:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double averageRssi __attribute__((swift_name("averageRssi")));
@property (readonly) int64_t floorId __attribute__((swift_name("floorId")));
@property (readonly) int64_t venueId __attribute__((swift_name("venueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorStats")))
@interface PelogicFloorStats : PelogicBase
- (instancetype)initWithMean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("init(mean:std:score:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorStats *)doCopyMean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("doCopy(mean:std:score:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@end

__attribute__((swift_name("FloorTransitionResult")))
@interface PelogicFloorTransitionResult : PelogicBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorTransitionResult.Success")))
@interface PelogicFloorTransitionResultSuccess : PelogicFloorTransitionResult
- (instancetype)initWithEstimatedFloor:(int64_t)estimatedFloor shouldResetParticles:(BOOL)shouldResetParticles floorInitialized:(BOOL)floorInitialized __attribute__((swift_name("init(estimatedFloor:shouldResetParticles:floorInitialized:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorTransitionResultSuccess *)doCopyEstimatedFloor:(int64_t)estimatedFloor shouldResetParticles:(BOOL)shouldResetParticles floorInitialized:(BOOL)floorInitialized __attribute__((swift_name("doCopy(estimatedFloor:shouldResetParticles:floorInitialized:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t estimatedFloor __attribute__((swift_name("estimatedFloor")));
@property (readonly) BOOL floorInitialized __attribute__((swift_name("floorInitialized")));
@property (readonly) BOOL shouldResetParticles __attribute__((swift_name("shouldResetParticles")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol PelogicKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<PelogicKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<PelogicKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol PelogicKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<PelogicKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<PelogicKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol PelogicKotlinx_serialization_coreKSerializer <PelogicKotlinx_serialization_coreSerializationStrategy, PelogicKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MacListStringSerializer")))
@interface PelogicMacListStringSerializer : PelogicBase <PelogicKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)macListStringSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicMacListStringSerializer *shared __attribute__((swift_name("shared")));
- (NSArray<NSString *> *)deserializeDecoder:(id<PelogicKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<PelogicKotlinx_serialization_coreEncoder>)encoder value:(NSArray<NSString *> *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<PelogicKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MacStringSerializer")))
@interface PelogicMacStringSerializer : PelogicBase <PelogicKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)macStringSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicMacStringSerializer *shared __attribute__((swift_name("shared")));
- (NSString *)deserializeDecoder:(id<PelogicKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<PelogicKotlinx_serialization_coreEncoder>)encoder value:(NSString *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<PelogicKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Particle")))
@interface PelogicParticle : PelogicBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithId:(int64_t)id point:(PelogicPoint *)point rssiReadings:(NSArray<PelogicRssiReading *> *)rssiReadings zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(double)weight floorID:(int64_t)floorID partId:(int64_t)partId __attribute__((swift_name("init(id:point:rssiReadings:zeroDistance:zeroAngle:weight:floorID:partId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicParticleCompanion *companion __attribute__((swift_name("companion")));
- (PelogicParticle *)doCopyId:(int64_t)id point:(PelogicPoint *)point rssiReadings:(NSArray<PelogicRssiReading *> *)rssiReadings zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(double)weight floorID:(int64_t)floorID partId:(int64_t)partId __attribute__((swift_name("doCopy(id:point:rssiReadings:zeroDistance:zeroAngle:weight:floorID:partId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int64_t partId __attribute__((swift_name("partId")));
@property (readonly) PelogicPoint *point __attribute__((swift_name("point")));
@property (readonly) NSArray<PelogicRssiReading *> *rssiReadings __attribute__((swift_name("rssiReadings")));
@property (readonly) double weight __attribute__((swift_name("weight")));
@property (readonly) double zeroAngle __attribute__((swift_name("zeroAngle")));
@property (readonly) double zeroDistance __attribute__((swift_name("zeroDistance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Particle.Companion")))
@interface PelogicParticleCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicParticleCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("ParticleFilterResponse")))
@interface PelogicParticleFilterResponse : PelogicBase
@property (class, readonly, getter=companion) PelogicParticleFilterResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterResponse.Companion")))
@interface PelogicParticleFilterResponseCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicParticleFilterResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PelogicKotlinArray<id<PelogicKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
 *   kotlinx.serialization.SerialName(value="Error")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterResponse.Error")))
@interface PelogicParticleFilterResponseError : PelogicParticleFilterResponse
- (instancetype)initWithMessage:(NSString *)message legacyError:(NSString *)legacyError __attribute__((swift_name("init(message:legacyError:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicParticleFilterResponseErrorCompanion *companion __attribute__((swift_name("companion")));
- (PelogicParticleFilterResponseError *)doCopyMessage:(NSString *)message legacyError:(NSString *)legacyError __attribute__((swift_name("doCopy(message:legacyError:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *legacyError __attribute__((swift_name("legacyError")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterResponse.ErrorCompanion")))
@interface PelogicParticleFilterResponseErrorCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicParticleFilterResponseErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
 *   kotlinx.serialization.SerialName(value="Processing")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterResponse.Processing")))
@interface PelogicParticleFilterResponseProcessing : PelogicParticleFilterResponse
- (instancetype)initWithRunsCount:(int32_t)runsCount __attribute__((swift_name("init(runsCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicParticleFilterResponseProcessingCompanion *companion __attribute__((swift_name("companion")));
- (PelogicParticleFilterResponseProcessing *)doCopyRunsCount:(int32_t)runsCount __attribute__((swift_name("doCopy(runsCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t runsCount __attribute__((swift_name("runsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterResponse.ProcessingCompanion")))
@interface PelogicParticleFilterResponseProcessingCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicParticleFilterResponseProcessingCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
 *   kotlinx.serialization.SerialName(value="Success")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterResponse.Success")))
@interface PelogicParticleFilterResponseSuccess : PelogicParticleFilterResponse
- (instancetype)initWithData:(PelogicParticleFilterResultData *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicParticleFilterResponseSuccessCompanion *companion __attribute__((swift_name("companion")));
- (PelogicParticleFilterResponseSuccess *)doCopyData:(PelogicParticleFilterResultData *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PelogicParticleFilterResultData *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterResponse.SuccessCompanion")))
@interface PelogicParticleFilterResponseSuccessCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicParticleFilterResponseSuccessCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterResultData")))
@interface PelogicParticleFilterResultData : PelogicBase
- (instancetype)initWithPoint:(PelogicPoint *)point floorId:(int64_t)floorId venueId:(int64_t)venueId radius:(double)radius cdf:(double)cdf __attribute__((swift_name("init(point:floorId:venueId:radius:cdf:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicParticleFilterResultDataCompanion *companion __attribute__((swift_name("companion")));
- (PelogicParticleFilterResultData *)doCopyPoint:(PelogicPoint *)point floorId:(int64_t)floorId venueId:(int64_t)venueId radius:(double)radius cdf:(double)cdf __attribute__((swift_name("doCopy(point:floorId:venueId:radius:cdf:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double cdf __attribute__((swift_name("cdf")));
@property (readonly) int64_t floorId __attribute__((swift_name("floorId")));
@property (readonly) PelogicPoint *point __attribute__((swift_name("point")));
@property (readonly) double radius __attribute__((swift_name("radius")));
@property (readonly) int64_t venueId __attribute__((swift_name("venueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterResultData.Companion")))
@interface PelogicParticleFilterResultDataCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicParticleFilterResultDataCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Point")))
@interface PelogicPoint : PelogicBase
- (instancetype)initWithX:(double)x y:(double)y __attribute__((swift_name("init(x:y:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicPointCompanion *companion __attribute__((swift_name("companion")));
- (PelogicPoint *)doCopyX:(double)x y:(double)y __attribute__((swift_name("doCopy(x:y:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double x __attribute__((swift_name("x")));
@property (readonly) double y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Point.Companion")))
@interface PelogicPointCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicPointCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Position")))
@interface PelogicPosition : PelogicBase
- (instancetype)initWithX:(double)x y:(double)y floorID:(int32_t)floorID venueID:(int32_t)venueID reqID:(int32_t)reqID epTrust:(double)epTrust __attribute__((swift_name("init(x:y:floorID:venueID:reqID:epTrust:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicPositionCompanion *companion __attribute__((swift_name("companion")));
- (PelogicPosition *)doCopyX:(double)x y:(double)y floorID:(int32_t)floorID venueID:(int32_t)venueID reqID:(int32_t)reqID epTrust:(double)epTrust __attribute__((swift_name("doCopy(x:y:floorID:venueID:reqID:epTrust:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double epTrust __attribute__((swift_name("epTrust")));
@property (readonly) int32_t floorID __attribute__((swift_name("floorID")));
@property (readonly) int32_t reqID __attribute__((swift_name("reqID")));
@property (readonly) int32_t venueID __attribute__((swift_name("venueID")));
@property (readonly) double x __attribute__((swift_name("x")));
@property (readonly) double y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Position.Companion")))
@interface PelogicPositionCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicPositionCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositionError")))
@interface PelogicPositionError : PelogicBase
- (instancetype)initWithErrorCode:(int32_t)errorCode errorMessage:(NSString *)errorMessage legacyErrorMessage:(NSString *)legacyErrorMessage timestamp:(int64_t)timestamp __attribute__((swift_name("init(errorCode:errorMessage:legacyErrorMessage:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicPositionErrorCompanion *companion __attribute__((swift_name("companion")));
- (PelogicPositionError *)doCopyErrorCode:(int32_t)errorCode errorMessage:(NSString *)errorMessage legacyErrorMessage:(NSString *)legacyErrorMessage timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(errorCode:errorMessage:legacyErrorMessage:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSString *errorMessage __attribute__((swift_name("errorMessage")));
@property (readonly) NSString *legacyErrorMessage __attribute__((swift_name("legacyErrorMessage")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositionError.Companion")))
@interface PelogicPositionErrorCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicPositionErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositionResponse")))
@interface PelogicPositionResponse : PelogicBase
- (instancetype)initWithPosition:(PelogicPosition *)position accuracy:(float)accuracy timestamp:(int64_t)timestamp __attribute__((swift_name("init(position:accuracy:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicPositionResponseCompanion *companion __attribute__((swift_name("companion")));
- (PelogicPositionResponse *)doCopyPosition:(PelogicPosition *)position accuracy:(float)accuracy timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(position:accuracy:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) float accuracy __attribute__((swift_name("accuracy")));
@property (readonly) PelogicPosition *position __attribute__((swift_name("position")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositionResponse.Companion")))
@interface PelogicPositionResponseCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicPositionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositioningErrorCodes")))
@interface PelogicPositioningErrorCodes : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)positioningErrorCodes __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicPositioningErrorCodes *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PelogicKotlinArray<id<PelogicKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@property (readonly) int32_t INITIALIZATION_ERROR __attribute__((swift_name("INITIALIZATION_ERROR")));
@property (readonly) int32_t MALFORMED_INPUT __attribute__((swift_name("MALFORMED_INPUT")));
@property (readonly) int32_t PROCESSING_ERROR __attribute__((swift_name("PROCESSING_ERROR")));
@property (readonly) int32_t UNKNOWN_ERROR __attribute__((swift_name("UNKNOWN_ERROR")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositioningRequest")))
@interface PelogicPositioningRequest : PelogicBase
- (instancetype)initWithUserID:(NSString *)userID rssiReadings:(NSArray<PelogicRssiReadingInput *> *)rssiReadings fixFloorID:(int32_t)fixFloorID fixVenueID:(int32_t)fixVenueID sessionID:(NSString *)sessionID reqID:(int32_t)reqID stepsCount:(int32_t)stepsCount heading:(NSString *)heading accelerometerStatus:(BOOL)accelerometerStatus resetParticles:(BOOL)resetParticles triggerVenueDetection:(BOOL)triggerVenueDetection deviceID:(NSString *)deviceID __attribute__((swift_name("init(userID:rssiReadings:fixFloorID:fixVenueID:sessionID:reqID:stepsCount:heading:accelerometerStatus:resetParticles:triggerVenueDetection:deviceID:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicPositioningRequestCompanion *companion __attribute__((swift_name("companion")));
- (PelogicPositioningRequest *)doCopyUserID:(NSString *)userID rssiReadings:(NSArray<PelogicRssiReadingInput *> *)rssiReadings fixFloorID:(int32_t)fixFloorID fixVenueID:(int32_t)fixVenueID sessionID:(NSString *)sessionID reqID:(int32_t)reqID stepsCount:(int32_t)stepsCount heading:(NSString *)heading accelerometerStatus:(BOOL)accelerometerStatus resetParticles:(BOOL)resetParticles triggerVenueDetection:(BOOL)triggerVenueDetection deviceID:(NSString *)deviceID __attribute__((swift_name("doCopy(userID:rssiReadings:fixFloorID:fixVenueID:sessionID:reqID:stepsCount:heading:accelerometerStatus:resetParticles:triggerVenueDetection:deviceID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL accelerometerStatus __attribute__((swift_name("accelerometerStatus")));
@property NSString *deviceID __attribute__((swift_name("deviceID")));
@property int32_t fixFloorID __attribute__((swift_name("fixFloorID")));
@property int32_t fixVenueID __attribute__((swift_name("fixVenueID")));
@property NSString *heading __attribute__((swift_name("heading")));
@property int32_t reqID __attribute__((swift_name("reqID")));
@property BOOL resetParticles __attribute__((swift_name("resetParticles")));
@property NSArray<PelogicRssiReadingInput *> *rssiReadings __attribute__((swift_name("rssiReadings")));
@property NSString *sessionID __attribute__((swift_name("sessionID")));
@property int32_t stepsCount __attribute__((swift_name("stepsCount")));
@property BOOL triggerVenueDetection __attribute__((swift_name("triggerVenueDetection")));
@property NSString *userID __attribute__((swift_name("userID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositioningRequest.Companion")))
@interface PelogicPositioningRequestCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicPositioningRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("PositioningResult")))
@interface PelogicPositioningResult : PelogicBase
@property (class, readonly, getter=companion) PelogicPositioningResultCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositioningResult.Companion")))
@interface PelogicPositioningResultCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicPositioningResultCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PelogicKotlinArray<id<PelogicKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositioningResult.Error")))
@interface PelogicPositioningResultError : PelogicPositioningResult
- (instancetype)initWithPositionError:(PelogicPositionError *)positionError __attribute__((swift_name("init(positionError:)"))) __attribute__((objc_designated_initializer));
- (PelogicPositioningResultError *)doCopyPositionError:(PelogicPositionError *)positionError __attribute__((swift_name("doCopy(positionError:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PelogicPositionError *positionError __attribute__((swift_name("positionError")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PositioningResult.Success")))
@interface PelogicPositioningResultSuccess : PelogicPositioningResult
- (instancetype)initWithPositionResponse:(PelogicPositionResponse *)positionResponse __attribute__((swift_name("init(positionResponse:)"))) __attribute__((objc_designated_initializer));
- (PelogicPositioningResultSuccess *)doCopyPositionResponse:(PelogicPositionResponse *)positionResponse __attribute__((swift_name("doCopy(positionResponse:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PelogicPositionResponse *positionResponse __attribute__((swift_name("positionResponse")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestPositionData")))
@interface PelogicRequestPositionData : PelogicBase
- (instancetype)initWithFloorID:(int64_t)floorID venueID:(int64_t)venueID userID:(NSString *)userID sessionID:(NSString *)sessionID requestID:(NSString *)requestID deviceID:(NSString * _Nullable)deviceID triggerVenueDetection:(BOOL)triggerVenueDetection resetParticle:(BOOL)resetParticle __attribute__((swift_name("init(floorID:venueID:userID:sessionID:requestID:deviceID:triggerVenueDetection:resetParticle:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicRequestPositionDataCompanion *companion __attribute__((swift_name("companion")));
- (PelogicRequestPositionData *)doCopyFloorID:(int64_t)floorID venueID:(int64_t)venueID userID:(NSString *)userID sessionID:(NSString *)sessionID requestID:(NSString *)requestID deviceID:(NSString * _Nullable)deviceID triggerVenueDetection:(BOOL)triggerVenueDetection resetParticle:(BOOL)resetParticle __attribute__((swift_name("doCopy(floorID:venueID:userID:sessionID:requestID:deviceID:triggerVenueDetection:resetParticle:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable deviceID __attribute__((swift_name("deviceID")));
@property int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) NSString *requestID __attribute__((swift_name("requestID")));
@property (readonly) BOOL resetParticle __attribute__((swift_name("resetParticle")));
@property (readonly) NSString *sessionID __attribute__((swift_name("sessionID")));
@property (readonly) BOOL triggerVenueDetection __attribute__((swift_name("triggerVenueDetection")));
@property (readonly) NSString *userID __attribute__((swift_name("userID")));
@property int64_t venueID __attribute__((swift_name("venueID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestPositionData.Companion")))
@interface PelogicRequestPositionDataCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicRequestPositionDataCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RssiData")))
@interface PelogicRssiData : PelogicBase
- (instancetype)initWithParticleRssi:(double)particleRssi userRssi:(double)userRssi __attribute__((swift_name("init(particleRssi:userRssi:)"))) __attribute__((objc_designated_initializer));
- (PelogicRssiData *)doCopyParticleRssi:(double)particleRssi userRssi:(double)userRssi __attribute__((swift_name("doCopy(particleRssi:userRssi:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double particleRssi __attribute__((swift_name("particleRssi")));
@property (readonly) double userRssi __attribute__((swift_name("userRssi")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RssiReading")))
@interface PelogicRssiReading : PelogicBase
- (instancetype)initWithMac:(NSString *)mac rssi:(int64_t)rssi particleId:(int64_t)particleId floorId:(int64_t)floorId venueId:(int64_t)venueId adjustedRssi:(int64_t)adjustedRssi __attribute__((swift_name("init(mac:rssi:particleId:floorId:venueId:adjustedRssi:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicRssiReadingCompanion *companion __attribute__((swift_name("companion")));
- (PelogicRssiReading *)doCopyMac:(NSString *)mac rssi:(int64_t)rssi particleId:(int64_t)particleId floorId:(int64_t)floorId venueId:(int64_t)venueId adjustedRssi:(int64_t)adjustedRssi __attribute__((swift_name("doCopy(mac:rssi:particleId:floorId:venueId:adjustedRssi:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (PelogicRssiReadingInput *)toRssiReadingInput __attribute__((swift_name("toRssiReadingInput()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int64_t adjustedRssi __attribute__((swift_name("adjustedRssi")));
@property (readonly) int64_t floorId __attribute__((swift_name("floorId")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/penguinin/pe/logic/model/MacStringSerializer))
*/
@property (readonly) NSString *mac __attribute__((swift_name("mac")));
@property (readonly) int64_t particleId __attribute__((swift_name("particleId")));
@property int64_t rssi __attribute__((swift_name("rssi")));
@property (readonly) int64_t venueId __attribute__((swift_name("venueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RssiReading.Companion")))
@interface PelogicRssiReadingCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicRssiReadingCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RssiReadingInput")))
@interface PelogicRssiReadingInput : PelogicBase
- (instancetype)initWithMac:(NSString *)mac rssi:(int64_t)rssi floorId:(int64_t)floorId venueId:(int64_t)venueId __attribute__((swift_name("init(mac:rssi:floorId:venueId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicRssiReadingInputCompanion *companion __attribute__((swift_name("companion")));
- (PelogicRssiReadingInput *)doCopyMac:(NSString *)mac rssi:(int64_t)rssi floorId:(int64_t)floorId venueId:(int64_t)venueId __attribute__((swift_name("doCopy(mac:rssi:floorId:venueId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (PelogicRssiReading *)toRssiReading __attribute__((swift_name("toRssiReading()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorId __attribute__((swift_name("floorId")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/penguinin/pe/logic/model/MacStringSerializer))
*/
@property (readonly) NSString *mac __attribute__((swift_name("mac")));
@property (readonly) int64_t rssi __attribute__((swift_name("rssi")));
@property (readonly) int64_t venueId __attribute__((swift_name("venueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RssiReadingInput.Companion")))
@interface PelogicRssiReadingInputCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicRssiReadingInputCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface PelogicUser : PelogicBase
- (instancetype)initWithId:(NSString *)id particles:(NSArray<PelogicParticle *> *)particles runsCount:(int32_t)runsCount lastUpdate:(PelogicKotlinx_datetimeInstant *)lastUpdate lastPoint:(PelogicPoint * _Nullable)lastPoint isRunningPE:(PelogicBoolean * _Nullable)isRunningPE estimatedFloorId:(int64_t)estimatedFloorId prevFloor:(PelogicLong * _Nullable)prevFloor prevKnnFloor:(PelogicLong * _Nullable)prevKnnFloor trustedPointCounter:(PelogicInt * _Nullable)trustedPointCounter floorInitialized:(PelogicBoolean * _Nullable)floorInitialized estimatedVenueId:(PelogicLong * _Nullable)estimatedVenueId venueDetectionTimer:(PelogicKotlinx_datetimeInstant *)venueDetectionTimer prevVenueId:(PelogicLong * _Nullable)prevVenueId prevDetectedVenueId:(PelogicLong * _Nullable)prevDetectedVenueId trustedVenueCounter:(PelogicInt * _Nullable)trustedVenueCounter venueInitialized:(PelogicBoolean * _Nullable)venueInitialized rssiMovingAverage:(PelogicDouble * _Nullable)rssiMovingAverage rssiMovingAverageCount:(int32_t)rssiMovingAverageCount __attribute__((swift_name("init(id:particles:runsCount:lastUpdate:lastPoint:isRunningPE:estimatedFloorId:prevFloor:prevKnnFloor:trustedPointCounter:floorInitialized:estimatedVenueId:venueDetectionTimer:prevVenueId:prevDetectedVenueId:trustedVenueCounter:venueInitialized:rssiMovingAverage:rssiMovingAverageCount:)"))) __attribute__((objc_designated_initializer));
- (PelogicUser *)doCopyId:(NSString *)id particles:(NSArray<PelogicParticle *> *)particles runsCount:(int32_t)runsCount lastUpdate:(PelogicKotlinx_datetimeInstant *)lastUpdate lastPoint:(PelogicPoint * _Nullable)lastPoint isRunningPE:(PelogicBoolean * _Nullable)isRunningPE estimatedFloorId:(int64_t)estimatedFloorId prevFloor:(PelogicLong * _Nullable)prevFloor prevKnnFloor:(PelogicLong * _Nullable)prevKnnFloor trustedPointCounter:(PelogicInt * _Nullable)trustedPointCounter floorInitialized:(PelogicBoolean * _Nullable)floorInitialized estimatedVenueId:(PelogicLong * _Nullable)estimatedVenueId venueDetectionTimer:(PelogicKotlinx_datetimeInstant *)venueDetectionTimer prevVenueId:(PelogicLong * _Nullable)prevVenueId prevDetectedVenueId:(PelogicLong * _Nullable)prevDetectedVenueId trustedVenueCounter:(PelogicInt * _Nullable)trustedVenueCounter venueInitialized:(PelogicBoolean * _Nullable)venueInitialized rssiMovingAverage:(PelogicDouble * _Nullable)rssiMovingAverage rssiMovingAverageCount:(int32_t)rssiMovingAverageCount __attribute__((swift_name("doCopy(id:particles:runsCount:lastUpdate:lastPoint:isRunningPE:estimatedFloorId:prevFloor:prevKnnFloor:trustedPointCounter:floorInitialized:estimatedVenueId:venueDetectionTimer:prevVenueId:prevDetectedVenueId:trustedVenueCounter:venueInitialized:rssiMovingAverage:rssiMovingAverageCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int64_t estimatedFloorId __attribute__((swift_name("estimatedFloorId")));
@property PelogicLong * _Nullable estimatedVenueId __attribute__((swift_name("estimatedVenueId")));
@property PelogicBoolean * _Nullable floorInitialized __attribute__((swift_name("floorInitialized")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property PelogicBoolean * _Nullable isRunningPE __attribute__((swift_name("isRunningPE")));
@property PelogicPoint * _Nullable lastPoint __attribute__((swift_name("lastPoint")));
@property PelogicKotlinx_datetimeInstant *lastUpdate __attribute__((swift_name("lastUpdate")));
@property (readonly) NSArray<PelogicParticle *> *particles __attribute__((swift_name("particles")));
@property PelogicLong * _Nullable prevDetectedVenueId __attribute__((swift_name("prevDetectedVenueId")));
@property PelogicLong * _Nullable prevFloor __attribute__((swift_name("prevFloor")));
@property PelogicLong * _Nullable prevKnnFloor __attribute__((swift_name("prevKnnFloor")));
@property PelogicLong * _Nullable prevVenueId __attribute__((swift_name("prevVenueId")));
@property PelogicDouble * _Nullable rssiMovingAverage __attribute__((swift_name("rssiMovingAverage")));
@property int32_t rssiMovingAverageCount __attribute__((swift_name("rssiMovingAverageCount")));
@property int32_t runsCount __attribute__((swift_name("runsCount")));
@property PelogicInt * _Nullable trustedPointCounter __attribute__((swift_name("trustedPointCounter")));
@property PelogicInt * _Nullable trustedVenueCounter __attribute__((swift_name("trustedVenueCounter")));
@property PelogicKotlinx_datetimeInstant *venueDetectionTimer __attribute__((swift_name("venueDetectionTimer")));
@property PelogicBoolean * _Nullable venueInitialized __attribute__((swift_name("venueInitialized")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionAndFilterResult")))
@interface PelogicVenueDetectionAndFilterResult : PelogicBase
- (instancetype)initWithVenueId:(int64_t)venueId filteredRssiReadings:(NSArray<PelogicRssiReading *> *)filteredRssiReadings shouldResetParticles:(BOOL)shouldResetParticles ratio:(double)ratio isVenueChanged:(BOOL)isVenueChanged actualTriggerVenueDetection:(BOOL)actualTriggerVenueDetection __attribute__((swift_name("init(venueId:filteredRssiReadings:shouldResetParticles:ratio:isVenueChanged:actualTriggerVenueDetection:)"))) __attribute__((objc_designated_initializer));
- (PelogicVenueDetectionAndFilterResult *)doCopyVenueId:(int64_t)venueId filteredRssiReadings:(NSArray<PelogicRssiReading *> *)filteredRssiReadings shouldResetParticles:(BOOL)shouldResetParticles ratio:(double)ratio isVenueChanged:(BOOL)isVenueChanged actualTriggerVenueDetection:(BOOL)actualTriggerVenueDetection __attribute__((swift_name("doCopy(venueId:filteredRssiReadings:shouldResetParticles:ratio:isVenueChanged:actualTriggerVenueDetection:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL actualTriggerVenueDetection __attribute__((swift_name("actualTriggerVenueDetection")));
@property (readonly) NSArray<PelogicRssiReading *> *filteredRssiReadings __attribute__((swift_name("filteredRssiReadings")));
@property (readonly) BOOL isVenueChanged __attribute__((swift_name("isVenueChanged")));
@property (readonly) double ratio __attribute__((swift_name("ratio")));
@property (readonly) BOOL shouldResetParticles __attribute__((swift_name("shouldResetParticles")));
@property (readonly) int64_t venueId __attribute__((swift_name("venueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionMapping")))
@interface PelogicVenueDetectionMapping : PelogicBase
- (instancetype)initWithMacSuffix:(NSString *)macSuffix macAddress:(NSString *)macAddress venueId:(int64_t)venueId __attribute__((swift_name("init(macSuffix:macAddress:venueId:)"))) __attribute__((objc_designated_initializer));
- (PelogicVenueDetectionMapping *)doCopyMacSuffix:(NSString *)macSuffix macAddress:(NSString *)macAddress venueId:(int64_t)venueId __attribute__((swift_name("doCopy(macSuffix:macAddress:venueId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *macAddress __attribute__((swift_name("macAddress")));
@property (readonly) NSString *macSuffix __attribute__((swift_name("macSuffix")));
@property (readonly) int64_t venueId __attribute__((swift_name("venueId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionResult")))
@interface PelogicVenueDetectionResult : PelogicBase
- (instancetype)initWithId:(int32_t)id ratio:(double)ratio __attribute__((swift_name("init(id:ratio:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicVenueDetectionResultCompanion *companion __attribute__((swift_name("companion")));
- (PelogicVenueDetectionResult *)doCopyId:(int32_t)id ratio:(double)ratio __attribute__((swift_name("doCopy(id:ratio:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t id __attribute__((swift_name("id")));
@property (readonly) double ratio __attribute__((swift_name("ratio")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionResult.Companion")))
@interface PelogicVenueDetectionResultCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicVenueDetectionResultCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("VenueTransitionResult")))
@interface PelogicVenueTransitionResult : PelogicBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueTransitionResult.Success")))
@interface PelogicVenueTransitionResultSuccess : PelogicVenueTransitionResult
- (instancetype)initWithEstimatedVenue:(int64_t)estimatedVenue shouldResetParticles:(BOOL)shouldResetParticles venueInitialized:(BOOL)venueInitialized __attribute__((swift_name("init(estimatedVenue:shouldResetParticles:venueInitialized:)"))) __attribute__((objc_designated_initializer));
- (PelogicVenueTransitionResultSuccess *)doCopyEstimatedVenue:(int64_t)estimatedVenue shouldResetParticles:(BOOL)shouldResetParticles venueInitialized:(BOOL)venueInitialized __attribute__((swift_name("doCopy(estimatedVenue:shouldResetParticles:venueInitialized:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t estimatedVenue __attribute__((swift_name("estimatedVenue")));
@property (readonly) BOOL shouldResetParticles __attribute__((swift_name("shouldResetParticles")));
@property (readonly) BOOL venueInitialized __attribute__((swift_name("venueInitialized")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCodes")))
@interface PelogicErrorCodes : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)errorCodes __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicErrorCodes *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t ALREADY_INITED __attribute__((swift_name("ALREADY_INITED")));
@property (readonly) int32_t AUTH_FAILED __attribute__((swift_name("AUTH_FAILED")));
@property (readonly) int32_t DB_DOWNLOAD_CONFIG_REQUIRED __attribute__((swift_name("DB_DOWNLOAD_CONFIG_REQUIRED")));
@property (readonly) int32_t DOMAIN_ERROR __attribute__((swift_name("DOMAIN_ERROR")));
@property (readonly) int32_t FINGERPRINT_ERROR __attribute__((swift_name("FINGERPRINT_ERROR")));
@property (readonly) int32_t INVALID_CONFIG __attribute__((swift_name("INVALID_CONFIG")));
@property (readonly) int32_t NETWORK_ERROR __attribute__((swift_name("NETWORK_ERROR")));
@property (readonly) int32_t SETTINGS_ERROR __attribute__((swift_name("SETTINGS_ERROR")));
@property (readonly) int32_t USER_ERROR __attribute__((swift_name("USER_ERROR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitializationError")))
@interface PelogicInitializationError : PelogicBase
- (instancetype)initWithCode:(int32_t)code description:(NSString *)description cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(code:description:cause:)"))) __attribute__((objc_designated_initializer));
- (PelogicInitializationError *)doCopyCode:(int32_t)code description:(NSString *)description cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("doCopy(code:description:cause:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PelogicKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@end

__attribute__((swift_name("InitializationResult")))
@interface PelogicInitializationResult : PelogicBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitializationResult.Failure")))
@interface PelogicInitializationResultFailure : PelogicInitializationResult
- (instancetype)initWithError:(PelogicInitializationError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (PelogicInitializationResultFailure *)doCopyError:(PelogicInitializationError *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PelogicInitializationError *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitializationResult.Success")))
@interface PelogicInitializationResultSuccess : PelogicInitializationResult
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (PelogicInitializationResultSuccess *)doCopyMessage:(NSString *)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PEConfiguration")))
@interface PelogicPEConfiguration : PelogicBase
- (instancetype)initWithApiKey:(NSString *)apiKey baseUrl:(NSString *)baseUrl serviceUrl:(NSString *)serviceUrl debug:(BOOL)debug __attribute__((swift_name("init(apiKey:baseUrl:serviceUrl:debug:)"))) __attribute__((objc_designated_initializer));
- (PelogicPEConfiguration *)doCopyApiKey:(NSString *)apiKey baseUrl:(NSString *)baseUrl serviceUrl:(NSString *)serviceUrl debug:(BOOL)debug __attribute__((swift_name("doCopy(apiKey:baseUrl:serviceUrl:debug:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@property (readonly) NSString *baseUrl __attribute__((swift_name("baseUrl")));
@property (readonly) BOOL debug __attribute__((swift_name("debug")));
@property (readonly) NSString *serviceUrl __attribute__((swift_name("serviceUrl")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorSettings")))
@interface PelogicFloorSettings : PelogicBase
- (instancetype)initWithFloorID:(int64_t)floorID rssiCutoff:(int64_t)rssiCutoff standardDeviation:(double)standardDeviation particlesMaxSize:(int32_t)particlesMaxSize particlesMinSize:(int32_t)particlesMinSize scaleFactor:(double)scaleFactor __attribute__((swift_name("init(floorID:rssiCutoff:standardDeviation:particlesMaxSize:particlesMinSize:scaleFactor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicFloorSettingsCompanion *companion __attribute__((swift_name("companion")));
- (PelogicFloorSettings *)doCopyFloorID:(int64_t)floorID rssiCutoff:(int64_t)rssiCutoff standardDeviation:(double)standardDeviation particlesMaxSize:(int32_t)particlesMaxSize particlesMinSize:(int32_t)particlesMinSize scaleFactor:(double)scaleFactor __attribute__((swift_name("doCopy(floorID:rssiCutoff:standardDeviation:particlesMaxSize:particlesMinSize:scaleFactor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) int32_t particlesMaxSize __attribute__((swift_name("particlesMaxSize")));
@property (readonly) int32_t particlesMinSize __attribute__((swift_name("particlesMinSize")));
@property (readonly) int64_t rssiCutoff __attribute__((swift_name("rssiCutoff")));
@property (readonly) double scaleFactor __attribute__((swift_name("scaleFactor")));
@property (readonly) double standardDeviation __attribute__((swift_name("standardDeviation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorSettings.Companion")))
@interface PelogicFloorSettingsCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicFloorSettingsCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MobilityModelSettings")))
@interface PelogicMobilityModelSettings : PelogicBase
- (instancetype)initWithNormalStepCount:(double)normalStepCount alternativeStepCount:(double)alternativeStepCount averageStepLength:(double)averageStepLength standardDeviation:(double)standardDeviation particleCountMinimum:(int64_t)particleCountMinimum particleCountMaximum:(int64_t)particleCountMaximum particleSearchRadius:(double)particleSearchRadius distanceScaleFactor:(double)distanceScaleFactor __attribute__((swift_name("init(normalStepCount:alternativeStepCount:averageStepLength:standardDeviation:particleCountMinimum:particleCountMaximum:particleSearchRadius:distanceScaleFactor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicMobilityModelSettingsCompanion *companion __attribute__((swift_name("companion")));
- (PelogicMobilityModelSettings *)doCopyNormalStepCount:(double)normalStepCount alternativeStepCount:(double)alternativeStepCount averageStepLength:(double)averageStepLength standardDeviation:(double)standardDeviation particleCountMinimum:(int64_t)particleCountMinimum particleCountMaximum:(int64_t)particleCountMaximum particleSearchRadius:(double)particleSearchRadius distanceScaleFactor:(double)distanceScaleFactor __attribute__((swift_name("doCopy(normalStepCount:alternativeStepCount:averageStepLength:standardDeviation:particleCountMinimum:particleCountMaximum:particleSearchRadius:distanceScaleFactor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double alternativeStepCount __attribute__((swift_name("alternativeStepCount")));
@property (readonly) double averageStepLength __attribute__((swift_name("averageStepLength")));
@property (readonly) double distanceScaleFactor __attribute__((swift_name("distanceScaleFactor")));
@property (readonly) double normalStepCount __attribute__((swift_name("normalStepCount")));
@property (readonly) int64_t particleCountMaximum __attribute__((swift_name("particleCountMaximum")));
@property (readonly) int64_t particleCountMinimum __attribute__((swift_name("particleCountMinimum")));
@property (readonly) double particleSearchRadius __attribute__((swift_name("particleSearchRadius")));
@property (readonly) double standardDeviation __attribute__((swift_name("standardDeviation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MobilityModelSettings.Companion")))
@interface PelogicMobilityModelSettingsCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicMobilityModelSettingsCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterFlowSettings")))
@interface PelogicParticleFilterFlowSettings : PelogicBase
- (instancetype)initWithScaleFactor:(double)scaleFactor unscaledRadius:(int64_t)unscaledRadius runsCountThreshold:(int32_t)runsCountThreshold durationTillParticleReset:(int64_t)durationTillParticleReset shouldCalculateTrustScore:(BOOL)shouldCalculateTrustScore __attribute__((swift_name("init(scaleFactor:unscaledRadius:runsCountThreshold:durationTillParticleReset:shouldCalculateTrustScore:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicParticleFilterFlowSettingsCompanion *companion __attribute__((swift_name("companion")));
- (PelogicParticleFilterFlowSettings *)doCopyScaleFactor:(double)scaleFactor unscaledRadius:(int64_t)unscaledRadius runsCountThreshold:(int32_t)runsCountThreshold durationTillParticleReset:(int64_t)durationTillParticleReset shouldCalculateTrustScore:(BOOL)shouldCalculateTrustScore __attribute__((swift_name("doCopy(scaleFactor:unscaledRadius:runsCountThreshold:durationTillParticleReset:shouldCalculateTrustScore:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t durationTillParticleReset __attribute__((swift_name("durationTillParticleReset")));
@property (readonly) int32_t runsCountThreshold __attribute__((swift_name("runsCountThreshold")));
@property (readonly) double scaleFactor __attribute__((swift_name("scaleFactor")));
@property (readonly) BOOL shouldCalculateTrustScore __attribute__((swift_name("shouldCalculateTrustScore")));
@property (readonly) int64_t unscaledRadius __attribute__((swift_name("unscaledRadius")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterFlowSettings.Companion")))
@interface PelogicParticleFilterFlowSettingsCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicParticleFilterFlowSettingsCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResamplingSettings")))
@interface PelogicResamplingSettings : PelogicBase
- (instancetype)initWithIsParticleSpreadControlEnabled:(BOOL)isParticleSpreadControlEnabled particleSpreadThreshold:(double)particleSpreadThreshold maxResamplingRepeats:(int32_t)maxResamplingRepeats distanceScaleFactor:(double)distanceScaleFactor __attribute__((swift_name("init(isParticleSpreadControlEnabled:particleSpreadThreshold:maxResamplingRepeats:distanceScaleFactor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicResamplingSettingsCompanion *companion __attribute__((swift_name("companion")));
- (PelogicResamplingSettings *)doCopyIsParticleSpreadControlEnabled:(BOOL)isParticleSpreadControlEnabled particleSpreadThreshold:(double)particleSpreadThreshold maxResamplingRepeats:(int32_t)maxResamplingRepeats distanceScaleFactor:(double)distanceScaleFactor __attribute__((swift_name("doCopy(isParticleSpreadControlEnabled:particleSpreadThreshold:maxResamplingRepeats:distanceScaleFactor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double distanceScaleFactor __attribute__((swift_name("distanceScaleFactor")));
@property (readonly) BOOL isParticleSpreadControlEnabled __attribute__((swift_name("isParticleSpreadControlEnabled")));
@property (readonly) int32_t maxResamplingRepeats __attribute__((swift_name("maxResamplingRepeats")));
@property (readonly) double particleSpreadThreshold __attribute__((swift_name("particleSpreadThreshold")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResamplingSettings.Companion")))
@interface PelogicResamplingSettingsCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicResamplingSettingsCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RssiStatisticsModel")))
@interface PelogicRssiStatisticsModel : PelogicBase
- (instancetype)initWithMean:(double)mean standardDeviation:(double)standardDeviation filterSigma:(double)filterSigma filterMu:(double)filterMu __attribute__((swift_name("init(mean:standardDeviation:filterSigma:filterMu:)"))) __attribute__((objc_designated_initializer));
- (PelogicRssiStatisticsModel *)doCopyMean:(double)mean standardDeviation:(double)standardDeviation filterSigma:(double)filterSigma filterMu:(double)filterMu __attribute__((swift_name("doCopy(mean:standardDeviation:filterSigma:filterMu:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double filterMu __attribute__((swift_name("filterMu")));
@property (readonly) double filterSigma __attribute__((swift_name("filterSigma")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double standardDeviation __attribute__((swift_name("standardDeviation")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignatureFilterSettings")))
@interface PelogicSignatureFilterSettings : PelogicBase
- (instancetype)initWithMinRssiMatches:(int32_t)minRssiMatches maxRssiReadings:(int32_t)maxRssiReadings rssiMatchingThreshold:(int32_t)rssiMatchingThreshold defaultMinimumMACIntersections:(int32_t)defaultMinimumMACIntersections __attribute__((swift_name("init(minRssiMatches:maxRssiReadings:rssiMatchingThreshold:defaultMinimumMACIntersections:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicSignatureFilterSettingsCompanion *companion __attribute__((swift_name("companion")));
- (PelogicSignatureFilterSettings *)doCopyMinRssiMatches:(int32_t)minRssiMatches maxRssiReadings:(int32_t)maxRssiReadings rssiMatchingThreshold:(int32_t)rssiMatchingThreshold defaultMinimumMACIntersections:(int32_t)defaultMinimumMACIntersections __attribute__((swift_name("doCopy(minRssiMatches:maxRssiReadings:rssiMatchingThreshold:defaultMinimumMACIntersections:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultMinimumMACIntersections __attribute__((swift_name("defaultMinimumMACIntersections")));
@property (readonly) int32_t maxRssiReadings __attribute__((swift_name("maxRssiReadings")));
@property (readonly) int32_t minRssiMatches __attribute__((swift_name("minRssiMatches")));
@property (readonly) int32_t rssiMatchingThreshold __attribute__((swift_name("rssiMatchingThreshold")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignatureFilterSettings.Companion")))
@interface PelogicSignatureFilterSettingsCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicSignatureFilterSettingsCompanion *shared __attribute__((swift_name("shared")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeightCalculationParams")))
@interface PelogicWeightCalculationParams : PelogicBase
- (instancetype)initWithNoiseProbability:(double)noiseProbability missProbability:(double)missProbability extraProbability:(double)extraProbability noiseCount:(int64_t)noiseCount missCount:(int64_t)missCount extraCount:(int64_t)extraCount __attribute__((swift_name("init(noiseProbability:missProbability:extraProbability:noiseCount:missCount:extraCount:)"))) __attribute__((objc_designated_initializer));
- (PelogicWeightCalculationParams *)doCopyNoiseProbability:(double)noiseProbability missProbability:(double)missProbability extraProbability:(double)extraProbability noiseCount:(int64_t)noiseCount missCount:(int64_t)missCount extraCount:(int64_t)extraCount __attribute__((swift_name("doCopy(noiseProbability:missProbability:extraProbability:noiseCount:missCount:extraCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t extraCount __attribute__((swift_name("extraCount")));
@property (readonly) double extraProbability __attribute__((swift_name("extraProbability")));
@property (readonly) int64_t missCount __attribute__((swift_name("missCount")));
@property (readonly) double missProbability __attribute__((swift_name("missProbability")));
@property (readonly) int64_t noiseCount __attribute__((swift_name("noiseCount")));
@property (readonly) double noiseProbability __attribute__((swift_name("noiseProbability")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalibrationValues")))
@interface PelogicCalibrationValues : PelogicBase
- (instancetype)initWithId:(int64_t)id platform:(NSString *)platform manufactur:(NSString *)manufactur model:(NSString *)model description:(NSString *)description value_:(int64_t)value_ __attribute__((swift_name("init(id:platform:manufactur:model:description:value_:)"))) __attribute__((objc_designated_initializer));
- (PelogicCalibrationValues *)doCopyId:(int64_t)id platform:(NSString *)platform manufactur:(NSString *)manufactur model:(NSString *)model description:(NSString *)description value_:(int64_t)value_ __attribute__((swift_name("doCopy(id:platform:manufactur:model:description:value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *manufactur __attribute__((swift_name("manufactur")));
@property (readonly) NSString *model __attribute__((swift_name("model")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@property (readonly) int64_t value_ __attribute__((swift_name("value_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalibrationValuesQueries")))
@interface PelogicCalibrationValuesQueries : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteAllCalibrationValues __attribute__((swift_name("deleteAllCalibrationValues()")));
- (void)insertCalibrationValuePlatform:(NSString *)platform manufactur:(NSString *)manufactur model:(NSString *)model description:(NSString *)description value_:(int64_t)value_ __attribute__((swift_name("insertCalibrationValue(platform:manufactur:model:description:value_:)")));
- (PelogicRuntimeQuery<PelogicCalibrationValues *> *)selectAllCalibrationValues __attribute__((swift_name("selectAllCalibrationValues()")));
- (PelogicRuntimeQuery<id> *)selectAllCalibrationValuesMapper:(id (^)(PelogicLong *, NSString *, NSString *, NSString *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectAllCalibrationValues(mapper:)")));
- (PelogicRuntimeQuery<PelogicCalibrationValues *> *)selectCalibrationValuePlatform:(NSString *)platform manufactur:(NSString *)manufactur model:(NSString *)model __attribute__((swift_name("selectCalibrationValue(platform:manufactur:model:)")));
- (PelogicRuntimeQuery<id> *)selectCalibrationValuePlatform:(NSString *)platform manufactur:(NSString *)manufactur model:(NSString *)model mapper:(id (^)(PelogicLong *, NSString *, NSString *, NSString *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectCalibrationValue(platform:manufactur:model:mapper:)")));
- (PelogicRuntimeQuery<PelogicCalibrationValues *> *)selectCalibrationValuesByManufacturerManufactur:(NSString *)manufactur __attribute__((swift_name("selectCalibrationValuesByManufacturer(manufactur:)")));
- (PelogicRuntimeQuery<id> *)selectCalibrationValuesByManufacturerManufactur:(NSString *)manufactur mapper:(id (^)(PelogicLong *, NSString *, NSString *, NSString *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectCalibrationValuesByManufacturer(manufactur:mapper:)")));
- (PelogicRuntimeQuery<PelogicCalibrationValues *> *)selectCalibrationValuesByPlatformPlatform:(NSString *)platform __attribute__((swift_name("selectCalibrationValuesByPlatform(platform:)")));
- (PelogicRuntimeQuery<id> *)selectCalibrationValuesByPlatformPlatform:(NSString *)platform mapper:(id (^)(PelogicLong *, NSString *, NSString *, NSString *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectCalibrationValuesByPlatform(platform:mapper:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionDefaultValue_")))
@interface PelogicFloorDetectionDefaultValue_ : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("init(venue_id:floor_id:mean:std:score:created_at:updated_at:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorDetectionDefaultValue_ *)doCopyVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("doCopy(venue_id:floor_id:mean:std:score:created_at:updated_at:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t created_at __attribute__((swift_name("created_at")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t updated_at __attribute__((swift_name("updated_at")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionDefaultValueQueries_")))
@interface PelogicFloorDetectionDefaultValueQueries_ : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (PelogicRuntimeQuery<PelogicLong *> *)countFloorDetectionDefaultValue __attribute__((swift_name("countFloorDetectionDefaultValue()")));
- (void)deleteAllFloorDetectionDefaultValue __attribute__((swift_name("deleteAllFloorDetectionDefaultValue()")));
- (void)deleteFloorDetectionDefaultValueVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id __attribute__((swift_name("deleteFloorDetectionDefaultValue(venue_id:floor_id:)")));
- (void)insertFloorDetectionDefaultValueVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("insertFloorDetectionDefaultValue(venue_id:floor_id:mean:std:score:created_at:updated_at:)")));
- (void)insertFloorDetectionDefaultValueBatchVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("insertFloorDetectionDefaultValueBatch(venue_id:floor_id:mean:std:score:created_at:updated_at:)")));
- (PelogicRuntimeQuery<PelogicSelectAllDefaultValueEntries_ *> *)selectAllDefaultValueEntries __attribute__((swift_name("selectAllDefaultValueEntries()")));
- (PelogicRuntimeQuery<id> *)selectAllDefaultValueEntriesMapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *))mapper __attribute__((swift_name("selectAllDefaultValueEntries(mapper:)")));
- (PelogicRuntimeQuery<PelogicSelectDefaultValueByVenueAndFloor_ *> *)selectDefaultValueByVenueAndFloorVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id __attribute__((swift_name("selectDefaultValueByVenueAndFloor(venue_id:floor_id:)")));
- (PelogicRuntimeQuery<id> *)selectDefaultValueByVenueAndFloorVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *))mapper __attribute__((swift_name("selectDefaultValueByVenueAndFloor(venue_id:floor_id:mapper:)")));
- (PelogicRuntimeQuery<PelogicSelectDefaultValuesByVenue_ *> *)selectDefaultValuesByVenueVenue_id:(int64_t)venue_id __attribute__((swift_name("selectDefaultValuesByVenue(venue_id:)")));
- (PelogicRuntimeQuery<id> *)selectDefaultValuesByVenueVenue_id:(int64_t)venue_id mapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *))mapper __attribute__((swift_name("selectDefaultValuesByVenue(venue_id:mapper:)")));
- (PelogicRuntimeQuery<PelogicLong *> *)selectDistinctVenueIdsFromDefaultValue __attribute__((swift_name("selectDistinctVenueIdsFromDefaultValue()")));
- (void)updateFloorDetectionDefaultValueMean:(double)mean std:(double)std score:(double)score updated_at:(int64_t)updated_at venue_id:(int64_t)venue_id floor_id:(int64_t)floor_id __attribute__((swift_name("updateFloorDetectionDefaultValue(mean:std:score:updated_at:venue_id:floor_id:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionMacFloorMapping_")))
@interface PelogicFloorDetectionMacFloorMapping_ : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address floor_id:(int64_t)floor_id created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("init(venue_id:mac_address:floor_id:created_at:updated_at:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorDetectionMacFloorMapping_ *)doCopyVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address floor_id:(int64_t)floor_id created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("doCopy(venue_id:mac_address:floor_id:created_at:updated_at:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t created_at __attribute__((swift_name("created_at")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) int64_t updated_at __attribute__((swift_name("updated_at")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionMacFloorMappingQueries_")))
@interface PelogicFloorDetectionMacFloorMappingQueries_ : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (PelogicRuntimeQuery<PelogicLong *> *)countFloorDetectionMacFloorMapping __attribute__((swift_name("countFloorDetectionMacFloorMapping()")));
- (void)deleteAllFloorDetectionMacFloorMapping __attribute__((swift_name("deleteAllFloorDetectionMacFloorMapping()")));
- (void)deleteFloorDetectionMacFloorMappingVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address __attribute__((swift_name("deleteFloorDetectionMacFloorMapping(venue_id:mac_address:)")));
- (void)insertFloorDetectionMacFloorMappingVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address floor_id:(int64_t)floor_id created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("insertFloorDetectionMacFloorMapping(venue_id:mac_address:floor_id:created_at:updated_at:)")));
- (void)insertFloorDetectionMacFloorMappingBatchVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address floor_id:(int64_t)floor_id created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("insertFloorDetectionMacFloorMappingBatch(venue_id:mac_address:floor_id:created_at:updated_at:)")));
- (PelogicRuntimeQuery<PelogicSelectAllMacFloorMappingEntries_ *> *)selectAllMacFloorMappingEntries __attribute__((swift_name("selectAllMacFloorMappingEntries()")));
- (PelogicRuntimeQuery<id> *)selectAllMacFloorMappingEntriesMapper:(id (^)(PelogicLong *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectAllMacFloorMappingEntries(mapper:)")));
- (PelogicRuntimeQuery<PelogicLong *> *)selectDistinctVenueIdsFromMacFloorMapping __attribute__((swift_name("selectDistinctVenueIdsFromMacFloorMapping()")));
- (PelogicRuntimeQuery<PelogicLong *> *)selectFloorIdByMacAddressVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address __attribute__((swift_name("selectFloorIdByMacAddress(venue_id:mac_address:)")));
- (PelogicRuntimeQuery<PelogicSelectMacFloorMappingsByVenue_ *> *)selectMacFloorMappingsByVenueVenue_id:(int64_t)venue_id __attribute__((swift_name("selectMacFloorMappingsByVenue(venue_id:)")));
- (PelogicRuntimeQuery<id> *)selectMacFloorMappingsByVenueVenue_id:(int64_t)venue_id mapper:(id (^)(PelogicLong *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectMacFloorMappingsByVenue(venue_id:mapper:)")));
- (void)updateFloorDetectionMacFloorMappingFloor_id:(int64_t)floor_id updated_at:(int64_t)updated_at venue_id:(int64_t)venue_id mac_address:(NSString *)mac_address __attribute__((swift_name("updateFloorDetectionMacFloorMapping(floor_id:updated_at:venue_id:mac_address:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionStatTable_")))
@interface PelogicFloorDetectionStatTable_ : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("init(venue_id:floor_id:mac_address:mean:std:score:created_at:updated_at:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorDetectionStatTable_ *)doCopyVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("doCopy(venue_id:floor_id:mac_address:mean:std:score:created_at:updated_at:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t created_at __attribute__((swift_name("created_at")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t updated_at __attribute__((swift_name("updated_at")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionStatTableQueries_")))
@interface PelogicFloorDetectionStatTableQueries_ : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (PelogicRuntimeQuery<PelogicLong *> *)countFloorDetectionStatTable __attribute__((swift_name("countFloorDetectionStatTable()")));
- (void)deleteAllFloorDetectionStatTable __attribute__((swift_name("deleteAllFloorDetectionStatTable()")));
- (void)deleteFloorDetectionStatTableVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address __attribute__((swift_name("deleteFloorDetectionStatTable(venue_id:floor_id:mac_address:)")));
- (void)insertFloorDetectionStatTableVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("insertFloorDetectionStatTable(venue_id:floor_id:mac_address:mean:std:score:created_at:updated_at:)")));
- (void)insertFloorDetectionStatTableBatchVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("insertFloorDetectionStatTableBatch(venue_id:floor_id:mac_address:mean:std:score:created_at:updated_at:)")));
- (PelogicRuntimeQuery<PelogicSelectAllStatTableEntries_ *> *)selectAllStatTableEntries __attribute__((swift_name("selectAllStatTableEntries()")));
- (PelogicRuntimeQuery<id> *)selectAllStatTableEntriesMapper:(id (^)(PelogicLong *, PelogicLong *, NSString *, PelogicDouble *, PelogicDouble *, PelogicDouble *))mapper __attribute__((swift_name("selectAllStatTableEntries(mapper:)")));
- (PelogicRuntimeQuery<PelogicLong *> *)selectDistinctFloorIdsByVenueVenue_id:(int64_t)venue_id __attribute__((swift_name("selectDistinctFloorIdsByVenue(venue_id:)")));
- (PelogicRuntimeQuery<PelogicLong *> *)selectDistinctVenueIdsFromStatTable __attribute__((swift_name("selectDistinctVenueIdsFromStatTable()")));
- (PelogicRuntimeQuery<PelogicSelectStatTableByVenue_ *> *)selectStatTableByVenueVenue_id:(int64_t)venue_id __attribute__((swift_name("selectStatTableByVenue(venue_id:)")));
- (PelogicRuntimeQuery<id> *)selectStatTableByVenueVenue_id:(int64_t)venue_id mapper:(id (^)(PelogicLong *, PelogicLong *, NSString *, PelogicDouble *, PelogicDouble *, PelogicDouble *))mapper __attribute__((swift_name("selectStatTableByVenue(venue_id:mapper:)")));
- (PelogicRuntimeQuery<PelogicSelectStatTableByVenueAndFloor_ *> *)selectStatTableByVenueAndFloorVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id __attribute__((swift_name("selectStatTableByVenueAndFloor(venue_id:floor_id:)")));
- (PelogicRuntimeQuery<id> *)selectStatTableByVenueAndFloorVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mapper:(id (^)(PelogicLong *, PelogicLong *, NSString *, PelogicDouble *, PelogicDouble *, PelogicDouble *))mapper __attribute__((swift_name("selectStatTableByVenueAndFloor(venue_id:floor_id:mapper:)")));
- (void)updateFloorDetectionStatTableMean:(double)mean std:(double)std score:(double)score updated_at:(int64_t)updated_at venue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address __attribute__((swift_name("updateFloorDetectionStatTable(mean:std:score:updated_at:venue_id:floor_id:mac_address:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorRssiAverage")))
@interface PelogicFloorRssiAverage : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id average_rssi:(double)average_rssi __attribute__((swift_name("init(venue_id:floor_id:average_rssi:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorRssiAverage *)doCopyVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id average_rssi:(double)average_rssi __attribute__((swift_name("doCopy(venue_id:floor_id:average_rssi:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double average_rssi __attribute__((swift_name("average_rssi")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorRssiAverageQueries")))
@interface PelogicFloorRssiAverageQueries : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteAllFloorRssiAverages __attribute__((swift_name("deleteAllFloorRssiAverages()")));
- (void)insertFloorRssiAverageVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id average_rssi:(double)average_rssi __attribute__((swift_name("insertFloorRssiAverage(venue_id:floor_id:average_rssi:)")));
- (void)insertFloorRssiAverageBatchVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id average_rssi:(double)average_rssi __attribute__((swift_name("insertFloorRssiAverageBatch(venue_id:floor_id:average_rssi:)")));
- (PelogicRuntimeQuery<PelogicFloorRssiAverage *> *)selectAllFloorRssiAverages __attribute__((swift_name("selectAllFloorRssiAverages()")));
- (PelogicRuntimeQuery<id> *)selectAllFloorRssiAveragesMapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *))mapper __attribute__((swift_name("selectAllFloorRssiAverages(mapper:)")));
- (PelogicRuntimeQuery<PelogicFloorRssiAverage *> *)selectFloorRssiAverageByVenueAndFloorVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id __attribute__((swift_name("selectFloorRssiAverageByVenueAndFloor(venue_id:floor_id:)")));
- (PelogicRuntimeQuery<id> *)selectFloorRssiAverageByVenueAndFloorVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *))mapper __attribute__((swift_name("selectFloorRssiAverageByVenueAndFloor(venue_id:floor_id:mapper:)")));
- (PelogicRuntimeQuery<PelogicFloorRssiAverage *> *)selectFloorRssiAveragesByVenueVenue_id:(int64_t)venue_id __attribute__((swift_name("selectFloorRssiAveragesByVenue(venue_id:)")));
- (PelogicRuntimeQuery<id> *)selectFloorRssiAveragesByVenueVenue_id:(int64_t)venue_id mapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *))mapper __attribute__((swift_name("selectFloorRssiAveragesByVenue(venue_id:mapper:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorSettings__")))
@interface PelogicFloorSettings__ : PelogicBase
- (instancetype)initWithFloorID:(int64_t)floorID rssiCutoff:(int64_t)rssiCutoff standardDeviation:(double)standardDeviation particlesMaxSize:(int64_t)particlesMaxSize particlesMinSize:(int64_t)particlesMinSize scaleFactor:(double)scaleFactor __attribute__((swift_name("init(floorID:rssiCutoff:standardDeviation:particlesMaxSize:particlesMinSize:scaleFactor:)"))) __attribute__((objc_designated_initializer));
- (PelogicFloorSettings__ *)doCopyFloorID:(int64_t)floorID rssiCutoff:(int64_t)rssiCutoff standardDeviation:(double)standardDeviation particlesMaxSize:(int64_t)particlesMaxSize particlesMinSize:(int64_t)particlesMinSize scaleFactor:(double)scaleFactor __attribute__((swift_name("doCopy(floorID:rssiCutoff:standardDeviation:particlesMaxSize:particlesMinSize:scaleFactor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) int64_t particlesMaxSize __attribute__((swift_name("particlesMaxSize")));
@property (readonly) int64_t particlesMinSize __attribute__((swift_name("particlesMinSize")));
@property (readonly) int64_t rssiCutoff __attribute__((swift_name("rssiCutoff")));
@property (readonly) double scaleFactor __attribute__((swift_name("scaleFactor")));
@property (readonly) double standardDeviation __attribute__((swift_name("standardDeviation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Log")))
@interface PelogicLog : PelogicBase
- (instancetype)initWithId:(int64_t)id reqid:(NSString *)reqid session_id:(NSString *)session_id venueID:(int64_t)venueID floorID:(int64_t)floorID x:(PelogicDouble * _Nullable)x y:(PelogicDouble * _Nullable)y request:(NSString *)request response:(NSString *)response timestamp:(int64_t)timestamp __attribute__((swift_name("init(id:reqid:session_id:venueID:floorID:x:y:request:response:timestamp:)"))) __attribute__((objc_designated_initializer));
- (PelogicLog *)doCopyId:(int64_t)id reqid:(NSString *)reqid session_id:(NSString *)session_id venueID:(int64_t)venueID floorID:(int64_t)floorID x:(PelogicDouble * _Nullable)x y:(PelogicDouble * _Nullable)y request:(NSString *)request response:(NSString *)response timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(id:reqid:session_id:venueID:floorID:x:y:request:response:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *reqid __attribute__((swift_name("reqid")));
@property (readonly) NSString *request __attribute__((swift_name("request")));
@property (readonly) NSString *response __attribute__((swift_name("response")));
@property (readonly) NSString *session_id __attribute__((swift_name("session_id")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int64_t venueID __attribute__((swift_name("venueID")));
@property (readonly) PelogicDouble * _Nullable x __attribute__((swift_name("x")));
@property (readonly) PelogicDouble * _Nullable y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogQueries")))
@interface PelogicLogQueries : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteAllLogs __attribute__((swift_name("deleteAllLogs()")));
- (void)deleteByReqidReqid:(NSString *)reqid __attribute__((swift_name("deleteByReqid(reqid:)")));
- (void)deleteBySessionIdSession_id:(NSString *)session_id __attribute__((swift_name("deleteBySessionId(session_id:)")));
- (void)insertLogReqid:(NSString *)reqid session_id:(NSString *)session_id venueID:(int64_t)venueID floorID:(int64_t)floorID x:(PelogicDouble * _Nullable)x y:(PelogicDouble * _Nullable)y request:(NSString *)request response:(NSString *)response timestamp:(int64_t)timestamp __attribute__((swift_name("insertLog(reqid:session_id:venueID:floorID:x:y:request:response:timestamp:)")));
- (PelogicRuntimeQuery<PelogicLog *> *)selectAllLogs __attribute__((swift_name("selectAllLogs()")));
- (PelogicRuntimeQuery<id> *)selectAllLogsMapper:(id (^)(PelogicLong *, NSString *, NSString *, PelogicLong *, PelogicLong *, PelogicDouble * _Nullable, PelogicDouble * _Nullable, NSString *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectAllLogs(mapper:)")));
- (PelogicRuntimeQuery<PelogicLog *> *)selectAllLogsChronological __attribute__((swift_name("selectAllLogsChronological()")));
- (PelogicRuntimeQuery<id> *)selectAllLogsChronologicalMapper:(id (^)(PelogicLong *, NSString *, NSString *, PelogicLong *, PelogicLong *, PelogicDouble * _Nullable, PelogicDouble * _Nullable, NSString *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectAllLogsChronological(mapper:)")));
- (PelogicRuntimeQuery<PelogicLog *> *)selectByFloorIdFloorID:(int64_t)floorID __attribute__((swift_name("selectByFloorId(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectByFloorIdFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, NSString *, NSString *, PelogicLong *, PelogicLong *, PelogicDouble * _Nullable, PelogicDouble * _Nullable, NSString *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectByFloorId(floorID:mapper:)")));
- (PelogicRuntimeQuery<PelogicLog *> *)selectByReqidReqid:(NSString *)reqid __attribute__((swift_name("selectByReqid(reqid:)")));
- (PelogicRuntimeQuery<id> *)selectByReqidReqid:(NSString *)reqid mapper:(id (^)(PelogicLong *, NSString *, NSString *, PelogicLong *, PelogicLong *, PelogicDouble * _Nullable, PelogicDouble * _Nullable, NSString *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectByReqid(reqid:mapper:)")));
- (PelogicRuntimeQuery<PelogicLog *> *)selectByReqidAndSessionIdReqid:(NSString *)reqid session_id:(NSString *)session_id __attribute__((swift_name("selectByReqidAndSessionId(reqid:session_id:)")));
- (PelogicRuntimeQuery<id> *)selectByReqidAndSessionIdReqid:(NSString *)reqid session_id:(NSString *)session_id mapper:(id (^)(PelogicLong *, NSString *, NSString *, PelogicLong *, PelogicLong *, PelogicDouble * _Nullable, PelogicDouble * _Nullable, NSString *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectByReqidAndSessionId(reqid:session_id:mapper:)")));
- (PelogicRuntimeQuery<PelogicLog *> *)selectBySessionIdSession_id:(NSString *)session_id __attribute__((swift_name("selectBySessionId(session_id:)")));
- (PelogicRuntimeQuery<id> *)selectBySessionIdSession_id:(NSString *)session_id mapper:(id (^)(PelogicLong *, NSString *, NSString *, PelogicLong *, PelogicLong *, PelogicDouble * _Nullable, PelogicDouble * _Nullable, NSString *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectBySessionId(session_id:mapper:)")));
- (PelogicRuntimeQuery<PelogicLog *> *)selectByVenueAndFloorVenueID:(int64_t)venueID floorID:(int64_t)floorID __attribute__((swift_name("selectByVenueAndFloor(venueID:floorID:)")));
- (PelogicRuntimeQuery<id> *)selectByVenueAndFloorVenueID:(int64_t)venueID floorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, NSString *, NSString *, PelogicLong *, PelogicLong *, PelogicDouble * _Nullable, PelogicDouble * _Nullable, NSString *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectByVenueAndFloor(venueID:floorID:mapper:)")));
- (PelogicRuntimeQuery<PelogicLog *> *)selectByVenueIdVenueID:(int64_t)venueID __attribute__((swift_name("selectByVenueId(venueID:)")));
- (PelogicRuntimeQuery<id> *)selectByVenueIdVenueID:(int64_t)venueID mapper:(id (^)(PelogicLong *, NSString *, NSString *, PelogicLong *, PelogicLong *, PelogicDouble * _Nullable, PelogicDouble * _Nullable, NSString *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectByVenueId(venueID:mapper:)")));
- (PelogicRuntimeQuery<PelogicLog *> *)selectLogsByTimeRangeTimestamp:(int64_t)timestamp timestamp_:(int64_t)timestamp_ __attribute__((swift_name("selectLogsByTimeRange(timestamp:timestamp_:)")));
- (PelogicRuntimeQuery<id> *)selectLogsByTimeRangeTimestamp:(int64_t)timestamp timestamp_:(int64_t)timestamp_ mapper:(id (^)(PelogicLong *, NSString *, NSString *, PelogicLong *, PelogicLong *, PelogicDouble * _Nullable, PelogicDouble * _Nullable, NSString *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectLogsByTimeRange(timestamp:timestamp_:mapper:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MobilityModelSettings__")))
@interface PelogicMobilityModelSettings__ : PelogicBase
- (instancetype)initWithFloorID:(int64_t)floorID normalStepCount:(double)normalStepCount alternativeStepCount:(double)alternativeStepCount averageStepLength:(double)averageStepLength standardDeviation:(double)standardDeviation particleCountMinimum:(int64_t)particleCountMinimum particleCountMaximum:(int64_t)particleCountMaximum particleSearchRadius:(double)particleSearchRadius distanceScaleFactor:(double)distanceScaleFactor __attribute__((swift_name("init(floorID:normalStepCount:alternativeStepCount:averageStepLength:standardDeviation:particleCountMinimum:particleCountMaximum:particleSearchRadius:distanceScaleFactor:)"))) __attribute__((objc_designated_initializer));
- (PelogicMobilityModelSettings__ *)doCopyFloorID:(int64_t)floorID normalStepCount:(double)normalStepCount alternativeStepCount:(double)alternativeStepCount averageStepLength:(double)averageStepLength standardDeviation:(double)standardDeviation particleCountMinimum:(int64_t)particleCountMinimum particleCountMaximum:(int64_t)particleCountMaximum particleSearchRadius:(double)particleSearchRadius distanceScaleFactor:(double)distanceScaleFactor __attribute__((swift_name("doCopy(floorID:normalStepCount:alternativeStepCount:averageStepLength:standardDeviation:particleCountMinimum:particleCountMaximum:particleSearchRadius:distanceScaleFactor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double alternativeStepCount __attribute__((swift_name("alternativeStepCount")));
@property (readonly) double averageStepLength __attribute__((swift_name("averageStepLength")));
@property (readonly) double distanceScaleFactor __attribute__((swift_name("distanceScaleFactor")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) double normalStepCount __attribute__((swift_name("normalStepCount")));
@property (readonly) int64_t particleCountMaximum __attribute__((swift_name("particleCountMaximum")));
@property (readonly) int64_t particleCountMinimum __attribute__((swift_name("particleCountMinimum")));
@property (readonly) double particleSearchRadius __attribute__((swift_name("particleSearchRadius")));
@property (readonly) double standardDeviation __attribute__((swift_name("standardDeviation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Particle__")))
@interface PelogicParticle__ : PelogicBase
- (instancetype)initWithId:(int64_t)id partId:(int64_t)partId x:(double)x y:(double)y zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(PelogicDouble * _Nullable)weight floorID:(int64_t)floorID __attribute__((swift_name("init(id:partId:x:y:zeroDistance:zeroAngle:weight:floorID:)"))) __attribute__((objc_designated_initializer));
- (PelogicParticle__ *)doCopyId:(int64_t)id partId:(int64_t)partId x:(double)x y:(double)y zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(PelogicDouble * _Nullable)weight floorID:(int64_t)floorID __attribute__((swift_name("doCopy(id:partId:x:y:zeroDistance:zeroAngle:weight:floorID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int64_t partId __attribute__((swift_name("partId")));
@property (readonly) PelogicDouble * _Nullable weight __attribute__((swift_name("weight")));
@property (readonly) double x __attribute__((swift_name("x")));
@property (readonly) double y __attribute__((swift_name("y")));
@property (readonly) double zeroAngle __attribute__((swift_name("zeroAngle")));
@property (readonly) double zeroDistance __attribute__((swift_name("zeroDistance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterFlowSettings__")))
@interface PelogicParticleFilterFlowSettings__ : PelogicBase
- (instancetype)initWithFloorID:(int64_t)floorID scaleFactor:(double)scaleFactor unscaledRadius:(int64_t)unscaledRadius runsCountThreshold:(int64_t)runsCountThreshold durationTillParticleReset:(int64_t)durationTillParticleReset shouldCalculateTrustScore:(BOOL)shouldCalculateTrustScore __attribute__((swift_name("init(floorID:scaleFactor:unscaledRadius:runsCountThreshold:durationTillParticleReset:shouldCalculateTrustScore:)"))) __attribute__((objc_designated_initializer));
- (PelogicParticleFilterFlowSettings__ *)doCopyFloorID:(int64_t)floorID scaleFactor:(double)scaleFactor unscaledRadius:(int64_t)unscaledRadius runsCountThreshold:(int64_t)runsCountThreshold durationTillParticleReset:(int64_t)durationTillParticleReset shouldCalculateTrustScore:(BOOL)shouldCalculateTrustScore __attribute__((swift_name("doCopy(floorID:scaleFactor:unscaledRadius:runsCountThreshold:durationTillParticleReset:shouldCalculateTrustScore:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t durationTillParticleReset __attribute__((swift_name("durationTillParticleReset")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) int64_t runsCountThreshold __attribute__((swift_name("runsCountThreshold")));
@property (readonly) double scaleFactor __attribute__((swift_name("scaleFactor")));
@property (readonly) BOOL shouldCalculateTrustScore __attribute__((swift_name("shouldCalculateTrustScore")));
@property (readonly) int64_t unscaledRadius __attribute__((swift_name("unscaledRadius")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleFilterFlowSettings__.Adapter")))
@interface PelogicParticleFilterFlowSettings__Adapter : PelogicBase
- (instancetype)initWithDurationTillParticleResetAdapter:(id<PelogicRuntimeColumnAdapter>)durationTillParticleResetAdapter __attribute__((swift_name("init(durationTillParticleResetAdapter:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<PelogicRuntimeColumnAdapter> durationTillParticleResetAdapter __attribute__((swift_name("durationTillParticleResetAdapter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParticleQueries_")))
@interface PelogicParticleQueries_ : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (PelogicRuntimeQuery<PelogicLong *> *)countDistinctMacs __attribute__((swift_name("countDistinctMacs()")));
- (PelogicRuntimeQuery<PelogicLong *> *)countParticles __attribute__((swift_name("countParticles()")));
- (void)deleteAllParticles __attribute__((swift_name("deleteAllParticles()")));
- (PelogicRuntimeExecutableQuery<PelogicLong *> *)getLastInsertRowId __attribute__((swift_name("getLastInsertRowId()")));
- (void)insertParticlePartId:(int64_t)partId x:(double)x y:(double)y zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(PelogicDouble * _Nullable)weight floorID:(int64_t)floorID __attribute__((swift_name("insertParticle(partId:x:y:zeroDistance:zeroAngle:weight:floorID:)")));
- (PelogicRuntimeQuery<PelogicParticle__ *> *)selectAll __attribute__((swift_name("selectAll()")));
- (PelogicRuntimeQuery<id> *)selectAllMapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble * _Nullable, PelogicLong *))mapper __attribute__((swift_name("selectAll(mapper:)")));
- (PelogicRuntimeQuery<NSString *> *)selectAllMacs __attribute__((swift_name("selectAllMacs()")));
- (PelogicRuntimeQuery<PelogicSelectAllMacsWithMetadata_ *> *)selectAllMacsWithMetadata __attribute__((swift_name("selectAllMacsWithMetadata()")));
- (PelogicRuntimeQuery<id> *)selectAllMacsWithMetadataMapper:(id (^)(NSString *, PelogicLong *, PelogicLong *))mapper __attribute__((swift_name("selectAllMacsWithMetadata(mapper:)")));
- (PelogicRuntimeQuery<PelogicSelectAllParticlesWithRssi *> *)selectAllParticlesWithRssi __attribute__((swift_name("selectAllParticlesWithRssi()")));
- (PelogicRuntimeQuery<id> *)selectAllParticlesWithRssiMapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble * _Nullable, PelogicLong *, PelogicLong * _Nullable, NSString * _Nullable, PelogicLong * _Nullable, PelogicLong * _Nullable, PelogicLong * _Nullable, PelogicLong * _Nullable, PelogicLong * _Nullable))mapper __attribute__((swift_name("selectAllParticlesWithRssi(mapper:)")));
- (PelogicRuntimeQuery<NSString *> *)selectFloorMacsFloorID:(int64_t)floorID __attribute__((swift_name("selectFloorMacs(floorID:)")));
- (PelogicRuntimeQuery<PelogicParticle__ *> *)selectFloorParticlesFloorID:(int64_t)floorID __attribute__((swift_name("selectFloorParticles(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectFloorParticlesFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble * _Nullable, PelogicLong *))mapper __attribute__((swift_name("selectFloorParticles(floorID:mapper:)")));
- (PelogicRuntimeQuery<PelogicSelectFloorParticlesWithRssi_ *> *)selectFloorParticlesWithRssiFloorID:(int64_t)floorID __attribute__((swift_name("selectFloorParticlesWithRssi(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectFloorParticlesWithRssiFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble * _Nullable, PelogicLong *, PelogicLong * _Nullable, NSString * _Nullable, PelogicLong * _Nullable, PelogicLong * _Nullable, PelogicLong * _Nullable, PelogicLong * _Nullable, PelogicLong * _Nullable))mapper __attribute__((swift_name("selectFloorParticlesWithRssi(floorID:mapper:)")));
- (PelogicRuntimeQuery<NSString *> *)selectVenueMacsVenueId:(int64_t)venueId __attribute__((swift_name("selectVenueMacs(venueId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResamplingSettings__")))
@interface PelogicResamplingSettings__ : PelogicBase
- (instancetype)initWithFloorID:(int64_t)floorID isParticleSpreadControlEnabled:(BOOL)isParticleSpreadControlEnabled particleSpreadThreshold:(double)particleSpreadThreshold maxResamplingRepeats:(int64_t)maxResamplingRepeats distanceScaleFactor:(double)distanceScaleFactor __attribute__((swift_name("init(floorID:isParticleSpreadControlEnabled:particleSpreadThreshold:maxResamplingRepeats:distanceScaleFactor:)"))) __attribute__((objc_designated_initializer));
- (PelogicResamplingSettings__ *)doCopyFloorID:(int64_t)floorID isParticleSpreadControlEnabled:(BOOL)isParticleSpreadControlEnabled particleSpreadThreshold:(double)particleSpreadThreshold maxResamplingRepeats:(int64_t)maxResamplingRepeats distanceScaleFactor:(double)distanceScaleFactor __attribute__((swift_name("doCopy(floorID:isParticleSpreadControlEnabled:particleSpreadThreshold:maxResamplingRepeats:distanceScaleFactor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double distanceScaleFactor __attribute__((swift_name("distanceScaleFactor")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) BOOL isParticleSpreadControlEnabled __attribute__((swift_name("isParticleSpreadControlEnabled")));
@property (readonly) int64_t maxResamplingRepeats __attribute__((swift_name("maxResamplingRepeats")));
@property (readonly) double particleSpreadThreshold __attribute__((swift_name("particleSpreadThreshold")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RssiReading__")))
@interface PelogicRssiReading__ : PelogicBase
- (instancetype)initWithId:(int64_t)id mac:(NSString *)mac rssi:(int64_t)rssi particleID:(int64_t)particleID floorId:(int64_t)floorId venueId:(int64_t)venueId adjusted_rssi:(PelogicLong * _Nullable)adjusted_rssi __attribute__((swift_name("init(id:mac:rssi:particleID:floorId:venueId:adjusted_rssi:)"))) __attribute__((objc_designated_initializer));
- (PelogicRssiReading__ *)doCopyId:(int64_t)id mac:(NSString *)mac rssi:(int64_t)rssi particleID:(int64_t)particleID floorId:(int64_t)floorId venueId:(int64_t)venueId adjusted_rssi:(PelogicLong * _Nullable)adjusted_rssi __attribute__((swift_name("doCopy(id:mac:rssi:particleID:floorId:venueId:adjusted_rssi:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PelogicLong * _Nullable adjusted_rssi __attribute__((swift_name("adjusted_rssi")));
@property (readonly) int64_t floorId __attribute__((swift_name("floorId")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *mac __attribute__((swift_name("mac")));
@property (readonly) int64_t particleID __attribute__((swift_name("particleID")));
@property (readonly) int64_t rssi __attribute__((swift_name("rssi")));
@property (readonly) int64_t venueId __attribute__((swift_name("venueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RssiReadingQueries_")))
@interface PelogicRssiReadingQueries_ : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (void)deleteAllRssi __attribute__((swift_name("deleteAllRssi()")));
- (void)insertRssiReadingMac:(NSString *)mac rssi:(int64_t)rssi particleID:(int64_t)particleID floorId:(int64_t)floorId venueId:(int64_t)venueId adjusted_rssi:(PelogicLong * _Nullable)adjusted_rssi __attribute__((swift_name("insertRssiReading(mac:rssi:particleID:floorId:venueId:adjusted_rssi:)")));
- (PelogicRuntimeQuery<PelogicRssiReading__ *> *)selectAllRssiReadings __attribute__((swift_name("selectAllRssiReadings()")));
- (PelogicRuntimeQuery<id> *)selectAllRssiReadingsMapper:(id (^)(PelogicLong *, NSString *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong * _Nullable))mapper __attribute__((swift_name("selectAllRssiReadings(mapper:)")));
- (PelogicRuntimeQuery<PelogicRssiReading__ *> *)selectByFloorFloorId:(int64_t)floorId __attribute__((swift_name("selectByFloor(floorId:)")));
- (PelogicRuntimeQuery<id> *)selectByFloorFloorId:(int64_t)floorId mapper:(id (^)(PelogicLong *, NSString *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong * _Nullable))mapper __attribute__((swift_name("selectByFloor(floorId:mapper:)")));
- (PelogicRuntimeQuery<PelogicRssiReading__ *> *)selectByFloorAndVenueFloorId:(int64_t)floorId venueId:(int64_t)venueId __attribute__((swift_name("selectByFloorAndVenue(floorId:venueId:)")));
- (PelogicRuntimeQuery<id> *)selectByFloorAndVenueFloorId:(int64_t)floorId venueId:(int64_t)venueId mapper:(id (^)(PelogicLong *, NSString *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong * _Nullable))mapper __attribute__((swift_name("selectByFloorAndVenue(floorId:venueId:mapper:)")));
- (PelogicRuntimeQuery<PelogicRssiReading__ *> *)selectByParticleParticleID:(int64_t)particleID __attribute__((swift_name("selectByParticle(particleID:)")));
- (PelogicRuntimeQuery<id> *)selectByParticleParticleID:(int64_t)particleID mapper:(id (^)(PelogicLong *, NSString *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong * _Nullable))mapper __attribute__((swift_name("selectByParticle(particleID:mapper:)")));
- (PelogicRuntimeQuery<PelogicRssiReading__ *> *)selectByParticleIdsParticleID:(id)particleID __attribute__((swift_name("selectByParticleIds(particleID:)")));
- (PelogicRuntimeQuery<id> *)selectByParticleIdsParticleID:(id)particleID mapper:(id (^)(PelogicLong *, NSString *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong * _Nullable))mapper __attribute__((swift_name("selectByParticleIds(particleID:mapper:)")));
- (PelogicRuntimeQuery<PelogicRssiReading__ *> *)selectByVenueVenueId:(int64_t)venueId __attribute__((swift_name("selectByVenue(venueId:)")));
- (PelogicRuntimeQuery<id> *)selectByVenueVenueId:(int64_t)venueId mapper:(id (^)(PelogicLong *, NSString *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong * _Nullable))mapper __attribute__((swift_name("selectByVenue(venueId:mapper:)")));
- (void)updateAdjustedRssiAdjusted_rssi:(PelogicLong * _Nullable)adjusted_rssi id:(int64_t)id __attribute__((swift_name("updateAdjustedRssi(adjusted_rssi:id:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RssiStatisticsModel__")))
@interface PelogicRssiStatisticsModel__ : PelogicBase
- (instancetype)initWithFloorID:(int64_t)floorID mean:(double)mean standardDeviation:(double)standardDeviation filterSigma:(double)filterSigma filterMu:(double)filterMu __attribute__((swift_name("init(floorID:mean:standardDeviation:filterSigma:filterMu:)"))) __attribute__((objc_designated_initializer));
- (PelogicRssiStatisticsModel__ *)doCopyFloorID:(int64_t)floorID mean:(double)mean standardDeviation:(double)standardDeviation filterSigma:(double)filterSigma filterMu:(double)filterMu __attribute__((swift_name("doCopy(floorID:mean:standardDeviation:filterSigma:filterMu:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double filterMu __attribute__((swift_name("filterMu")));
@property (readonly) double filterSigma __attribute__((swift_name("filterSigma")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double standardDeviation __attribute__((swift_name("standardDeviation")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectAllDefaultValueEntries_")))
@interface PelogicSelectAllDefaultValueEntries_ : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("init(venue_id:floor_id:mean:std:score:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectAllDefaultValueEntries_ *)doCopyVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("doCopy(venue_id:floor_id:mean:std:score:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectAllMacFloorMappingEntries_")))
@interface PelogicSelectAllMacFloorMappingEntries_ : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address floor_id:(int64_t)floor_id __attribute__((swift_name("init(venue_id:mac_address:floor_id:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectAllMacFloorMappingEntries_ *)doCopyVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address floor_id:(int64_t)floor_id __attribute__((swift_name("doCopy(venue_id:mac_address:floor_id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectAllMacsWithMetadata_")))
@interface PelogicSelectAllMacsWithMetadata_ : PelogicBase
- (instancetype)initWithMac:(NSString *)mac floorId:(int64_t)floorId venueId:(int64_t)venueId __attribute__((swift_name("init(mac:floorId:venueId:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectAllMacsWithMetadata_ *)doCopyMac:(NSString *)mac floorId:(int64_t)floorId venueId:(int64_t)venueId __attribute__((swift_name("doCopy(mac:floorId:venueId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorId __attribute__((swift_name("floorId")));
@property (readonly) NSString *mac __attribute__((swift_name("mac")));
@property (readonly) int64_t venueId __attribute__((swift_name("venueId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectAllMappings_")))
@interface PelogicSelectAllMappings_ : PelogicBase
- (instancetype)initWithMac_suffix:(NSString *)mac_suffix mac_address:(NSString *)mac_address venue_id:(int64_t)venue_id __attribute__((swift_name("init(mac_suffix:mac_address:venue_id:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectAllMappings_ *)doCopyMac_suffix:(NSString *)mac_suffix mac_address:(NSString *)mac_address venue_id:(int64_t)venue_id __attribute__((swift_name("doCopy(mac_suffix:mac_address:venue_id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) NSString *mac_suffix __attribute__((swift_name("mac_suffix")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectAllParticlesWithRssi")))
@interface PelogicSelectAllParticlesWithRssi : PelogicBase
- (instancetype)initWithId:(int64_t)id partId:(int64_t)partId x:(double)x y:(double)y zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(PelogicDouble * _Nullable)weight floorID:(int64_t)floorID id_:(PelogicLong * _Nullable)id_ mac:(NSString * _Nullable)mac rssi:(PelogicLong * _Nullable)rssi particleID:(PelogicLong * _Nullable)particleID floorId:(PelogicLong * _Nullable)floorId venueId:(PelogicLong * _Nullable)venueId adjusted_rssi:(PelogicLong * _Nullable)adjusted_rssi __attribute__((swift_name("init(id:partId:x:y:zeroDistance:zeroAngle:weight:floorID:id_:mac:rssi:particleID:floorId:venueId:adjusted_rssi:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectAllParticlesWithRssi *)doCopyId:(int64_t)id partId:(int64_t)partId x:(double)x y:(double)y zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(PelogicDouble * _Nullable)weight floorID:(int64_t)floorID id_:(PelogicLong * _Nullable)id_ mac:(NSString * _Nullable)mac rssi:(PelogicLong * _Nullable)rssi particleID:(PelogicLong * _Nullable)particleID floorId:(PelogicLong * _Nullable)floorId venueId:(PelogicLong * _Nullable)venueId adjusted_rssi:(PelogicLong * _Nullable)adjusted_rssi __attribute__((swift_name("doCopy(id:partId:x:y:zeroDistance:zeroAngle:weight:floorID:id_:mac:rssi:particleID:floorId:venueId:adjusted_rssi:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PelogicLong * _Nullable adjusted_rssi __attribute__((swift_name("adjusted_rssi")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) PelogicLong * _Nullable floorId __attribute__((swift_name("floorId")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) PelogicLong * _Nullable id_ __attribute__((swift_name("id_")));
@property (readonly) NSString * _Nullable mac __attribute__((swift_name("mac")));
@property (readonly) int64_t partId __attribute__((swift_name("partId")));
@property (readonly) PelogicLong * _Nullable particleID __attribute__((swift_name("particleID")));
@property (readonly) PelogicLong * _Nullable rssi __attribute__((swift_name("rssi")));
@property (readonly) PelogicLong * _Nullable venueId __attribute__((swift_name("venueId")));
@property (readonly) PelogicDouble * _Nullable weight __attribute__((swift_name("weight")));
@property (readonly) double x __attribute__((swift_name("x")));
@property (readonly) double y __attribute__((swift_name("y")));
@property (readonly) double zeroAngle __attribute__((swift_name("zeroAngle")));
@property (readonly) double zeroDistance __attribute__((swift_name("zeroDistance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectAllStatTableEntries_")))
@interface PelogicSelectAllStatTableEntries_ : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("init(venue_id:floor_id:mac_address:mean:std:score:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectAllStatTableEntries_ *)doCopyVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("doCopy(venue_id:floor_id:mac_address:mean:std:score:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectByMacSuffix_")))
@interface PelogicSelectByMacSuffix_ : PelogicBase
- (instancetype)initWithMac_address:(NSString *)mac_address venue_id:(int64_t)venue_id __attribute__((swift_name("init(mac_address:venue_id:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectByMacSuffix_ *)doCopyMac_address:(NSString *)mac_address venue_id:(int64_t)venue_id __attribute__((swift_name("doCopy(mac_address:venue_id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectDefaultValueByVenueAndFloor_")))
@interface PelogicSelectDefaultValueByVenueAndFloor_ : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("init(venue_id:floor_id:mean:std:score:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectDefaultValueByVenueAndFloor_ *)doCopyVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("doCopy(venue_id:floor_id:mean:std:score:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectDefaultValuesByVenue_")))
@interface PelogicSelectDefaultValuesByVenue_ : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("init(venue_id:floor_id:mean:std:score:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectDefaultValuesByVenue_ *)doCopyVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("doCopy(venue_id:floor_id:mean:std:score:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectFloorParticlesWithRssi_")))
@interface PelogicSelectFloorParticlesWithRssi_ : PelogicBase
- (instancetype)initWithId:(int64_t)id partId:(int64_t)partId x:(double)x y:(double)y zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(PelogicDouble * _Nullable)weight floorID:(int64_t)floorID id_:(PelogicLong * _Nullable)id_ mac:(NSString * _Nullable)mac rssi:(PelogicLong * _Nullable)rssi particleID:(PelogicLong * _Nullable)particleID floorId:(PelogicLong * _Nullable)floorId venueId:(PelogicLong * _Nullable)venueId adjusted_rssi:(PelogicLong * _Nullable)adjusted_rssi __attribute__((swift_name("init(id:partId:x:y:zeroDistance:zeroAngle:weight:floorID:id_:mac:rssi:particleID:floorId:venueId:adjusted_rssi:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectFloorParticlesWithRssi_ *)doCopyId:(int64_t)id partId:(int64_t)partId x:(double)x y:(double)y zeroDistance:(double)zeroDistance zeroAngle:(double)zeroAngle weight:(PelogicDouble * _Nullable)weight floorID:(int64_t)floorID id_:(PelogicLong * _Nullable)id_ mac:(NSString * _Nullable)mac rssi:(PelogicLong * _Nullable)rssi particleID:(PelogicLong * _Nullable)particleID floorId:(PelogicLong * _Nullable)floorId venueId:(PelogicLong * _Nullable)venueId adjusted_rssi:(PelogicLong * _Nullable)adjusted_rssi __attribute__((swift_name("doCopy(id:partId:x:y:zeroDistance:zeroAngle:weight:floorID:id_:mac:rssi:particleID:floorId:venueId:adjusted_rssi:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PelogicLong * _Nullable adjusted_rssi __attribute__((swift_name("adjusted_rssi")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) PelogicLong * _Nullable floorId __attribute__((swift_name("floorId")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) PelogicLong * _Nullable id_ __attribute__((swift_name("id_")));
@property (readonly) NSString * _Nullable mac __attribute__((swift_name("mac")));
@property (readonly) int64_t partId __attribute__((swift_name("partId")));
@property (readonly) PelogicLong * _Nullable particleID __attribute__((swift_name("particleID")));
@property (readonly) PelogicLong * _Nullable rssi __attribute__((swift_name("rssi")));
@property (readonly) PelogicLong * _Nullable venueId __attribute__((swift_name("venueId")));
@property (readonly) PelogicDouble * _Nullable weight __attribute__((swift_name("weight")));
@property (readonly) double x __attribute__((swift_name("x")));
@property (readonly) double y __attribute__((swift_name("y")));
@property (readonly) double zeroAngle __attribute__((swift_name("zeroAngle")));
@property (readonly) double zeroDistance __attribute__((swift_name("zeroDistance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectMacFloorMappingsByVenue_")))
@interface PelogicSelectMacFloorMappingsByVenue_ : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address floor_id:(int64_t)floor_id __attribute__((swift_name("init(venue_id:mac_address:floor_id:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectMacFloorMappingsByVenue_ *)doCopyVenue_id:(int64_t)venue_id mac_address:(NSString *)mac_address floor_id:(int64_t)floor_id __attribute__((swift_name("doCopy(venue_id:mac_address:floor_id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectStatTableByVenue_")))
@interface PelogicSelectStatTableByVenue_ : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("init(venue_id:floor_id:mac_address:mean:std:score:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectStatTableByVenue_ *)doCopyVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("doCopy(venue_id:floor_id:mac_address:mean:std:score:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectStatTableByVenueAndFloor_")))
@interface PelogicSelectStatTableByVenueAndFloor_ : PelogicBase
- (instancetype)initWithVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("init(venue_id:floor_id:mac_address:mean:std:score:)"))) __attribute__((objc_designated_initializer));
- (PelogicSelectStatTableByVenueAndFloor_ *)doCopyVenue_id:(int64_t)venue_id floor_id:(int64_t)floor_id mac_address:(NSString *)mac_address mean:(double)mean std:(double)std score:(double)score __attribute__((swift_name("doCopy(venue_id:floor_id:mac_address:mean:std:score:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floor_id __attribute__((swift_name("floor_id")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) double mean __attribute__((swift_name("mean")));
@property (readonly) double score __attribute__((swift_name("score")));
@property (readonly) double std __attribute__((swift_name("std")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsQueries_")))
@interface PelogicSettingsQueries_ : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver ParticleFilterFlowSettingsAdapter:(PelogicParticleFilterFlowSettings__Adapter *)ParticleFilterFlowSettingsAdapter __attribute__((swift_name("init(driver:ParticleFilterFlowSettingsAdapter:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (PelogicRuntimeQuery<PelogicLong *> *)countSettingsFloors __attribute__((swift_name("countSettingsFloors()")));
- (void)deleteAllSettings __attribute__((swift_name("deleteAllSettings()")));
- (PelogicRuntimeQuery<PelogicLong *> *)selectAllFloorIDs __attribute__((swift_name("selectAllFloorIDs()")));
- (PelogicRuntimeQuery<PelogicFloorSettings__ *> *)selectFloorSettingsFloorID:(int64_t)floorID __attribute__((swift_name("selectFloorSettings(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectFloorSettingsFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, PelogicLong *, PelogicDouble *, PelogicLong *, PelogicLong *, PelogicDouble *))mapper __attribute__((swift_name("selectFloorSettings(floorID:mapper:)")));
- (PelogicRuntimeQuery<PelogicMobilityModelSettings__ *> *)selectMobilityModelSettingsFloorID:(int64_t)floorID __attribute__((swift_name("selectMobilityModelSettings(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectMobilityModelSettingsFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicLong *, PelogicLong *, PelogicDouble *, PelogicDouble *))mapper __attribute__((swift_name("selectMobilityModelSettings(floorID:mapper:)")));
- (PelogicRuntimeQuery<PelogicParticleFilterFlowSettings__ *> *)selectParticleFilterFlowSettingsFloorID:(int64_t)floorID __attribute__((swift_name("selectParticleFilterFlowSettings(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectParticleFilterFlowSettingsFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, PelogicDouble *, PelogicLong *, PelogicLong *, id, PelogicBoolean *))mapper __attribute__((swift_name("selectParticleFilterFlowSettings(floorID:mapper:)")));
- (PelogicRuntimeQuery<PelogicResamplingSettings__ *> *)selectResamplingSettingsFloorID:(int64_t)floorID __attribute__((swift_name("selectResamplingSettings(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectResamplingSettingsFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, PelogicBoolean *, PelogicDouble *, PelogicLong *, PelogicDouble *))mapper __attribute__((swift_name("selectResamplingSettings(floorID:mapper:)")));
- (PelogicRuntimeQuery<PelogicRssiStatisticsModel__ *> *)selectRssiStatisticsModelFloorID:(int64_t)floorID __attribute__((swift_name("selectRssiStatisticsModel(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectRssiStatisticsModelFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, PelogicDouble *, PelogicDouble *, PelogicDouble *, PelogicDouble *))mapper __attribute__((swift_name("selectRssiStatisticsModel(floorID:mapper:)")));
- (PelogicRuntimeQuery<PelogicSignatureFilterSettings__ *> *)selectSignatureFilterSettingsFloorID:(int64_t)floorID __attribute__((swift_name("selectSignatureFilterSettings(floorID:)")));
- (PelogicRuntimeQuery<id> *)selectSignatureFilterSettingsFloorID:(int64_t)floorID mapper:(id (^)(PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *, PelogicLong *))mapper __attribute__((swift_name("selectSignatureFilterSettings(floorID:mapper:)")));
- (void)updateFloorSettingsFloorID:(PelogicLong * _Nullable)floorID rssiCutoff:(int64_t)rssiCutoff standardDeviation:(double)standardDeviation particlesMaxSize:(int64_t)particlesMaxSize particlesMinSize:(int64_t)particlesMinSize scaleFactor:(double)scaleFactor __attribute__((swift_name("updateFloorSettings(floorID:rssiCutoff:standardDeviation:particlesMaxSize:particlesMinSize:scaleFactor:)")));
- (void)updateMobilityModelSettingsFloorID:(int64_t)floorID normalStepCount:(double)normalStepCount alternativeStepCount:(double)alternativeStepCount averageStepLength:(double)averageStepLength standardDeviation:(double)standardDeviation particleCountMinimum:(int64_t)particleCountMinimum particleCountMaximum:(int64_t)particleCountMaximum particleSearchRadius:(double)particleSearchRadius distanceScaleFactor:(double)distanceScaleFactor __attribute__((swift_name("updateMobilityModelSettings(floorID:normalStepCount:alternativeStepCount:averageStepLength:standardDeviation:particleCountMinimum:particleCountMaximum:particleSearchRadius:distanceScaleFactor:)")));
- (void)updateParticleFilterFlowSettingsFloorID:(int64_t)floorID scaleFactor:(double)scaleFactor unscaledRadius:(int64_t)unscaledRadius runsCountThreshold:(int64_t)runsCountThreshold durationTillParticleReset:(int64_t)durationTillParticleReset shouldCalculateTrustScore:(BOOL)shouldCalculateTrustScore __attribute__((swift_name("updateParticleFilterFlowSettings(floorID:scaleFactor:unscaledRadius:runsCountThreshold:durationTillParticleReset:shouldCalculateTrustScore:)")));
- (void)updateResamplingSettingsFloorID:(int64_t)floorID isParticleSpreadControlEnabled:(BOOL)isParticleSpreadControlEnabled particleSpreadThreshold:(double)particleSpreadThreshold maxResamplingRepeats:(int64_t)maxResamplingRepeats distanceScaleFactor:(double)distanceScaleFactor __attribute__((swift_name("updateResamplingSettings(floorID:isParticleSpreadControlEnabled:particleSpreadThreshold:maxResamplingRepeats:distanceScaleFactor:)")));
- (void)updateRssiStatisticsModelFloorID:(int64_t)floorID mean:(double)mean standardDeviation:(double)standardDeviation filterSigma:(double)filterSigma filterMu:(double)filterMu __attribute__((swift_name("updateRssiStatisticsModel(floorID:mean:standardDeviation:filterSigma:filterMu:)")));
- (void)updateSignatureFilterSettingsFloorID:(int64_t)floorID minRssiMatches:(int64_t)minRssiMatches maxRssiReadings:(int64_t)maxRssiReadings rssiMatchingThreshold:(int64_t)rssiMatchingThreshold defaultMinimumMACIntersections:(int64_t)defaultMinimumMACIntersections __attribute__((swift_name("updateSignatureFilterSettings(floorID:minRssiMatches:maxRssiReadings:rssiMatchingThreshold:defaultMinimumMACIntersections:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignatureFilterSettings__")))
@interface PelogicSignatureFilterSettings__ : PelogicBase
- (instancetype)initWithFloorID:(int64_t)floorID minRssiMatches:(int64_t)minRssiMatches maxRssiReadings:(int64_t)maxRssiReadings rssiMatchingThreshold:(int64_t)rssiMatchingThreshold defaultMinimumMACIntersections:(int64_t)defaultMinimumMACIntersections __attribute__((swift_name("init(floorID:minRssiMatches:maxRssiReadings:rssiMatchingThreshold:defaultMinimumMACIntersections:)"))) __attribute__((objc_designated_initializer));
- (PelogicSignatureFilterSettings__ *)doCopyFloorID:(int64_t)floorID minRssiMatches:(int64_t)minRssiMatches maxRssiReadings:(int64_t)maxRssiReadings rssiMatchingThreshold:(int64_t)rssiMatchingThreshold defaultMinimumMACIntersections:(int64_t)defaultMinimumMACIntersections __attribute__((swift_name("doCopy(floorID:minRssiMatches:maxRssiReadings:rssiMatchingThreshold:defaultMinimumMACIntersections:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t defaultMinimumMACIntersections __attribute__((swift_name("defaultMinimumMACIntersections")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) int64_t maxRssiReadings __attribute__((swift_name("maxRssiReadings")));
@property (readonly) int64_t minRssiMatches __attribute__((swift_name("minRssiMatches")));
@property (readonly) int64_t rssiMatchingThreshold __attribute__((swift_name("rssiMatchingThreshold")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionMapping__")))
@interface PelogicVenueDetectionMapping__ : PelogicBase
- (instancetype)initWithId:(int64_t)id mac_suffix:(NSString *)mac_suffix mac_address:(NSString *)mac_address venue_id:(int64_t)venue_id created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("init(id:mac_suffix:mac_address:venue_id:created_at:updated_at:)"))) __attribute__((objc_designated_initializer));
- (PelogicVenueDetectionMapping__ *)doCopyId:(int64_t)id mac_suffix:(NSString *)mac_suffix mac_address:(NSString *)mac_address venue_id:(int64_t)venue_id created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("doCopy(id:mac_suffix:mac_address:venue_id:created_at:updated_at:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t created_at __attribute__((swift_name("created_at")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *mac_address __attribute__((swift_name("mac_address")));
@property (readonly) NSString *mac_suffix __attribute__((swift_name("mac_suffix")));
@property (readonly) int64_t updated_at __attribute__((swift_name("updated_at")));
@property (readonly) int64_t venue_id __attribute__((swift_name("venue_id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionMappingQueries_")))
@interface PelogicVenueDetectionMappingQueries_ : PelogicRuntimeTransacterImpl
- (instancetype)initWithDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("init(driver:)"))) __attribute__((objc_designated_initializer));
- (PelogicRuntimeQuery<PelogicLong *> *)countVenueDetectionMappings __attribute__((swift_name("countVenueDetectionMappings()")));
- (void)deleteAllVenueDetectionMappings __attribute__((swift_name("deleteAllVenueDetectionMappings()")));
- (void)deleteVenueDetectionMappingMac_suffix:(NSString *)mac_suffix mac_address:(NSString *)mac_address venue_id:(int64_t)venue_id __attribute__((swift_name("deleteVenueDetectionMapping(mac_suffix:mac_address:venue_id:)")));
- (void)insertVenueDetectionMappingMac_suffix:(NSString *)mac_suffix mac_address:(NSString *)mac_address venue_id:(int64_t)venue_id created_at:(int64_t)created_at updated_at:(int64_t)updated_at __attribute__((swift_name("insertVenueDetectionMapping(mac_suffix:mac_address:venue_id:created_at:updated_at:)")));
- (PelogicRuntimeQuery<PelogicSelectAllMappings_ *> *)selectAllMappings __attribute__((swift_name("selectAllMappings()")));
- (PelogicRuntimeQuery<id> *)selectAllMappingsMapper:(id (^)(NSString *, NSString *, PelogicLong *))mapper __attribute__((swift_name("selectAllMappings(mapper:)")));
- (PelogicRuntimeQuery<PelogicSelectByMacSuffix_ *> *)selectByMacSuffixMac_suffix:(NSString *)mac_suffix __attribute__((swift_name("selectByMacSuffix(mac_suffix:)")));
- (PelogicRuntimeQuery<id> *)selectByMacSuffixMac_suffix:(NSString *)mac_suffix mapper:(id (^)(NSString *, PelogicLong *))mapper __attribute__((swift_name("selectByMacSuffix(mac_suffix:mapper:)")));
- (PelogicRuntimeQuery<NSString *> *)selectDistinctMacSuffixes __attribute__((swift_name("selectDistinctMacSuffixes()")));
- (PelogicRuntimeQuery<PelogicLong *> *)selectDistinctVenueIds __attribute__((swift_name("selectDistinctVenueIds()")));
- (PelogicRuntimeQuery<PelogicLong *> *)selectVenueIdsByMacMac_address:(NSString *)mac_address __attribute__((swift_name("selectVenueIdsByMac(mac_address:)")));
- (void)updateVenueDetectionMappingVenue_id:(int64_t)venue_id updated_at:(int64_t)updated_at mac_suffix:(NSString *)mac_suffix mac_address:(NSString *)mac_address __attribute__((swift_name("updateVenueDetectionMapping(venue_id:updated_at:mac_suffix:mac_address:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Constants")))
@interface PelogicConstants : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)constants __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicConstants *shared __attribute__((swift_name("shared")));
@property (readonly) double FLOOR_DETECTION_SMALL_VALUE __attribute__((swift_name("FLOOR_DETECTION_SMALL_VALUE")));
@property (readonly) int32_t MIN_BEACON_COUNT_FOUND __attribute__((swift_name("MIN_BEACON_COUNT_FOUND")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileSystemUtil")))
@interface PelogicFileSystemUtil : PelogicBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) PelogicFileSystemUtilCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FileSystemUtil.Companion")))
@interface PelogicFileSystemUtilCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicFileSystemUtilCompanion *shared __attribute__((swift_name("shared")));
- (void)createDirectoriesPath:(PelogicOkioPath *)path __attribute__((swift_name("createDirectories(path:)")));
- (BOOL)existsPath:(PelogicOkioPath *)path __attribute__((swift_name("exists(path:)")));
- (NSString *)getDownloadFolderPath __attribute__((swift_name("getDownloadFolderPath()")));
- (void)writeFilePath:(PelogicOkioPath *)path content:(NSString *)content __attribute__((swift_name("writeFile(path:content:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol PelogicKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface PelogicKotlinEnum<E> : PelogicBase <PelogicKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PelogicKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FilterType")))
@interface PelogicFilterType : PelogicKotlinEnum<PelogicFilterType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PelogicFilterType *all __attribute__((swift_name("all")));
@property (class, readonly) PelogicFilterType *venue __attribute__((swift_name("venue")));
@property (class, readonly) PelogicFilterType *floor __attribute__((swift_name("floor")));
+ (PelogicKotlinArray<PelogicFilterType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PelogicFilterType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LogExportUtil")))
@interface PelogicLogExportUtil : PelogicBase
- (instancetype)initWithDatabase:(id<PelogicPELogicPersistentDB>)database __attribute__((swift_name("init(database:)"))) __attribute__((objc_designated_initializer));
- (void)ensurePennavLogsFolderExists __attribute__((swift_name("ensurePennavLogsFolderExists()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)exportLogsToCSVWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("exportLogsToCSV(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)exportLogsToCSVWithFilenameCustomFilename:(NSString * _Nullable)customFilename completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("exportLogsToCSVWithFilename(customFilename:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLogCountWithCompletionHandler:(void (^)(PelogicInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLogCount(completionHandler:)")));
- (NSString *)getPennavLogsFolderPath __attribute__((swift_name("getPennavLogsFolderPath()")));
- (BOOL)pennavLogsFolderExists __attribute__((swift_name("pennavLogsFolderExists()")));
@property NSString *filename __attribute__((swift_name("filename")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MathHelper")))
@interface PelogicMathHelper : PelogicBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) PelogicMathHelperCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MathHelper.Companion")))
@interface PelogicMathHelperCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicMathHelperCompanion *shared __attribute__((swift_name("shared")));
- (double)normalPdfRssi:(double)rssi mean:(double)mean std:(double)std __attribute__((swift_name("normalPdf(rssi:mean:std:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PELogger")))
@interface PelogicPELogger : PelogicBase
- (instancetype)initWithDatabase:(id<PelogicPELogicPersistentDB>)database batchInterval:(int64_t)batchInterval coroutineScope:(id<PelogicKotlinx_coroutines_coreCoroutineScope>)coroutineScope __attribute__((swift_name("init(database:batchInterval:coroutineScope:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearAllLogsWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearAllLogs(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearLogsByRequestIdRequestId:(NSString *)requestId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearLogsByRequestId(requestId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)flushWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("flush(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getQueueSizeWithCompletionHandler:(void (^)(PelogicInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getQueueSize(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)logGetCurrentPositionUserRssiReadings:(NSArray<PelogicRssiReading *> *)userRssiReadings request:(PelogicRequestPositionData *)request response:(PelogicParticleFilterResponse *)response reqid:(NSString *)reqid actualTriggerVenueDetection:(PelogicBoolean * _Nullable)actualTriggerVenueDetection movingAverageCount:(PelogicInt * _Nullable)movingAverageCount movingAverageAvg:(PelogicDouble * _Nullable)movingAverageAvg completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("logGetCurrentPosition(userRssiReadings:request:response:reqid:actualTriggerVenueDetection:movingAverageCount:movingAverageAvg:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)logOperationReqid:(NSString *)reqid sessionId:(NSString *)sessionId venueID:(int64_t)venueID floorID:(int64_t)floorID x:(PelogicDouble * _Nullable)x y:(PelogicDouble * _Nullable)y request:(NSString *)request response:(NSString *)response completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("logOperation(reqid:sessionId:venueID:floorID:x:y:request:response:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)shutdownWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("shutdown(completionHandler:)")));
@property (readonly) PelogicLogExportUtil *logExportUtil __attribute__((swift_name("logExportUtil")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PELogger.LogEntry")))
@interface PelogicPELoggerLogEntry : PelogicBase
- (instancetype)initWithReqid:(NSString *)reqid sessionId:(NSString *)sessionId venueID:(int64_t)venueID floorID:(int64_t)floorID x:(PelogicDouble * _Nullable)x y:(PelogicDouble * _Nullable)y request:(NSString *)request response:(NSString *)response timestamp:(int64_t)timestamp __attribute__((swift_name("init(reqid:sessionId:venueID:floorID:x:y:request:response:timestamp:)"))) __attribute__((objc_designated_initializer));
- (PelogicPELoggerLogEntry *)doCopyReqid:(NSString *)reqid sessionId:(NSString *)sessionId venueID:(int64_t)venueID floorID:(int64_t)floorID x:(PelogicDouble * _Nullable)x y:(PelogicDouble * _Nullable)y request:(NSString *)request response:(NSString *)response timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(reqid:sessionId:venueID:floorID:x:y:request:response:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t floorID __attribute__((swift_name("floorID")));
@property (readonly) NSString *reqid __attribute__((swift_name("reqid")));
@property (readonly) NSString *request __attribute__((swift_name("request")));
@property (readonly) NSString *response __attribute__((swift_name("response")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int64_t venueID __attribute__((swift_name("venueID")));
@property (readonly) PelogicDouble * _Nullable x __attribute__((swift_name("x")));
@property (readonly) PelogicDouble * _Nullable y __attribute__((swift_name("y")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PerformanceMonitor")))
@interface PelogicPerformanceMonitor : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)performanceMonitor __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicPerformanceMonitor *shared __attribute__((swift_name("shared")));
- (id _Nullable)measureAndLogLabel:(NSString *)label block:(id _Nullable (^)(void))block __attribute__((swift_name("measureAndLog(label:block:)")));
- (id _Nullable)measureWithLevelsLabel:(NSString *)label fastThresholdMs:(int64_t)fastThresholdMs slowThresholdMs:(int64_t)slowThresholdMs block:(id _Nullable (^)(void))block __attribute__((swift_name("measureWithLevels(label:fastThresholdMs:slowThresholdMs:block:)")));
- (PelogicKotlinPair<id, id> *)measureWithResultBlock:(id _Nullable (^)(void))block __attribute__((swift_name("measureWithResult(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RssiCalibrationUtils")))
@interface PelogicRssiCalibrationUtils : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)rssiCalibrationUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicRssiCalibrationUtils *shared __attribute__((swift_name("shared")));
- (int32_t)getRssiCalibrationValuePSessionID:(NSString *)pSessionID __attribute__((swift_name("getRssiCalibrationValue(pSessionID:)")));
- (void)setRepositoryRepository:(id<PelogicCalibrationValuesRepository> _Nullable)repository __attribute__((swift_name("setRepository(repository:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RssiMovingAverageUtil")))
@interface PelogicRssiMovingAverageUtil : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)rssiMovingAverageUtil __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicRssiMovingAverageUtil *shared __attribute__((swift_name("shared")));
- (NSArray<PelogicRssiReading *> *)calculateMovingAverageAndAdjustRssiDeviceID:(NSString * _Nullable)deviceID preferencesRepository:(PelogicPreferencesRepository *)preferencesRepository rssiReadings:(NSArray<PelogicRssiReading *> *)rssiReadings __attribute__((swift_name("calculateMovingAverageAndAdjustRssi(deviceID:preferencesRepository:rssiReadings:)")));
- (int32_t)getCountDeviceID:(NSString *)deviceID preferencesRepository:(PelogicPreferencesRepository *)preferencesRepository __attribute__((swift_name("getCount(deviceID:preferencesRepository:)")));
- (PelogicDouble * _Nullable)getCurrentAverageDeviceID:(NSString *)deviceID preferencesRepository:(PelogicPreferencesRepository *)preferencesRepository __attribute__((swift_name("getCurrentAverage(deviceID:preferencesRepository:)")));
- (PelogicDouble * _Nullable)getSavedAverageDeviceID:(NSString *)deviceID preferencesRepository:(PelogicPreferencesRepository *)preferencesRepository __attribute__((swift_name("getSavedAverage(deviceID:preferencesRepository:)")));
- (void)resetDeviceID:(NSString *)deviceID preferencesRepository:(PelogicPreferencesRepository *)preferencesRepository __attribute__((swift_name("reset(deviceID:preferencesRepository:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RssiValidationUtils")))
@interface PelogicRssiValidationUtils : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)rssiValidationUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicRssiValidationUtils *shared __attribute__((swift_name("shared")));
- (void)validateMinimumBeaconCountRssiReadings:(NSArray<PelogicRssiReading *> *)rssiReadings filterType:(PelogicFilterType *)filterType entityId:(PelogicLong * _Nullable)entityId __attribute__((swift_name("validateMinimumBeaconCount(rssiReadings:filterType:entityId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidationUtil")))
@interface PelogicValidationUtil : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)validationUtil __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicValidationUtil *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)validateDatabaseHasDataPersistentVenueDetectionRepository:(PelogicPersistentVenueDetectionRepository *)persistentVenueDetectionRepository persistentFloorDetectionRepository:(PelogicPersistentFloorDetectionRepository *)persistentFloorDetectionRepository persistentFingerprintRepository:(PelogicPersistentFingerprintRepository *)persistentFingerprintRepository persistentSettingsRepository:(PelogicPersistentSettingsRepository *)persistentSettingsRepository completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("validateDatabaseHasData(persistentVenueDetectionRepository:persistentFloorDetectionRepository:persistentFingerprintRepository:persistentSettingsRepository:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueCacheManager")))
@interface PelogicVenueCacheManager : PelogicBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearCacheWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clearCache(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCacheSizeWithCompletionHandler:(void (^)(PelogicInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCacheSize(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCachedVenuesWithCompletionHandler:(void (^)(NSSet<PelogicLong *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCachedVenues(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)isVenueCachedVenueId:(int64_t)venueId completionHandler:(void (^)(PelogicBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isVenueCached(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)markVenueAsCachedVenueId:(int64_t)venueId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("markVenueAsCached(venueId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeVenueFromCacheVenueId:(int64_t)venueId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("removeVenueFromCache(venueId:completionHandler:)")));
@end

@interface PelogicSettingsJsonRoot (Extensions)
- (PelogicRepositorySettingsBundle *)toRepositorySettingsBundle __attribute__((swift_name("toRepositorySettingsBundle()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdjustParticlesSizeKt")))
@interface PelogicAdjustParticlesSizeKt : PelogicBase
+ (NSArray<PelogicParticle *> *)adjustParticlesSizeParticles:(NSArray<PelogicParticle *> *)particles minSize:(int32_t)minSize maxSize:(int32_t)maxSize __attribute__((swift_name("adjustParticlesSize(particles:minSize:maxSize:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CleanByRssiCutoffKt")))
@interface PelogicCleanByRssiCutoffKt : PelogicBase
+ (NSArray<PelogicRssiReading *> *)filterSignatureReadingsByRssiCutoffRssiReadings:(NSArray<PelogicRssiReading *> *)rssiReadings rssiCutoff:(int64_t)rssiCutoff __attribute__((swift_name("filterSignatureReadingsByRssiCutoff(rssiReadings:rssiCutoff:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CleanSignatureReadingsKt")))
@interface PelogicCleanSignatureReadingsKt : PelogicBase
+ (NSArray<PelogicRssiReading *> *)cleanSignatureReadingsSignatureReadings:(NSArray<PelogicRssiReading *> *)signatureReadings floor:(PelogicFloor *)floor __attribute__((swift_name("cleanSignatureReadings(signatureReadings:floor:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DBDriverFactory_iosKt")))
@interface PelogicDBDriverFactory_iosKt : PelogicBase
+ (void)prepareForDatabaseTesting __attribute__((swift_name("prepareForDatabaseTesting()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DBDriverFactoryKt")))
@interface PelogicDBDriverFactoryKt : PelogicBase
@property (class, readonly) NSString *IN_MEMORY_DB_NAME __attribute__((swift_name("IN_MEMORY_DB_NAME")));
@property (class, readonly) id<PelogicRuntimeSqlSchema> NoOpSchema __attribute__((swift_name("NoOpSchema")));
@property (class, readonly) NSString *PERSISTENT_DB_NAME __attribute__((swift_name("PERSISTENT_DB_NAME")));
@property (class) PelogicDbDownloadConfig * _Nullable dbDownloadConfig __attribute__((swift_name("dbDownloadConfig")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EstimatedPointFromParticlesKt")))
@interface PelogicEstimatedPointFromParticlesKt : PelogicBase
+ (PelogicPoint *)getEstimatedPointParticles:(NSArray<PelogicParticle *> *)particles __attribute__((swift_name("getEstimatedPoint(particles:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FloorDetectionKt")))
@interface PelogicFloorDetectionKt : PelogicBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)detectFloorAndFilterRssiFromServiceRssiReadings:(NSArray<PelogicRssiReading *> *)rssiReadings venueId:(int64_t)venueId userId:(NSString *)userId floorDetectionService:(PelogicFloorDetectionService *)floorDetectionService isVenueChanged:(BOOL)isVenueChanged completionHandler:(void (^)(PelogicFloorDetectionAndFilterResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("detectFloorAndFilterRssiFromService(rssiReadings:venueId:userId:floorDetectionService:isVenueChanged:completionHandler:)")));
+ (int64_t)predictFloorRssiReading:(NSArray<PelogicRssiReading *> *)rssiReading defaultValues:(NSDictionary<PelogicLong *, PelogicFloorStats *> *)defaultValues macFloorMappings:(NSDictionary<PelogicLong *, NSDictionary<NSString *, PelogicLong *> *> *)macFloorMappings statTables:(NSDictionary<PelogicLong *, NSDictionary<PelogicLong *, NSDictionary<NSString *, PelogicFloorStats *> *> *> *)statTables venueId:(int64_t)venueId __attribute__((swift_name("predictFloor(rssiReading:defaultValues:macFloorMappings:statTables:venueId:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoggerKt")))
@interface PelogicLoggerKt : PelogicBase
@property (class, readonly) PelogicKermitLogger *GenericLogger __attribute__((swift_name("GenericLogger")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MeasurementModelKt")))
@interface PelogicMeasurementModelKt : PelogicBase
+ (NSArray<PelogicParticle *> *)updateParticlesWeightsParticles:(NSArray<PelogicParticle *> *)particles userRssiReadings:(NSArray<PelogicRssiReading *> *)userRssiReadings standardDeviation:(double)standardDeviation minNoise:(int64_t)minNoise __attribute__((swift_name("updateParticlesWeights(particles:userRssiReadings:standardDeviation:minNoise:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MobilityModelKt")))
@interface PelogicMobilityModelKt : PelogicBase
+ (double)calculateSearchAngleDistance:(double)distance particleZeroDistance:(double)particleZeroDistance __attribute__((swift_name("calculateSearchAngle(distance:particleZeroDistance:)"))) __attribute__((deprecated("Use calculateSearchAngleFast for better performance")));
+ (double)calculateSearchAngleFastDistance:(double)distance particleZeroDistance:(double)particleZeroDistance __attribute__((swift_name("calculateSearchAngleFast(distance:particleZeroDistance:)")));
+ (double)getCustomGaussianRandomMean:(double)mean standardDeviation:(double)standardDeviation getRandomDouble:(PelogicDouble *(^)(void))getRandomDouble __attribute__((swift_name("getCustomGaussianRandom(mean:standardDeviation:getRandomDouble:)"))) __attribute__((deprecated("Use getCustomGaussianRandomFast for better performance")));
+ (NSArray<PelogicParticle *> *)runMobilityModelUserParticles:(NSArray<PelogicParticle *> *)userParticles floorParticles:(NSArray<PelogicParticle *> *)floorParticles settings:(PelogicMobilityModelSettings *)settings getRandomDouble:(PelogicDouble *(^)(void))getRandomDouble getRandomInt:(PelogicInt *(^)(PelogicInt *))getRandomInt __attribute__((swift_name("runMobilityModel(userParticles:floorParticles:settings:getRandomDouble:getRandomInt:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PEProvider_iosKt")))
@interface PelogicPEProvider_iosKt : PelogicBase
+ (id<PelogicPenguinProvider>)penguinLocationProvider __attribute__((swift_name("penguinLocationProvider()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PEProviderKt")))
@interface PelogicPEProviderKt : PelogicBase
+ (id<PelogicCalibrationValuesRepository>)createCalibrationValuesRepositoryPersistentDB:(id<PelogicPELogicPersistentDB>)persistentDB resourceLoader:(PelogicResourceLoader *)resourceLoader __attribute__((swift_name("createCalibrationValuesRepository(persistentDB:resourceLoader:)")));
+ (PelogicParticleFilterFlowSettings_Adapter *)getInMemoryPFFlowSettingsAdapter __attribute__((swift_name("getInMemoryPFFlowSettingsAdapter()")));
+ (id<PelogicRuntimeColumnAdapter>)getParticleFilterFlowSettingsAdapter __attribute__((swift_name("getParticleFilterFlowSettingsAdapter()")));
+ (PelogicParticleFilterFlowSettings__Adapter *)getPersistentPFFlowSettingsAdapter __attribute__((swift_name("getPersistentPFFlowSettingsAdapter()")));
+ (PelogicUser_Adapter *)getUserAdapter __attribute__((swift_name("getUserAdapter()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RadiusCalculatorKt")))
@interface PelogicRadiusCalculatorKt : PelogicBase
+ (double)calculateRadiusUnscaledRadius:(int64_t)unscaledRadius scaleFactor:(double)scaleFactor __attribute__((swift_name("calculateRadius(unscaledRadius:scaleFactor:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResamplingKt")))
@interface PelogicResamplingKt : PelogicBase
+ (NSArray<PelogicParticle *> *)resampleParticlesParticles:(NSArray<PelogicParticle *> *)particles settings:(PelogicResamplingSettings *)settings currentResamplingRepeats:(int32_t)currentResamplingRepeats getRandomDouble:(PelogicDouble *(^)(void))getRandomDouble __attribute__((swift_name("resampleParticles(particles:settings:currentResamplingRepeats:getRandomDouble:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignatureFilterKt")))
@interface PelogicSignatureFilterKt : PelogicBase
+ (NSArray<PelogicParticle *> *)filterFPBasedOnReadingsFloorParticles:(NSArray<PelogicParticle *> *)floorParticles userRssiReadings:(NSArray<PelogicRssiReading *> *)userRssiReadings settings:(PelogicSignatureFilterSettings *)settings __attribute__((swift_name("filterFPBasedOnReadings(floorParticles:userRssiReadings:settings:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SignatureFilterRerunDecisionKt")))
@interface PelogicSignatureFilterRerunDecisionKt : PelogicBase
+ (BOOL)shouldRerunSignatureFilterUser:(PelogicUser *)user particles:(NSArray<PelogicParticle *> *)particles __attribute__((swift_name("shouldRerunSignatureFilter(user:particles:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrustScoreCalculatorKt")))
@interface PelogicTrustScoreCalculatorKt : PelogicBase
+ (double)calculateTrustScoreByCDFReadings:(NSArray<PelogicRssiReading *> *)readings rssiStatisticsModel:(PelogicRssiStatisticsModel *)rssiStatisticsModel __attribute__((swift_name("calculateTrustScoreByCDF(readings:rssiStatisticsModel:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserParticlesRetrieverKt")))
@interface PelogicUserParticlesRetrieverKt : PelogicBase
+ (BOOL)shouldResetParticlesUser:(PelogicUser * _Nullable)user resetParticlesByPosition:(BOOL)resetParticlesByPosition particlesResetDuration:(int64_t)particlesResetDuration __attribute__((swift_name("shouldResetParticles(user:resetParticlesByPosition:particlesResetDuration:)")));
+ (PelogicUser *)updateOrResetUserParticlesUserID:(NSString *)userID readings:(NSArray<PelogicRssiReading *> *)readings venueID:(int64_t)venueID floor:(PelogicFloor *)floor resetParticlesByPosition:(BOOL)resetParticlesByPosition particlesResetDuration:(int64_t)particlesResetDuration signatureFilterSettings:(PelogicSignatureFilterSettings *)signatureFilterSettings userRepository:(id<PelogicUserRepository>)userRepository __attribute__((swift_name("updateOrResetUserParticles(userID:readings:venueID:floor:resetParticlesByPosition:particlesResetDuration:signatureFilterSettings:userRepository:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserUpdaterKt")))
@interface PelogicUserUpdaterKt : PelogicBase
+ (PelogicUser *)updateUserDataAfterRunUser:(PelogicUser *)user particles:(NSArray<PelogicParticle *> *)particles userRepository:(id<PelogicUserRepository>)userRepository lastPoint:(PelogicPoint * _Nullable)lastPoint __attribute__((swift_name("updateUserDataAfterRun(user:particles:userRepository:lastPoint:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VenueDetectionKt")))
@interface PelogicVenueDetectionKt : PelogicBase
+ (PelogicVenueDetectionResult *)detectVenueReadings:(NSArray<PelogicRssiReading *> *)readings venuesDetectionDic:(PelogicMutableDictionary<NSString *, PelogicMutableDictionary<NSString *, NSArray<PelogicInt *> *> *> *)venuesDetectionDic venueIds:(NSArray<PelogicInt *> *)venueIds previousVenueId:(int32_t)previousVenueId __attribute__((swift_name("detectVenue(readings:venuesDetectionDic:venueIds:previousVenueId:)")));
+ (PelogicVenueDetectionResult *)determineBestVenueTotalReadings:(int32_t)totalReadings venuesScore:(NSDictionary<PelogicInt *, PelogicInt *> *)venuesScore venuesRssiSum:(NSDictionary<PelogicInt *, PelogicDouble *> *)venuesRssiSum venuesWeightedCount:(NSDictionary<PelogicInt *, PelogicDouble *> *)venuesWeightedCount previousVenueId:(int32_t)previousVenueId __attribute__((swift_name("determineBestVenue(totalReadings:venuesScore:venuesRssiSum:venuesWeightedCount:previousVenueId:)")));
+ (void)updateScoresAndRssiReadings:(NSArray<PelogicRssiReading *> *)readings venuesDetectionDic:(NSDictionary<NSString *, NSDictionary<NSString *, NSArray<PelogicInt *> *> *> *)venuesDetectionDic venuesScore:(PelogicMutableDictionary<PelogicInt *, PelogicInt *> *)venuesScore venuesRssiSum:(PelogicMutableDictionary<PelogicInt *, PelogicDouble *> *)venuesRssiSum venuesWeightedCount:(PelogicMutableDictionary<PelogicInt *, PelogicDouble *> *)venuesWeightedCount __attribute__((swift_name("updateScoresAndRssi(readings:venuesDetectionDic:venuesScore:venuesRssiSum:venuesWeightedCount:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WeightNormalizationKt")))
@interface PelogicWeightNormalizationKt : PelogicBase
+ (NSArray<PelogicParticle *> *)normalizeWeightsParticles:(NSArray<PelogicParticle *> *)particles __attribute__((swift_name("normalizeWeights(particles:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface PelogicKotlinUnit : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface PelogicKotlinRuntimeException : PelogicKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface PelogicKotlinIllegalStateException : PelogicKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface PelogicKotlinCancellationException : PelogicKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PelogicKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("RuntimeCloseable")))
@protocol PelogicRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol PelogicRuntimeSqlDriver <PelogicRuntimeCloseable>
@required
- (void)addListenerQueryKeys:(PelogicKotlinArray<NSString *> *)queryKeys listener:(id<PelogicRuntimeQueryListener>)listener __attribute__((swift_name("addListener(queryKeys:listener:)")));
- (PelogicRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (id<PelogicRuntimeQueryResult>)executeIdentifier:(PelogicInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<PelogicRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<PelogicRuntimeQueryResult>)executeQueryIdentifier:(PelogicInt * _Nullable)identifier sql:(NSString *)sql mapper:(id<PelogicRuntimeQueryResult> (^)(id<PelogicRuntimeSqlCursor>))mapper parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<PelogicRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:mapper:parameters:binders:)")));
- (id<PelogicRuntimeQueryResult>)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
- (void)notifyListenersQueryKeys:(PelogicKotlinArray<NSString *> *)queryKeys __attribute__((swift_name("notifyListeners(queryKeys:)")));
- (void)removeListenerQueryKeys:(PelogicKotlinArray<NSString *> *)queryKeys listener:(id<PelogicRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(queryKeys:listener:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PelogicKotlinArray<T> : PelogicBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PelogicInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PelogicKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol PelogicKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol PelogicKotlinSuspendFunction0 <PelogicKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol PelogicRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol PelogicRuntimeTransactionWithoutReturn <PelogicRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<PelogicRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol PelogicRuntimeTransactionWithReturn <PelogicRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<PelogicRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end

__attribute__((swift_name("RuntimeSqlSchema")))
@protocol PelogicRuntimeSqlSchema
@required
- (id<PelogicRuntimeQueryResult>)createDriver:(id<PelogicRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (id<PelogicRuntimeQueryResult>)migrateDriver:(id<PelogicRuntimeSqlDriver>)driver oldVersion:(int64_t)oldVersion newVersion:(int64_t)newVersion callbacks:(PelogicKotlinArray<PelogicRuntimeAfterVersion *> *)callbacks __attribute__((swift_name("migrate(driver:oldVersion:newVersion:callbacks:)")));
@property (readonly) int64_t version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface PelogicKotlinPair<__covariant A, __covariant B> : PelogicBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (PelogicKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface PelogicRuntimeTransacterTransaction : PelogicBase <PelogicRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<PelogicRuntimeQueryResult>)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) PelogicRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end

__attribute__((swift_name("RuntimeExecutableQuery")))
@interface PelogicRuntimeExecutableQuery<__covariant RowType> : PelogicBase
- (instancetype)initWithMapper:(RowType (^)(id<PelogicRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));
- (id<PelogicRuntimeQueryResult>)executeMapper:(id<PelogicRuntimeQueryResult> (^)(id<PelogicRuntimeSqlCursor>))mapper __attribute__((swift_name("execute(mapper:)")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
@property (readonly) RowType (^mapper)(id<PelogicRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end

__attribute__((swift_name("RuntimeQuery")))
@interface PelogicRuntimeQuery<__covariant RowType> : PelogicRuntimeExecutableQuery<RowType>
- (instancetype)initWithMapper:(RowType (^)(id<PelogicRuntimeSqlCursor>))mapper __attribute__((swift_name("init(mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<PelogicRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (void)removeListenerListener:(id<PelogicRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@end

__attribute__((swift_name("RuntimeColumnAdapter")))
@protocol PelogicRuntimeColumnAdapter
@required
- (id)decodeDatabaseValue:(id _Nullable)databaseValue __attribute__((swift_name("decode(databaseValue:)")));
- (id _Nullable)encodeValue:(id)value __attribute__((swift_name("encode(value:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/InstantIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface PelogicKotlinx_datetimeInstant : PelogicBase <PelogicKotlinComparable>
@property (class, readonly, getter=companion) PelogicKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(PelogicKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (PelogicKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(PelogicKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (PelogicKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol PelogicKotlinx_serialization_coreEncoder
@required
- (id<PelogicKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<PelogicKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<PelogicKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<PelogicKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<PelogicKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) PelogicKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol PelogicKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<PelogicKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PelogicKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<PelogicKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) PelogicKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol PelogicKotlinx_serialization_coreDecoder
@required
- (id<PelogicKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<PelogicKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (PelogicKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<PelogicKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<PelogicKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) PelogicKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioPath")))
@interface PelogicOkioPath : PelogicBase <PelogicKotlinComparable>
@property (class, readonly, getter=companion) PelogicOkioPathCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(PelogicOkioPath *)other __attribute__((swift_name("compareTo(other:)")));
- (PelogicOkioPath *)divChild:(NSString *)child __attribute__((swift_name("div(child:)")));
- (PelogicOkioPath *)divChild_:(PelogicOkioByteString *)child __attribute__((swift_name("div(child_:)")));
- (PelogicOkioPath *)divChild__:(PelogicOkioPath *)child __attribute__((swift_name("div(child__:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (PelogicOkioPath *)normalized __attribute__((swift_name("normalized()")));
- (PelogicOkioPath *)relativeToOther:(PelogicOkioPath *)other __attribute__((swift_name("relativeTo(other:)")));
- (PelogicOkioPath *)resolveChild:(NSString *)child normalize:(BOOL)normalize __attribute__((swift_name("resolve(child:normalize:)")));
- (PelogicOkioPath *)resolveChild:(PelogicOkioByteString *)child normalize_:(BOOL)normalize __attribute__((swift_name("resolve(child:normalize_:)")));
- (PelogicOkioPath *)resolveChild:(PelogicOkioPath *)child normalize__:(BOOL)normalize __attribute__((swift_name("resolve(child:normalize__:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isAbsolute __attribute__((swift_name("isAbsolute")));
@property (readonly) BOOL isRelative __attribute__((swift_name("isRelative")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) PelogicOkioByteString *nameBytes __attribute__((swift_name("nameBytes")));
@property (readonly) PelogicOkioPath * _Nullable parent __attribute__((swift_name("parent")));
@property (readonly) PelogicOkioPath * _Nullable root __attribute__((swift_name("root")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) NSArray<PelogicOkioByteString *> *segmentsBytes __attribute__((swift_name("segmentsBytes")));
@property (readonly) id _Nullable volumeLetter __attribute__((swift_name("volumeLetter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface PelogicKotlinEnumCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol PelogicKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<PelogicKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Kermit_coreBaseLogger")))
@interface PelogicKermit_coreBaseLogger : PelogicBase
- (instancetype)initWithConfig:(id<PelogicKermit_coreLoggerConfig>)config __attribute__((swift_name("init(config:)"))) __attribute__((objc_designated_initializer));
- (void)logSeverity:(PelogicKermit_coreSeverity *)severity tag:(NSString *)tag throwable:(PelogicKotlinThrowable * _Nullable)throwable message:(NSString *)message __attribute__((swift_name("log(severity:tag:throwable:message:)")));
- (void)logBlockSeverity:(PelogicKermit_coreSeverity *)severity tag:(NSString *)tag throwable:(PelogicKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("logBlock(severity:tag:throwable:message:)")));
- (void)processLogSeverity:(PelogicKermit_coreSeverity *)severity tag:(NSString *)tag throwable:(PelogicKotlinThrowable * _Nullable)throwable message:(NSString *)message __attribute__((swift_name("processLog(severity:tag:throwable:message:)")));
@property (readonly) id<PelogicKermit_coreLoggerConfig> config __attribute__((swift_name("config")));
@property (readonly) id<PelogicKermit_coreMutableLoggerConfig> mutableConfig __attribute__((swift_name("mutableConfig")));
@end

__attribute__((swift_name("KermitLogger")))
@interface PelogicKermitLogger : PelogicKermit_coreBaseLogger
- (instancetype)initWithConfig:(id<PelogicKermit_coreLoggerConfig>)config tag:(NSString *)tag __attribute__((swift_name("init(config:tag:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithConfig:(id<PelogicKermit_coreLoggerConfig>)config __attribute__((swift_name("init(config:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PelogicKermitLoggerCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)aMessageString:(NSString *)messageString throwable:(PelogicKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("a(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)aThrowable:(PelogicKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("a(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)dMessageString:(NSString *)messageString throwable:(PelogicKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("d(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)dThrowable:(PelogicKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("d(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)eMessageString:(NSString *)messageString throwable:(PelogicKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("e(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)eThrowable:(PelogicKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("e(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)iMessageString:(NSString *)messageString throwable:(PelogicKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("i(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)iThrowable:(PelogicKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("i(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)vMessageString:(NSString *)messageString throwable:(PelogicKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("v(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)vThrowable:(PelogicKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("v(throwable:tag:message:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)wMessageString:(NSString *)messageString throwable:(PelogicKotlinThrowable * _Nullable)throwable tag:(NSString *)tag __attribute__((swift_name("w(messageString:throwable:tag:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (void)wThrowable:(PelogicKotlinThrowable * _Nullable)throwable tag:(NSString *)tag message:(NSString *(^)(void))message __attribute__((swift_name("w(throwable:tag:message:)")));
- (PelogicKermitLogger *)withTagTag:(NSString *)tag __attribute__((swift_name("withTag(tag:)")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((swift_name("RuntimeQueryListener")))
@protocol PelogicRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end

__attribute__((swift_name("RuntimeQueryResult")))
@protocol PelogicRuntimeQueryResult
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol PelogicRuntimeSqlPreparedStatement
@required
- (void)bindBooleanIndex:(int32_t)index boolean:(PelogicBoolean * _Nullable)boolean __attribute__((swift_name("bindBoolean(index:boolean:)")));
- (void)bindBytesIndex:(int32_t)index bytes:(PelogicKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(PelogicDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(PelogicLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol PelogicRuntimeSqlCursor
@required
- (PelogicBoolean * _Nullable)getBooleanIndex:(int32_t)index __attribute__((swift_name("getBoolean(index:)")));
- (PelogicKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (PelogicDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (PelogicLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (id<PelogicRuntimeQueryResult>)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol PelogicKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuntimeAfterVersion")))
@interface PelogicRuntimeAfterVersion : PelogicBase
- (instancetype)initWithAfterVersion:(int64_t)afterVersion block:(void (^)(id<PelogicRuntimeSqlDriver>))block __attribute__((swift_name("init(afterVersion:block:)"))) __attribute__((objc_designated_initializer));
@property (readonly) int64_t afterVersion __attribute__((swift_name("afterVersion")));
@property (readonly) void (^block)(id<PelogicRuntimeSqlDriver>) __attribute__((swift_name("block")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface PelogicKotlinx_datetimeInstantCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (PelogicKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (PelogicKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (PelogicKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (PelogicKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (PelogicKotlinx_datetimeInstant *)parseInput:(id)input format:(id<PelogicKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) PelogicKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) PelogicKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol PelogicKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<PelogicKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PelogicKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PelogicKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) PelogicKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface PelogicKotlinx_serialization_coreSerializersModule : PelogicBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<PelogicKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PelogicKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<PelogicKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<PelogicKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PelogicKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PelogicKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PelogicKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PelogicKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol PelogicKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface PelogicKotlinx_serialization_coreSerialKind : PelogicBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol PelogicKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<PelogicKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PelogicKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PelogicKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<PelogicKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) PelogicKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface PelogicKotlinNothing : PelogicBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioPath.Companion")))
@interface PelogicOkioPathCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicOkioPathCompanion *shared __attribute__((swift_name("shared")));
- (PelogicOkioPath *)toPath:(NSString *)receiver normalize:(BOOL)normalize __attribute__((swift_name("toPath(_:normalize:)")));
@property (readonly) NSString *DIRECTORY_SEPARATOR __attribute__((swift_name("DIRECTORY_SEPARATOR")));
@end

__attribute__((swift_name("OkioByteString")))
@interface PelogicOkioByteString : PelogicBase <PelogicKotlinComparable>
@property (class, readonly, getter=companion) PelogicOkioByteStringCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)base64 __attribute__((swift_name("base64()")));
- (NSString *)base64Url __attribute__((swift_name("base64Url()")));
- (int32_t)compareToOther:(PelogicOkioByteString *)other __attribute__((swift_name("compareTo(other:)")));
- (void)doCopyIntoOffset:(int32_t)offset target:(PelogicKotlinByteArray *)target targetOffset:(int32_t)targetOffset byteCount:(int32_t)byteCount __attribute__((swift_name("doCopyInto(offset:target:targetOffset:byteCount:)")));
- (BOOL)endsWithSuffix:(PelogicKotlinByteArray *)suffix __attribute__((swift_name("endsWith(suffix:)")));
- (BOOL)endsWithSuffix_:(PelogicOkioByteString *)suffix __attribute__((swift_name("endsWith(suffix_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)hex __attribute__((swift_name("hex()")));
- (PelogicOkioByteString *)hmacSha1Key:(PelogicOkioByteString *)key __attribute__((swift_name("hmacSha1(key:)")));
- (PelogicOkioByteString *)hmacSha256Key:(PelogicOkioByteString *)key __attribute__((swift_name("hmacSha256(key:)")));
- (PelogicOkioByteString *)hmacSha512Key:(PelogicOkioByteString *)key __attribute__((swift_name("hmacSha512(key:)")));
- (int32_t)indexOfOther:(PelogicKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex:)")));
- (int32_t)indexOfOther:(PelogicOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("indexOf(other:fromIndex_:)")));
- (int32_t)lastIndexOfOther:(PelogicKotlinByteArray *)other fromIndex:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex:)")));
- (int32_t)lastIndexOfOther:(PelogicOkioByteString *)other fromIndex_:(int32_t)fromIndex __attribute__((swift_name("lastIndexOf(other:fromIndex_:)")));
- (PelogicOkioByteString *)md5 __attribute__((swift_name("md5()")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(PelogicKotlinByteArray *)other otherOffset:(int32_t)otherOffset byteCount:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount:)")));
- (BOOL)rangeEqualsOffset:(int32_t)offset other:(PelogicOkioByteString *)other otherOffset:(int32_t)otherOffset byteCount_:(int32_t)byteCount __attribute__((swift_name("rangeEquals(offset:other:otherOffset:byteCount_:)")));
- (PelogicOkioByteString *)sha1 __attribute__((swift_name("sha1()")));
- (PelogicOkioByteString *)sha256 __attribute__((swift_name("sha256()")));
- (PelogicOkioByteString *)sha512 __attribute__((swift_name("sha512()")));
- (BOOL)startsWithPrefix:(PelogicKotlinByteArray *)prefix __attribute__((swift_name("startsWith(prefix:)")));
- (BOOL)startsWithPrefix_:(PelogicOkioByteString *)prefix __attribute__((swift_name("startsWith(prefix_:)")));
- (PelogicOkioByteString *)substringBeginIndex:(int32_t)beginIndex endIndex:(int32_t)endIndex __attribute__((swift_name("substring(beginIndex:endIndex:)")));
- (PelogicOkioByteString *)toAsciiLowercase __attribute__((swift_name("toAsciiLowercase()")));
- (PelogicOkioByteString *)toAsciiUppercase __attribute__((swift_name("toAsciiUppercase()")));
- (PelogicKotlinByteArray *)toByteArray __attribute__((swift_name("toByteArray()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSString *)utf8 __attribute__((swift_name("utf8()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol PelogicKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<PelogicKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<PelogicKotlinCoroutineContextElement> _Nullable)getKey:(id<PelogicKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<PelogicKotlinCoroutineContext>)minusKeyKey:(id<PelogicKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<PelogicKotlinCoroutineContext>)plusContext:(id<PelogicKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Kermit_coreLoggerConfig")))
@protocol PelogicKermit_coreLoggerConfig
@required
@property (readonly) NSArray<PelogicKermit_coreLogWriter *> *logWriterList __attribute__((swift_name("logWriterList")));
@property (readonly) PelogicKermit_coreSeverity *minSeverity __attribute__((swift_name("minSeverity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kermit_coreSeverity")))
@interface PelogicKermit_coreSeverity : PelogicKotlinEnum<PelogicKermit_coreSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PelogicKermit_coreSeverity *verbose __attribute__((swift_name("verbose")));
@property (class, readonly) PelogicKermit_coreSeverity *debug __attribute__((swift_name("debug")));
@property (class, readonly) PelogicKermit_coreSeverity *info __attribute__((swift_name("info")));
@property (class, readonly) PelogicKermit_coreSeverity *warn __attribute__((swift_name("warn")));
@property (class, readonly) PelogicKermit_coreSeverity *error __attribute__((swift_name("error")));
@property (class, readonly) PelogicKermit_coreSeverity *assert __attribute__((swift_name("assert")));
+ (PelogicKotlinArray<PelogicKermit_coreSeverity *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PelogicKermit_coreSeverity *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Kermit_coreMutableLoggerConfig")))
@protocol PelogicKermit_coreMutableLoggerConfig <PelogicKermit_coreLoggerConfig>
@required
- (void)setLogWriterList:(NSArray<PelogicKermit_coreLogWriter *> *)value __attribute__((swift_name("setLogWriterList(_:)")));
- (void)setMinSeverity:(PelogicKermit_coreSeverity *)value __attribute__((swift_name("setMinSeverity(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KermitLogger.Companion")))
@interface PelogicKermitLoggerCompanion : PelogicKermitLogger
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithConfig:(id<PelogicKermit_coreLoggerConfig>)config tag:(NSString *)tag __attribute__((swift_name("init(config:tag:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicKermitLoggerCompanion *shared __attribute__((swift_name("shared")));
- (void)aTag:(NSString *)tag throwable:(PelogicKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("a(tag:throwable:message:)")));
- (void)addLogWriterLogWriter:(PelogicKotlinArray<PelogicKermit_coreLogWriter *> *)logWriter __attribute__((swift_name("addLogWriter(logWriter:)")));
- (void)dTag:(NSString *)tag throwable:(PelogicKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("d(tag:throwable:message:)")));
- (void)eTag:(NSString *)tag throwable:(PelogicKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("e(tag:throwable:message:)")));
- (void)iTag:(NSString *)tag throwable:(PelogicKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("i(tag:throwable:message:)")));
- (void)setLogWritersLogWriter:(PelogicKotlinArray<PelogicKermit_coreLogWriter *> *)logWriter __attribute__((swift_name("setLogWriters(logWriter:)")));
- (void)setLogWritersLogWriters:(NSArray<PelogicKermit_coreLogWriter *> *)logWriters __attribute__((swift_name("setLogWriters(logWriters:)")));
- (void)setMinSeveritySeverity:(PelogicKermit_coreSeverity *)severity __attribute__((swift_name("setMinSeverity(severity:)")));
- (void)setTagTag:(NSString *)tag __attribute__((swift_name("setTag(tag:)")));
- (void)vTag:(NSString *)tag throwable:(PelogicKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("v(tag:throwable:message:)")));
- (void)wTag:(NSString *)tag throwable:(PelogicKotlinThrowable * _Nullable)throwable message:(NSString *(^)(void))message __attribute__((swift_name("w(tag:throwable:message:)")));
@property (readonly) NSString *tag __attribute__((swift_name("tag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface PelogicKotlinByteArray : PelogicBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(PelogicByte *(^)(PelogicInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (PelogicKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormat")))
@protocol PelogicKotlinx_datetimeDateTimeFormat
@required
- (NSString *)formatValue:(id _Nullable)value __attribute__((swift_name("format(value:)")));
- (id<PelogicKotlinAppendable>)formatToAppendable:(id<PelogicKotlinAppendable>)appendable value:(id _Nullable)value __attribute__((swift_name("formatTo(appendable:value:)")));
- (id _Nullable)parseInput:(id)input __attribute__((swift_name("parse(input:)")));
- (id _Nullable)parseOrNullInput:(id)input __attribute__((swift_name("parseOrNull(input:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol PelogicKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<PelogicKotlinKClass>)kClass provider:(id<PelogicKotlinx_serialization_coreKSerializer> (^)(NSArray<id<PelogicKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<PelogicKotlinKClass>)kClass serializer:(id<PelogicKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<PelogicKotlinKClass>)baseClass actualClass:(id<PelogicKotlinKClass>)actualClass actualSerializer:(id<PelogicKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<PelogicKotlinKClass>)baseClass defaultDeserializerProvider:(id<PelogicKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<PelogicKotlinKClass>)baseClass defaultDeserializerProvider:(id<PelogicKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<PelogicKotlinKClass>)baseClass defaultSerializerProvider:(id<PelogicKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol PelogicKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol PelogicKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol PelogicKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol PelogicKotlinKClass <PelogicKotlinKDeclarationContainer, PelogicKotlinKAnnotatedElement, PelogicKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OkioByteString.Companion")))
@interface PelogicOkioByteStringCompanion : PelogicBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PelogicOkioByteStringCompanion *shared __attribute__((swift_name("shared")));
- (PelogicOkioByteString * _Nullable)decodeBase64:(NSString *)receiver __attribute__((swift_name("decodeBase64(_:)")));
- (PelogicOkioByteString *)decodeHex:(NSString *)receiver __attribute__((swift_name("decodeHex(_:)")));
- (PelogicOkioByteString *)encodeUtf8:(NSString *)receiver __attribute__((swift_name("encodeUtf8(_:)")));
- (PelogicOkioByteString *)ofData:(PelogicKotlinByteArray *)data __attribute__((swift_name("of(data:)")));
- (PelogicOkioByteString *)toByteString:(NSData *)receiver __attribute__((swift_name("toByteString(_:)")));
- (PelogicOkioByteString *)toByteString:(PelogicKotlinByteArray *)receiver offset:(int32_t)offset byteCount:(int32_t)byteCount __attribute__((swift_name("toByteString(_:offset:byteCount:)")));
@property (readonly) PelogicOkioByteString *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol PelogicKotlinCoroutineContextElement <PelogicKotlinCoroutineContext>
@required
@property (readonly) id<PelogicKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol PelogicKotlinCoroutineContextKey
@required
@end

__attribute__((swift_name("Kermit_coreLogWriter")))
@interface PelogicKermit_coreLogWriter : PelogicBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isLoggableTag:(NSString *)tag severity:(PelogicKermit_coreSeverity *)severity __attribute__((swift_name("isLoggable(tag:severity:)")));
- (void)logSeverity:(PelogicKermit_coreSeverity *)severity message:(NSString *)message tag:(NSString *)tag throwable:(PelogicKotlinThrowable * _Nullable)throwable __attribute__((swift_name("log(severity:message:tag:throwable:)")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface PelogicKotlinByteIterator : PelogicBase <PelogicKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PelogicByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol PelogicKotlinAppendable
@required
- (id<PelogicKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<PelogicKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<PelogicKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
