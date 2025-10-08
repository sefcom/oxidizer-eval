void _ZN6uu_ptx21read_word_filter_file17h6d54f7ff60ca3df7E
               (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  char local_124;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h88d1a3ba1868cd68E
            (&local_118);
  lVar3 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h04f490a5ade46ed0E
                    (param_3,param_4,&local_118);
  if (lVar3 == 0) {
    uVar4 = (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_0037ff10)
                      ("parsing options failed!",0x17,&PTR_s_src_uu_ptx_src_ptx_rs_00351668);
                    /* catch() { ... } // from try @ 0022aad2 with catch @ 0022ab67 */
    _ZN4core3ptr86drop_in_place_LT_std__collections__hash__set__HashSet_LT_alloc__string__String_GT__GT_17h4d7c816e60293aedE
              (&local_c8);
    if (local_124 != '\0') {
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E(local_e0);
    }
    _Unwind_Resume(uVar4);
    return;
  }
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_0037fed8
  )(local_e0,lVar3);
  cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hc639eb17d6278023E
                    (local_d8,local_d0,"-",1);
  if (cVar2 == '\0') {
    _ZN3std2fs4File4open17h019c38f8f9e56350E(&local_118,local_e0);
    if (local_118 == 1) {
      *(ulong *)(param_1 + 2) = CONCAT44(iStack_10c,iStack_110);
      param_1[0] = 0;
      param_1[1] = 0;
      return;
    }
    bVar1 = false;
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h78f68dd9e7792e5eE(iStack_114);
    ppuVar5 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h1597f39cce541ee6E_00351680;
  }
  else {
                    /* try { // try from 0022a97d to 0022a9e5 has its CatchHandler @ 0022ab7e */
    uVar4 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_00380290)();
    bVar1 = true;
    uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h16f26c34398979dfE(uVar4);
    ppuVar5 = (undefined **)&DAT_003516d8;
  }
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h3d0c7b14f6b3f130E
            (&local_68,uVar4,ppuVar5);
                    /* try { // try from 0022a9e6 to 0022a9f8 has its CatchHandler @ 0022ab6c */
  _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h5d2cbf9a529b523aE
            (&local_118);
  local_c8 = local_118;
  iStack_c4 = iStack_114;
  iStack_c0 = iStack_110;
  iStack_bc = iStack_10c;
  local_a8 = local_f8;
  uStack_a0 = uStack_f0;
  local_b8 = local_108;
  uStack_b0 = uStack_100;
  local_e8 = local_38;
  local_f8 = local_48;
  uStack_f0 = uStack_40;
  local_108 = local_58;
  uStack_100 = uStack_50;
  local_118 = local_68;
  iStack_114 = uStack_64;
  iStack_110 = uStack_60;
  iStack_10c = uStack_5c;
  do {
                    /* try { // try from 0022aa80 to 0022aacf has its CatchHandler @ 0022ab87 */
    _ZN82__LT_std__io__Lines_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hf1a349345bfe7630E
              (&local_98,&local_118);
    if (local_98 == -0x7fffffffffffffff) {
                    /* try { // try from 0022aad2 to 0022ab3a has its CatchHandler @ 0022ab67 */
      _ZN4core3ptr136drop_in_place_LT_std__io__Lines_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT__GT_17h7e59a5e3ea852bfdE
                (&local_118);
      *(undefined8 *)(param_1 + 8) = local_a8;
      *(undefined8 *)(param_1 + 10) = uStack_a0;
      *(undefined8 *)(param_1 + 4) = local_b8;
      *(undefined8 *)(param_1 + 6) = uStack_b0;
      *param_1 = local_c8;
      param_1[1] = iStack_c4;
      param_1[2] = iStack_c0;
      param_1[3] = iStack_bc;
      if (bVar1) {
LAB_0022ab05:
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E(local_e0);
      }
      return;
    }
    if (local_98 == -0x8000000000000000) {
      *(undefined8 *)(param_1 + 2) = local_90;
      param_1[0] = 0;
      param_1[1] = 0;
      _ZN4core3ptr136drop_in_place_LT_std__io__Lines_LT_std__io__buffered__bufreader__BufReader_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_GT__GT__GT__GT_17h7e59a5e3ea852bfdE
                (&local_118);
      _ZN4core3ptr86drop_in_place_LT_std__collections__hash__set__HashSet_LT_alloc__string__String_GT__GT_17h4d7c816e60293aedE
                (&local_c8);
      if (!bVar1) {
        return;
      }
      goto LAB_0022ab05;
    }
    local_80 = local_98;
    local_78 = local_90;
    local_70 = local_88;
    _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17hcab8d607c758db94E(&local_c8,&local_80);
  } while( true );
}