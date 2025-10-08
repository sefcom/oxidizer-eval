void _ZN9alacritty8renderer4text12builtin_font13builtin_glyph17he2b1f944da5191d7E
               (undefined8 *param_1,uint param_2,undefined8 param_3,undefined param_4,
               undefined param_5,char param_6,char param_7)

{
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (param_2 - 0x1fb00 < 0x3c || param_2 - 0x2500 < 0xa0) {
    _ZN9alacritty8renderer4text12builtin_font11box_drawing17hc55c3d9cdc825cd9E
              (&local_98,param_2,param_3,param_4,param_5);
LAB_00564332:
    uStack_60 = CONCAT44(uStack_60._4_4_,(int)uStack_60 - param_6);
    local_68 = CONCAT44(local_68._4_4_ - param_7,(undefined4)local_68);
    param_1[4] = local_78;
    param_1[5] = uStack_70;
    param_1[2] = local_88;
    param_1[3] = uStack_80;
    *param_1 = local_98;
    param_1[1] = uStack_90;
    param_1[6] = local_68;
    param_1[7] = uStack_60;
    return;
  }
  if ((param_2 & 0x1ffffc) == 0xe0b0) {
    _ZN9alacritty8renderer4text12builtin_font17powerline_drawing17h744b2bb1b0d13ad6E
              (&local_50,param_2,param_3,param_4,param_5);
    if (local_50 != 2) {
      local_98 = CONCAT44(uStack_4c,local_50);
      uStack_90 = uStack_48;
      local_88 = local_40;
      uStack_80 = uStack_38;
      local_78 = local_30;
      uStack_70 = uStack_28;
      local_68 = local_20;
      uStack_60 = uStack_18;
      goto LAB_00564332;
    }
  }
  *param_1 = 2;
  return;
}