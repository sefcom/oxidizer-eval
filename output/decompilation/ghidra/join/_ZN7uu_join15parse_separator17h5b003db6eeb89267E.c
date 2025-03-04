void _ZN7uu_join15parse_separator17h5b003db6eeb89267E
               (undefined8 *param_1,undefined *param_2,long param_3)

{
  undefined uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  long local_a0;
  long local_98;
  undefined **local_90;
  long local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_60;
  long local_58;
  long *local_50;
  code *local_48;
  undefined local_40 [24];
  undefined4 local_28;
  
  if (param_3 == 1) {
    uVar1 = *param_2;
    *param_1 = 0x8000000000000000;
    *(undefined *)(param_1 + 1) = uVar1;
  }
  else if (param_3 == 0) {
    *param_1 = 0x8000000000000002;
  }
  else {
    _ZN3std3ffi6os_str95__LT_impl_u20_core__convert__TryFrom_LT__RF_std__ffi__os_str__OsStr_GT__u20_for_u20__RF_str_GT_8try_from17h660bab9c45707695E
              (&local_90);
    if (local_90 == (undefined **)0x0) {
      local_60 = local_88;
      local_58 = (long)local_80;
      local_98 = local_88 + (long)local_80;
      local_a0 = local_88;
      iVar3 = _ZN4core3str11validations15next_code_point17hd261ae405076a208E(&local_a0);
      if ((iVar3 == 0) || (extraout_EDX == 0x110000)) {
        _ZN4core6option13expect_failed17h9e03a1f6ff88dbcfE
                  ("valid string with at least one byte",0x23,
                   &PTR_s_src_uu_join_src_join_rs_00235478);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar3 = _ZN4core3str11validations15next_code_point17hd261ae405076a208E(&local_a0);
      if (iVar3 == 0) {
        _ZN80__LT_alloc__vec__Vec_LT_u8_GT__u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h4f184cf760c10fc8E
                  (param_1,local_88,local_80);
      }
      else if ((extraout_EDX == 0x5c) && (extraout_EDX_00 == 0x30)) {
        *param_1 = 0x8000000000000000;
        *(undefined *)(param_1 + 1) = 0;
      }
      else {
        local_50 = &local_60;
        local_48 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h096fdbe421567f22E;
        local_90 = &PTR_s_multi_character_tab_00235468;
        local_88 = 1;
        local_70 = 0;
        local_80 = &local_50;
        local_78 = 1;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h84da32fb4d9c85b4E(local_40,&local_90);
        local_28 = 1;
        uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7aaaeb17d3fe937dE(local_40);
        param_1[1] = uVar4;
        param_1[2] = &
                     PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17heab0da165463435bE_002352b8
        ;
        *param_1 = 0x8000000000000004;
      }
    }
    else {
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h2c5bde50ee02e8d6E
                (&local_90,"non-UTF-8 multi-byte tab",0x18);
      local_78 = CONCAT44(local_78._4_4_,1);
      uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7aaaeb17d3fe937dE(&local_90);
      param_1[1] = uVar4;
      param_1[2] = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17heab0da165463435bE_002352b8
      ;
      *param_1 = 0x8000000000000004;
    }
  }
  return;
}