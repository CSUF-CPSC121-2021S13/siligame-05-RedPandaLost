#include "player.h"

void Player::Draw(graphics::Image &back) {
  std::string variable = "redpanda.bmp";
  Helper(back, variable, x_, y_);
}

void Player::Move(const graphics::Image &back) {}

void PlayerProjectile::Draw(graphics::Image &back) {
  std::string variable = "paw.bmp";
  Helper(back, variable, x_, y_);
}

void PlayerProjectile::Move(const graphics::Image &back) {
  if (!IsOutOfBounds(back)) {
    SetX(GetX() + 1);
    SetY(GetY() + 1);
  } else {
    is_active = false;
  }
}
