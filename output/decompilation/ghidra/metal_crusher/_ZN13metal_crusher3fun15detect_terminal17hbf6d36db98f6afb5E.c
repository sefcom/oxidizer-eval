undefined  [16] _ZN13metal_crusher3fun15detect_terminal17hbf6d36db98f6afb5E(void)

{
  undefined **ppuVar1;
  undefined auVar2 [16];
  undefined local_1a8 [16];
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined *local_178;
  code *local_170;
  char *local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  char *local_138;
  undefined8 local_130;
  char *local_128;
  undefined8 local_120;
  char *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined **local_e0;
  undefined8 local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  
  local_168 = "kgx";
  local_160 = 3;
  local_158 = "ghostty";
  local_150 = 7;
  local_148 = "konsole";
  local_140 = 7;
  local_138 = "alacritty";
  local_130 = 9;
  local_128 = "gnome-terminal";
  local_120 = 0xe;
  local_118 = "xterm";
  local_110 = 5;
  local_108 = 0;
  local_100 = 6;
  do {
                    /* try { // try from 00487580 to 004875f3 has its CatchHandler @ 00487692 */
    auVar2 = _ZN99__LT_core__array__iter__IntoIter_LT_T_C___GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf76594f8d4e56c08E
                       (&local_168);
    if (auVar2._0_8_ == 0) {
      auVar2._8_8_ = 2;
      auVar2._0_8_ = "sh";
LAB_0048765f:
      _ZN4core3ptr73drop_in_place_LT_core__array__iter__IntoIter_LT__RF_str_C_6_usize_GT__GT_17hb72d9e67272cfa2fE
                (&local_168);
      return auVar2;
    }
    local_170 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h0847ff0da4c1d6d7E;
    local_e0 = &PTR_s__usr_bin__006966c8;
    local_d8 = 1;
    local_c0 = 0;
    local_c8 = 1;
    local_178 = local_1a8;
    local_d0 = &local_178;
    local_1a8 = auVar2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h1648c532ac184ddcE(&local_f8,&local_e0);
    local_198 = local_f8;
    uStack_194 = uStack_f4;
    uStack_190 = uStack_f0;
    uStack_18c = uStack_ec;
    local_188 = local_e8;
                    /* try { // try from 00487613 to 0048762a has its CatchHandler @ 00487683 */
    _ZN3std2fs8metadata17h0f112b0c82c2b173E(&local_e0,CONCAT44(uStack_ec,uStack_f0));
    ppuVar1 = local_e0;
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hd0cd0de30ef23329E
              (&local_e0);
    auVar2 = local_1a8;
    if ((int)ppuVar1 != 2) {
                    /* try { // try from 00487655 to 0048765e has its CatchHandler @ 00487681 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha04b33545db7d743E(&local_198);
      goto LAB_0048765f;
    }
                    /* try { // try from 00487630 to 00487637 has its CatchHandler @ 00487692 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17ha04b33545db7d743E(&local_198);
  } while( true );
}