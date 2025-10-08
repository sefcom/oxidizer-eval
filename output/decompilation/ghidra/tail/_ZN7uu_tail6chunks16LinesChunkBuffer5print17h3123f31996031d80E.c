long _ZN7uu_tail6chunks16LinesChunkBuffer5print17h3123f31996031d80E
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_4iter17h5656e42254df2b37E
            (&local_50,param_1);
  while ((puVar2 = local_50, puVar3 = local_38, local_50 != local_48 ||
         (bVar4 = local_40 != local_38, puVar2 = local_40, puVar3 = local_50, local_48 = local_38,
         local_40 = local_50, bVar4))) {
    local_50 = puVar2 + 1;
    lVar1 = _ZN7uu_tail6chunks10LinesChunk11print_bytes17hf07a2c81279428beE(*puVar2,param_2);
    local_38 = puVar3;
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  return 0;
}