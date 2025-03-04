void _ZN7uu_sort13FieldSelector18parse_with_options18parse_key_settings17hbaa53af66f7d56a7E
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
  iVar1 = _ZN4core3str11validations15next_code_point17h7a92bc82d8dec435E(&local_50);
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
        goto LAB_00221953;
      default:
        local_40 = &local_54;
        local_38 = _ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17hfe75cd72bcd9c522E;
        local_88 = &PTR_s_invalid_option_____002ffac0;
        lStack_80 = 2;
        local_68 = 0;
        local_78 = &local_40;
        local_70 = 1;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h391d7c162d69f44bE(param_1,&local_88);
        return;
      case 0x52:
        uVar2 = 5;
        goto LAB_002218a2;
      case 0x56:
        uVar2 = 4;
        goto LAB_002218a2;
      case 0x62:
        uVar3 = 1;
        break;
      case 100:
        _ZN7uu_sort11KeySettings20set_dictionary_order17h4d79f3dcf023ab93E(&local_88,param_4);
        goto joined_r0x00221909;
      case 0x66:
        *(undefined *)(param_4 + 1) = 1;
        break;
      case 0x67:
        uVar2 = 2;
        goto LAB_00221953;
      case 0x68:
        uVar2 = 1;
LAB_00221953:
        _ZN7uu_sort11KeySettings13set_sort_mode17h47a8d4b518e5b435E(&local_88,param_4,uVar2);
joined_r0x00221909:
        if (local_88 != (undefined **)0x8000000000000000) {
          param_1[2] = (long)local_78;
          *param_1 = (long)local_88;
          param_1[1] = lStack_80;
          return;
        }
        break;
      case 0x69:
        _ZN7uu_sort11KeySettings23set_ignore_non_printing17h0e99c66f0992ecc6E(&local_88,param_4);
        goto joined_r0x00221909;
      case 0x6e:
        uVar2 = 0;
LAB_002218a2:
        _ZN7uu_sort11KeySettings13set_sort_mode17h47a8d4b518e5b435E(&local_88,param_4,uVar2);
        if (local_88 != (undefined **)0x8000000000000000) {
          param_1[1] = lStack_80;
          param_1[2] = (long)local_78;
          *param_1 = (long)local_88;
          return;
        }
        break;
      case 0x72:
        *(undefined *)(param_4 + 4) = 1;
      }
      iVar1 = _ZN4core3str11validations15next_code_point17h7a92bc82d8dec435E(&local_50);
      uVar2 = extraout_RDX_00;
    } while (iVar1 != 0);
  }
  *(undefined *)(param_1 + 1) = uVar3;
  *param_1 = -0x8000000000000000;
  return;
}