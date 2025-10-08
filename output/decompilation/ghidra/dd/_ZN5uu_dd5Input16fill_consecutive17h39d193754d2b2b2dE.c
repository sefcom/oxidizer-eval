void _ZN5uu_dd5Input16fill_consecutive17h39d193754d2b2b2dE
               (undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined auVar7 [16];
  undefined **local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_50 = *(long *)(*(long *)(param_2 + 8) + 0x70);
  if (local_50 == 0) {
    local_60 = &PTR_s_chunk_size_must_be_non_zero_0023d1a0;
    uStack_58 = 1;
    local_50 = 8;
    local_48 = 0;
    uStack_40 = 0;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_002466a0)
              (&local_60,&PTR_DAT_0023dd80);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_60 = *(undefined ***)(param_3 + 8);
  uStack_58 = *(undefined8 *)(param_3 + 0x10);
  lVar3 = _ZN96__LT_core__slice__iter__ChunksMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h042a7a090798bd25E
                    (&local_60);
  puVar2 = PTR__ZN46__LT_uu_dd__Input_u20_as_u20_std__io__Read_GT_4read17h4a29ff4f57f9a098E_00246d00
  ;
  if (lVar3 == 0) {
    lVar5 = 0;
    lVar4 = 0;
    uVar6 = 0;
  }
  else {
    lVar5 = 0;
    lVar4 = 0;
    uVar6 = 0;
    do {
      auVar7 = (*(code *)puVar2)(param_2,lVar3);
      lVar3 = auVar7._8_8_;
      if ((auVar7 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        param_1[1] = lVar3;
        *param_1 = 1;
        return;
      }
      if (*(long *)(*(long *)(param_2 + 8) + 0x70) == lVar3) {
        lVar5 = lVar5 + 1;
      }
      else {
        if (lVar3 == 0) break;
        lVar4 = lVar4 + 1;
      }
      uVar6 = uVar6 + lVar3;
      lVar3 = _ZN96__LT_core__slice__iter__ChunksMut_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h042a7a090798bd25E
                        (&local_60);
    } while (lVar3 != 0);
    if (*(ulong *)(param_3 + 0x10) < uVar6) goto LAB_00190103;
  }
  *(ulong *)(param_3 + 0x10) = uVar6;
LAB_00190103:
  param_1[1] = lVar5;
  param_1[2] = lVar4;
  param_1[3] = uVar6;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  return;
}