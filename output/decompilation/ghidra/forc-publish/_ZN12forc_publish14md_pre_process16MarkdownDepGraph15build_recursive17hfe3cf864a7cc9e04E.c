undefined8
_ZN12forc_publish14md_pre_process16MarkdownDepGraph15build_recursive17hfe3cf864a7cc9e04E
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  int local_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined local_78 [8];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  _ZN12forc_publish14md_pre_process12MarkdownFile5parse17h7118ccb081fd3582E(&local_c0);
  uVar6 = CONCAT44(uStack_bc,local_c0);
  uStack_f0 = uStack_b0;
  uVar2 = uStack_f0;
  local_e8 = local_a8;
  uVar3 = local_e8;
  uStack_e0 = uStack_a0;
  uVar4 = uStack_e0;
  local_40 = local_88;
  uStack_38 = uStack_80;
  local_50 = local_98;
  uStack_48 = uStack_90;
  uStack_f0._0_4_ = (int)uStack_b0;
  uStack_f0._4_4_ = (int)((ulong)uStack_b0 >> 0x20);
  local_e8._0_4_ = (int)local_a8;
  local_e8._4_4_ = (int)((ulong)local_a8 >> 0x20);
  uStack_e0._0_4_ = (int)uStack_a0;
  uStack_e0._4_4_ = (int)((ulong)uStack_a0 >> 0x20);
  local_70 = uStack_b8;
  uStack_6c = uStack_b4;
  uStack_68 = (int)uStack_f0;
  uStack_64 = uStack_f0._4_4_;
  local_60 = (int)local_e8;
  uStack_5c = local_e8._4_4_;
  uStack_58 = (int)uStack_e0;
  uStack_54 = uStack_e0._4_4_;
  uVar1 = CONCAT44(uStack_b4,uStack_b8);
                    /* try { // try from 00763b06 to 00763b33 has its CatchHandler @ 00763c6f */
  uStack_f0 = uVar2;
  local_e8 = uVar3;
  uStack_e0 = uVar4;
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hf5c3ac682d18fe48E
            (&local_c0,uVar1,uStack_b0);
  local_e8 = uStack_b0;
  _local_f8 = CONCAT44(uStack_bc,local_c0);
  uStack_f0 = CONCAT44(uStack_b4,uStack_b8);
  cVar5 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h62cde999210e66d7E
                    (param_5,&local_f8);
  if (cVar5 != '\0') {
    param_1[0] = 6;
    param_1[1] = 0;
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h355ad17cb4a62d71E(uVar6,uVar1);
    uVar6 = _ZN4core3ptr83drop_in_place_LT_std__collections__hash__set__HashSet_LT_std__path__PathBuf_GT__GT_17h686131186ad88adfE
                      (&local_60);
    return uVar6;
  }
  local_d0 = uVar1;
  local_c8 = uVar2;
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17h03b7f5d9d5d89134E(&local_c0,&local_60);
  lVar7 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6b0506ffa8a352c7E
                    (&local_c0);
  if (lVar7 != 0) {
    do {
                    /* try { // try from 00763b98 to 00763ba5 has its CatchHandler @ 00763c76 */
      _ZN12forc_publish14md_pre_process16MarkdownDepGraph15build_recursive17hfe3cf864a7cc9e04E
                (&local_f8,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10),param_4,param_5)
      ;
      if (local_f8 != 6) {
        param_1[4] = (int)local_e8;
        param_1[5] = local_e8._4_4_;
        param_1[6] = (int)uStack_e0;
        param_1[7] = uStack_e0._4_4_;
        *param_1 = local_f8;
        param_1[1] = iStack_f4;
        param_1[2] = (int)uStack_f0;
        param_1[3] = uStack_f0._4_4_;
        uVar6 = _ZN4core3ptr112drop_in_place_LT__LP_std__path__PathBuf_C_std__collections__hash__set__HashSet_LT_std__path__PathBuf_GT__RP__GT_17h1e5761008e388593E
                          (local_78);
        return uVar6;
      }
      lVar7 = _ZN92__LT_hashbrown__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6b0506ffa8a352c7E
                        (&local_c0);
    } while (lVar7 != 0);
  }
                    /* try { // try from 00763bb9 to 00763bcf has its CatchHandler @ 00763c6f */
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17hf5c3ac682d18fe48E
            (&local_c0,local_d0,local_c8);
  local_e8 = uStack_b0;
                    /* try { // try from 00763be3 to 00763bfa has its CatchHandler @ 00763c59 */
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17hafd667513fa1eb12E
            (&local_c0,param_4,&local_f8,&local_60);
  _ZN4core3ptr111drop_in_place_LT_core__option__Option_LT_std__collections__hash__set__HashSet_LT_std__path__PathBuf_GT__GT__GT_17hfb38fee258b4889bE
            (&local_c0);
  param_1[0] = 6;
  param_1[1] = 0;
  uVar6 = _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h355ad17cb4a62d71E(uVar6,local_d0);
  return uVar6;
}