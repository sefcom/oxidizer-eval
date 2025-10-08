void _ZN15linera_exporter8runloops12task_manager29ExportersTracker_LT_F_C_S_GT_22shutdown_old_committee17h07bf9e7c2df74bcfE
               (long param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined auVar9 [16];
  long local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  long *local_188;
  long *local_180;
  undefined ***pppuStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 **local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 **local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  long *local_b8;
  undefined ***pppuStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 **local_98;
  undefined local_90 [48];
  undefined local_60 [40];
  undefined *local_38;
  
                    /* try { // try from 009fa16a to 009fa179 has its CatchHandler @ 009fa458 */
  _ZN4core4iter6traits8iterator8Iterator7collect17hf67cebbf1d527b94E
            (local_90,*(long *)(param_2 + 8),
             *(long *)(param_2 + 0x10) * 0x20 + *(long *)(param_2 + 8));
  _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_4iter17h62354a330452f5cbE(local_60,param_1 + 0x188)
  ;
  puVar8 = PTR__ZN12tracing_core10dispatcher6EXISTS17h875930db1ebeac73E_015926b8;
  local_38 = local_90;
  do {
                    /* try { // try from 009fa1b0 to 009fa3ec has its CatchHandler @ 009fa484 */
    lVar5 = _ZN111__LT_std__collections__hash__set__Difference_LT_T_C_S_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h54d179b67c678691E
                      (local_60);
    if (lVar5 == 0) {
      _ZN4core3ptr102drop_in_place_LT_std__collections__hash__set__HashSet_LT_linera_service__config__DestinationId_GT__GT_17haa072aa3464c5522E
                (local_90);
      _ZN4core3ptr81drop_in_place_LT_alloc__vec__Vec_LT_linera_service__config__DestinationId_GT__GT_17h3f5e4bde3a44ea9dE
                (param_2);
      return;
    }
    local_1c0 = lVar5;
    cVar4 = _ZN4core4sync6atomic11atomic_load17hf1e463d23e6553e3E(puVar8,0);
    if (cVar4 == '\0') {
      uVar6 = _ZN4core4sync6atomic11atomic_load17h40f9941cd4fab919E
                        (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17h51cc9c3cd67347faE_015926c0,0);
      puVar2 = 
      _ZN15linera_exporter8runloops12task_manager29ExportersTracker_LT_F_C_S_GT_22shutdown_old_committee10__CALLSITE17hf761f5869e528320E
      ;
      if (4 < uVar6) {
        uStack_148 = *(undefined4 *)
                      (
                      _ZN15linera_exporter8runloops12task_manager29ExportersTracker_LT_F_C_S_GT_22shutdown_old_committee10__CALLSITE17hf761f5869e528320E
                      + 0x20);
        uStack_144 = *(undefined4 *)
                      (
                      _ZN15linera_exporter8runloops12task_manager29ExportersTracker_LT_F_C_S_GT_22shutdown_old_committee10__CALLSITE17hf761f5869e528320E
                      + 0x24);
        uStack_140 = *(undefined4 *)
                      (
                      _ZN15linera_exporter8runloops12task_manager29ExportersTracker_LT_F_C_S_GT_22shutdown_old_committee10__CALLSITE17hf761f5869e528320E
                      + 0x28);
        uStack_13c = *(undefined4 *)
                      (
                      _ZN15linera_exporter8runloops12task_manager29ExportersTracker_LT_F_C_S_GT_22shutdown_old_committee10__CALLSITE17hf761f5869e528320E
                      + 0x2c);
        local_150 = 5;
        auVar9 = (*(code *)PTR__ZN3log6logger17h0d3dd8cac80dc3faE_015926c8)();
        cVar4 = (**(code **)(auVar9._8_8_ + 0x18))(auVar9._0_8_,&local_150);
        puVar3 = 
        _ZN15linera_exporter8runloops12task_manager29ExportersTracker_LT_F_C_S_GT_22shutdown_old_committee10__CALLSITE17hf761f5869e528320E
        ;
        if (cVar4 != '\0') {
          local_110 = *(undefined8 *)
                       (
                       _ZN15linera_exporter8runloops12task_manager29ExportersTracker_LT_F_C_S_GT_22shutdown_old_committee10__CALLSITE17hf761f5869e528320E
                       + 0x38);
          local_138 = *(undefined8 *)
                       (
                       _ZN15linera_exporter8runloops12task_manager29ExportersTracker_LT_F_C_S_GT_22shutdown_old_committee10__CALLSITE17hf761f5869e528320E
                       + 0x30);
          uStack_130 = *(undefined8 *)
                        (
                        _ZN15linera_exporter8runloops12task_manager29ExportersTracker_LT_F_C_S_GT_22shutdown_old_committee10__CALLSITE17hf761f5869e528320E
                        + 0x38);
          local_128 = *(undefined8 *)
                       (
                       _ZN15linera_exporter8runloops12task_manager29ExportersTracker_LT_F_C_S_GT_22shutdown_old_committee10__CALLSITE17hf761f5869e528320E
                       + 0x40);
          uStack_120 = *(undefined4 *)
                        (
                        _ZN15linera_exporter8runloops12task_manager29ExportersTracker_LT_F_C_S_GT_22shutdown_old_committee10__CALLSITE17hf761f5869e528320E
                        + 0x48);
          uStack_11c = *(undefined4 *)
                        (
                        _ZN15linera_exporter8runloops12task_manager29ExportersTracker_LT_F_C_S_GT_22shutdown_old_committee10__CALLSITE17hf761f5869e528320E
                        + 0x4c);
          local_118 = 0;
          _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9677a7ebe172bbe8E
                    (&local_1b8,&local_138);
          if (local_1b8 == (undefined **)0x0) {
LAB_009fa43d:
                    /* try { // try from 009fa43d to 009fa455 has its CatchHandler @ 009fa486 */
            (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_015923a8)
                      ("FieldSet corrupted (this is a bug)",0x22,
                       &PTR_s_linera_service_src_exporter_runl_014f1ae0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          local_c8 = local_198;
          local_d8 = (undefined4)local_1a8;
          uStack_d4 = local_1a8._4_4_;
          uStack_d0 = (undefined4)uStack_1a0;
          uStack_cc = uStack_1a0._4_4_;
          local_e8 = local_1b8;
          uStack_e0 = uStack_1b0;
          local_1b8 = &PTR_s_shutting_down_old_committee_memb_014f1ad0;
          uStack_1b0 = 1;
          local_1a8 = 8;
          uStack_1a0 = 0;
          local_198 = 0;
          _ZN84__LT_tracing_core__field__Iter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h9677a7ebe172bbe8E
                    (&local_180,&local_138);
          if ((undefined ***)local_180 == (undefined ***)0x0) goto LAB_009fa43d;
          local_f0 = puVar3 + 0x30;
          local_98 = local_160;
          local_a8 = (undefined4)local_170;
          uStack_a4 = local_170._4_4_;
          uStack_a0 = (undefined4)uStack_168;
          uStack_9c = uStack_168._4_4_;
          local_b8 = local_180;
          pppuStack_b0 = pppuStack_178;
          local_188 = &local_1c0;
          local_180 = (long *)&local_e8;
          pppuStack_178 = &local_1b8;
          local_170 = &DAT_014e5cc0;
          uStack_168 = &local_b8;
          local_160 = &local_188;
          local_158 = &DAT_014f1af8;
          local_f8 = 2;
          local_128 = CONCAT44(uStack_13c,uStack_140);
          local_138 = local_150;
          uStack_130 = CONCAT44(uStack_144,uStack_148);
          local_100 = &local_180;
          (*(code *)PTR__ZN7tracing15__macro_support13__tracing_log17h5fab331f013c479bE_015926d0)
                    (puVar2,auVar9._0_8_,auVar9._8_8_,&local_138,&local_100);
          puVar8 = PTR__ZN12tracing_core10dispatcher6EXISTS17h875930db1ebeac73E_015926b8;
        }
      }
    }
    ppuVar7 = (undefined **)
              _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_6remove17h8081a516dbeb7dfbE
                        (param_1 + 0x1b8);
    if (ppuVar7 != (undefined **)0x0) {
                    /* try { // try from 009fa3fb to 009fa405 has its CatchHandler @ 009fa46f */
      local_1b8 = ppuVar7;
      (*(code *)
        PTR__ZN5tokio7runtime4task7harness52__LT_impl_u20_tokio__runtime__task__raw__RawTask_GT_12remote_abort17h96f575063b29c096E_015944d8
      )(&local_1b8);
                    /* try { // try from 009fa40b to 009fa40f has its CatchHandler @ 009fa484 */
      _ZN4core3ptr119drop_in_place_LT_tokio__runtime__task__join__JoinHandle_LT_core__result__Result_LT__LP__RP__C_anyhow__Error_GT__GT__GT_17hbc0fc9cab1a41db8E
                (local_1b8);
    }
  } while( true );
}