void _ZN3bat7vscreen29EscapeSequenceOffsetsIterator16chars_take_while17h61c196cbe5d42445E
               (undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  char cVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  
  lVar1 = param_2 + 0x10;
  plVar2 = (long *)(param_2 + 0x28);
  _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hc3adaf4f59a89217E(plVar2,lVar1);
  if (*(int *)(param_2 + 0x30) == 0x110000) {
    uVar7 = 0;
  }
  else {
    _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hc3adaf4f59a89217E(plVar2,lVar1);
    if (*(int *)(param_2 + 0x30) == 0x110000) {
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_008074d0)(&PTR_DAT_007cee20);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = *(long *)(param_2 + 0x28);
    _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hc3adaf4f59a89217E(plVar2,lVar1);
    uVar8 = *(uint *)(param_2 + 0x30);
    lVar9 = lVar3;
    if ((uVar8 != 0x110000) &&
       (cVar6 = _ZN3bat7vscreen29EscapeSequenceOffsetsIterator7next_nf28__u7b__u7b_closure_u7d__u7d_17h4f746c41ba71fa6eE
                          (uVar8), cVar6 != '\0')) {
      do {
        lVar9 = 1;
        if ((0x7f < uVar8) && (lVar9 = 2, 0x7ff < uVar8)) {
          lVar9 = 4 - (ulong)(uVar8 < 0x10000);
        }
        lVar4 = *plVar2;
        *(undefined4 *)(param_2 + 0x30) = 0x110001;
        _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hc3adaf4f59a89217E(plVar2,lVar1);
        uVar8 = *(uint *)(param_2 + 0x30);
      } while ((uVar8 != 0x110000) &&
              (cVar6 = _ZN3bat7vscreen29EscapeSequenceOffsetsIterator7next_nf28__u7b__u7b_closure_u7d__u7d_17h4f746c41ba71fa6eE
                                 (uVar8), cVar6 != '\0'));
      lVar9 = lVar9 + lVar4;
    }
    param_1[1] = lVar3;
    param_1[2] = lVar9;
    uVar7 = 1;
  }
  *param_1 = uVar7;
  return;
}