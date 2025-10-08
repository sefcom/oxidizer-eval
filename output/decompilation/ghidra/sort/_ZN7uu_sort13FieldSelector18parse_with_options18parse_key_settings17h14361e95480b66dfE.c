void _ZN7uu_sort13FieldSelector18parse_with_options18parse_key_settings17h14361e95480b66dfE
               (long *param_1,long param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined uVar2;
  undefined auVar3 [16];
  undefined **local_88;
  long lStack_80;
  undefined4 **ppuStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_54;
  long local_50;
  long local_48;
  undefined4 *local_40;
  undefined *local_38;
  
  local_48 = param_3 + param_2;
  local_50 = param_2;
  auVar3 = _ZN4core3str11validations15next_code_point17h9988461282470584E(&local_50);
  uVar1 = auVar3._8_8_;
  uVar2 = 0;
  if ((auVar3 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    uVar2 = 0;
    do {
      local_54 = (undefined4)uVar1;
      switch(local_54) {
      case 0x4d:
        _ZN7uu_sort11KeySettings13set_sort_mode17h0494465a2c1513d1E(&local_88,param_4,3);
        goto joined_r0x001d3849;
      default:
        local_40 = &local_54;
        local_38 = 
        PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_002975b0;
        local_88 = &PTR_s_invalid_option_____0028d098;
        lStack_80 = 2;
        local_68 = 0;
        ppuStack_78 = &local_40;
        local_70 = 1;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h9f6bdb3fe8306f69E(param_1,&local_88);
        return;
      case 0x52:
        uVar1 = 5;
        goto LAB_001d3815;
      case 0x56:
        uVar1 = 4;
        goto LAB_001d3815;
      case 0x62:
        uVar2 = 1;
        break;
      case 100:
        _ZN7uu_sort11KeySettings20set_dictionary_order17h7dadc9f8379aee5dE(&local_88,param_4);
        goto joined_r0x001d3849;
      case 0x66:
        *(undefined *)(param_4 + 1) = 1;
        break;
      case 0x67:
        _ZN7uu_sort11KeySettings13set_sort_mode17h0494465a2c1513d1E(&local_88,param_4,2);
        goto joined_r0x001d3849;
      case 0x68:
        _ZN7uu_sort11KeySettings13set_sort_mode17h0494465a2c1513d1E(&local_88,param_4,1);
joined_r0x001d3849:
        if (local_88 != (undefined **)0x8000000000000000) {
          param_1[2] = (long)ppuStack_78;
          *param_1 = (long)local_88;
          param_1[1] = lStack_80;
          return;
        }
        break;
      case 0x69:
        _ZN7uu_sort11KeySettings23set_ignore_non_printing17hb18c264c9cade1efE(&local_88,param_4);
        goto joined_r0x001d37e5;
      case 0x6e:
        uVar1 = 0;
LAB_001d3815:
        _ZN7uu_sort11KeySettings13set_sort_mode17h0494465a2c1513d1E(&local_88,param_4,uVar1);
joined_r0x001d37e5:
        if (local_88 != (undefined **)0x8000000000000000) {
          param_1[1] = lStack_80;
          param_1[2] = (long)ppuStack_78;
          *param_1 = (long)local_88;
          return;
        }
        break;
      case 0x72:
        *(undefined *)(param_4 + 4) = 1;
      }
      auVar3 = _ZN4core3str11validations15next_code_point17h9988461282470584E(&local_50);
      uVar1 = auVar3._8_8_;
    } while ((auVar3 & (undefined  [16])0x1) != (undefined  [16])0x0);
  }
  *(undefined *)(param_1 + 1) = uVar2;
  *param_1 = -0x8000000000000000;
  return;
}