#include <iostream>
#include "profile.hpp"

int main() {

  Profile user("Test User", 30, "New York", "USA", "he/him");
  user.add_hobby("listening to audiobooks and podcasts");
  user.add_hobby("playing rec sports like bowling and kickball");
  user.add_hobby("writing a speculative fiction novel");
  user.add_hobby("reading advice columns");

  std::cout << user.view_profile();
}