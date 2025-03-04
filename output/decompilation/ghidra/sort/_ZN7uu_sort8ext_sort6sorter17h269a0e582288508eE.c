void _ZN7uu_sort8ext_sort6sorter17h269a0e582288508eE
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_40;
  long local_38;
  long local_30;
  
  local_40 = _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17h9149d09d652eba4aE();
  if (local_40 != 0) {
    do {
      local_38 = local_40;
                    /* try { // try from 00267f0d to 00267f17 has its CatchHandler @ 00267f64 */
      _ZN7uu_sort7sort_by17h972a39ae46813087E(local_40 + 0x18,param_3,local_40 + 0x30);
      lVar1 = _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h6e2915accf477763E(param_2,local_38);
      local_30 = lVar1;
      _ZN4core3ptr116drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__sync__mpsc__SendError_LT_uu_sort__chunks__Chunk_GT__GT__GT_17h7ecd2887621f7ca2E
                (&local_30);
      if (lVar1 != 0) {
        return;
      }
      local_40 = _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17h9149d09d652eba4aE(param_1);
    } while (local_40 != 0);
  }
  _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_sort__chunks__Chunk_C_std__sync__mpsc__RecvError_GT__GT_17hbe180fe5a9f9be02E
            (&local_40);
  return;
}