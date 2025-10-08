void _ZN5uu_wc10count_fast32count_bytes_chars_and_lines_fast17h010e9b1655211949E
               (undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  long local_4040;
  undefined8 local_4030 [512];
  undefined8 local_3030;
  undefined8 local_2030;
  undefined8 local_1030;
  
  local_1030 = 0;
  local_2030 = 0;
  local_3030 = 0;
  local_4030[0] = 0;
  lVar4 = 0;
  (*(code *)PTR_memset_001ffc38)(local_4030,0,0x4000);
  local_4040 = 0;
  while( true ) {
    while( true ) {
      auVar5 = (*(code *)
                 PTR__ZN59__LT_std__io__stdio__StdinLock_u20_as_u20_std__io__Read_GT_4read17ha94ed9861f25a8f0E_001ffc40
               )(param_2,local_4030,0x4000);
      lVar3 = auVar5._8_8_;
      if ((auVar5 & (undefined  [16])0x1) == (undefined  [16])0x0) break;
      cVar1 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(lVar3);
      if (cVar1 != '#') {
        *param_1 = 0;
        param_1[1] = lVar4;
        param_1[2] = local_4040;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = lVar3;
        return;
      }
      _ZN4core3ptr76drop_in_place_LT_core__result__Result_LT_u64_C_std__io__error__Error_GT__GT_17h06d3f45961b15e39E
                (auVar5._0_8_,lVar3);
    }
    if (lVar3 == 0) break;
                    /* try { // try from 001637ef to 00163840 has its CatchHandler @ 001638ae */
    auVar5 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h7028662c39c50e0fE
                       (0,lVar3,local_4030,0x4000,&PTR_DAT_001f8f28);
    lVar2 = (*(code *)PTR__ZN9bytecount9num_chars17hb6a8e991551eb7acE_001ffc68)
                      (auVar5._0_8_,auVar5._8_8_);
    auVar5 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h7028662c39c50e0fE
                       (0,lVar3,local_4030,0x4000,&PTR_DAT_001f8f40);
    lVar3 = (*(code *)PTR__ZN9bytecount5count17ha8ef7b6513bc7b05E_001ffc70)
                      (auVar5._0_8_,auVar5._8_8_,10);
    lVar4 = lVar4 + lVar2;
    local_4040 = local_4040 + lVar3;
  }
  *param_1 = 0;
  param_1[1] = lVar4;
  param_1[2] = local_4040;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}