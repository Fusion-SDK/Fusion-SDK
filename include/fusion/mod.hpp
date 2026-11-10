#pragma once
#include "fusion/logger.hpp"
#include "fusion/metadata.hpp"
#include "fusion/types.hpp"

namespace fusion {
// Starter interface only. The future loader must specify ABI ownership,
// lifecycle guarantees, threading rules, and host-service contracts.
class Mod {
public:
    virtual ~Mod() = default;
    virtual ModMetadata metadata() const = 0;
    virtual void on_load(const RuntimeInfo& runtime, Logger& logger) = 0;
    virtual void on_unload(Logger& logger) = 0;
};
} // namespace fusion

#if defined(_WIN32)
    #define FUSION_MOD_EXPORT extern "C" __declspec(dllexport)
#else
    #define FUSION_MOD_EXPORT extern "C" __attribute__((visibility("default")))
#endif

#define FUSION_DECLARE_MOD(ModClass) \
    FUSION_MOD_EXPORT fusion::Mod* fusion_create_mod() { return new ModClass(); } \
    FUSION_MOD_EXPORT void fusion_destroy_mod(fusion::Mod* mod) { delete mod; }
