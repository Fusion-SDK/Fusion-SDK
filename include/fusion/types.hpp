#pragma once
#include <cstdint>
#include <string>

namespace fusion {
enum class GameEdition { Unknown, GeometryDash, Lite, World, Meltdown, SubZero };

struct GameVersion {
    std::uint32_t major{0}, minor{0}, patch{0};
    std::string to_string() const {
        return std::to_string(major) + "." + std::to_string(minor) + "." +
               std::to_string(patch);
    }
};

struct RuntimeInfo {
    GameEdition edition{GameEdition::Unknown};
    GameVersion game_version{};
    std::string platform;
};
} // namespace fusion
