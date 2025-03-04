void _ZN7uu_sort7tmp_dir14remove_tmp_dir17hb29bcebd506123fbE(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_130;
  char local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8 [6];
  undefined8 local_88;
  undefined8 local_58;
  char local_50;
  undefined local_48 [24];
  
  _ZN3std2fs8read_dir17h88d360110f1c898cE(&local_130,param_1,param_2);
  if (local_128 != '\x02') {
    local_b8[0] = 0;
    local_88 = 0;
    local_58 = local_130;
    local_50 = local_128;
    local_120 = param_1;
    local_118 = param_2;
    while( true ) {
                    /* try { // try from 00248d00 to 00248d0a has its CatchHandler @ 00248da3 */
      _ZN116__LT_core__iter__adapters__flatten__FlattenCompat_LT_I_C_U_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h30eeda6b5a39150fE
                (&local_e0,local_b8);
      if (CONCAT44(uStack_dc,local_e0) == 0) break;
      local_e8 = local_c0;
      local_f8 = local_d0;
      uStack_f4 = uStack_cc;
      uStack_f0 = uStack_c8;
      uStack_ec = uStack_c4;
      local_108 = local_e0;
      uStack_104 = uStack_dc;
      uStack_100 = uStack_d8;
      uStack_fc = uStack_d4;
                    /* try { // try from 00248d31 to 00248d4e has its CatchHandler @ 00248da8 */
      _ZN3std2fs8DirEntry4path17h5b1bdb0f1090af27E(local_48,&local_108);
      local_110 = _ZN3std2fs11remove_file17he37f30a9858e45d8E(local_48);
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hf659f53abfc6eaaaE
                (&local_110);
                    /* try { // try from 00248d4f to 00248d56 has its CatchHandler @ 00248da3 */
      _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h89d34a4c50312286E(&local_108);
    }
                    /* try { // try from 00248d59 to 00248d65 has its CatchHandler @ 00248d9e */
    _ZN4core3ptr83drop_in_place_LT_core__iter__adapters__flatten__Flatten_LT_std__fs__ReadDir_GT__GT_17hd0b6e5634b978dd8E
              (local_b8);
    param_2 = local_118;
    param_1 = local_120;
    if (local_128 != '\x02') goto LAB_00248d81;
  }
  _ZN4core3ptr89drop_in_place_LT_core__result__Result_LT_std__fs__ReadDir_C_std__io__error__Error_GT__GT_17h754fa70ba625a57eE
            (&local_130);
LAB_00248d81:
  _ZN3std2fs10remove_dir17h42b234ef27cdf199E(param_1,param_2);
  return;
}