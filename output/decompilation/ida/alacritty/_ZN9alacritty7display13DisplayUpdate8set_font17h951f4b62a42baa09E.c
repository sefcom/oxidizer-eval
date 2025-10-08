void *__fastcall alacritty::display::DisplayUpdate::set_font(void *dest, void *src)
{
  void *result; // rax

  core::ptr::drop_in_place<core::option::Option<alacritty::config::font::Font>>(dest);
  result = memcpy(dest, src, 0xD0uLL);
  *((_BYTE *)dest + 220) = 1;
  return result;
}