undefined  [16]
_ZN11uu_truncate6uumain6uumain17hc59688359ed7db22E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined uVar3;
  undefined uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  long lStack_660;
  long local_658;
  undefined8 local_650;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined8 local_634;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined8 local_618;
  long lStack_610;
  long local_608 [8];
  undefined8 local_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  long lStack_5b8;
  undefined4 local_5b0;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined8 local_2dc;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  
  (*(code *)PTR__ZN11uu_truncate6uu_app17hdd46c0ec29db3c96E_001e9f98)(&local_5c8);
  _ZN12clap_builder7builder7command7Command10after_help17h93c5b958f3e6e2f5E(&local_2f8,&local_5c8);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h5bad56e246aa6345E
            (&local_650,&local_2f8,param_1,param_2);
  local_2dc = local_634;
  uStack_2cc = uStack_624;
  uStack_2c8 = uStack_620;
  uStack_2c4 = uStack_61c;
  local_2f8 = local_650;
  local_2f0 = uStack_648;
  uVar7 = *(undefined8 *)PTR__ZN11uu_truncate7options9ARG_FILES17h0386a5ed0f2c208fE_001e9fa8;
  uVar6 = *(undefined8 *)(PTR__ZN11uu_truncate7options9ARG_FILES17h0386a5ed0f2c208fE_001e9fa8 + 8);
                    /* try { // try from 00151ff6 to 0015204f has its CatchHandler @ 001522bb */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h3cb968340e7a0f4bE
            (&local_5c8,&local_2f8,uVar7,uVar6);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17ha470b431c55a6e52E
            (local_608,uVar7,uVar6,&local_5c8);
  if (local_608[0] == 0) {
    local_670 = 0;
    local_668 = 8;
    lStack_660 = 0;
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h7b889cea2390c813E(&local_5c8,local_608);
    lVar2 = lStack_5b8;
    local_668 = CONCAT44(uStack_5bc,uStack_5c0);
    lStack_660 = lStack_5b8;
    local_670 = local_5c8;
    if (lStack_5b8 != 0) {
                    /* try { // try from 00152086 to 001521a3 has its CatchHandler @ 001522c0 */
      uVar3 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e9fb8
              )(&local_2f8,
                *(undefined8 *)PTR__ZN11uu_truncate7options9IO_BLOCKS17h060e566275d81ce7E_001e9fb0,
                *(undefined8 *)
                 (PTR__ZN11uu_truncate7options9IO_BLOCKS17h060e566275d81ce7E_001e9fb0 + 8));
      uVar4 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001e9fb8
              )(&local_2f8,
                *(undefined8 *)PTR__ZN11uu_truncate7options9NO_CREATE17h6f1c12c51793c0daE_001e9fc0,
                *(undefined8 *)
                 (PTR__ZN11uu_truncate7options9NO_CREATE17h6f1c12c51793c0daE_001e9fc0 + 8));
      uVar7 = *(undefined8 *)PTR__ZN11uu_truncate7options9REFERENCE17hba8e36a707a4ae72E_001e9fc8;
      uVar6 = *(undefined8 *)
               (PTR__ZN11uu_truncate7options9REFERENCE17hba8e36a707a4ae72E_001e9fc8 + 8);
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h61814e5dbf06aec6E
                (&local_5c8,&local_2f8,uVar7,uVar6);
      lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h83f48b54c0d1fd04E
                        (uVar7,uVar6,&local_5c8);
      if (lVar5 == 0) {
        uVar7 = 0x8000000000000000;
      }
      else {
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_001e9fd0
        )(&local_5c8,lVar5);
        local_678 = CONCAT44(uStack_5bc,uStack_5c0);
        local_658 = lStack_5b8;
        uVar7 = local_5c8;
      }
      uVar6 = *(undefined8 *)PTR__ZN11uu_truncate7options4SIZE17h76f346e109a09105E_001e9fd8;
      uVar1 = *(undefined8 *)(PTR__ZN11uu_truncate7options4SIZE17h76f346e109a09105E_001e9fd8 + 8);
                    /* try { // try from 001521c7 to 0015220a has its CatchHandler @ 001522a9 */
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h61814e5dbf06aec6E
                (&local_5c8,&local_2f8,uVar6,uVar1);
      lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h83f48b54c0d1fd04E
                        (uVar6,uVar1,&local_5c8);
      uVar6 = 0x8000000000000000;
      if (lVar5 != 0) {
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_001e9fd0
        )(&local_5c8,lVar5);
        local_618 = CONCAT44(uStack_5bc,uStack_5c0);
        lStack_610 = lStack_5b8;
        uVar6 = local_5c8;
      }
      uStack_648 = (undefined4)local_678;
      uStack_644 = (undefined4)((ulong)local_678 >> 0x20);
      uStack_640 = (undefined4)local_658;
      uStack_63c = (undefined4)((ulong)local_658 >> 0x20);
      uStack_5c0 = (undefined4)local_618;
      uStack_5bc = local_618._4_4_;
      lStack_5b8 = lStack_610;
                    /* try { // try from 00152253 to 00152271 has its CatchHandler @ 001522a7 */
      local_650 = uVar7;
      local_5c8 = uVar6;
      auVar8 = (*(code *)PTR__ZN11uu_truncate8truncate17h52f8d6c8d64891bbE_001e9fe0)
                         (uVar4,uVar3,&local_650,&local_5c8,local_668,lVar2);
      goto LAB_00152278;
    }
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h9f89098cee83c347E
            (&local_650,"missing file operand",0x14);
  lStack_5b8 = CONCAT44(uStack_63c,uStack_640);
  local_5c8 = local_650;
  uStack_5c0 = uStack_648;
  uStack_5bc = uStack_644;
  local_5b0 = 1;
  uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hf83a7bf746887be6E(&local_5c8);
  auVar8._8_8_ = &
                 PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17hd4412599c427e617E_001e3360
  ;
  auVar8._0_8_ = uVar7;
LAB_00152278:
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hcf68ae0edfb67feaE
            (&local_670);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h955e414f5a76f3cdE
            (&local_2f8);
  return auVar8;
}