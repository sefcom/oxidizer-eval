void _ZN4just6parser6Parser7advance17ha6fdbb87ccd3a5f7E(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 local_d8;
  undefined auStack_d0 [104];
  undefined local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_5clear17hb16502b534c65091E
            (param_2 + 0x38);
  uVar2 = *(ulong *)(param_2 + 0x20);
  uVar3 = *(ulong *)(param_2 + 0x58);
  if (uVar2 < uVar3) {
    (*(code *)PTR__ZN4core5slice5index26slice_start_index_len_fail17h5fe115fcacae7da6E_00566048)
              (uVar3,uVar2,&PTR_DAT_005306c0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar3 != uVar2) {
    lVar4 = *(long *)(param_2 + 0x18);
    lVar13 = uVar3 * 0x48;
    lVar14 = 0;
    do {
      if (*(char *)(lVar4 + 0x40 + lVar13) != '$') {
        *(ulong *)(param_2 + 0x58) = (uVar3 - lVar14) + 1;
        param_1[8] = *(undefined8 *)(lVar4 + 0x40 + lVar13);
        uVar6 = *(undefined8 *)(lVar4 + lVar13);
        uVar7 = ((undefined8 *)(lVar4 + lVar13))[1];
        puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar13);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar13);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar13);
        uVar12 = puVar1[1];
        param_1[6] = *puVar1;
        param_1[7] = uVar12;
        param_1[4] = uVar10;
        param_1[5] = uVar11;
        param_1[2] = uVar8;
        param_1[3] = uVar9;
        *param_1 = uVar6;
        param_1[1] = uVar7;
        *(undefined *)(param_1 + 9) = 0x25;
        return;
      }
      lVar13 = lVar13 + 0x48;
      lVar14 = lVar14 + -1;
    } while (uVar2 * 0x48 != lVar13);
    *(ulong *)(param_2 + 0x58) = uVar3 - lVar14;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
            (auStack_d0,&DAT_00171511,0x35);
  local_d8 = 0x8000000000000028;
  _ZN4just6parser6Parser5error17hcfcee5ba02637174E(local_68,param_2,&local_d8);
  param_1[8] = local_20;
  param_1[9] = uStack_18;
  param_1[6] = local_30;
  param_1[7] = uStack_28;
  param_1[4] = local_40;
  param_1[5] = uStack_38;
  param_1[2] = local_50;
  param_1[3] = uStack_48;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}