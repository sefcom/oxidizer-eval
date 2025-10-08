void _ZN9alacritty8renderer4text12builtin_font6Canvas11draw_v_line17h92ba0034542fd3e3E
               (undefined8 param_1,float param_2,undefined4 param_3,long param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_2;
  fVar1 = (float)_ZN9alacritty8renderer4text12builtin_font6Canvas13h_line_bounds17he0cd635d93fca4bdE
                           (*(undefined8 *)(param_4 + 0x18));
  _ZN9alacritty8renderer4text12builtin_font6Canvas9draw_rect17h9fade2d70b0bde80E
            (fVar1,param_2,fVar2 - fVar1,param_3,param_4);
  return;
}