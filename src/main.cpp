#include <cassert>
#include <cstdlib>
#include <filesystem>
#include <iostream>
#include <fstream>
#include <string>
#include <string_view>

int main(int argc, char** argv) {

  //
  // command line arguments
  //

  if (argc != 2) {
    std::cerr << "Expected one argument of server or client\n";
    return 1;
  }

  const enum class Mode {
    server,
    client,
    both,
    error
  } mode = [&argv]() -> Mode{
    using enum Mode;
    const std::string_view arg{argv[1]};
    if (arg == "server") return server;
    else if (arg == "client") return client;
    else return error;
  }();

  if (mode == Mode::error) {
    std::cerr << "Unexpected argument \"" << argv[1] << "\"\n";
    return 1;
  }

  //
  // file reading and downloading
  //

  if (!std::filesystem::exists("modsync.txt")) {
    std::cerr << "Could not find modsync.txt\n";
    return 1;
  }

  std::ifstream fs{};
  fs.open("modsync.txt");

  std::string line{};
  Mode line_mode{Mode::both};
  while (std::getline(fs, line)) {
    if (line == "server:") line_mode = Mode::server;
    else if (line == "client:") line_mode = Mode::client;
    else if (line == "both:") line_mode = Mode::both;
    else if (line == "") continue;
    else {
      if (mode == line_mode || line_mode == Mode::both) {
        int err{system(std::string{"wget " + line}.c_str())};
        if (err != 0) return err;
      }
    }
  }

  return 0;
}
