#include <fusion/fusion.hpp>

class HelloMod final : public fusion::Mod {
public:
    fusion::ModMetadata metadata() const override {
        return {
            "example.hello-mod",
            "Hello Mod",
            "1.0.0",
            "Fusion SDK Example",
            "A minimal example demonstrating the Fusion SDK interface.",
            "0.1.0",
            {}
        };
    }

    void on_load(const fusion::RuntimeInfo& runtime,
                 fusion::Logger& logger) override {
        logger.log(fusion::LogLevel::Info,
                   "Hello from Hello Mod. Runtime platform: " + runtime.platform);
    }

    void on_unload(fusion::Logger& logger) override {
        logger.log(fusion::LogLevel::Info, "Hello Mod unloaded.");
    }
};

FUSION_DECLARE_MOD(HelloMod)
