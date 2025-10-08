void _ZN9alacritty7display6window6Window17set_mouse_visible17h0708ccda880bd802E
               (long param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0xf4)) {
    *(char *)(param_1 + 0xf4) = param_2;
    _ZN5winit6window6Window18set_cursor_visible17hc9ccbdea95426f05E
              (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_2);
    return;
  }
  return;
}