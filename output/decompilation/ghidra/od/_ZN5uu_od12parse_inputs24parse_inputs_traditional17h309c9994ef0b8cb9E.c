void _ZN5uu_od12parse_inputs24parse_inputs_traditional17h309c9994ef0b8cb9E
               (undefined8 *param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *local_a8;
  code *pcStack_a0;
  undefined **local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  switch(param_3) {
  case 0:
    puVar2 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
    if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 0016a836 to 0016a84e has its CatchHandler @ 0016aaab */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h96e753ece9c12536E
                (&local_90,"-",1);
      puVar2[2] = local_80;
      *puVar2 = local_90;
      puVar2[1] = uStack_88;
      *param_1 = 1;
      param_1[1] = puVar2;
      param_1[2] = 1;
      param_1[4] = 2;
      return;
    }
    uVar3 = (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_0020ac28)(8,0x18);
                    /* catch() { ... } // from try @ 0016a836 with catch @ 0016aaab */
    _ZN72__LT_alloc__boxed__Box_LT_T_C_A_GT__u20_as_u20_core__ops__drop__Drop_GT_4drop17h3a4937d7afaf011fE
              (param_2);
    _Unwind_Resume(uVar3);
    return;
  case 1:
    _ZN5uu_od12parse_inputs20parse_offset_operand17ha005a18be9ae1bf0E
              (&local_a8,*(undefined8 *)param_2,*(undefined8 *)((long)param_2 + 8));
    if (local_a8 == (undefined8 *)0x0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h96e753ece9c12536E
                (&local_90,"-",1);
      uVar3 = 0;
      param_2 = pcStack_a0;
    }
    else {
      _ZN4core4iter6traits8iterator8Iterator7collect17h449e225e68ca9fd4E
                (&local_90,param_2,(undefined8 *)((long)param_2 + 0x10));
      uVar3 = 2;
    }
    param_1[2] = local_80;
    *param_1 = local_90;
    param_1[1] = uStack_88;
    param_1[3] = param_2;
    param_1[4] = uVar3;
    return;
  case 2:
    uVar3 = *(undefined8 *)param_2;
    uVar1 = *(undefined8 *)((long)param_2 + 8);
    _ZN5uu_od12parse_inputs20parse_offset_operand17ha005a18be9ae1bf0E(&local_50,uVar3,uVar1);
    _ZN5uu_od12parse_inputs20parse_offset_operand17ha005a18be9ae1bf0E
              (&local_60,*(undefined8 *)((long)param_2 + 0x10),*(undefined8 *)((long)param_2 + 0x18)
              );
    if (local_50 == 0 && local_60 == 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h96e753ece9c12536E
                (param_1,"-",1);
      param_1[3] = local_48;
      param_1[4] = 1;
      param_1[5] = local_58;
      return;
    }
    if (local_60 == 0) {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h96e753ece9c12536E
                (param_1,uVar3,uVar1);
      param_1[3] = local_58;
      param_1[4] = 0;
      return;
    }
    break;
  case 3:
    _ZN5uu_od12parse_inputs20parse_offset_operand17ha005a18be9ae1bf0E
              (&local_40,*(undefined8 *)((long)param_2 + 0x10),*(undefined8 *)((long)param_2 + 0x18)
              );
    _ZN5uu_od12parse_inputs20parse_offset_operand17ha005a18be9ae1bf0E
              (&local_30,*(undefined8 *)((long)param_2 + 0x20),*(undefined8 *)((long)param_2 + 0x28)
              );
    if (local_40 == 0) {
      if (local_30 == 0) {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h96e753ece9c12536E
                  (param_1,*(undefined8 *)param_2,*(undefined8 *)((long)param_2 + 8));
        param_1[3] = local_38;
        param_1[4] = 1;
        param_1[5] = local_28;
        return;
      }
      local_a8 = (undefined8 *)((long)param_2 + 0x20);
      local_90 = &PTR_s_invalid_label__00202718;
      goto LAB_0016a9c8;
    }
    break;
  default:
    local_a8 = (undefined8 *)((long)param_2 + 0x30);
    local_90 = &PTR_s_too_many_inputs_after___traditio_00202728;
    goto LAB_0016a9c8;
  }
  local_a8 = (undefined8 *)((long)param_2 + 0x10);
  local_90 = &PTR_DAT_00202708;
LAB_0016a9c8:
  pcStack_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haf6b42bb4c53f309E;
  uStack_88 = 1;
  local_70 = 0;
  local_78 = 1;
  local_80 = (undefined *)&local_a8;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h56b2ee9aee1b26d0E(param_1,&local_90);
  param_1[4] = 3;
  return;
}