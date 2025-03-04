undefined  [16]
_ZN11uu_truncate6uumain6uumain17h0c8e68cadfde9536E(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined auVar8 [16];
  long local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  long local_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined8 local_62c;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  long local_610;
  undefined4 local_608;
  undefined8 local_5f4;
  undefined4 uStack_5e4;
  undefined4 uStack_5e0;
  undefined4 uStack_5dc;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  long local_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined8 local_5b8;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  long local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  
  (*(code *)PTR__ZN11uu_truncate6uu_app17h12570e18f36d91c3E_00219c18)(&local_5c8);
  _ZN12clap_builder7builder7command7Command10after_help17h49df330ec5fede9aE
            (&local_2f8,&local_5c8,&DAT_00113c9f,0x27e);
  _ZN12clap_builder7builder7command7Command20try_get_matches_from17h1037b302bbbe881dE
            (&local_648,&local_2f8,param_1,param_2);
  if (local_648 == -0x8000000000000000) {
    uVar4 = _ZN11uu_truncate6uumain6uumain28__u7b__u7b_closure_u7d__u7d_17hd9fe050d90548bacE
                      (CONCAT44(uStack_63c,uStack_640));
    auVar8 = (*(code *)
               PTR__ZN6uucore4mods5error121__LT_impl_u20_core__convert__From_LT_i32_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h0b17f6d5d891df77E_00219c20
             )(uVar4);
    return auVar8;
  }
  local_5f4 = local_62c;
  uStack_5e4 = uStack_61c;
  uStack_5e0 = uStack_618;
  uStack_5dc = uStack_614;
  local_610 = local_648;
  local_608 = uStack_640;
  uVar6 = *(undefined8 *)PTR__ZN11uu_truncate7options9ARG_FILES17hc74d5664c242eaf0E_00219c28;
  uVar1 = *(undefined8 *)(PTR__ZN11uu_truncate7options9ARG_FILES17hc74d5664c242eaf0E_00219c28 + 8);
                    /* try { // try from 001654f7 to 0016558a has its CatchHandler @ 001657d4 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h3e7c2a7a3a63bbf0E
            (&local_5c8,&local_610,uVar6,uVar1);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h6e8d32f6c2c83abbE
            (&local_2f8,uVar6,uVar1,&local_5c8);
  if (local_2f8 == 0) {
    local_660 = 0;
    local_658 = 8;
    uStack_650 = 0;
  }
  else {
    local_598 = local_2c8;
    uStack_594 = uStack_2c4;
    uStack_590 = uStack_2c0;
    uStack_58c = uStack_2bc;
    local_5a8 = local_2d8;
    uStack_5a4 = uStack_2d4;
    uStack_5a0 = uStack_2d0;
    uStack_59c = uStack_2cc;
    local_5b8 = local_2e8;
    uStack_5b0 = uStack_2e0;
    uStack_5ac = uStack_2dc;
    local_5c8 = local_2f8;
    uStack_5c0 = (undefined4)uStack_2f0;
    uStack_5bc = uStack_2f0._4_4_;
    _ZN111__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter_nested__SpecFromIterNested_LT_T_C_I_GT__GT_9from_iter17h7b2255f83d8edb92E
              (&local_648,&local_5c8);
    local_658 = CONCAT44(uStack_63c,uStack_640);
    uStack_650 = CONCAT44(uStack_634,uStack_638);
    local_660 = local_648;
    if (uStack_650 != 0) {
                    /* try { // try from 001655b9 to 001656ae has its CatchHandler @ 001657c5 */
      uVar2 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00219c38
              )(&local_610,
                *(undefined8 *)PTR__ZN11uu_truncate7options9IO_BLOCKS17ha2b1febcfcfbcee0E_00219c30,
                *(undefined8 *)
                 (PTR__ZN11uu_truncate7options9IO_BLOCKS17ha2b1febcfcfbcee0E_00219c30 + 8));
      uVar3 = (*(code *)
                PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE_00219c38
              )(&local_610,
                *(undefined8 *)PTR__ZN11uu_truncate7options9NO_CREATE17hb6d5a1980fdf49e5E_00219c40,
                *(undefined8 *)
                 (PTR__ZN11uu_truncate7options9NO_CREATE17hb6d5a1980fdf49e5E_00219c40 + 8));
      uVar6 = *(undefined8 *)PTR__ZN11uu_truncate7options9REFERENCE17h6c70a849f5a595beE_00219c48;
      uVar1 = *(undefined8 *)
               (PTR__ZN11uu_truncate7options9REFERENCE17h6c70a849f5a595beE_00219c48 + 8);
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h468bfd82c89ebd5dE
                (&local_5c8,&local_610,uVar6,uVar1);
      lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf82e8f120b72c731E
                        (uVar6,uVar1,&local_5c8);
      if (lVar5 == 0) {
        local_648 = -0x8000000000000000;
      }
      else {
        _ZN4core3ops8function6FnOnce9call_once17h4b133a0e04674206E(&local_5c8,lVar5);
        uStack_638 = (undefined4)local_5b8;
        uStack_634 = (undefined4)((ulong)local_5b8 >> 0x20);
        local_648 = local_5c8;
        uStack_640 = uStack_5c0;
        uStack_63c = uStack_5bc;
      }
      uVar6 = *(undefined8 *)PTR__ZN11uu_truncate7options4SIZE17h8592621bba85a515E_00219c50;
      uVar1 = *(undefined8 *)(PTR__ZN11uu_truncate7options4SIZE17h8592621bba85a515E_00219c50 + 8);
                    /* try { // try from 001656d1 to 00165710 has its CatchHandler @ 001657b6 */
      _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h468bfd82c89ebd5dE
                (&local_5c8,&local_610,uVar6,uVar1);
      lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hf82e8f120b72c731E
                        (uVar6,uVar1,&local_5c8);
      lVar5 = -0x8000000000000000;
      if (lVar7 != 0) {
        _ZN4core3ops8function6FnOnce9call_once17h4b133a0e04674206E(&local_5c8,lVar7);
        local_5d8 = CONCAT44(uStack_5bc,uStack_5c0);
        uStack_5d0 = local_5b8;
        lVar5 = local_5c8;
      }
      local_2e8 = CONCAT44(uStack_634,uStack_638);
      uStack_2f0 = CONCAT44(uStack_63c,uStack_640);
      local_2f8 = local_648;
      uStack_5c0 = (undefined4)local_5d8;
      uStack_5bc = local_5d8._4_4_;
      local_5b8 = uStack_5d0;
                    /* try { // try from 00165765 to 00165781 has its CatchHandler @ 001657b4 */
      local_5c8 = lVar5;
      auVar8 = (*(code *)PTR__ZN11uu_truncate8truncate17hee69817ccf70944aE_00219c58)
                         (uVar3,uVar2,&local_2f8,&local_5c8,local_658,uStack_650);
      goto LAB_00165788;
    }
  }
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h8cb729a4d94b595fE(&local_2f8);
  local_5b8 = local_2e8;
  local_5c8 = local_2f8;
  uStack_5c0 = (undefined4)uStack_2f0;
  uStack_5bc = uStack_2f0._4_4_;
  uStack_5b0 = 1;
  uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h85a8fb1d47923e38E(&local_5c8);
  auVar8._8_8_ = &
                 PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h688a7972d607e167E_00213d00
  ;
  auVar8._0_8_ = uVar6;
LAB_00165788:
                    /* try { // try from 00165788 to 00165791 has its CatchHandler @ 001657d4 */
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h0308458d1b814dddE
            (&local_660);
  _ZN4core3ptr75drop_in_place_LT_clap_builder__parser__matches__arg_matches__ArgMatches_GT_17h6e2ae3c626541b13E
            (&local_610);
  return auVar8;
}