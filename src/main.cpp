#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <iostream>

int main(void) {
  using namespace ftxui;

  // Define the document
  Element document = hbox({
      text("left") | border | flex,
      text("middle") | border | flex,
      text("right") | borderRounded | flex,
  });

  auto screen = Screen::Create(Dimension::Full(),        // Width
                               Dimension::Fit(document)  // Height
  );
  Render(screen, document);
  screen.Print();

  return EXIT_SUCCESS;
}
