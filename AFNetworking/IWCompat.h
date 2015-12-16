#ifndef _IWCOMPAT_H_
#define _IWCOMPAT_H_

#import <Foundation/Foundation.h>

NSString *const UIPasteboardNameGeneral;
NSString *const UIPasteboardNameFind;


typedef enum {
	ACAccountCredentialRenewResultRenewed,
	ACAccountCredentialRenewResultRejected,
	ACAccountCredentialRenewResultFailed
} ACAccountCredentialRenewResult;

typedef enum ACErrorCode {
	ACErrorUnknown = 1,
	ACErrorAccountMissingRequiredProperty,
	ACErrorAccountAuthenticationFailed,
	ACErrorAccountTypeInvalid,
	ACErrorAccountAlreadyExists,
	ACErrorAccountNotFound,
	ACErrorPermissionDenied,
	ACErrorAccessInfoInvalid,
	ACErrorClientPermissionDenied,
	ACErrorAccessDeniedByProtectionPolicy,
	ACErrorCredentialNotFound,
	ACErrorFetchCredentialFailed,
	ACErrorStoreCredentialFailed,
	ACErrorRemoveCredentialFailed,
	ACErrorUpdatingNonexistentAccount,
	ACErrorInvalidClientBundleID,
} ACErrorCode;

#define QOS_CLASS_USER_INITIATED DISPATCH_QUEUE_PRIORITY_HIGH 
#define QOS_CLASS_DEFAULT DISPATCH_QUEUE_PRIORITY_DEFAULT
#define QOS_CLASS_UTILITY DISPATCH_QUEUE_PRIORITY_LOW

//NSString * const NSKeyedArchiveRootObjectKey = @"root";


@interface ACAccountType
@end

@interface NSProgress
@end

typedef struct __SecCertificate *SecCertificateRef;
typedef struct __SecKey *SecKeyRef;
typedef struct __SecKey *SecPolicyRef;

typedef uint32_t SecTrustResultType;
enum {
	kSecTrustResultInvalid,
	kSecTrustResultProceed,
	kSecTrustResultConfirm,
	kSecTrustResultDeny,
	kSecTrustResultUnspecified,
	kSecTrustResultRecoverableTrustFailure,
	kSecTrustResultFatalTrustFailure,
	kSecTrustResultOtherError
};

#endif // !_IWCOMPAT_H_
