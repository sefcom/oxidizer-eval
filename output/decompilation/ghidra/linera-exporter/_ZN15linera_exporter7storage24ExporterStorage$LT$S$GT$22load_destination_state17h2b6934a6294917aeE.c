undefined8
_ZN15linera_exporter7storage24ExporterStorage_LT_S_GT_22load_destination_state17h2b6934a6294917aeE
          (long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 *puStack_28;
  code *pcStack_20;
  
  uStack_60 = param_2;
  _ZN5seize5guard10LocalGuard5enter17h641a2c8feab3edc9E(&puStack_58,*(undefined8 *)(param_1 + 0x20))
  ;
  uVar5 = uStack_38;
  auVar6 = _ZN6papaya3raw24HashMap_LT_K_C_V_C_S_GT_3get17h45fa085d70483630E
                     (param_1 + 0x10,param_2,puStack_58,uStack_38);
  if (auVar6._0_8_ == 0) {
    puStack_28 = &uStack_60;
    pcStack_20 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h7b3062b32e3a6d1aE;
    puStack_58 = &DAT_014f1e78;
    uStack_50 = 2;
    uStack_38 = 0;
    ppuStack_48 = &puStack_28;
    uStack_40 = 1;
    (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_015923a0)
              (&puStack_58,&PTR_DAT_014f1e98);
  }
  else {
    plVar2 = (long *)*auVar6._8_8_;
    LOCK();
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + 1;
    UNLOCK();
    if (*plVar2 != 0 && SCARRY8(lVar1,1) == *plVar2 < 0) {
      uVar3 = *auVar6._8_8_;
      _ZN4core3ptr159drop_in_place_LT_papaya__map__HashMapRef_LT_usize_C_linera_exporter__common__CanonicalBlock_C_std__hash__random__RandomState_C_seize__guard__LocalGuard_GT__GT_17h5592183aace78ce3E
                (uVar5);
      return uVar3;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}