void _ZN3bat14syntax_mapping13SyntaxMapping23start_offload_build_all17hd06ba260de1f2570E
               (long param_1)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 local_58 [2];
  undefined8 local_48;
  undefined local_30;
  undefined local_28 [24];
  
  plVar2 = *(long **)(param_1 + 0x30);
  LOCK();
  lVar1 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
    local_48 = 0x8000000000000000;
    local_58[0] = 0;
    local_30 = 0;
    _ZN3std6thread7Builder15spawn_unchecked17h31f93f9b9d33a5c3E(local_28,local_58);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17h0e103480dd3d7923E(local_58,local_28);
    _ZN4core3ptr60drop_in_place_LT_std__thread__JoinHandle_LT__LP__RP__GT__GT_17h7c4bfb4d6f3d2cd3E
              (local_58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}