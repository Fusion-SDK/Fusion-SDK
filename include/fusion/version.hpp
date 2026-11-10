#pragma once
#define FUSION_SDK_VERSION_MAJOR 0
#define FUSION_SDK_VERSION_MINOR 1
#define FUSION_SDK_VERSION_PATCH 0

namespace fusion {
struct Version { int major; int minor; int patch; };
inline constexpr Version sdk_version() noexcept {
    return {FUSION_SDK_VERSION_MAJOR, FUSION_SDK_VERSION_MINOR,
            FUSION_SDK_VERSION_PATCH};
}
} // namespace fusion
