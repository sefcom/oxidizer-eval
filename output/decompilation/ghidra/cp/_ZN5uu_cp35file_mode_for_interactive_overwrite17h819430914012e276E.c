void _ZN5uu_cp35file_mode_for_interactive_overwrite17h819430914012e276E(undefined8 *param_1)

{
  uint local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_148 [2];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined local_118;
  undefined *local_108;
  undefined8 uStack_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  int local_c0 [14];
  uint local_88;
  
  _ZN3std2fs8metadata17h003d8cdbffde7c56E(local_c0);
  if (local_c0[0] == 2) {
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6e54671ee6a51b2aE
              (local_c0);
  }
  else if ((char)local_88 < '\0') {
    *param_1 = 0x8000000000000000;
  }
  else {
    local_16c = local_88 & 0xf7f;
    local_168 = &local_16c;
    uStack_160 = 
    _ZN4core3fmt3num50__LT_impl_u20_core__fmt__Octal_u20_for_u20_i32_GT_3fmt17hf46ebcb02778fa65E;
    local_148[0] = 2;
    local_138 = 0;
    local_130 = 4;
    uStack_128 = 0;
    local_120 = 0x800000020;
    local_118 = 3;
    local_108 = &DAT_0011e7f0;
    uStack_100 = 1;
    local_e8 = local_148;
    local_e0 = 1;
    local_f8 = &local_168;
    local_f0 = 1;
                    /* try { // try from 00204542 to 00204553 has its CatchHandler @ 002045f7 */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h805a87bba4bea7c2E(&local_d8,&local_108);
    local_168 = (uint *)CONCAT44(uStack_d4,local_d8);
    uStack_160 = (code *)CONCAT44(uStack_cc,uStack_d0);
    local_158 = local_c8;
                    /* try { // try from 0020456e to 0020457c has its CatchHandler @ 002045e8 */
    _ZN6uucore8features2fs24display_permissions_unix17ha124e9a87900f11eE(&local_108,local_88,0);
    param_1[4] = uStack_100;
    param_1[5] = local_f8;
    param_1[2] = local_158;
    param_1[3] = local_108;
    *param_1 = local_168;
    param_1[1] = uStack_160;
  }
  return;
}