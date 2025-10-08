void _ZN7uu_test6parser6Parser6boolop17h6f7fceace89c923fE
               (int *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_68;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined8 uStack_50;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined8 local_30;
  
                    /* try { // try from 00158025 to 0015808b has its CatchHandler @ 001580de */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h8a1d310fc48c8e88E
            (&local_40,"-a",2);
  uStack_50 = local_30;
  iStack_60 = local_40;
  iStack_5c = iStack_3c;
  iStack_58 = iStack_38;
  iStack_54 = iStack_34;
  local_68 = 2;
  cVar1 = _ZN64__LT_uu_test__parser__Symbol_u20_as_u20_core__cmp__PartialEq_GT_2eq17ha9c8e6b311d8821dE
                    (param_3,&local_68);
  _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h8755b663628e9a4aE(&local_68);
  if (cVar1 == '\0') {
    _ZN7uu_test6parser6Parser4expr17hea95ff6631384a05E(&local_68,param_2);
  }
  else {
    _ZN7uu_test6parser6Parser4term17h32e18b63e31ea2d0E(&local_68,param_2);
  }
  if ((int)local_68 == 7) {
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h51b67e1356e9af09E
              (param_2,param_3,&PTR_s_src_uu_test_src_parser_rs_001e0260);
    param_1[0] = 7;
    param_1[1] = 0;
    return;
  }
  param_1[4] = iStack_58;
  param_1[5] = iStack_54;
  param_1[6] = (int)uStack_50;
  param_1[7] = uStack_50._4_4_;
  *param_1 = (int)local_68;
  param_1[1] = local_68._4_4_;
  param_1[2] = iStack_60;
  param_1[3] = iStack_5c;
  _ZN4core3ptr44drop_in_place_LT_uu_test__parser__Symbol_GT_17h8755b663628e9a4aE(param_3);
  return;
}