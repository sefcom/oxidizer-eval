void __rustcall uu_join::Spec::parse(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined uVar3;
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
  iVar1 = core::str::validations::next_code_point(&local_80);
  local_98 = param_2;
  local_90 = param_3;
  if (iVar1 == 0) {
LAB_001c3781:
    local_70 = &PTR_s_invalid_file_number_in_field_spe_00235eb8;
LAB_001c37b6:
    local_b0 = &local_a0;
    local_88 = 1;
    local_a0 = 0;
    local_a8 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
    local_68 = (undefined **)0x1;
    local_50 = 0;
    local_60 = &local_b0;
    local_58 = 1;
    core::option::Option<T>::map_or_else(local_40,&local_70);
    local_28 = 1;
    uVar2 = ::alloc::boxed::Box<T>::new(local_40);
    param_1[1] = uVar2;
    local_68 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00235e48;
  }
  else {
    if (extraout_EDX == 0x30) {
      iVar1 = core::str::validations::next_code_point(&local_80);
      if (iVar1 == 0) {
        *(undefined *)(param_1 + 1) = 0;
        uVar2 = 0;
        goto LAB_001c3819;
      }
      local_70 = &PTR_s_invalid_field_specifier__00235e00;
      goto LAB_001c37b6;
    }
    if (extraout_EDX == 0x31) {
      uVar3 = 0;
    }
    else {
      if (extraout_EDX != 0x32) goto LAB_001c3781;
      uVar3 = 1;
    }
    iVar1 = core::str::validations::next_code_point(&local_80);
    if ((iVar1 == 0) || (extraout_EDX_00 != 0x2e)) {
      local_a0 = 0;
      local_88 = 1;
      local_b0 = &local_a0;
      local_a8 = _<os_display::Quoted_as_core::fmt::Display>::fmt;
      local_70 = &PTR_s_invalid_field_specifier__00235e00;
      local_68 = (undefined **)0x1;
      local_50 = 0;
      local_60 = &local_b0;
      local_58 = 1;
      core::option::Option<T>::map_or_else(local_40,&local_70);
      local_28 = 1;
      uVar2 = ::alloc::boxed::Box<T>::new(local_40);
      param_1[1] = uVar2;
      param_1[2] = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00235e48;
      *param_1 = 1;
      return;
    }
    uVar2 = core::slice::iter::Iter<T>::make_slice(local_80,local_78);
    parse_field_number(&local_70,uVar2);
    if (local_70 == (undefined **)0x0) {
      *(undefined *)(param_1 + 1) = 1;
      *(undefined *)((long)param_1 + 9) = uVar3;
      param_1[2] = local_68;
      uVar2 = 0;
      goto LAB_001c3819;
    }
    param_1[1] = local_70;
  }
  param_1[2] = local_68;
  uVar2 = 1;
LAB_001c3819:
  *param_1 = uVar2;
  return;
}