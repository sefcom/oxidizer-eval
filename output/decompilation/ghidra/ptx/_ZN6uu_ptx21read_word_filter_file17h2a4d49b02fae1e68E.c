void _ZN6uu_ptx21read_word_filter_file17h2a4d49b02fae1e68E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  int local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined local_48 [24];
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0320162aad36ecc4E
            (&local_108);
  lVar1 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h3979b7ce1fd00743E
                    (param_3,param_4,&local_108);
  if (lVar1 == 0) {
    uVar2 = _ZN4core6option13expect_failed17h9e03a1f6ff88dbcfE
                      ("parsing options failed!",0x17,&PTR_s_src_uu_ptx_src_ptx_rs_003edb68);
                    /* catch() { ... } // from try @ 002b57e6 with catch @ 002b5926 */
    _ZN4core3ptr81drop_in_place_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT_17h7d60a4e4e8510143E
              (&local_78);
    _Unwind_Resume(uVar2);
    return;
  }
  _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
            (local_48,lVar1);
  _ZN3std2fs4File4open17h25307432a9f68270E(&local_108,local_48);
  if (local_108 == 0) {
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17hfe08d7d96eb99100E
              (&local_78,0x2000,uStack_104);
                    /* try { // try from 002b57e6 to 002b57ef has its CatchHandler @ 002b5926 */
    _ZN87__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__default__Default_GT_7default17h46266b0c4833887cE
              (&local_108);
    local_d8 = CONCAT44(uStack_104,local_108);
    uStack_d0 = CONCAT44(uStack_fc,uStack_100);
    local_b8 = local_e8;
    uStack_b0 = uStack_e0;
    local_c8 = local_f8;
    uStack_c0 = uStack_f0;
    local_e8 = local_58;
    uStack_e0 = uStack_50;
    local_f8 = local_68;
    uStack_f0 = uStack_60;
    local_108 = local_78;
    uStack_104 = uStack_74;
    uStack_100 = uStack_70;
    uStack_fc = uStack_6c;
                    /* try { // try from 002b5860 to 002b58a9 has its CatchHandler @ 002b593e */
    while (_ZN82__LT_std__io__Lines_LT_B_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7b587278e9c13b14E
                     (&local_a8,&local_108), local_a8 != -0x7fffffffffffffff) {
      if (local_a8 == -0x8000000000000000) {
        param_1[1] = local_a0;
        *param_1 = 0;
        _ZN4core3ptr103drop_in_place_LT_std__io__Lines_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT__GT_17h61fe1397cadf3f84E
                  (&local_108);
        _ZN4core3ptr86drop_in_place_LT_std__collections__hash__set__HashSet_LT_alloc__string__String_GT__GT_17h0fe902575fe225c7E
                  (&local_d8);
        return;
      }
      local_90 = local_a8;
      local_88 = local_a0;
      local_80 = local_98;
      _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6insert17h9782d684969e794dE
                (&local_d8,&local_90);
    }
    _ZN4core3ptr103drop_in_place_LT_std__io__Lines_LT_std__io__buffered__bufreader__BufReader_LT_std__fs__File_GT__GT__GT_17h61fe1397cadf3f84E
              (&local_108);
    param_1[4] = local_b8;
    param_1[5] = uStack_b0;
    param_1[2] = local_c8;
    param_1[3] = uStack_c0;
    *param_1 = local_d8;
    param_1[1] = uStack_d0;
  }
  else {
    param_1[1] = CONCAT44(uStack_fc,uStack_100);
    *param_1 = 0;
  }
  return;
}