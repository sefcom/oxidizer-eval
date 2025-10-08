void _ZN9alacritty7display6window6Window10set_urgent17hd61e4d7ce100678bE(long param_1,byte param_2)

{
  _ZN5winit6window6Window22request_user_attention17hfb82027ef588d7e9E
            (param_1 + 0x20,(uint)(param_2 ^ 1) * 2);
  return;
}