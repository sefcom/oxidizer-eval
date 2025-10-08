void _ZN7uu_nice21standardize_nice_args17ha446c24066e6006dE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char cVar7;
  undefined8 uVar8;
  long lVar9;
  bool bVar10;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  ulong local_160;
  ulong local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  ulong local_130;
  ulong local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  ulong uStack_118;
  ulong local_110;
  undefined4 local_108;
  uint uStack_104;
  undefined4 uStack_100;
  uint uStack_fc;
  ulong local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulong local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulong local_98;
  undefined local_88 [24];
  ulong local_70;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined local_48 [24];
  
  local_148 = 0;
  local_140 = 8;
  local_138 = 0;
                    /* try { // try from 00151faf to 00152004 has its CatchHandler @ 00152464 */
  local_e8 = param_2;
  uStack_e0 = param_3;
  _ZN104__LT_core__iter__adapters__cloned__Cloned_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hefdd36b254aeecacE
            (local_88,&local_e8);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6e9c733220ffa76dE
            (&local_148,local_88,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001dad98);
  local_58 = (undefined4)local_e8;
  uStack_54 = local_e8._4_4_;
  uStack_50 = (undefined4)uStack_e0;
  uStack_4c = uStack_e0._4_4_;
  bVar10 = false;
  bVar2 = false;
  local_d0 = param_1;
