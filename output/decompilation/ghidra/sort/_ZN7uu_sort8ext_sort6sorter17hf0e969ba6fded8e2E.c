void _ZN7uu_sort8ext_sort6sorter17hf0e969ba6fded8e2E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17h60814cb01a26dc76E();
  while( true ) {
    local_48 = lVar1;
    if (lVar1 == 0) {
      _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_uu_sort__chunks__Chunk_C_std__sync__mpsc__RecvError_GT__GT_17h7ff86e8d0d3ee6b2E
                (&local_48);
      return;
    }
    local_40 = lVar1;
                    /* try { // try from 001c4141 to 001c4148 has its CatchHandler @ 001c419c */
    _ZN7uu_sort7sort_by17h04d3448c2cd20374E
              (*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28),param_5,lVar1 + 0x30);
    lVar1 = _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h35b630fd0acd1b39E(param_3,param_4,lVar1);
    local_38 = lVar1;
    _ZN4core3ptr116drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__sync__mpsc__SendError_LT_uu_sort__chunks__Chunk_GT__GT__GT_17hac0e8e318f5af5c2E
              (&local_38);
    if (lVar1 != 0) break;
    lVar1 = _ZN3std4sync4mpmc17Receiver_LT_T_GT_4recv17h60814cb01a26dc76E(param_1,param_2);
  }
  return;
}