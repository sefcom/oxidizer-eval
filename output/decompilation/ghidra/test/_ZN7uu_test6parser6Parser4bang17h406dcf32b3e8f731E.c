void _ZN7uu_test6parser6Parser4bang17h406dcf32b3e8f731E(int *param_1,long param_2)

{
  undefined8 local_128;
  int iStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  uint local_e0 [2];
  int *local_d8;
  long local_d0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int iStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  long local_80 [5];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined local_38 [40];
  
  _ZN7uu_test6parser6Parser4peek17h996512ad2aa27c9fE(local_80);
  if ((local_80[0] != 2) && ((int)local_80[0] != 4)) {
    if ((int)local_80[0] == 6) {
      local_128 = 1;
                    /* try { // try from 00157bf1 to 00157c22 has its CatchHandler @ 00157e8f */
      _ZN7uu_test6parser6Symbol12into_literal17h1277b0f42f10b0d4E(&local_b8,&local_128);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h51b67e1356e9af09E
                (param_2,&local_b8,&PTR_s_src_uu_test_src_parser_rs_001e0218);
      goto LAB_00157ddb;
    }
                    /* try { // try from 00157cb2 to 00157d01 has its CatchHandler @ 00157e8f */
    _ZN88__LT_core__iter__adapters__peekable__Peekable_LT_I_GT__u20_as_u20_core__clone__Clone_GT_5clone17h51d9b9dc2856ac23E
              (&local_b8,param_2 + 0x18);
    local_f8 = local_88;
    local_108 = local_98;
    uStack_104 = uStack_94;
    uStack_100 = uStack_90;
    uStack_fc = uStack_8c;
    local_118 = local_a8;
    iStack_114 = iStack_a4;
    iStack_110 = iStack_a0;
    iStack_10c = iStack_9c;
    local_128 = CONCAT44(uStack_b4,local_b8);
    iStack_120 = iStack_b0;
    iStack_11c = iStack_ac;
    local_f0 = 4;
    _ZN4core4iter6traits8iterator8Iterator7collect17h07229457d4e30845E(local_e0,&local_128);
    if ((((local_d0 == 3) && (*local_d8 == 3)) && (local_d8[10] == 2)) && (local_d8[0x14] == 3)) {
                    /* try { // try from 00157d20 to 00157d7f has its CatchHandler @ 00157e5a */
      _ZN7uu_test6parser6Parser4expr17hea95ff6631384a05E(&local_128,param_2);
      if ((int)local_128 != 7) {
LAB_00157e05:
        param_1[4] = local_118;
        param_1[5] = iStack_114;
        param_1[6] = iStack_110;
        param_1[7] = iStack_10c;
        *param_1 = (int)local_128;
        param_1[1] = local_128._4_4_;
        param_1[2] = iStack_120;
        param_1[3] = iStack_11c;
        _ZN4core3ptr67drop_in_place_LT_alloc__vec__Vec_LT_uu_test__parser__Symbol_GT__GT_17h9359e9a929ed7bbeE
                  (local_e0);
        goto LAB_00157e42;
      }
      local_128 = 1;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h51b67e1356e9af09E
                (param_2,&local_128,&PTR_s_src_uu_test_src_parser_rs_001e0230);
    }
    else {
      _ZN7uu_test6parser6Parser4term17h32e18b63e31ea2d0E(&local_128,param_2);
      if ((int)local_128 != 7) goto LAB_00157e05;
      local_128 = 1;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h51b67e1356e9af09E
                (param_2,&local_128,&PTR_s_src_uu_test_src_parser_rs_001e0248);
    }
    _ZN4core3ptr67drop_in_place_LT_alloc__vec__Vec_LT_uu_test__parser__Symbol_GT__GT_17h9359e9a929ed7bbeE
              (local_e0);
    goto LAB_00157ddb;
  }
  _ZN88__LT_core__iter__adapters__peekable__Peekable_LT_I_GT__u20_as_u20_core__clone__Clone_GT_5clone17h51d9b9dc2856ac23E
            (&local_128,param_2 + 0x18);
                    /* try { // try from 00157c23 to 00157c3e has its CatchHandler @ 00157e7c */
  _ZN108__LT_core__iter__adapters__peekable__Peekable_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3nth17hdfe50a6a2be8fc23E
            (&local_b8,&local_128);
  _ZN7uu_test6parser6Symbol3new17habde89fb8e284063E(local_e0,&local_b8);
                    /* try { // try from 00157c3f to 00157ca8 has its CatchHandler @ 00157ea7 */
  _ZN4core3ptr134drop_in_place_LT_core__iter__adapters__peekable__Peekable_LT_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__GT__GT_17h84df26e0d136ee61E
            (&local_128);
  if ((local_e0[0] | 2) == 6) {
    _ZN7uu_test6parser6Parser10next_token17h4b6300a6fb2b38c8E(&local_128,param_2);
    _ZN7uu_test6parser6Symbol12into_literal17h1277b0f42f10b0d4E(local_38,&local_128);
    _ZN7uu_test6parser6Parser7literal17hbd84cf521357194cE(&local_128,param_2,local_38);
    if ((int)local_128 != 7) {
LAB_00157dfa:
      local_58 = (int)local_128;
      iStack_54 = local_128._4_4_;
      iStack_50 = iStack_120;
      iStack_4c = iStack_11c;
      local_48 = local_118;
      iStack_44 = iStack_114;
      iStack_40 = iStack_110;
      iStack_3c = iStack_10c;
LAB_00157e31:
      param_1[4] = local_48;
      param_1[5] = iStack_44;
      param_1[6] = iStack_40;
      param_1[7] = iStack_3c;
      *param_1 = local_58;
      param_1[1] = iStack_54;
      param_1[2] = iStack_50;
      param_1[3] = iStack_4c;
      _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h8755b663628e9a4aE(local_e0);
LAB_00157e42:
      _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h8755b663628e9a4aE(local_80);
      return;
    }
    local_128 = 1;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h51b67e1356e9af09E
              (param_2,&local_128,&PTR_s_src_uu_test_src_parser_rs_001e0200);
  }
  else {
    local_128 = 1;
                    /* try { // try from 00157d94 to 00157dca has its CatchHandler @ 00157ea7 */
    _ZN7uu_test6parser6Symbol12into_literal17h1277b0f42f10b0d4E(&local_b8,&local_128);
    _ZN7uu_test6parser6Parser7literal17hbd84cf521357194cE(&local_58,param_2,&local_b8);
    if (local_58 != 7) goto LAB_00157e31;
    _ZN7uu_test6parser6Parser12maybe_boolop17h303bddc310538db5E(&local_128,param_2);
    if ((int)local_128 != 7) goto LAB_00157dfa;
  }
  _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h8755b663628e9a4aE(local_e0);
LAB_00157ddb:
  _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h8755b663628e9a4aE(local_80);
  param_1[0] = 7;
  param_1[1] = 0;
  return;
}