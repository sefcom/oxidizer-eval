undefined  [16] _ZN7uu_test6uumain6uumain17h9b4c2f0d3a9c2e97E(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined auVar3 [16];
  char cVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  uint uStack_3d8;
  undefined4 uStack_3d4;
  long local_3d0;
  undefined8 local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined8 local_3a8;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined8 local_388;
  undefined8 local_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined8 local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  undefined4 local_320;
  undefined4 uStack_31c;
  uint uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined local_308;
  undefined7 uStack_307;
  undefined8 local_2e8;
  uint uStack_2e0;
  undefined4 uStack_2dc;
  undefined local_2d8;
  undefined4 uStack_2d7;
  undefined4 uStack_2d3;
  undefined3 uStack_2cf;
  undefined4 uStack_2cc;
  
  local_388 = param_1;
  local_380 = param_2;
  _ZN104__LT_core__iter__adapters__cloned__Cloned_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6c4d509ce1d88ea6E
            (&local_2e8,&local_388);
  if (local_2e8 == -0x8000000000000000) {
    (*(code *)PTR__ZN3std3sys6os_str5bytes5Slice8to_owned17h2d9ba69626881113E_00217f78)
              (&local_378,&DAT_0011341c,4);
  }
  else {
    local_368 = CONCAT35((undefined3)uStack_2d3,CONCAT41(uStack_2d7,local_2d8));
    local_378 = (undefined4)local_2e8;
    uStack_374 = local_2e8._4_4_;
    uStack_370 = uStack_2e0;
    uStack_36c = uStack_2dc;
  }
                    /* try { // try from 00163f32 to 00163f51 has its CatchHandler @ 001642f0 */
  auVar6 = (*(code *)PTR__ZN6uucore9util_name17h60d842bf27b05e82E_00218008)();
  _ZN4core4iter6traits8iterator8Iterator7collect17hef0e0e7de28f3954E(&local_3e0,local_388,local_380)
  ;
  local_2e8 = (ulong)local_2e8._4_4_ << 0x20;
                    /* try { // try from 00163f5d to 00163fd7 has its CatchHandler @ 001642f5 */
  auVar7 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(&local_2e8);
  cVar4 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h4c2f4262fa2cfdd6E
                    (auVar6._0_8_,auVar6._8_8_,auVar7._0_8_,auVar7._8_8_);
  if (cVar4 == '\0') {
LAB_001640ab:
    local_2d8 = (undefined)local_3d0;
    uStack_2d7 = (undefined4)((ulong)local_3d0 >> 8);
    uStack_2d3._0_3_ = (undefined3)((ulong)local_3d0 >> 0x28);
    local_2e8 = CONCAT44(uStack_3dc,local_3e0);
    uStack_2e0 = uStack_3d8;
    uStack_2dc = uStack_3d4;
                    /* try { // try from 001640c5 to 0016422a has its CatchHandler @ 001642eb */
    (*(code *)PTR__ZN7uu_test6parser5parse17h8832bd6d00f7e405E_00218028)(&local_320,&local_2e8);
    if (CONCAT44(uStack_31c,local_320) == 7) {
      local_348 = CONCAT71(uStack_307,local_308);
      local_358 = CONCAT44(uStack_314,uStack_318);
      uStack_350 = uStack_310;
      uStack_34c = uStack_30c;
      _ZN7uu_test6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17hcf64a0467c9be372E
                (&local_2e8,&local_358);
      uVar5 = CONCAT17(local_2d8,CONCAT43(uStack_2dc,uStack_2e0._1_3_));
      uStack_3a0 = uStack_2d7;
      uStack_39c = uStack_2d3;
      local_3a8._0_4_ = (undefined4)CONCAT43(uStack_2dc,uStack_2e0._1_3_);
      local_3a8._4_4_ = (undefined4)((ulong)uVar5 >> 0x20);
      local_3c8 = CONCAT44(local_3a8._4_4_,(undefined4)local_3a8);
      uStack_3c0 = uStack_2d7;
      uStack_3bc = uStack_2d3;
      local_3a8 = uVar5;
      if (local_2e8 == 7) {
        if ((uStack_2e0 & 1) == 0) {
          auVar7 = (*(code *)
                     PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h0b17f6d5d891df77E_00218030
                   )(1);
        }
        else {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = auVar6._8_8_;
          auVar7 = auVar3 << 0x40;
        }
        goto LAB_001642a9;
      }
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0acd09840d63c2afE(&local_2e8);
    }
    else {
      local_3c8 = CONCAT17((undefined)uStack_310,CONCAT43(uStack_314,uStack_318._1_3_));
      uStack_3a0 = (undefined4)CONCAT43(uStack_30c,uStack_310._1_3_);
      uStack_39c._0_3_ = (undefined3)((uint)uStack_30c >> 8);
      uStack_39c = CONCAT13(local_308,(undefined3)uStack_39c);
      uStack_3c0 = uStack_3a0;
      uStack_3bc = CONCAT13(local_308,(undefined3)uStack_39c);
      uStack_2cf = (undefined3)uStack_307;
      uStack_2cc = (undefined4)((uint7)uStack_307 >> 0x18);
      uStack_2dc = uStack_314;
      local_2d8 = (undefined)uStack_310;
      uStack_2d7 = uStack_3a0;
      uStack_2d3 = uStack_3bc;
      uStack_2e0 = uStack_318;
      local_3a8 = local_3c8;
      uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0acd09840d63c2afE(&local_2e8);
    }
    auVar7._8_8_ = &
                   PTR__ZN4core3ptr47drop_in_place_LT_uu_test__error__ParseError_GT_17h24130904f1394e63E_002123a8
    ;
    auVar7._0_8_ = uVar5;
  }
  else {
    if (local_3d0 == 1) {
      cVar4 = _ZN82__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT__RF_str_GT__GT_2eq17ha08c54788d123b03E_specialized_2
                        (*(undefined8 *)(CONCAT44(uStack_3d4,uStack_3d8) + 8),
                         *(undefined8 *)(CONCAT44(uStack_3d4,uStack_3d8) + 0x10));
      if (cVar4 != '\0') {
LAB_00163fca:
        (*(code *)PTR__ZN7uu_test6uu_app17h10b434699cb68342E_00218020)(&local_2e8);
        _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17heac1a9a54e41d20bE
                  (&local_358,&local_3e0);
        _ZN4core4iter6traits8iterator8Iterator5chain17h0c34891eced7376cE
                  (&local_320,&local_378,&local_358);
        _ZN12clap_builder7builder7command7Command16get_matches_from17h51fba41e9672da3dE
                  (&local_358,&local_2e8,&local_320);
        _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17hc9d47db42b7cb236E
                  (&local_358);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = &local_320;
        return auVar6 << 0x40;
      }
      if (local_3d0 == 0) {
                    /* try { // try from 001642c6 to 001642d6 has its CatchHandler @ 001642f5 */
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E_00218038)
                  (0,0,&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00212358);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      cVar4 = _ZN82__LT_std__ffi__os_str__OsString_u20_as_u20_core__cmp__PartialEq_LT__RF_str_GT__GT_2eq17ha08c54788d123b03E_specialized_1
                        (*(undefined8 *)(CONCAT44(uStack_3d4,uStack_3d8) + 8),
                         *(undefined8 *)(CONCAT44(uStack_3d4,uStack_3d8) + 0x10));
      if (cVar4 != '\0') goto LAB_00163fca;
    }
    if (local_3d0 == 0) {
      local_358 = -0x8000000000000000;
    }
    else {
      local_3d0 = local_3d0 + -1;
      local_348 = *(undefined8 *)(CONCAT44(uStack_3d4,uStack_3d8) + 0x10 + local_3d0 * 0x18);
      plVar1 = (long *)(CONCAT44(uStack_3d4,uStack_3d8) + local_3d0 * 0x18);
      local_358 = *plVar1;
      uStack_350 = *(undefined4 *)(plVar1 + 1);
      uStack_34c = *(undefined4 *)((long)plVar1 + 0xc);
                    /* try { // try from 00164085 to 00164095 has its CatchHandler @ 001642d9 */
      if ((local_358 != -0x8000000000000000) &&
         (cVar4 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hf89697c9f8af0cc9E
                            (plVar1[1],local_348,"]",1), cVar4 != '\0')) {
                    /* try { // try from 0016409e to 001640aa has its CatchHandler @ 001642f5 */
        _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_std__ffi__os_str__OsString_GT__GT_17h5245e286bf4b67a3E
                  (&local_358);
        goto LAB_001640ab;
      }
    }
                    /* try { // try from 0016423f to 00164283 has its CatchHandler @ 001642d9 */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hdaaee967a2b5b021E(&local_320)
    ;
    local_2d8 = (undefined)uStack_310;
    uStack_2d7 = (undefined4)(CONCAT44(uStack_30c,uStack_310) >> 8);
    uStack_2e0 = uStack_318;
    uStack_2dc = uStack_314;
    uStack_2d3 = CONCAT13(2,(int3)((uint)uStack_30c >> 8));
    uStack_2cf = 0;
    uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc7e7f6fba09f156bE(&local_2e8);
                    /* try { // try from 00164284 to 00164293 has its CatchHandler @ 001642f5 */
    _ZN4core3ptr75drop_in_place_LT_core__option__Option_LT_std__ffi__os_str__OsString_GT__GT_17h5245e286bf4b67a3E
              (&local_358);
                    /* try { // try from 00164294 to 0016429d has its CatchHandler @ 001642f0 */
    _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h438bb28034b6af7aE
              (&local_3e0);
    auVar7._8_8_ = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17he3dd56b875d0b1acE_00212450
    ;
    auVar7._0_8_ = uVar5;
  }
LAB_001642a9:
  _ZN4core3ptr47drop_in_place_LT_std__ffi__os_str__OsString_GT_17h66f9a4ea636dc8f3E(&local_378);
  return auVar7;
}