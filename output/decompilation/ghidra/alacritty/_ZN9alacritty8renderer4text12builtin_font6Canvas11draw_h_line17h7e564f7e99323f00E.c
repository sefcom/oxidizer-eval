void _ZN9alacritty8renderer4text12builtin_font6Canvas11draw_h_line17h7e564f7e99323f00E
               (undefined4 param_1,float param_2,undefined4 param_3,long param_4)

{
  float fVar1;
  
  fVar1 = (float)_ZN9alacritty8renderer4text12builtin_font6Canvas13h_line_bounds17he0cd635d93fca4bdE
                           (param_2,*(undefined8 *)(param_4 + 0x20));
  _ZN9alacritty8renderer4text12builtin_font6Canvas9draw_rect17h9fade2d70b0bde80E
            (param_1,fVar1,param_3,param_2 - fVar1,param_4);
  return;
}