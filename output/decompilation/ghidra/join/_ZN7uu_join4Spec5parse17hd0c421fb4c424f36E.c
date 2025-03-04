void _ZN7uu_join4Spec5parse17hd0c421fb4c424f36E(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined uVar4;
  undefined8 *local_b0;
  code *local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined local_88;
  long local_80;
  long local_78;
  undefined **local_70;
  undefined **local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_40 [24];
  undefined4 local_28;
  
  local_78 = param_2 + param_3;
  local_80 = param_2;
  iVar1 = _ZN4core3str11validations15next_code_point17hd261ae405076a208E(&local_80);
  iVar2 = 0x110000;
  if (iVar1 != 0) {
    iVar2 = extraout_EDX;
  }
  local_98 = param_2;
  local_90 = param_3;
  if (iVar2 == 0x30) {
    iVar2 = _ZN4core3str11validations15next_code_point17hd261ae405076a208E(&local_80);
    if (iVar2 == 0) {
      *(undefined *)(param_1 + 1) = 0;
      uVar3 = 0;
      goto LAB_001c3901;
    }
    local_70 = &PTR_s_invalid_field_specifier__00235260;
LAB_001c389e:
    local_b0 = &local_a0;
    local_88 = 1;
    local_a0 = 0;
    local_a8 = 
    _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
    local_68 = (undefined **)0x1;
    local_50 = 0;
    local_60 = &local_b0;
    local_58 = 1;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h84da32fb4d9c85b4E(local_40,&local_70);
    local_28 = 1;
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7aaaeb17d3fe937dE(local_40);
    param_1[1] = uVar3;
    local_68 = &
               PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17heab0da165463435bE_002352b8
    ;
  }
  else {
    if (iVar2 == 0x31) {
      uVar4 = 0;
    }
    else {
      if (iVar2 != 0x32) {
        local_70 = &PTR_s_invalid_file_number_in_field_spe_00235270;
        goto LAB_001c389e;
      }
      uVar4 = 1;
    }
    iVar2 = _ZN4core3str11validations15next_code_point17hd261ae405076a208E(&local_80);
    if ((iVar2 == 0) || (extraout_EDX_00 != 0x2e)) {
      local_a0 = 0;
      local_88 = 1;
      local_b0 = &local_a0;
      local_a8 = 
      _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
      local_70 = &PTR_s_invalid_field_specifier__00235260;
      local_68 = (undefined **)0x1;
      local_50 = 0;
      local_60 = &local_b0;
      local_58 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h84da32fb4d9c85b4E(local_40,&local_70);
      local_28 = 1;
      uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h7aaaeb17d3fe937dE(local_40);
      param_1[1] = uVar3;
      param_1[2] = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17heab0da165463435bE_002352b8
      ;
      *param_1 = 1;
      return;
    }
    uVar3 = _ZN4core5slice4iter13Iter_LT_T_GT_10make_slice17h63c620eea536cd3eE(local_80,local_78);
    _ZN7uu_join18parse_field_number17h9316b11a89c3fc26E(&local_70,uVar3);
    if (local_70 == (undefined **)0x0) {
      *(undefined *)(param_1 + 1) = 1;
      *(undefined *)((long)param_1 + 9) = uVar4;
      param_1[2] = local_68;
      uVar3 = 0;
      goto LAB_001c3901;
    }
    param_1[1] = local_70;
  }
  param_1[2] = local_68;
  uVar3 = 1;
LAB_001c3901:
  *param_1 = uVar3;
  return;
}