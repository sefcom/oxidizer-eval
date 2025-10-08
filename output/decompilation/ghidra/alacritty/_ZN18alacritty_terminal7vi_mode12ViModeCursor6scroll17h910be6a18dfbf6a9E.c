undefined  [16]
_ZN18alacritty_terminal7vi_mode12ViModeCursor6scroll17h910be6a18dfbf6a9E
          (int param_1,long param_2,int param_3)

{
  undefined4 uVar1;
  undefined auVar2 [16];
  char local_28 [8];
  undefined8 local_20;
  
  uVar1 = _ZN18alacritty_terminal5index4Line10grid_clamp17h7a533a4686eb6d93E
                    (param_1 - param_3,*(undefined8 *)(param_2 + 0x50),
                     *(undefined8 *)(param_2 + 0xc0),1);
  _ZN18alacritty_terminal7vi_mode22first_occupied_in_line17h19350108178722bcE
            (local_28,param_2,uVar1);
  if (local_28[0] == '\0') {
    local_20 = 0;
  }
  auVar2._8_4_ = uVar1;
  auVar2._0_8_ = local_20;
  auVar2._12_4_ = 0;
  return auVar2;
}