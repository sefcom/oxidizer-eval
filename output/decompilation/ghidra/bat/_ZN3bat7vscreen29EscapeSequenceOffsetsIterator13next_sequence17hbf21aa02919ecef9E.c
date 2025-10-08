void _ZN3bat7vscreen29EscapeSequenceOffsetsIterator13next_sequence17hbf21aa02919ecef9E
               (undefined8 *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined auVar8 [12];
  
  iVar1 = *(int *)(param_2 + 0x30);
  auVar8 = *(undefined (*) [12])(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x30) = 0x110001;
  if (iVar1 == 0x110001) {
    auVar8 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                       (param_2 + 0x10);
  }
  uVar6 = auVar8._8_4_;
  lVar7 = auVar8._0_8_;
  if (uVar6 == 0x110000) {
    (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_00807550)
              ("to not be finished",0x12,&PTR_DAT_007cee38);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  _ZN4core6option15Option_LT_T_GT_18get_or_insert_with17hc3adaf4f59a89217E
            ((long *)(param_2 + 0x28),param_2 + 0x10);
  uVar2 = *(uint *)(param_2 + 0x30);
  if (uVar2 == 0x5b) {
    _ZN3bat7vscreen29EscapeSequenceOffsetsIterator8next_csi17h7a02523b82b98ac2E
              (param_1,param_2,lVar7);
    return;
  }
  if (uVar2 != 0x5d) {
    if (uVar2 == 0x110000) {
      lVar5 = 1;
      if ((0x7f < uVar6) && (lVar5 = 2, 0x7ff < uVar6)) {
        lVar5 = 4 - (ulong)(uVar6 < 0x10000);
      }
      *param_1 = 1;
      param_1[1] = lVar7;
      param_1[2] = lVar5 + lVar7;
    }
    else {
      if ((uVar2 & 0xfffffff0) == 0x20) {
        _ZN3bat7vscreen29EscapeSequenceOffsetsIterator7next_nf17h9adbe93dde1fd540E
                  (param_1,param_2,lVar7);
        return;
      }
      lVar5 = 1;
      if ((0x7f < uVar2) && (lVar5 = 2, 0x7ff < uVar2)) {
        lVar5 = 4 - (ulong)(uVar2 < 0x10000);
      }
      lVar3 = *(long *)(param_2 + 0x28);
      *param_1 = 1;
      param_1[1] = lVar7;
      param_1[2] = lVar5 + lVar3;
    }
    return;
  }
  _ZN3bat7vscreen29EscapeSequenceOffsetsIterator8next_osc17hafe287645ca442b5E(param_1,param_2,lVar7)
  ;
  return;
}