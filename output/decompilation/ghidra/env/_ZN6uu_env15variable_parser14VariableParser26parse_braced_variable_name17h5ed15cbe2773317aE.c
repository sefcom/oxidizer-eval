void _ZN6uu_env15variable_parser14VariableParser26parse_braced_variable_name17h5ed15cbe2773317aE
               (int *param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 unaff_R12;
  undefined auVar6 [16];
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  int iStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _ZN6uu_env15variable_parser14VariableParser25check_variable_name_start17hd163d333f3df61ddE
            (&local_70);
  if ((int)local_70 != 0xc) {
LAB_00171c62:
    *(ulong *)(param_1 + 8) = CONCAT44(iStack_4c,local_50);
    *(ulong *)(param_1 + 4) = CONCAT44(uStack_5c,local_60);
    *(ulong *)(param_1 + 6) = CONCAT44(uStack_54,uStack_58);
    *(ulong *)param_1 = CONCAT44(local_70._4_4_,(int)local_70);
    *(ulong *)(param_1 + 2) = CONCAT44(uStack_64,uStack_68);
    return;
  }
  uVar2 = _ZN6uu_env15variable_parser14VariableParser16get_current_char17h2461897ac15abcf2E(param_2)
  ;
  if (uVar2 != 0x110000) {
    do {
      if ((((uVar2 < 0x80) && (9 < uVar2 - 0x30)) && (0x19 < (uVar2 & 0x5f) - 0x41)) &&
         (uVar2 != 0x5f)) {
        if (uVar2 == 0x3a) {
          lVar5 = *(long *)(param_2 + 0x20);
          goto LAB_00171cd0;
        }
        if (uVar2 != 0x7d) {
          uVar1 = *(undefined8 *)(param_2 + 0x20);
          local_70._0_4_ = 0;
          uVar4 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(uVar2,&local_70);
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hf510679057ea9fe7E
                    (&local_48,uVar4);
          *param_1 = 8;
          *(undefined8 *)(param_1 + 2) = uVar1;
          *(undefined8 *)(param_1 + 4) = local_48;
          *(undefined8 *)(param_1 + 6) = uStack_40;
          *(undefined8 *)(param_1 + 8) = local_38;
          return;
        }
        lVar5 = *(long *)(param_2 + 0x20);
        _ZN6uu_env15variable_parser14VariableParser8skip_one17hc689cd00633feaf8E(&local_70,param_2);
        if ((int)local_70 != 0xc) goto LAB_00171dc5;
        uVar4 = 0;
        goto LAB_00171d92;
      }
      _ZN6uu_env15variable_parser14VariableParser8skip_one17hc689cd00633feaf8E(&local_70,param_2);
      if ((int)local_70 != 0xc) goto LAB_00171c62;
      uVar2 = _ZN6uu_env15variable_parser14VariableParser16get_current_char17h2461897ac15abcf2E
                        (param_2);
    } while (uVar2 != 0x110000);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *param_1 = 4;
  *(undefined8 *)(param_1 + 2) = uVar1;
  return;
  while( true ) {
    if (iVar3 == 0x110000) {
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      *param_1 = 6;
      *(undefined8 *)(param_1 + 2) = uVar1;
      return;
    }
    _ZN6uu_env15variable_parser14VariableParser8skip_one17hc689cd00633feaf8E(&local_70,param_2);
    if ((int)local_70 != 0xc) break;
LAB_00171cd0:
    iVar3 = _ZN6uu_env15variable_parser14VariableParser16get_current_char17h2461897ac15abcf2E
                      (param_2);
    if (iVar3 == 0x7d) {
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      _ZN6uu_env15variable_parser14VariableParser8skip_one17hc689cd00633feaf8E(&local_70,param_2);
      if ((int)local_70 == 0xc) {
        local_70 = lVar5 + 1;
        uStack_68 = (undefined4)uVar4;
        uStack_64 = (undefined4)((ulong)uVar4 >> 0x20);
        auVar6 = (*(code *)
                   PTR__ZN6uu_env13string_parser12StringParser9substring17h41e33e0b14cc6cb7E_00219378
                 )(param_2,&local_70);
        unaff_R12 = auVar6._8_8_;
        uVar4 = auVar6._0_8_;
LAB_00171d92:
        local_70._0_4_ = (int)uVar1;
        local_70._4_4_ = (undefined4)((ulong)uVar1 >> 0x20);
        uStack_68 = (undefined4)lVar5;
        uStack_64 = (undefined4)((ulong)lVar5 >> 0x20);
        auVar6 = (*(code *)
                   PTR__ZN6uu_env13string_parser12StringParser9substring17h41e33e0b14cc6cb7E_00219378
                 )(param_2,&local_70);
        *(undefined (*) [16])(param_1 + 2) = auVar6;
        *(undefined8 *)(param_1 + 6) = uVar4;
        *(undefined8 *)(param_1 + 8) = unaff_R12;
        *param_1 = 0xc;
        return;
      }
      break;
    }
  }
LAB_00171dc5:
  param_1[9] = iStack_4c;
  *(ulong *)(param_1 + 5) = CONCAT44(uStack_58,uStack_5c);
  *(ulong *)(param_1 + 7) = CONCAT44(local_50,uStack_54);
  *(ulong *)(param_1 + 1) = CONCAT44(uStack_68,local_70._4_4_);
  *(ulong *)(param_1 + 3) = CONCAT44(local_60,uStack_64);
  *param_1 = (int)local_70;
  return;
}