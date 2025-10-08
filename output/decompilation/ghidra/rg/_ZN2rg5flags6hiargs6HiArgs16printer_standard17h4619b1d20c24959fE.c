void _ZN2rg5flags6hiargs6HiArgs16printer_standard17h4619b1d20c24959fE
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined local_f8 [24];
  undefined local_e0 [24];
  undefined local_c8 [68];
  undefined local_84 [76];
  undefined local_38;
  undefined local_32;
  undefined local_31;
  
                    /* try { // try from 0034f419 to 0034f423 has its CatchHandler @ 0034f678 */
  (*(code *)PTR__ZN12grep_printer8standard15StandardBuilder3new17h60aea028e7f493d7E_005270e8)
            (local_c8);
  local_31 = *(undefined *)(param_2 + 0x324);
  _ZN70__LT_grep_printer__color__ColorSpecs_u20_as_u20_core__clone__Clone_GT_5clone17h2672960dbfd8f738E
            (local_84,param_2 + 0x325);
  local_32 = *(undefined *)(param_2 + 0x370);
  local_38 = *(undefined *)(param_2 + 0x374);
  plVar1 = *(long **)(param_2 + 0x308);
  LOCK();
  lVar8 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 == 0 || SCARRY8(lVar8,1) != *plVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
                    /* try { // try from 0034f476 to 0034f649 has its CatchHandler @ 0034f68b */
  puVar6 = (undefined4 *)
           (*(code *)
             PTR__ZN12grep_printer8standard15StandardBuilder9hyperlink17hd608a0fe526df718E_005270f0)
                     (local_c8);
  *(undefined *)((long)puVar6 + 0x95) = *(undefined *)(param_2 + 0x37b);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  uVar5 = *(undefined4 *)(param_2 + 0x1c);
  *puVar6 = *(undefined4 *)(param_2 + 0x10);
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar5;
  *(undefined *)((long)puVar6 + 0x92) = *(undefined *)(param_2 + 0x389);
  *(undefined *)((long)puVar6 + 0x91) = *(undefined *)(param_2 + 0x390);
  *(undefined2 *)((long)puVar6 + 0x42) = *(undefined2 *)(param_2 + 0x31e);
  *(undefined *)(puVar6 + 0x25) = 1;
  *(undefined *)((long)puVar6 + 0x93) = *(undefined *)(param_2 + 0x38f);
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h92b52b9ab5dd1bb4E
            (&local_110,*(undefined8 *)(param_2 + 0x2b8),*(undefined8 *)(param_2 + 0x2c0));
  uStack_120 = uStack_108;
  uStack_11c = uStack_104;
  uVar7 = (*(code *)
            PTR__ZN12grep_printer8standard15StandardBuilder11replacement17h09f19e3e97b2a03aE_005270f8
          )(puVar6,&local_128);
  local_128 = 0x8000000000000000;
  if (*(long *)(param_2 + 0x268) != -0x8000000000000000) {
    _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h92b52b9ab5dd1bb4E
              (&local_110,*(undefined8 *)(param_2 + 0x270),*(undefined8 *)(param_2 + 0x278));
    local_128 = CONCAT44(uStack_10c,local_110);
    uStack_120 = uStack_108;
    uStack_11c = uStack_104;
  }
  uVar7 = (*(code *)
            PTR__ZN12grep_printer8standard15StandardBuilder17separator_context17hfa65395f7d61cce7E_00527100
          )(uVar7,&local_128);
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h92b52b9ab5dd1bb4E
            (local_f8,*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0xb0));
  uVar7 = (*(code *)
            PTR__ZN12grep_printer8standard15StandardBuilder23separator_field_context17he04cd3f244df659eE_00527108
          )(uVar7,local_f8);
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h92b52b9ab5dd1bb4E
            (local_e0,*(undefined8 *)(param_2 + 0xc0),*(undefined8 *)(param_2 + 200));
  lVar8 = (*(code *)
            PTR__ZN12grep_printer8standard15StandardBuilder21separator_field_match17hc49f2afc893c1731E_00527110
          )(uVar7,local_e0);
  *(undefined2 *)(lVar8 + 0x40) = *(undefined2 *)(param_2 + 0x31c);
  *(bool *)(lVar8 + 0x8f) = *(int *)(param_2 + 0x300) != 1000000000;
  *(undefined *)(lVar8 + 0x98) = *(undefined *)(param_2 + 0x38e);
  if (*(long *)(param_2 + 0x310) == 1) {
    if (*(long *)(param_2 + 0x280) == -0x8000000000000000) {
      local_128 = 0x8000000000000000;
    }
    else {
      _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h92b52b9ab5dd1bb4E
                (&local_110,*(undefined8 *)(param_2 + 0x288),*(undefined8 *)(param_2 + 0x290));
      local_128 = CONCAT44(uStack_10c,local_110);
      uStack_120 = uStack_108;
      uStack_11c = uStack_104;
    }
    (*(code *)
      PTR__ZN12grep_printer8standard15StandardBuilder16separator_search17heff2404d05146382E_00527118
    )(local_c8,&local_128);
  }
  _ZN12grep_printer8standard15StandardBuilder5build17h37845b6bc823e7e3E(param_1,local_c8,param_3);
  _ZN4core3ptr60drop_in_place_LT_grep_printer__standard__StandardBuilder_GT_17hfd84395d1bb6923bE
            (local_c8);
  return;
}