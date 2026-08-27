// By Shekhar Chaurasiya
// 26 Aug 2026

#pragma once
#include <iostream>
#include <string_view>

namespace Aryabhata::Logger {
enum class LogLevel { INFO, WARN, ERROR, SUCCESS };

namespace COLORS {
constexpr std::string_view RESET = "\033[0m";
constexpr std::string_view RED = "\033[31m";

constexpr std::string_view GREEN = "\033[32m";

constexpr std::string_view YELLOW = "\033[33m";

constexpr std::string_view CYAN = "\033[36m";

}; // namespace COLORS

inline void log(LogLevel level, std::string_view msg) {
  switch (level) {
  case LogLevel::INFO:
    std::cout << COLORS::CYAN << msg << COLORS::RESET << '\n';
    break;
  case LogLevel::WARN:
    std::cout << COLORS::YELLOW << msg << COLORS::RESET << '\n';
    break;

  case LogLevel::ERROR:
    std::cout << COLORS::RED << msg << COLORS::RESET << '\n';
    break;

  case LogLevel::SUCCESS:
    std::cout << COLORS::GREEN << msg << COLORS::RESET << '\n';
    break;
  }
};

} // namespace Aryabhata::Logger
