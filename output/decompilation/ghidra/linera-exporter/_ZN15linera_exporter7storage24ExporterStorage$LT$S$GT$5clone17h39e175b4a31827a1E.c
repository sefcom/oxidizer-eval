void _ZN15linera_exporter7storage24ExporterStorage_LT_S_GT_5clone17h39e175b4a31827a1E
               (long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined auStack_f0 [208];
  
  _ZN100__LT_linera_storage__db_storage__DbStorage_LT_Database_C_Clock_GT__u20_as_u20_core__clone__Clone_GT_5clone17h27c1e983da184fe0E
            (&uStack_110,param_2 + 0xd0);
  _ZN15linera_exporter7storage23CanonicalState_LT_C_GT_5clone17h5412906f51e12066E
            (auStack_f0,param_2);
  plVar2 = *(long **)(param_2 + 0xf8);
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
    uVar3 = *(undefined8 *)(param_2 + 0xf8);
    plVar2 = *(long **)(param_2 + 0x100);
    LOCK();
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
      plVar2 = *(long **)(param_2 + 0xf0);
      uVar4 = *(undefined8 *)(param_2 + 0x100);
      LOCK();
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + 1;
      UNLOCK();
      if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
        uVar5 = *(undefined8 *)(param_2 + 0xf0);
        *(undefined4 *)(param_1 + 0xe0) = uStack_100;
        *(undefined4 *)(param_1 + 0xe4) = uStack_fc;
        *(undefined4 *)(param_1 + 0xe8) = uStack_f8;
        *(undefined4 *)(param_1 + 0xec) = uStack_f4;
        *(undefined4 *)(param_1 + 0xd0) = uStack_110;
        *(undefined4 *)(param_1 + 0xd4) = uStack_10c;
        *(undefined4 *)(param_1 + 0xd8) = uStack_108;
        *(undefined4 *)(param_1 + 0xdc) = uStack_104;
        *(undefined8 *)(param_1 + 0xf0) = uVar5;
        (*(code *)PTR_memcpy_01592358)(param_1,auStack_f0,0xd0);
        *(undefined8 *)(param_1 + 0xf8) = uVar3;
        *(undefined8 *)(param_1 + 0x100) = uVar4;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}