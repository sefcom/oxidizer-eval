undefined8
_ZN5uu_cp33is_forbidden_to_copy_to_same_file17h5b788622660e3e62E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          char param_6)

{
  byte bVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  undefined7 uVar8;
  byte bVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined local_b0 [64];
  undefined local_70 [64];
  
  puVar2 = PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_00267ae0;
  bVar3 = (*(code *)PTR__ZN3std4path4Path10is_symlink17h004cfac91d04dbc0E_00267ae0)();
  bVar4 = (*(code *)puVar2)(param_3,param_4);
  bVar1 = *(byte *)(param_5 + 0x59);
  bVar9 = 1;
  if ((bVar1 == 0) && ((param_6 == '\0' || (*(char *)(param_5 + 0x58) == '\0')))) {
    bVar9 = bVar3 & bVar4 ^ 1;
  }
  cVar5 = _ZN6uucore8features2fs24paths_refer_to_same_file17h63765c86a5a0b9e6E
                    (param_1,param_2,param_3,param_4,bVar9);
  puVar2 = PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_002678f8;
  if (cVar5 == '\0') {
    return 0;
  }
  if (*(char *)(param_5 + 0x65) != '\0') {
    if (*(char *)(param_5 + 0x55) == '\0' && *(char *)(param_5 + 0x54) == '\0') {
      if ((bVar3 & bVar1) != 1 || bVar4 != 0) {
        return 0;
      }
    }
    else if (bVar3 == 0) {
      if (bVar4 != 0) {
        return 0;
      }
      (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_002678f8)
                (local_b0,param_3,param_4);
      (*(code *)puVar2)(local_70,param_1,param_2);
      cVar5 = _ZN62__LT_std__path__Components_u20_as_u20_core__cmp__PartialEq_GT_2eq17hd9623c64792f17b1E
                        (local_b0,local_70);
      if (cVar5 == '\0') {
        return 0;
      }
    }
    else if (bVar1 != 1 || bVar4 != 0) {
      return 0;
    }
  }
  puVar2 = PTR__ZN3std4path4Path9file_name17h6d40d88bf3fb287aE_002674c8;
  uVar8 = 0;
  if (*(char *)(param_5 + 0x67) == '\0') {
    return 0;
  }
  if (*(char *)(param_5 + 0x67) != '\x01') {
    if ((bVar3 & bVar4) == 0) goto LAB_001a27d6;
    auVar10 = (*(code *)PTR__ZN3std4path4Path9file_name17h6d40d88bf3fb287aE_002674c8)
                        (param_1,param_2);
    auVar11 = (*(code *)puVar2)(param_3,param_4);
    lVar6 = auVar11._0_8_;
    if (auVar10._0_8_ == 0) {
      uVar8 = auVar11._1_7_;
      if (lVar6 != 0 && bVar1 == 0) {
        return 0;
      }
      goto LAB_001a27d6;
    }
    bVar4 = bVar1;
    if (lVar6 != 0) {
      uVar7 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h24397207b493d5a1E
                        (auVar10._0_8_,auVar10._8_8_,lVar6,auVar11._8_8_);
      uVar8 = (undefined7)((ulong)uVar7 >> 8);
      if ((char)uVar7 == '\0' && bVar1 == 0) {
        return 0;
      }
      goto LAB_001a27d6;
    }
  }
  uVar8 = 0;
  if (bVar4 == 0) {
    return 0;
  }
LAB_001a27d6:
  return CONCAT71(uVar8,1);
}