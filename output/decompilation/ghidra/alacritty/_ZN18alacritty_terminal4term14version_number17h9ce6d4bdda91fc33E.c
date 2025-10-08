long _ZN18alacritty_terminal4term14version_number17h9ce6d4bdda91fc33E
               (undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined4 local_b0 [2];
  long local_a8;
  undefined8 local_a0;
  char local_98 [8];
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined local_70 [48];
  undefined2 local_40;
  
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  auVar6 = _ZN4core3str21__LT_impl_u20_str_GT_5rfind17h5ffd3ec6ac878557E();
  if (((auVar6 & (undefined  [16])0x1) != (undefined  [16])0x0) &&
     (auVar7 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                         (auVar6._8_8_,param_1,param_2), auVar7._0_8_ == 0)) {
    (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_009de180)
              (param_1,param_2,0,auVar6._8_8_,&PTR_s_alacritty_terminal_src_term_mod__00997240);
    pcVar1 = (code *)swi(3);
    lVar4 = (*pcVar1)();
    return lVar4;
  }
  _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_13into_searcher17h19abee4db16fb58dE
            (local_70,0x2e,auVar7._0_8_,auVar7._8_8_);
  local_88 = 0;
  uStack_80 = 0;
  local_40 = 1;
  local_78 = auVar7._8_8_;
  _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hcac804ffefb0fdb3E
            (local_b0,&local_88);
  lVar4 = 0;
  if (local_a8 != 0) {
    do {
      uVar2 = local_b0[0];
      _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                (local_98,local_a8,local_a0);
      lVar5 = local_90;
      if (local_98[0] != '\0') {
        lVar5 = 0;
      }
      lVar3 = _ZN4core3num23__LT_impl_u20_usize_GT_3pow17ha18887787946000dE(uVar2);
      lVar4 = lVar4 + lVar3 * lVar5;
      _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hcac804ffefb0fdb3E
                (local_b0,&local_88);
    } while (local_a8 != 0);
  }
  return lVar4;
}