LAB_00152067:
  do {
    while( true ) {
                    /* try { // try from 00152067 to 0015207b has its CatchHandler @ 0015247f */
      _ZN104__LT_core__iter__adapters__cloned__Cloned_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hefdd36b254aeecacE
                (&local_70,&local_58);
      uVar1 = local_60;
      uVar6 = local_68;
      uVar5 = local_70;
      uVar8 = local_d0;
      if (local_70 == 0x8000000000000000) {
        if (bVar2) {
                    /* try { // try from 001523d3 to 00152412 has its CatchHandler @ 00152464 */
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h2a17592469341a2bE
                    (&local_178,"-n",2);
          uStack_118 = local_168;
          local_128 = local_178;
          uStack_120 = (undefined4)uStack_170;
          uStack_11c = uStack_170._4_4_;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6e9c733220ffa76dE
                    (&local_148,&local_128,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001dadb0);
        }
        _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h0d19ba00dc37477dE
                  (uVar8,&local_148);
        return;
      }
      if (!bVar10) break;
      local_178 = local_70;
      uStack_170 = local_68;
      local_168 = local_60;
                    /* try { // try from 0015204f to 00152064 has its CatchHandler @ 0015247d */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6e9c733220ffa76dE
                (&local_148,&local_178,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001dae40);
LAB_00152065:
      bVar10 = true;
    }
    if (bVar2) {
                    /* try { // try from 001520ae to 001520c1 has its CatchHandler @ 00152494 */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h2a17592469341a2bE
                (&local_178,"-n",2);
      local_b8 = local_168;
      local_c8 = (undefined4)local_178;
      uStack_c4 = local_178._4_4_;
      uStack_c0 = (undefined4)uStack_170;
      uStack_bc = uStack_170._4_4_;
      local_178 = uVar5;
      uStack_170 = uVar6;
      local_168 = uVar1;
                    /* try { // try from 001520eb to 001520f5 has its CatchHandler @ 00152468 */
      _ZN3std3ffi6os_str8OsString4push17hbb638c1a9a460a48E(&local_c8,&local_178);
      bVar10 = false;
                    /* try { // try from 001520f8 to 0015210b has its CatchHandler @ 00152466 */
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6e9c733220ffa76dE
                (&local_148,&local_c8,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001dae28);
      bVar2 = false;
      goto LAB_00152067;
    }
                    /* try { // try from 00152120 to 001521c0 has its CatchHandler @ 00152494 */
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001e1768)
              (&local_178,local_68,local_60);
    if ((((local_178 & 1) == 0) &&
        (cVar7 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h3a1b7041954c085aE
                           (uStack_170,local_168,"-n",2), cVar7 != '\0')) ||
       (((*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_001e1768)
                   (&local_178,uVar6,uVar1), (local_178 & 1) == 0 &&
        (cVar7 = (*(code *)PTR__ZN7uu_nice12is_prefix_of17h0ed73fde36564671E_001e18d0)
                           (uStack_170,local_168,"--adjustment: \n",0xc,3), cVar7 != '\0')))) {
      bVar2 = true;
      bVar10 = false;
    }
    else {
      _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h7186c51e548866d5E
                (local_48,uVar6,uVar1);
      _ZN5alloc6string6String9from_utf817hcb4419710bc0e60bE(&local_178,local_48);
      uVar4 = local_160;
      uVar3 = local_168;
      if (local_178 != 0x8000000000000000) {
        local_f8 = local_168;
        local_108 = (undefined4)local_178;
        uStack_104 = local_178._4_4_;
        uStack_100 = (undefined4)uStack_170;
        uStack_fc = uStack_170._4_4_;
        local_110 = local_168;
        uStack_120 = (undefined4)local_178;
        uStack_11c = local_178._4_4_;
        uStack_118 = uStack_170;
        local_128 = 1;
        _ZN4core3ptr49drop_in_place_LT_clap_builder__error__Message_GT_17h752086c676d8f225E
                  (&local_128);
        local_178 = uVar5;
        uStack_170 = uVar6;
        local_168 = uVar1;
                    /* try { // try from 001522dd to 001522f0 has its CatchHandler @ 0015247d */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6e9c733220ffa76dE
                  (&local_148,&local_178,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001dae10);
        goto LAB_00152065;
      }
      local_f8 = local_160;
      local_108 = (undefined4)uStack_170;
      uStack_104 = uStack_170._4_4_;
      uStack_100 = (undefined4)local_168;
      uStack_fc = local_168._4_4_;
      local_110 = local_160;
      uStack_120 = (undefined4)uStack_170;
      uStack_11c = uStack_170._4_4_;
      uVar1 = local_168;
      local_128 = 0;
      local_150 = uStack_170;
      local_178 = (ulong)local_178._4_4_ << 0x20;
      uStack_118 = uVar1;
      uVar8 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(&local_178);
      lVar9 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                        (uVar8,uVar3,uVar4);
      bVar10 = lVar9 == 0;
      if (bVar10) {
        local_178 = local_150;
        local_168 = uVar4;
                    /* try { // try from 0015230a to 0015231a has its CatchHandler @ 00152462 */
        uStack_170 = uVar1;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6e9c733220ffa76dE
                  (&local_148,&local_178,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001dadf8);
      }
      else {
        local_130 = uVar1;
        _ZN4core3num21__LT_impl_u20_i64_GT_16from_ascii_radix17h7589f30fc8392b2aE(&local_108,lVar9);
        uVar1 = local_130;
        if ((char)local_108 == '\0') {
          uVar8 = CONCAT44(uStack_fc,uStack_100);
                    /* try { // try from 00152332 to 0015234c has its CatchHandler @ 00152434 */
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h2a17592469341a2bE
                    (&local_178,"-n",2);
          local_98 = local_168;
          local_a8 = (undefined4)local_178;
          uStack_a4 = local_178._4_4_;
          uStack_a0 = (undefined4)uStack_170;
          uStack_9c = uStack_170._4_4_;
                    /* try { // try from 00152367 to 00152388 has its CatchHandler @ 00152439 */
          _ZN51__LT_i64_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h60b05a0cf10951a2E
                    (&local_178,uVar8);
          _ZN3std3ffi6os_str8OsString4push17hc6742ad3576a2e2eE(&local_a8,&local_178);
                    /* try { // try from 00152389 to 0015239c has its CatchHandler @ 00152432 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6e9c733220ffa76dE
                    (&local_148,&local_a8,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001dadc8);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb888ef563bfa785fE
                    (local_150,uVar1);
        }
        else {
          local_178 = local_150;
          uStack_170 = local_130;
          local_168 = uVar4;
                    /* try { // try from 0015227a to 0015228f has its CatchHandler @ 00152462 */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6e9c733220ffa76dE
                    (&local_148,&local_178,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001dade0);
        }
      }
    }
    _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h8981e453b21a0f9cE(uVar5,uVar6);
  } while( true );
}