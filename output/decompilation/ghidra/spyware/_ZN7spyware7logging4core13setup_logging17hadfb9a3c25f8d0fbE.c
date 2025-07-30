undefined8 _ZN7spyware7logging4core13setup_logging17hadfb9a3c25f8d0fbE(undefined8 *param_1)

{
  code *pcVar1;
  undefined uVar2;
  long lVar3;
  long local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined local_a8;
  undefined8 local_a0;
  undefined local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  undefined local_68 [8];
  int local_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  
  _ZN4core4sync6atomic12atomic_store17hcdb68c044bd3631fE(*param_1);
  local_78 = (ulong)param_1[1] >> 2;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 8;
  local_80 = 0;
  local_c8 = *(undefined4 *)param_1;
  uStack_c4 = *(undefined4 *)((long)param_1 + 4);
  uStack_c0 = *(undefined4 *)(param_1 + 1);
  uStack_bc = *(undefined4 *)((long)param_1 + 0xc);
  local_b8 = param_1[2];
  _ZN9once_cell4sync17OnceCell_LT_T_GT_10try_insert17h31b4b9b30fac51faE
            (local_68,_ZN7spyware7logging4core22MEMORY_LOGGER_INSTANCE17h716e29c46813bbfaE,&local_c8
            );
  if (local_60 == 6) {
    local_128 = 6;
  }
  else {
    local_128 = CONCAT44(uStack_5c,local_60);
    uStack_120 = uStack_58;
    local_d8 = local_10;
    local_e8 = local_20;
    uStack_e4 = uStack_1c;
    uStack_e0 = uStack_18;
    uStack_dc = uStack_14;
    local_f8 = local_30;
    uStack_f4 = uStack_2c;
    uStack_f0 = uStack_28;
    uStack_ec = uStack_24;
    local_108 = local_40;
    uStack_104 = uStack_3c;
    uStack_100 = uStack_38;
    uStack_fc = uStack_34;
    local_118 = local_50;
    uStack_114 = uStack_4c;
    uStack_110 = uStack_48;
    uStack_10c = uStack_44;
    if (local_128 != 6) {
      _ZN4core3ptr96drop_in_place_LT_core__result__Result_LT__LP__RP__C_spyware__logging__core__MemoryLogger_GT__GT_17h253edf7ce6e0679bE
                (&local_128);
      return 2;
    }
  }
                    /* try { // try from 0015703d to 0015705e has its CatchHandler @ 00157094 */
  lVar3 = _ZN7spyware7logging4core12MemoryLogger6global17h99d7eb6ce0974984E();
  if (lVar3 != 0) {
    uVar2 = (*(code *)PTR__ZN3log10set_logger17h154ac6d5c2538341E_001be878)
                      (lVar3,&
                             PTR__ZN4core3ptr57drop_in_place_LT_spyware__logging__core__MemoryLogger_GT_17h3ec8492dc568376cE_001b9bc8
                      );
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hb116e08a8e7e6c8fE(uVar2);
    _ZN4core3ptr96drop_in_place_LT_core__result__Result_LT__LP__RP__C_spyware__logging__core__MemoryLogger_GT__GT_17h253edf7ce6e0679bE
              (&local_128);
    return 3;
  }
                    /* try { // try from 00157085 to 00157091 has its CatchHandler @ 00157094 */
  (*(code *)PTR__ZN4core6option13unwrap_failed17hf53ee17a2013bd69E_001be518)
            (&PTR_s_src_logging_core_rs_001b9bb0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}