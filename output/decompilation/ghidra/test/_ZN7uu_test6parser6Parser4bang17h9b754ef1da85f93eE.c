void _ZN7uu_test6parser6Parser4bang17h9b754ef1da85f93eE(int *param_1,long param_2)

{
  undefined8 local_148;
  int iStack_140;
  int iStack_13c;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined local_110 [8];
  int *local_108;
  long local_100;
  long local_e8 [5];
  uint local_c0 [10];
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [40];
  
  _ZN7uu_test6parser6Parser4peek17hd4e8be8df06376c2E(local_e8);
  if ((local_e8[0] != 2) && ((int)local_e8[0] != 4)) {
    if ((int)local_e8[0] == 6) {
      local_148 = 1;
                    /* try { // try from 001af43b to 001af465 has its CatchHandler @ 001af6bc */
      _ZN7uu_test6parser6Symbol12into_literal17hae4d6fad5ad71dcbE(local_110,&local_148);
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h254fc79c897546acE(param_2,local_110);
      goto LAB_001af61b;
    }
                    /* try { // try from 001af4f4 to 001af54c has its CatchHandler @ 001af6bc */
    _ZN88__LT_core__iter__adapters__peekable__Peekable_LT_I_GT__u20_as_u20_core__clone__Clone_GT_5clone17h86ce5a051be3bc0bE
              (&local_148,param_2 + 0x18);
    local_48 = local_118;
    local_58 = local_128;
    uStack_54 = uStack_124;
    uStack_50 = uStack_120;
    uStack_4c = uStack_11c;
    local_68 = local_138;
    iStack_64 = iStack_134;
    iStack_60 = iStack_130;
    iStack_5c = iStack_12c;
    local_78 = (int)local_148;
    uStack_74 = local_148._4_4_;
    iStack_70 = iStack_140;
    iStack_6c = iStack_13c;
    local_40 = 4;
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h676d59df733cc62aE
              (local_110,&local_78);
    if ((((local_100 == 3) && (*local_108 == 3)) && (local_108[10] == 2)) && (local_108[0x14] == 3))
    {
                    /* try { // try from 001af56b to 001af5bc has its CatchHandler @ 001af68e */
      _ZN7uu_test6parser6Parser4expr17h14b244d6254724abE(&local_148,param_2);
      if ((int)local_148 != 7) {
LAB_001af639:
        param_1[4] = local_138;
        param_1[5] = iStack_134;
        param_1[6] = iStack_130;
        param_1[7] = iStack_12c;
        *param_1 = (int)local_148;
        param_1[1] = local_148._4_4_;
        param_1[2] = iStack_140;
        param_1[3] = iStack_13c;
                    /* try { // try from 001af649 to 001af678 has its CatchHandler @ 001af6bc */
        _ZN4core3ptr67drop_in_place_LT_alloc__vec__Vec_LT_uu_test__parser__Symbol_GT__GT_17h8be5e6021bc91ab2E
                  (local_110);
        goto LAB_001af679;
      }
      local_148 = 1;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h254fc79c897546acE(param_2,&local_148);
    }
    else {
      _ZN7uu_test6parser6Parser4term17h385cc0ae73b5bef0E(&local_148,param_2);
      if ((int)local_148 != 7) goto LAB_001af639;
      local_148 = 1;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h254fc79c897546acE(param_2,&local_148);
    }
                    /* try { // try from 001af5bd to 001af5c6 has its CatchHandler @ 001af6bc */
    _ZN4core3ptr67drop_in_place_LT_alloc__vec__Vec_LT_uu_test__parser__Symbol_GT__GT_17h8be5e6021bc91ab2E
              (local_110);
    goto LAB_001af61b;
  }
  _ZN88__LT_core__iter__adapters__peekable__Peekable_LT_I_GT__u20_as_u20_core__clone__Clone_GT_5clone17h86ce5a051be3bc0bE
            (&local_148,param_2 + 0x18);
                    /* try { // try from 001af466 to 001af484 has its CatchHandler @ 001af69d */
  _ZN108__LT_core__iter__adapters__peekable__Peekable_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3nth17h06598638d93f08d0E
            (local_110,&local_148);
  _ZN7uu_test6parser6Symbol3new17ha5314f5fa26867b7E(local_c0,local_110);
                    /* try { // try from 001af485 to 001af4ea has its CatchHandler @ 001af6aa */
  _ZN4core3ptr134drop_in_place_LT_core__iter__adapters__peekable__Peekable_LT_alloc__vec__into_iter__IntoIter_LT_std__ffi__os_str__OsString_GT__GT__GT_17h1d252f4392002ad9E
            (&local_148);
  if ((local_c0[0] | 2) == 6) {
    _ZN7uu_test6parser6Parser10next_token17hec2da245067de41fE(&local_148,param_2);
    _ZN7uu_test6parser6Symbol12into_literal17hae4d6fad5ad71dcbE(local_38,&local_148);
    _ZN7uu_test6parser6Parser7literal17h487831028acf0989E(&local_148,param_2,local_38);
    if ((int)local_148 != 7) {
LAB_001af62e:
      local_98 = (int)local_148;
      iStack_94 = local_148._4_4_;
      iStack_90 = iStack_140;
      iStack_8c = iStack_13c;
      local_88 = local_138;
      iStack_84 = iStack_134;
      iStack_80 = iStack_130;
      iStack_7c = iStack_12c;
LAB_001af665:
      param_1[4] = local_88;
      param_1[5] = iStack_84;
      param_1[6] = iStack_80;
      param_1[7] = iStack_7c;
      *param_1 = local_98;
      param_1[1] = iStack_94;
      param_1[2] = iStack_90;
      param_1[3] = iStack_8c;
      _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h2e64046051177754E(local_c0);
LAB_001af679:
      _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h2e64046051177754E(local_e8);
      return;
    }
    local_148 = 1;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h254fc79c897546acE(param_2,&local_148);
  }
  else {
    local_148 = 1;
                    /* try { // try from 001af5d1 to 001af607 has its CatchHandler @ 001af6aa */
    _ZN7uu_test6parser6Symbol12into_literal17hae4d6fad5ad71dcbE(local_110,&local_148);
    _ZN7uu_test6parser6Parser7literal17h487831028acf0989E(&local_98,param_2,local_110);
    if (local_98 != 7) goto LAB_001af665;
    _ZN7uu_test6parser6Parser12maybe_boolop17h62a19c04e1420d25E(&local_148,param_2);
    if ((int)local_148 != 7) goto LAB_001af62e;
  }
                    /* try { // try from 001af60e to 001af61a has its CatchHandler @ 001af6bc */
  _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h2e64046051177754E(local_c0);
LAB_001af61b:
  _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h2e64046051177754E(local_e8);
  param_1[0] = 7;
  param_1[1] = 0;
  return;
}