long _ZN7uu_tail6chunks16LinesChunkBuffer5print17hefbd00f13cbf9cbbE
               (undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4iter17h4cb2a7b481604fe2E
            (&local_38,param_1);
  do {
    puVar6 = (undefined8 *)
             _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h4bc207bf22529cacE
                       (&local_38);
    uVar4 = uStack_2c;
    uVar3 = uStack_30;
    uVar2 = uStack_34;
    uVar1 = local_38;
    if (puVar6 == (undefined8 *)0x0) {
      local_38 = local_28;
      uStack_34 = uStack_24;
      uStack_30 = uStack_20;
      uStack_2c = uStack_1c;
      local_28 = uVar1;
      uStack_24 = uVar2;
      uStack_20 = uVar3;
      uStack_1c = uVar4;
      puVar6 = (undefined8 *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h4bc207bf22529cacE
                         (&local_38);
      if (puVar6 == (undefined8 *)0x0) {
        return 0;
      }
    }
    lVar5 = _ZN7uu_tail6chunks10LinesChunk11print_bytes17heb78e59b7507785bE(*puVar6,param_2);
  } while (lVar5 == 0);
  return lVar5;
}