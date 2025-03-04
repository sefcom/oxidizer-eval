void _ZN7uu_test6parser6Parser12maybe_boolop17h62a19c04e1420d25E(int *param_1,undefined8 param_2)

{
  char cVar1;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined8 local_88;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_58 [10];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  cVar1 = _ZN7uu_test6parser6Parser14peek_is_boolop17h626769eb8da01166E(param_2);
  if (cVar1 == '\0') {
LAB_001af7d4:
    param_1[0] = 7;
    param_1[1] = 0;
  }
  else {
    _ZN7uu_test6parser6Parser10next_token17hec2da245067de41fE(&local_a8,param_2);
                    /* try { // try from 001af70d to 001af71c has its CatchHandler @ 001af811 */
    _ZN7uu_test6parser6Parser4peek17hd4e8be8df06376c2E(local_58,param_2);
    if (local_58[0] == 6) {
      local_b8 = local_88;
      local_c8 = local_98;
      iStack_c4 = iStack_94;
      iStack_c0 = iStack_90;
      iStack_bc = iStack_8c;
      local_d8 = local_a8;
      iStack_d4 = iStack_a4;
      iStack_d0 = iStack_a0;
      iStack_cc = iStack_9c;
                    /* try { // try from 001af744 to 001af7c0 has its CatchHandler @ 001af820 */
      _ZN7uu_test6parser6Symbol12into_literal17hae4d6fad5ad71dcbE(&local_80,&local_d8);
      _ZN7uu_test6parser6Parser7literal17h487831028acf0989E(&local_30,param_2,&local_80);
      local_80 = local_30;
      iStack_7c = iStack_2c;
      iStack_78 = iStack_28;
      iStack_74 = iStack_24;
      local_70 = local_20;
      iStack_6c = iStack_1c;
      iStack_68 = iStack_18;
      iStack_64 = iStack_14;
joined_r0x001af7c5:
      if (local_80 == 7) {
        _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h2e64046051177754E(local_58);
        goto LAB_001af7d4;
      }
    }
    else {
      local_b8 = local_88;
      local_c8 = local_98;
      iStack_c4 = iStack_94;
      iStack_c0 = iStack_90;
      iStack_bc = iStack_8c;
      local_d8 = local_a8;
      iStack_d4 = iStack_a4;
      iStack_d0 = iStack_a0;
      iStack_cc = iStack_9c;
      _ZN7uu_test6parser6Parser6boolop17h3c27ebf1f812d540E(&local_80,param_2,&local_d8);
      if (local_80 == 7) {
        _ZN7uu_test6parser6Parser12maybe_boolop17h62a19c04e1420d25E(&local_d8,param_2);
        local_80 = local_d8;
        iStack_7c = iStack_d4;
        iStack_78 = iStack_d0;
        iStack_74 = iStack_cc;
        local_70 = local_c8;
        iStack_6c = iStack_c4;
        iStack_68 = iStack_c0;
        iStack_64 = iStack_bc;
        goto joined_r0x001af7c5;
      }
    }
    param_1[4] = local_70;
    param_1[5] = iStack_6c;
    param_1[6] = iStack_68;
    param_1[7] = iStack_64;
    *param_1 = local_80;
    param_1[1] = iStack_7c;
    param_1[2] = iStack_78;
    param_1[3] = iStack_74;
    _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h2e64046051177754E(local_58);
  }
  return;
}