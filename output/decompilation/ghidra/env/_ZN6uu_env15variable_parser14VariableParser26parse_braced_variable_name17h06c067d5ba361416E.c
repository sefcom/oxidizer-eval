void _ZN6uu_env15variable_parser14VariableParser26parse_braced_variable_name17h06c067d5ba361416E
               (int *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  undefined8 unaff_R12;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  int iStack_54;
  uint local_44;
  uint *local_40;
  code *local_38;
  
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  _ZN6uu_env15variable_parser14VariableParser25check_variable_name_start17hb2ef1afab325da6eE
            (&local_78);
  if ((int)local_78 != 8) {
LAB_001d5324:
    *(ulong *)(param_1 + 8) = CONCAT44(iStack_54,local_58);
    *(ulong *)(param_1 + 4) = CONCAT44(local_68._4_4_,(undefined4)local_68);
    *(ulong *)(param_1 + 6) = CONCAT44(uStack_5c,uStack_60);
    *(ulong *)param_1 = CONCAT44(local_78._4_4_,(int)local_78);
    *(ulong *)(param_1 + 2) = CONCAT44(uStack_6c,uStack_70);
    return;
  }
  local_44 = _ZN6uu_env15variable_parser14VariableParser16get_current_char17h68b63febfc4461a0E
                       (param_2);
  while (local_44 != 0x110000) {
    if ((((local_44 < 0x80) && (9 < local_44 - 0x30)) && (0x19 < (local_44 & 0x5f) - 0x41)) &&
       (local_44 != 0x5f)) {
      if (local_44 == 0x3a) {
        lVar3 = *(long *)(param_2 + 0x20);
        goto LAB_001d5380;
      }
      if (local_44 != 0x7d) {
        uVar5 = *(undefined8 *)(param_2 + 0x20);
        local_40 = &local_44;
        local_38 = _ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17hfe75cd72bcd9c522E;
        local_78._0_4_ = 0x248e48;
        local_78._4_4_ = 0;
        uStack_70 = 2;
        uStack_6c = 0;
        local_58 = 0;
        iStack_54 = 0;
        local_68 = &local_40;
        uStack_60 = 1;
        uStack_5c = 0;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17ha7b9eb55e1cbc84dE(param_1 + 4,&local_78);
        goto LAB_001d5318;
      }
      lVar3 = *(long *)(param_2 + 0x20);
      _ZN6uu_env15variable_parser14VariableParser8skip_one17h6221cbf058689bacE(&local_78,param_2);
      if ((int)local_78 != 8) goto LAB_001d548e;
      uVar2 = 0;
      goto LAB_001d545e;
    }
    _ZN6uu_env15variable_parser14VariableParser8skip_one17h6221cbf058689bacE(&local_78,param_2);
    if ((int)local_78 != 8) goto LAB_001d5324;
    local_44 = _ZN6uu_env15variable_parser14VariableParser16get_current_char17h68b63febfc4461a0E
                         (param_2);
  }
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  pcVar4 = "Missing closing brace";
  uVar2 = 0x15;
LAB_001d5313:
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17he132dab3b8589a55E
            (param_1 + 4,pcVar4,uVar2);
LAB_001d5318:
  *param_1 = 4;
  *(undefined8 *)(param_1 + 2) = uVar5;
  return;
  while( true ) {
    if (iVar1 == 0x110000) {
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      pcVar4 = 
      "Missing closing brace after default value\', expected a closing brace (\'}\') or colon (\':\')"
      ;
      uVar2 = 0x29;
      goto LAB_001d5313;
    }
    _ZN6uu_env15variable_parser14VariableParser8skip_one17h6221cbf058689bacE(&local_78,param_2);
    if ((int)local_78 != 8) break;
LAB_001d5380:
    iVar1 = _ZN6uu_env15variable_parser14VariableParser16get_current_char17h68b63febfc4461a0E
                      (param_2);
    if (iVar1 == 0x7d) {
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      _ZN6uu_env15variable_parser14VariableParser8skip_one17h6221cbf058689bacE(&local_78,param_2);
      if ((int)local_78 == 8) {
        local_78 = lVar3 + 1;
        uStack_70 = (undefined4)uVar2;
        uStack_6c = (undefined4)((ulong)uVar2 >> 0x20);
        auVar6 = _ZN6uu_env13string_parser12StringParser9substring17h93033379edd1d12fE
                           (param_2,&local_78);
        unaff_R12 = auVar6._8_8_;
        uVar2 = auVar6._0_8_;
LAB_001d545e:
        local_78._0_4_ = (int)uVar5;
        local_78._4_4_ = (undefined4)((ulong)uVar5 >> 0x20);
        uStack_70 = (undefined4)lVar3;
        uStack_6c = (undefined4)((ulong)lVar3 >> 0x20);
        auVar6 = _ZN6uu_env13string_parser12StringParser9substring17h93033379edd1d12fE
                           (param_2,&local_78);
        *(undefined (*) [16])(param_1 + 2) = auVar6;
        *(undefined8 *)(param_1 + 6) = uVar2;
        *(undefined8 *)(param_1 + 8) = unaff_R12;
        *param_1 = 8;
        return;
      }
      break;
    }
  }
LAB_001d548e:
  param_1[9] = iStack_54;
  *(ulong *)(param_1 + 5) = CONCAT44(uStack_60,local_68._4_4_);
  *(ulong *)(param_1 + 7) = CONCAT44(local_58,uStack_5c);
  *(ulong *)(param_1 + 1) = CONCAT44(uStack_70,local_78._4_4_);
  *(ulong *)(param_1 + 3) = CONCAT44((undefined4)local_68,uStack_6c);
  *param_1 = (int)local_78;
  return;
}