undefined  [16]
_ZN7uu_tail6chunks16BytesChunkBuffer4fill17h51396c7e915880ccE(long param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 in_RAX;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined8 local_4038;
  long local_4030;
  long local_4028;
  undefined8 local_3030;
  undefined8 local_2038;
  undefined8 local_2030 [512];
  undefined8 local_1030;
  
  puVar2 = PTR_memset_0027d738;
  local_1030 = 0;
  local_2030[0] = 0;
  local_3030 = 0;
  local_4030 = 0;
  local_4038 = in_RAX;
  (*(code *)PTR_memset_0027d738)(local_2030,0,0x2000);
  (*(code *)puVar2)(&local_4038,0,0x2008);
  lVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h958a01d6c3ae3733E(&local_4038);
  puVar2 = PTR_memcpy_0027d2f0;
  do {
                    /* try { // try from 001a14d4 to 001a14e1 has its CatchHandler @ 001a161b */
    _ZN7uu_tail6chunks10BytesChunk4fill17hab8028dceae793acE(&local_4038,lVar3,param_2);
    lVar6 = local_4030;
    lVar7 = local_4028;
    if ((int)local_4038 == 1) {
LAB_001a15ab:
      _ZN4core3ptr73drop_in_place_LT_alloc__boxed__Box_LT_uu_tail__chunks__BytesChunk_GT__GT_17hb5d926151bf464c4E
                (lVar3);
      auVar8._8_8_ = lVar7;
      auVar8._0_8_ = lVar6;
      return auVar8;
    }
    if (local_4030 == 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        param_2 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17hd5b4041d930bbd14E
                            (param_1);
        if (param_2 == 0) goto LAB_001a15f1;
        lVar6 = 0;
        if (*(ulong *)(param_1 + 0x20) <= *(ulong *)(param_1 + 0x28)) {
          lVar6 = *(ulong *)(param_1 + 0x28) - *(ulong *)(param_1 + 0x20);
        }
                    /* try { // try from 001a1581 to 001a159f has its CatchHandler @ 001a1600 */
        (*(code *)PTR__ZN7uu_tail6chunks10BytesChunk10from_chunk17hf1adf92578b17e1cE_0027d7f0)
                  (&local_4038,param_2,lVar6);
        uVar5 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h958a01d6c3ae3733E(&local_4038);
        _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_10push_front17hc8a1db566e4d6108E
                  (param_1,uVar5);
        _ZN4core3ptr73drop_in_place_LT_alloc__boxed__Box_LT_uu_tail__chunks__BytesChunk_GT__GT_17hb5d926151bf464c4E
                  (param_2);
      }
      lVar6 = 0;
      lVar7 = param_2;
      goto LAB_001a15ab;
    }
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + *(long *)(lVar3 + 0x2000);
    _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9push_back17h0beb4a69f6ee6b50E
              (param_1,lVar3);
    plVar4 = (long *)_ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_3get17h5243bf9f45df5514E
                               (param_1);
    if (plVar4 == (long *)0x0) {
      (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_0027d480)
                (&DAT_00124c2e,0x14,&PTR_DAT_002732d0);
LAB_001a15e4:
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0027d528)(&PTR_DAT_002732e8);
LAB_001a15f1:
                    /* try { // try from 001a15f1 to 001a15fd has its CatchHandler @ 001a161d */
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0027d528)(&PTR_DAT_00273300);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (*(ulong *)(param_1 + 0x20) <
        (ulong)(*(long *)(param_1 + 0x28) - *(long *)(*plVar4 + 0x2000))) {
      lVar3 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17hd5b4041d930bbd14E
                        (param_1);
      if (lVar3 == 0) goto LAB_001a15e4;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - *(long *)(lVar3 + 0x2000);
    }
    else {
      (*(code *)puVar2)(&local_4038,local_2030,0x2000);
      local_2038 = 0;
      lVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h958a01d6c3ae3733E(&local_4038);
    }
  } while( true );
}