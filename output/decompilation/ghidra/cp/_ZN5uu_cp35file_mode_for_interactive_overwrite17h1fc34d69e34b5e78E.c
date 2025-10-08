void _ZN5uu_cp35file_mode_for_interactive_overwrite17h1fc34d69e34b5e78E(undefined8 *param_1)

{
  uint local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined *local_108;
  undefined8 uStack_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  int local_c0 [14];
  uint local_88;
  
  _ZN3std2fs8metadata17h87a95e5fd9b91fc7E(local_c0);
  if (local_c0[0] == 2) {
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17he37bb0d8b54bbf24E
              (local_c0);
    return;
  }
  if (-1 < (char)local_88) {
    local_12c = local_88 & 0xf7f;
    local_128 = &local_12c;
    uStack_120 = 
    PTR__ZN4core3fmt3num50__LT_impl_u20_core__fmt__Octal_u20_for_u20_i32_GT_3fmt17h84d633f3d5886597E_00267c30
    ;
    local_108 = &DAT_00120910;
    uStack_100 = 1;
    puStack_e8 = &DAT_00124bf8;
    local_e0 = 1;
    local_f8 = &local_128;
    local_f0 = 1;
                    /* try { // try from 001a128c to 001a129a has its CatchHandler @ 001a133d */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha891a5b84284deb4E(&local_d8,&local_108);
    local_128 = (uint *)CONCAT44(uStack_d4,local_d8);
    uStack_120 = (undefined *)CONCAT44(uStack_cc,uStack_d0);
    local_118 = local_c8;
                    /* try { // try from 001a12af to 001a12bd has its CatchHandler @ 001a132e */
    (*(code *)PTR__ZN6uucore8features2fs24display_permissions_unix17hf65510d5c6517b79E_00267c38)
              (&local_d8,local_88,0);
    param_1[4] = CONCAT44(uStack_cc,uStack_d0);
    param_1[5] = local_c8;
    param_1[2] = local_118;
    param_1[3] = CONCAT44(uStack_d4,local_d8);
    *param_1 = local_128;
    param_1[1] = uStack_120;
    return;
  }
  *param_1 = 0x8000000000000000;
  return;
}