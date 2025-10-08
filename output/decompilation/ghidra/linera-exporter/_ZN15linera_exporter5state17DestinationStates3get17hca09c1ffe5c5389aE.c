undefined8
_ZN15linera_exporter5state17DestinationStates3get17hca09c1ffe5c5389aE
          (long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined8 local_40 [4];
  undefined8 local_20;
  
  _ZN5seize5guard10LocalGuard5enter17h641a2c8feab3edc9E(local_40,*(undefined8 *)(param_1 + 0x20));
                    /* try { // try from 00a062db to 00a062e8 has its CatchHandler @ 00a06316 */
  auVar5 = _ZN6papaya3raw24HashMap_LT_K_C_V_C_S_GT_3get17h45fa085d70483630E
                     (param_1 + 0x10,param_2,local_40[0],local_20);
  if (auVar5._0_8_ == 0) {
    uVar4 = 0;
  }
  else {
    plVar2 = (long *)*auVar5._8_8_;
    LOCK();
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar4 = *auVar5._8_8_;
  }
  _ZN4core3ptr159drop_in_place_LT_papaya__map__HashMapRef_LT_usize_C_linera_exporter__common__CanonicalBlock_C_std__hash__random__RandomState_C_seize__guard__LocalGuard_GT__GT_17h5592183aace78ce3E
            (local_20);
  return uVar4;
}