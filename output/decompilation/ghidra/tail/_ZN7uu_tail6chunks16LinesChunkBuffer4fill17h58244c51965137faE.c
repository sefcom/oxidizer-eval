undefined  [16]
_ZN7uu_tail6chunks16LinesChunkBuffer4fill17h58244c51965137faE(long param_1,long param_2)

{
  undefined uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  char cVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined auVar13 [16];
  int local_6060 [2];
  long local_6058;
  long local_6050;
  undefined8 local_6030;
  undefined8 local_5030;
  undefined8 local_4060;
  undefined8 uStack_4058;
  undefined local_4050;
  undefined local_4048 [24];
  undefined8 local_4030;
  undefined8 local_3030;
  undefined8 local_2030 [512];
  undefined8 local_1030;
  
  puVar5 = PTR_memset_0027d738;
  local_1030 = 0;
  local_2030[0] = 0;
  local_3030 = 0;
  local_4030 = 0;
  local_5030 = 0;
  local_6030 = 0;
  uVar1 = *(undefined *)(param_1 + 0x30);
  (*(code *)PTR_memset_0027d738)(local_2030,0,0x2000);
  (*(code *)puVar5)(local_6060,0,0x2010);
  local_4050 = uVar1;
  lVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h82a98b3c862552f0E(local_6060);
  puVar5 = PTR_memcpy_0027d2f0;
                    /* try { // try from 001a1eaf to 001a1ebc has its CatchHandler @ 001a209f */
  while (_ZN7uu_tail6chunks10LinesChunk4fill17h8372a98993d49080E(local_6060,lVar7,param_2),
        lVar11 = local_6058, lVar12 = local_6050, local_6060[0] != 1) {
    if (local_6058 == 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_001a2011;
      plVar8 = (long *)_ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_7get_mut17hf762308d8975c277E
                                 (param_1,*(long *)(param_1 + 0x18) + -1);
      if (plVar8 == (long *)0x0) {
LAB_001a2069:
                    /* try { // try from 001a2069 to 001a2081 has its CatchHandler @ 001a20a1 */
        (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_0027d480)
                  (&DAT_00124c2e,0x14,&PTR_DAT_00273378);
        goto LAB_001a2082;
      }
                    /* try { // try from 001a1f62 to 001a1f83 has its CatchHandler @ 001a20a1 */
      auVar13 = (*(code *)
                  PTR__ZN7uu_tail6chunks10LinesChunk10get_buffer17h12c5d003f1f481a3E_0027d818)
                          (*plVar8);
      local_6060[0] = CONCAT31(local_6060[0]._1_3_,*(undefined *)(param_1 + 0x30));
      cVar6 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h6cb95a248a5db6d2E
                        (auVar13._0_8_,auVar13._8_8_,local_6060);
      if (cVar6 == '\0') {
        *(long *)(*plVar8 + 0x2008) = *(long *)(*plVar8 + 0x2008) + 1;
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      }
      goto LAB_001a1fac;
    }
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + *(long *)(lVar7 + 0x2008);
    _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h4f6adea6ad81cf89E
              (param_1,lVar7);
    plVar8 = (long *)_ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_3get17h5243bf9f45df5514E
                               (param_1);
    if (plVar8 == (long *)0x0) {
      (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_0027d480)
                (&DAT_00124c2e,0x14,&PTR_DAT_00273348);
      goto LAB_001a204d;
    }
    if (*(ulong *)(param_1 + 0x28) <
        (ulong)(*(long *)(param_1 + 0x20) - *(long *)(*plVar8 + 0x2008))) {
      lVar7 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17hd5b4041d930bbd14E
                        (param_1);
      if (lVar7 == 0) {
        (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0027d528)
                  (&PTR_DAT_00273360);
        goto LAB_001a2069;
      }
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - *(long *)(lVar7 + 0x2008);
    }
    else {
      uVar1 = *(undefined *)(param_1 + 0x30);
      (*(code *)puVar5)(local_6060,local_2030,0x2000);
      local_4060 = 0;
      uStack_4058 = 0;
      local_4050 = uVar1;
      lVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h82a98b3c862552f0E(local_6060);
    }
  }
LAB_001a2014:
  _ZN4core3ptr73drop_in_place_LT_alloc__boxed__Box_LT_uu_tail__chunks__LinesChunk_GT__GT_17h474ceeda76e59e5dE
            (lVar7);
  auVar13._8_8_ = lVar12;
  auVar13._0_8_ = lVar11;
  return auVar13;
LAB_001a1fac:
  param_2 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17hd5b4041d930bbd14E
                      (param_1);
  if (param_2 == 0) {
LAB_001a204d:
                    /* try { // try from 001a204d to 001a2059 has its CatchHandler @ 001a20a1 */
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0027d528)(&PTR_DAT_00273390);
LAB_001a2082:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar10 = uVar2 - *(long *)(param_2 + 0x2008);
  if (uVar10 <= uVar3) {
    lVar11 = 0;
    if (uVar3 <= uVar2) {
      lVar11 = uVar2 - uVar3;
    }
                    /* try { // try from 001a1fdd to 001a2008 has its CatchHandler @ 001a2084 */
    (*(code *)PTR__ZN7uu_tail6chunks10LinesChunk10from_chunk17h9998bcc032f5fddeE_0027d820)
              (local_4048,param_2,lVar11);
    uVar9 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h82a98b3c862552f0E(local_4048);
    _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_10push_front17hfd9a2cbb18528385E
              (param_1,uVar9);
    _ZN4core3ptr73drop_in_place_LT_alloc__boxed__Box_LT_uu_tail__chunks__LinesChunk_GT__GT_17h474ceeda76e59e5dE
              (param_2);
LAB_001a2011:
    lVar11 = 0;
    lVar12 = param_2;
    goto LAB_001a2014;
  }
  *(ulong *)(param_1 + 0x20) = uVar10;
  _ZN4core3ptr73drop_in_place_LT_alloc__boxed__Box_LT_uu_tail__chunks__LinesChunk_GT__GT_17h474ceeda76e59e5dE
            (param_2);
  goto LAB_001a1fac;
}