void _ZN15linera_exporter7storage23CanonicalState_LT_C_GT_5clone17h5412906f51e12066E
               (long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  undefined local_d8 [184];
  
  uVar2 = *(undefined8 *)(param_2 + 200);
  plVar3 = *(long **)(param_2 + 0xb8);
  LOCK();
  lVar1 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 != 0 && SCARRY8(lVar1,1) == *plVar3 < 0) {
    plVar4 = *(long **)(param_2 + 0xc0);
    LOCK();
    lVar1 = *plVar4;
    *plVar4 = *plVar4 + 1;
    UNLOCK();
    if (*plVar4 != 0 && SCARRY8(lVar1,1) == *plVar4 < 0) {
                    /* try { // try from 00a0f1eb to 00a0f1f4 has its CatchHandler @ 00a0f22e */
      _ZN105__LT_linera_views__views__log_view__LogView_LT_C_C_T_GT__u20_as_u20_linera_views__views__ClonableView_GT_15clone_unchecked17ha5709c9fe2037ce6E
                (local_d8);
      *(undefined8 *)(param_1 + 200) = uVar2;
      (*(code *)PTR_memcpy_01592358)(param_1,local_d8,0xb8);
      *(long **)(param_1 + 0xb8) = plVar3;
      *(long **)(param_1 + 0xc0) = plVar4;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}