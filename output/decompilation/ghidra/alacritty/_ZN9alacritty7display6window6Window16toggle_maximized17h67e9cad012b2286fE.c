void _ZN9alacritty7display6window6Window16toggle_maximized17h67e9cad012b2286fE(long param_1)

{
  byte bVar1;
  
  bVar1 = _ZN5winit6window6Window12is_maximized17h63fe6b4aba5a78b9E
                    (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _ZN9alacritty7display6window6Window13set_maximized17hf8571f6f03a74d24E(param_1,bVar1 ^ 1);
  return;
}