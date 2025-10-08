void _ZN8uu_tsort5Graph14find_next_node17hbfa4e9bfcfa20386E(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17h2df3f1a91f2253a2E
                    (param_2);
  while (lVar1 == 0) {
    _ZN8uu_tsort5Graph20find_and_break_cycle17hd1217009a967d454E(param_1,param_2);
    lVar1 = _ZN5alloc11collections9vec_deque21VecDeque_LT_T_C_A_GT_9pop_front17h2df3f1a91f2253a2E
                      (param_2);
  }
  return;
}