#include "title_screen.h"

TitleScreen::TitleScreen() : {}

bool TitleScreen::update(const Input& input, Audio&, unsigned int) {
  return !input.any_pressed();
}

void TitleScreen::draw(Graphics& graphics) const {
  // Nothing to draw
}

Screen* TitleScreen::next_screen() const {
  return nullptr;
}
