ulong _ZN2fd4walk11WorkerState7receive17hbc6764579389011bE
                (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_e8;
  undefined local_e4;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 *local_c8;
  long local_c0;
  undefined *local_b8;
  undefined8 local_a0;
  undefined local_48 [40];
  
  local_b8 = (undefined *)&local_e8;
  lVar1 = *(long *)(param_1 + 0x1c8);
  local_e0 = param_2;
  local_d8 = param_3;
  if (lVar1 == 0) {
                    /* try { // try from 002f8fad to 002f8fd2 has its CatchHandler @ 002f906c */
    local_d0 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_005408a8)();
    uVar4 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_005405c0)(&local_d0);
    _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h8fc2537ae525bcbfE
              (local_48,uVar4);
    _ZN2fd4walk23ReceiverBuffer_LT_W_GT_3new17h8e579d629470b6a2E
              (&local_d0,param_1,param_2,param_3,local_48);
                    /* try { // try from 002f8ff1 to 002f8ff8 has its CatchHandler @ 002f905d */
    uVar2 = _ZN2fd4walk23ReceiverBuffer_LT_W_GT_7process17ha5288a7139bbf5c7E(&local_d0);
    _ZN4core3ptr126drop_in_place_LT_fd__walk__ReceiverBuffer_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT__GT_17hb753d5bba31e973fE
              (&local_d0);
  }
  else {
    if (*(char *)(lVar1 + 0x28) != '\0') {
      local_c0 = 0;
      local_a0 = 0;
      local_d0 = param_2;
      local_c8 = (undefined8 *)param_3;
      uVar3 = _ZN2fd4exec3job5batch17h4ebcd8d6a64e03b1E
                        (&local_d0,*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20),
                         param_1);
      return uVar3;
    }
    local_e8 = 0;
    local_e4 = 0;
    local_c0 = param_1 + 0x1c8;
    local_c8 = &local_e0;
                    /* try { // try from 002f9036 to 002f903f has its CatchHandler @ 002f906c */
    local_d0 = param_1;
    uVar2 = _ZN3std6thread6scoped5scope17ha311cbc73960afb7E(&local_d0);
    _ZN4core3ptr80drop_in_place_LT_crossbeam_channel__channel__Receiver_LT_fd__walk__Batch_GT__GT_17had74352146281d5aE
              (&local_e0);
  }
  return (ulong)uVar2;
}