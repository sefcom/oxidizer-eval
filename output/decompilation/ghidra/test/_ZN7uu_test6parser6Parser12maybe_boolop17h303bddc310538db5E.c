void _ZN7uu_test6parser6Parser12maybe_boolop17h303bddc310538db5E(int *param_1,undefined8 param_2)

{
  char cVar1;
  int local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_90 [10];
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined local_48 [40];
  
  cVar1 = _ZN7uu_test6parser6Parser14peek_is_boolop17h010fbe45650976acE(param_2);
  if (cVar1 != '\0') {
    _ZN7uu_test6parser6Parser10next_token17h4b6300a6fb2b38c8E(local_48,param_2);
                    /* try { // try from 00157f14 to 00157f23 has its CatchHandler @ 00157feb */
    _ZN7uu_test6parser6Parser4peek17h996512ad2aa27c9fE(local_90,param_2);
    if (local_90[0] == 6) {
                    /* try { // try from 00157f2b to 00157f47 has its CatchHandler @ 00157fd8 */
      _ZN7uu_test6parser6Symbol12into_literal17h1277b0f42f10b0d4E(&local_b8,local_48);
      _ZN7uu_test6parser6Parser7literal17hbd84cf521357194cE(&local_68,param_2,&local_b8);
      if (local_68 != 7) {
        param_1[4] = local_58;
        param_1[5] = iStack_54;
        param_1[6] = iStack_50;
        param_1[7] = iStack_4c;
        *param_1 = local_68;
        param_1[1] = iStack_64;
        param_1[2] = iStack_60;
        param_1[3] = iStack_5c;
        _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h8755b663628e9a4aE(local_90);
        return;
      }
      _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h8755b663628e9a4aE(local_90);
      param_1[0] = 7;
      param_1[1] = 0;
      return;
    }
    _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h8755b663628e9a4aE(local_90);
    _ZN7uu_test6parser6Parser6boolop17h6f7fceace89c923fE(&local_b8,param_2,local_48);
    if ((local_b8 != 7) ||
       (_ZN7uu_test6parser6Parser12maybe_boolop17h303bddc310538db5E(&local_b8,param_2),
       local_b8 != 7)) {
      *(undefined8 *)(param_1 + 4) = local_a8;
      *(undefined8 *)(param_1 + 6) = uStack_a0;
      *(ulong *)param_1 = CONCAT44(uStack_b4,local_b8);
      *(undefined8 *)(param_1 + 2) = uStack_b0;
      return;
    }
  }
  param_1[0] = 7;
  param_1[1] = 0;
  return;
}