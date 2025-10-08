undefined8 *
_ZN4just8function11sha256_file17hb1a94a1611e16d13E
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 extraout_RDX;
  undefined auVar1 [16];
  int local_174;
  undefined local_170 [8];
  undefined8 local_168;
  undefined8 local_160;
  undefined *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  int *local_e0;
  code *local_d8;
  int local_d0;
  int local_cc;
  undefined8 local_c8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined local_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  _ZN4just17execution_context16ExecutionContext17working_directory17hcc9cc51d43cb6ad6E
            (&local_158,*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(*param_2 + 0x18));
                    /* try { // try from 0036be2b to 0036be3d has its CatchHandler @ 0036c02a */
  _ZN3std4path4Path4join17h1eac0ae5e7efa361E
            (local_170,CONCAT44(uStack_14c,uStack_150),
             CONCAT44(local_148._4_4_,(undefined4)local_148),param_3,param_4);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_158);
                    /* try { // try from 0036be48 to 0036be8f has its CatchHandler @ 0036c059 */
  _ZN90__LT_digest__core_api__wrapper__CoreWrapper_LT_T_GT__u20_as_u20_core__default__Default_GT_7default17h9a28c815d5f91f76E
            (local_98);
  _ZN3std2fs4File4open17h45fcbefa67649d55E(&local_d0,local_170);
  if (local_d0 == 1) {
    _ZN4just8function11sha256_file28__u7b__u7b_closure_u7d__u7d_17h43210169c1a0a0a3E
              (&local_158,local_168,local_160,local_c8);
    *(undefined4 *)((long)param_1 + 0x1c) = local_148._4_4_;
    *(ulong *)((long)param_1 + 0x14) = CONCAT44((undefined4)local_148,uStack_14c);
    param_1[1] = local_158;
    *(undefined4 *)(param_1 + 2) = uStack_150;
    *param_1 = 1;
  }
  else {
    local_174 = local_cc;
                    /* try { // try from 0036bec7 to 0036bfe3 has its CatchHandler @ 0036c03d */
    auVar1 = _ZN3std2io4copy12generic_copy17h24f40be1ad75b38bE(&local_174,local_98);
    if ((auVar1 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      local_f8 = local_38;
      uStack_f0 = uStack_30;
      local_108 = local_48;
      uStack_100 = uStack_40;
      local_118 = local_58;
      uStack_110 = uStack_50;
      local_128 = local_68;
      uStack_124 = uStack_64;
      uStack_120 = uStack_60;
      uStack_11c = uStack_5c;
      uStack_130 = uStack_70;
      uStack_12c = uStack_6c;
      local_148._0_4_ = local_88;
      local_148._4_4_ = uStack_84;
      uStack_150 = uStack_90;
      uStack_14c = uStack_8c;
      _ZN6digest11FixedOutput14finalize_fixed17hb4d87fe511f17e43E(&local_d0,&local_158);
      local_d8 = 
      _ZN13generic_array3hex91__LT_impl_u20_core__fmt__LowerHex_u20_for_u20_generic_array__GenericArray_LT_u8_C_T_GT__GT_3fmt17hce58fbd6baa0c32bE
      ;
      local_158 = &DAT_00165db0;
      uStack_150 = 1;
      uStack_14c = 0;
      local_138 = 0;
      local_148 = &local_e0;
      uStack_140 = 1;
      local_e0 = &local_d0;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E
                (&local_b0,0,extraout_RDX,&local_158);
      param_1[3] = local_a0;
      param_1[1] = local_b0;
      param_1[2] = uStack_a8;
      *param_1 = 0;
    }
    else {
      _ZN4just8function11sha256_file28__u7b__u7b_closure_u7d__u7d_17h450eee988ec28aa6E
                (&local_158,local_168,local_160,auVar1._8_8_);
      param_1[1] = local_158;
      param_1[2] = CONCAT44(uStack_14c,uStack_150);
      param_1[3] = local_148;
      *param_1 = 1;
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h58ff0428143f7132E(local_174);
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(local_170);
  return param_1;
}