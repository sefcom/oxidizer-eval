void _ZN15linera_exporter7storage26SharedStorage_LT_C_C_S_GT_5clone17h30669d2fae9b9771E
               (long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined local_f8 [216];
  
  _ZN100__LT_linera_storage__db_storage__DbStorage_LT_Database_C_Clock_GT__u20_as_u20_core__clone__Clone_GT_5clone17h27c1e983da184fe0E
            (&local_118,param_2 + 0xd8);
                    /* try { // try from 00a08893 to 00a0889f has its CatchHandler @ 00a08918 */
  _ZN15linera_exporter7storage23CanonicalState_LT_C_GT_5clone17hd7f6a09a0b8e93c8E(local_f8,param_2);
  plVar2 = *(long **)(param_2 + 0x100);
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
    plVar3 = *(long **)(param_2 + 0x108);
    LOCK();
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 != 0 && SCARRY8(lVar1,1) == *plVar3 < 0) {
      plVar4 = *(long **)(param_2 + 0xf8);
      LOCK();
      lVar1 = *plVar4;
      *plVar4 = *plVar4 + 1;
      UNLOCK();
      if (*plVar4 != 0 && SCARRY8(lVar1,1) == *plVar4 < 0) {
        *(undefined4 *)(param_1 + 0xe8) = local_108;
        *(undefined4 *)(param_1 + 0xec) = uStack_104;
        *(undefined4 *)(param_1 + 0xf0) = uStack_100;
        *(undefined4 *)(param_1 + 0xf4) = uStack_fc;
        *(undefined4 *)(param_1 + 0xd8) = local_118;
        *(undefined4 *)(param_1 + 0xdc) = uStack_114;
        *(undefined4 *)(param_1 + 0xe0) = uStack_110;
        *(undefined4 *)(param_1 + 0xe4) = uStack_10c;
        *(long **)(param_1 + 0xf8) = plVar4;
        (*(code *)PTR_memcpy_01592358)(param_1,local_f8,0xd8);
        *(long **)(param_1 + 0x100) = plVar2;
        *(long **)(param_1 + 0x108) = plVar3;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}