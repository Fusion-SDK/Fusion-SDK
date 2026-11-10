#pragma once
#include <string>
#include <vector>

namespace fusion {
struct ModMetadata {
    std::string id;
    std::string name;
    std::string version;
    std::string author;
    std::string description;
    std::string sdk_version;
    std::vector<std::string> dependencies;
};
} // namespace fusion
