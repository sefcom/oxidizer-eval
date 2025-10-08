void _ZN7uu_test6parser6Parser4term17h32e18b63e31ea2d0E(int *param_1,undefined8 param_2)

{
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38 [5];
  
  _ZN7uu_test6parser6Parser10next_token17h4b6300a6fb2b38c8E(local_38);
  switch(local_38[0]) {
  case 0:
                    /* try { // try from 00157722 to 0015772c has its CatchHandler @ 001577cd */
    _ZN7uu_test6parser6Parser6lparen17h3964adf54604f517E(&local_58,param_2);
    goto LAB_00157749;
  case 1:
                    /* try { // try from 0015773e to 00157748 has its CatchHandler @ 001577cd */
    _ZN7uu_test6parser6Parser4bang17h406dcf32b3e8f731E(&local_58,param_2);
LAB_00157749:
    if (local_58 == 7) {
      param_1[0] = 7;
      param_1[1] = 0;
    }
    else {
      *(undefined8 *)(param_1 + 4) = local_48;
      *(undefined8 *)(param_1 + 6) = uStack_40;
      *param_1 = local_58;
      param_1[1] = iStack_54;
      param_1[2] = iStack_50;
      param_1[3] = iStack_4c;
    }
    _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h8755b663628e9a4aE(local_38);
    return;
  default:
    _ZN7uu_test6parser6Parser7literal17hbd84cf521357194cE(&local_58,param_2,local_38);
    if (local_58 != 7) {
      *(undefined8 *)(param_1 + 4) = local_48;
      *(undefined8 *)(param_1 + 6) = uStack_40;
      *(ulong *)param_1 = CONCAT44(iStack_54,local_58);
      *(ulong *)(param_1 + 2) = CONCAT44(iStack_4c,iStack_50);
      return;
    }
    break;
  case 5:
    _ZN7uu_test6parser6Parser3uop17h1b444c1c0da3bc2dE(param_2,local_38);
    break;
  case 6:
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h51b67e1356e9af09E
              (param_2,local_38,&PTR_s_src_uu_test_src_parser_rs_001e01e8);
  }
  param_1[0] = 7;
  param_1[1] = 0;
  return;
}