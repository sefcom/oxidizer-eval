undefined8 * __rustcall uu_wc::Inputs::new(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_b8,param_2,&DAT_0011e45a,5);
  clap_builder::parser::error::MatchesError::unwrap(&local_f8,&DAT_0011e45a,5,&local_b8);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_b8,param_2,"files0-from",0xb);
  lVar1 = clap_builder::parser::error::MatchesError::unwrap("files0-from",0xb,&local_b8);
  if (CONCAT44(uStack_f4,local_f8) == 0) {
    if (lVar1 == 0) {
      *param_1 = 0;
    }
    else {
      _<uu_wc::Input_as_core::convert::From<&T>>::from(&local_118,lVar1);
                    /* try { // try from 001b9007 to 001b9013 has its CatchHandler @ 001b9108 */
      Input::try_as_files0(&local_b8,&local_118);
      lVar1 = CONCAT44(uStack_b4,local_b8);
      if (lVar1 == -0x8000000000000000) {
        param_1[3] = local_108;
        param_1[1] = local_118;
        param_1[2] = uStack_110;
        *param_1 = 2;
      }
      else {
        if (lVar1 == -0x7fffffffffffffff) {
          param_1[1] = CONCAT44(uStack_ac,uStack_b0);
          param_1[2] = CONCAT44(uStack_a4,local_a8);
          *param_1 = 3;
        }
        else {
          *param_1 = 1;
          param_1[1] = lVar1;
          param_1[2] = CONCAT44(uStack_ac,uStack_b0);
          param_1[3] = CONCAT44(uStack_a4,local_a8);
        }
        core::ptr::drop_in_place<uu_wc::Input>(&local_118);
      }
    }
  }
  else if (lVar1 == 0) {
    local_38 = local_c8;
    uStack_34 = uStack_c4;
    uStack_30 = uStack_c0;
    uStack_2c = uStack_bc;
    local_48 = local_d8;
    uStack_44 = uStack_d4;
    uStack_40 = uStack_d0;
    uStack_3c = uStack_cc;
    local_58 = local_e8;
    uStack_54 = uStack_e4;
    uStack_50 = uStack_e0;
    uStack_4c = uStack_dc;
    local_68 = local_f8;
    uStack_64 = uStack_f4;
    uStack_60 = uStack_f0;
    uStack_5c = uStack_ec;
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (param_1 + 1,&local_68);
    *param_1 = 1;
  }
  else {
    local_88 = local_c8;
    uStack_84 = uStack_c4;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    local_98 = local_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    local_a8 = local_e8;
    uStack_a4 = uStack_e4;
    uStack_a0 = uStack_e0;
    uStack_9c = uStack_dc;
    local_b8 = local_f8;
    uStack_b4 = uStack_f4;
    uStack_b0 = uStack_f0;
    uStack_ac = uStack_ec;
    lVar1 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
            ::next(&local_b8);
    if (lVar1 == 0) {
      uVar2 = core::option::unwrap_failed(&PTR_s_src_uu_wc_src_wc_rs_00231f50);
                    /* catch() { ... } // from try @ 001b9007 with catch @ 001b9108 */
                    /* try { // try from 001b910b to 001b9112 has its CatchHandler @ 001b911b */
      core::ptr::drop_in_place<uu_wc::Input>(&local_118);
      puVar3 = (undefined8 *)_Unwind_Resume(uVar2);
      return puVar3;
    }
    WcError::files_disabled(&local_118,*(undefined8 *)(lVar1 + 8),*(undefined8 *)(lVar1 + 0x10));
    uVar2 = ::alloc::boxed::Box<T>::new(&local_118);
    param_1[1] = uVar2;
    param_1[2] = &PTR_drop_in_place<uu_wc_WcError>_00231fa0;
    *param_1 = 3;
  }
  return param_1;
}