void _ZN2rg5flags6hiargs6HiArgs15printer_summary17h1562db8c3a15b7baE
               (undefined8 param_1,long param_2,undefined8 param_3,undefined param_4)

{
  long *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined auStack_b8 [24];
  undefined local_a0 [36];
  undefined local_7c [77];
  byte local_2f;
  
                    /* try { // try from 0034f96a to 0034f974 has its CatchHandler @ 0034fa42 */
  (*(code *)PTR__ZN12grep_printer7summary14SummaryBuilder3new17hc3e817a686638508E_00527120)
            (local_a0);
  _ZN70__LT_grep_printer__color__ColorSpecs_u20_as_u20_core__clone__Clone_GT_5clone17h2672960dbfd8f738E
            (local_7c,param_2 + 0x325);
  local_2f = *(byte *)(param_2 + 0x377) ^ 1;
  plVar1 = *(long **)(param_2 + 0x308);
  LOCK();
  lVar7 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  if (*plVar1 != 0 && SCARRY8(lVar7,1) == *plVar1 < 0) {
                    /* try { // try from 0034f9a8 to 0034f9fc has its CatchHandler @ 0034fa47 */
    puVar6 = (undefined4 *)
             (*(code *)
               PTR__ZN12grep_printer7summary14SummaryBuilder9hyperlink17ha403b9e6f27a74caE_00527128)
                       (local_a0);
    *(undefined *)((long)puVar6 + 0x72) = param_4;
    uVar3 = *(undefined4 *)(param_2 + 0x24);
    uVar4 = *(undefined4 *)(param_2 + 0x28);
    uVar5 = *(undefined4 *)(param_2 + 0x2c);
    *puVar6 = *(undefined4 *)(param_2 + 0x20);
    puVar6[1] = uVar3;
    puVar6[2] = uVar4;
    puVar6[3] = uVar5;
    *(undefined *)(puVar6 + 0x1c) = *(undefined *)(param_2 + 0x390);
    *(undefined2 *)((long)puVar6 + 0x22) = *(undefined2 *)(param_2 + 0x31e);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1dbf6ec1d593e24cE
              (auStack_b8,":",1);
    lVar7 = (*(code *)
              PTR__ZN12grep_printer7summary14SummaryBuilder15separator_field17hd6adde2c67595e0eE_00527130
            )(puVar6,auStack_b8);
    *(undefined2 *)(lVar7 + 0x20) = *(undefined2 *)(param_2 + 0x31c);
    *(bool *)(lVar7 + 0x6f) = *(int *)(param_2 + 0x300) != 1000000000;
    _ZN12grep_printer7summary14SummaryBuilder5build17hcac5d63c00310d46E(param_1,lVar7,param_3);
    _ZN4core3ptr58drop_in_place_LT_grep_printer__summary__SummaryBuilder_GT_17h250652f7d6ba002aE
              (local_a0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}