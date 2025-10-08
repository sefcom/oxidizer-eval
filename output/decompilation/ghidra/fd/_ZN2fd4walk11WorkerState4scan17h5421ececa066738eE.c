void _ZN2fd4walk11WorkerState4scan17h5421ececa066738eE(undefined *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  undefined uVar4;
  char cVar5;
  undefined uVar6;
  undefined uVar7;
  undefined8 local_128;
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
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long local_98;
  long local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  _ZN2fd4walk11WorkerState12build_walker17h528fba1b6fc20641E(&local_128);
  if (local_128 == 2) {
    *(undefined8 *)(param_1 + 8) = uStack_120;
    uVar7 = 1;
  }
  else {
    local_28 = local_c8;
    uStack_24 = uStack_c4;
    uStack_20 = uStack_c0;
    uStack_1c = uStack_bc;
    local_38 = local_d8;
    uStack_30 = uStack_d0;
    local_48 = (undefined4)local_e8;
    uStack_44 = local_e8._4_4_;
    uStack_40 = (undefined4)uStack_e0;
    uStack_3c = uStack_e0._4_4_;
    local_58 = local_f8;
    uStack_54 = uStack_f4;
    uStack_50 = uStack_f0;
    uStack_4c = uStack_ec;
    local_68 = local_108;
    uStack_64 = uStack_104;
    uStack_60 = uStack_100;
    uStack_5c = uStack_fc;
    local_78 = local_118;
    uStack_74 = uStack_114;
    uStack_70 = uStack_110;
    uStack_6c = uStack_10c;
    local_88 = local_128;
    uStack_80 = uStack_120;
    if (*(long *)(param_2 + 0x1c8) == 0) {
      plVar2 = *(long **)(param_2 + 0x210);
      LOCK();
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + 1;
      UNLOCK();
      if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) {
LAB_002f9f32:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      plVar2 = *(long **)(param_2 + 0x218);
      LOCK();
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + 1;
      UNLOCK();
      if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) goto LAB_002f9f32;
                    /* try { // try from 002f9e59 to 002f9e7a has its CatchHandler @ 002f9f34 */
      _ZN5ctrlc20init_and_set_handler17h1bb3233601cb3954E(&local_128);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hacb05d1112c71bdaE(&local_128);
    }
    _ZN17crossbeam_channel7channel7bounded17h59736cade95c7d49E
              (&local_128,*(long *)(param_2 + 0x1a0) * 2);
    local_b8 = (undefined4)local_128;
    uStack_b4 = local_128._4_4_;
    uStack_b0 = (undefined4)uStack_120;
    uStack_ac = uStack_120._4_4_;
    local_128 = local_88;
    uStack_120 = uStack_80;
    local_118 = local_78;
    uStack_114 = uStack_74;
    uStack_110 = uStack_70;
    uStack_10c = uStack_6c;
    local_108 = local_68;
    uStack_104 = uStack_64;
    uStack_100 = uStack_60;
    uStack_fc = uStack_5c;
    local_f8 = local_58;
    uStack_f4 = uStack_54;
    uStack_f0 = uStack_50;
    uStack_ec = uStack_4c;
    local_e8 = CONCAT44(uStack_44,local_48);
    uStack_e0 = CONCAT44(uStack_3c,uStack_40);
    local_d8 = local_38;
    uStack_d0 = uStack_30;
    local_c8 = local_28;
    uStack_c4 = uStack_24;
    uStack_c0 = uStack_20;
    uStack_bc = uStack_1c;
    local_98 = param_2;
    uVar4 = _ZN3std6thread6scoped5scope17hf42bb0e2e47ad158E(&local_128);
    uVar7 = 0;
    cVar5 = _ZN4core4sync6atomic11atomic_load17h95058969b162ab98E
                      (*(long *)(param_2 + 0x218) + 0x10,0);
    uVar6 = 5;
    if (cVar5 == '\0') {
      uVar6 = uVar4;
    }
    param_1[1] = uVar6;
  }
  *param_1 = uVar7;
  return;
}