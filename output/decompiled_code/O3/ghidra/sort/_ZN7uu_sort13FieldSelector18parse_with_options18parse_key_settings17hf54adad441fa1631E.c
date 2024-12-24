void __rustcall
uu_sort::FieldSelector::parse_with_options::parse_key_settings
          (long *param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar2;
  undefined uVar3;
  undefined **local_88;
  long lStack_80;
  undefined4 **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_54;
  long local_50;
  long local_48;
  undefined4 *local_40;
  code *local_38;
  
  local_48 = param_3 + param_2;
  local_50 = param_2;
  iVar1 = core::str::validations::next_code_point(&local_50);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar2 = extraout_RDX;
    do {
      local_54 = (undefined4)uVar2;
      switch(local_54) {
      case 0x4d:
        uVar2 = 3;
        break;
      default:
        local_40 = &local_54;
        local_38 = _<char_as_core::fmt::Display>::fmt;
        local_88 = &PTR_s_invalid_option_____002fef98;
        lStack_80 = 2;
        local_68 = 0;
        local_78 = &local_40;
        local_70 = 1;
        core::option::Option<T>::map_or_else(param_1,&local_88);
        return;
      case 0x52:
        uVar2 = 5;
        break;
      case 0x56:
        KeySettings::set_sort_mode(&local_88,param_4,4);
        if (local_88 != (undefined **)0x8000000000000000) {
          param_1[1] = lStack_80;
          param_1[2] = (long)local_78;
          *param_1 = (long)local_88;
          return;
        }
        goto LAB_00220930;
      case 0x62:
        uVar3 = 1;
        goto LAB_00220930;
      case 100:
        KeySettings::set_dictionary_order(&local_88,param_4);
        goto LAB_00220925;
      case 0x66:
        *(undefined *)(param_4 + 1) = 1;
        goto LAB_00220930;
      case 0x67:
        uVar2 = 2;
        break;
      case 0x68:
        uVar2 = 1;
        break;
      case 0x69:
        KeySettings::set_ignore_non_printing(&local_88,param_4);
        goto LAB_00220925;
      case 0x6e:
        uVar2 = 0;
        break;
      case 0x72:
        *(undefined *)(param_4 + 4) = 1;
        goto LAB_00220930;
      }
      KeySettings::set_sort_mode(&local_88,param_4,uVar2);
LAB_00220925:
      if (local_88 != (undefined **)0x8000000000000000) {
        param_1[2] = (long)local_78;
        *param_1 = (long)local_88;
        param_1[1] = lStack_80;
        return;
      }
LAB_00220930:
      iVar1 = core::str::validations::next_code_point(&local_50);
      uVar2 = extraout_RDX_00;
    } while (iVar1 != 0);
  }
  *(undefined *)(param_1 + 1) = uVar3;
  *param_1 = -0x8000000000000000;
  return;
}