ulong _ZN2fd4walk11BatchSender4send17hbbf819bd5a39c97aE(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  byte extraout_DL;
  byte extraout_DL_00;
  ulong uVar7;
  byte bVar8;
  long local_168 [39];
  
                    /* try { // try from 002f7bbd to 002f7bc1 has its CatchHandler @ 002f7cda */
  lVar4 = _ZN2fd4walk5Batch4lock17hcf458de9d7428fabE(param_1[2]);
  puVar1 = param_1 + 2;
  bVar8 = extraout_DL & 1;
  if ((ulong)param_1[3] <= *(ulong *)(lVar4 + 0x18)) {
                    /* try { // try from 002f7be1 to 002f7bf1 has its CatchHandler @ 002f7cdc */
    _ZN4core3ptr104drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_crossbeam_channel__flavors__zero__Inner_GT__GT_17h6207fb4f25d3957fE
              (lVar4,bVar8);
    uVar5 = _ZN2fd4walk5Batch3new17h2184bf53e9fc4816E();
                    /* try { // try from 002f7bf2 to 002f7bfc has its CatchHandler @ 002f7cd1 */
    _ZN4core3ptr36drop_in_place_LT_fd__walk__Batch_GT_17h38c0242ec0537192E(puVar1);
    *puVar1 = uVar5;
                    /* try { // try from 002f7c01 to 002f7c08 has its CatchHandler @ 002f7cdc */
    lVar4 = _ZN2fd4walk5Batch4lock17hcf458de9d7428fabE(uVar5);
    bVar8 = extraout_DL_00 & 1;
    if (*(long *)(lVar4 + 8) == -0x8000000000000000) {
                    /* try { // try from 002f7cc2 to 002f7cce has its CatchHandler @ 002f7ce1 */
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0053fff8)
                (&PTR_s_src_walk_rs_005025b8);
      goto LAB_002f7ccf;
    }
  }
  (*(code *)PTR_memcpy_0053fd28)(local_168,param_2,0x138);
                    /* try { // try from 002f7c4a to 002f7c95 has its CatchHandler @ 002f7ce1 */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hac74964b7913d07eE(lVar4 + 8,local_168);
  if (*(long *)(lVar4 + 0x18) == 1) {
    plVar2 = (long *)*puVar1;
    LOCK();
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if (*plVar2 == 0 || SCARRY8(lVar6,1) != *plVar2 < 0) {
LAB_002f7ccf:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = _ZN17crossbeam_channel7channel15Sender_LT_T_GT_4send17h9c29f4d5d8b49aa6E
                      (*param_1,param_1[1]);
    if (lVar6 != 0) {
      local_168[0] = lVar6;
      _ZN4core3ptr77drop_in_place_LT_crossbeam_channel__err__SendError_LT_fd__walk__Batch_GT__GT_17h888a4e57f7452dacE
                (local_168);
      uVar7 = CONCAT71((int7)((ulong)local_168 >> 8),1);
      goto LAB_002f7c9c;
    }
  }
  uVar7 = 0;
LAB_002f7c9c:
  _ZN4core3ptr104drop_in_place_LT_std__sync__poison__mutex__MutexGuard_LT_crossbeam_channel__flavors__zero__Inner_GT__GT_17h6207fb4f25d3957fE
            (lVar4,bVar8);
  return uVar7 & 0xffffffff;
}