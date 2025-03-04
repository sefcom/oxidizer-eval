long * _ZN5uu_wc10count_fast32count_bytes_chars_and_lines_fast17he40ae303cc0bd17fE
                 (long *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined auVar4 [16];
  long local_4038;
  undefined8 local_4030 [512];
  undefined8 local_3030;
  undefined8 local_2030;
  undefined8 local_1030;
  
  local_1030 = 0;
  local_2030 = 0;
  local_3030 = 0;
  local_4030[0] = 0;
  local_4038 = 0;
  (*(code *)PTR_memset_002355d8)(local_4030,0,0x4000);
  lVar3 = 0;
  while( true ) {
    while( true ) {
      auVar4 = _ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_4read17h24fce4ed669fe556E
                         (param_2,local_4030,0x4000);
      lVar2 = auVar4._8_8_;
      if (auVar4._0_8_ == 0) break;
      cVar1 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(lVar2);
      if (cVar1 != '#') {
        *param_1 = local_4038;
        param_1[1] = 0;
        param_1[2] = lVar3;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = lVar2;
        return param_1;
      }
      _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hd9e364499d096c21E
                (lVar2);
    }
    if (lVar2 == 0) break;
    local_4038 = local_4038 + lVar2;
    auVar4 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17hcc9c09d4ae31832dE
                       (lVar2,local_4030,&PTR_s_src_uu_wc_src_count_fast_rs_002312e8);
    lVar2 = _ZN9bytecount5count17h11a8399421fb62feE(auVar4._0_8_,auVar4._8_8_,10);
    lVar3 = lVar3 + lVar2;
  }
  *param_1 = local_4038;
  param_1[1] = 0;
  param_1[2] = lVar3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}