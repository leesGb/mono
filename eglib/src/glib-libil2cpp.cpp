#include <config.h>

#include <os/c-api/il2cpp-config-platforms.h>

#if IL2CPP_PLATFORM_SUPPORTS_SYSTEM_CERTIFICATES

#include <os/c-api/SystemCertificates-c-api.cpp>
fghgfh
#if IL2CPP_TARGET_WINDOWS_DESKTOP
#include <os/Win32/SystemCertificates.cpp>
#elif IL2CPP_TARGET_DARWIN
#include <os/OSX/SystemCertificates.cpp>
#else
#include <os/Generic/SystemCertificates.cpp>
#endif

#endif // IL2CPP_PLATFORM_SUPPORTS_SYSTEM_CERTIFICATES