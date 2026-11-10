#pragma once
#include <string>

namespace fusion {
enum class LogLevel { Debug, Info, Warning, Error };
class Logger {
public:
    virtual ~Logger() = default;
    virtual void log(LogLevel level, const std::string& message) = 0;
};
} // namespace fusion
