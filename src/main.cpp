#include <Logger.hpp>
#include <string_view>

using namespace Aryabhata::Logger;

int main() {
  std::string_view msg1 = "Lorem Ipsum is simply dummy text of the printing "
                          "and typesetting industry";
  std::string_view msg2 = "Lorem Ipsum has been the industry's standard dummy "
                          "text ever since 1966,";
  std::string_view msg3 = "when designers at Letraset and James Mosley, the "
                          "librarian at St Bride Printing Library in London,";
  std::string_view msg4 = "took a 1914 Cicero translation and scrambled it to "
                          "make dummy text for Letraset's Body Type sheets";

  log(LogLevel::SUCCESS, msg1);
  log(LogLevel::WARN, msg2);
  log(LogLevel::ERROR, msg3);
  log(LogLevel::INFO, msg4);

  return 0;
}
