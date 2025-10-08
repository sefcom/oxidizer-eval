undefined8
_ZN15linera_exporter8runloops12task_manager24ExporterBuilder_LT_F_GT_5spawn17h4ef36bf956c6eb42E
          (undefined4 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined uVar2;
  long *plVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uStack_cf0;
  undefined4 local_ce8;
  undefined4 uStack_ce4;
  undefined4 uStack_ce0;
  undefined4 uStack_cdc;
  undefined4 local_cb8;
  undefined4 uStack_cb4;
  undefined4 uStack_cb0;
  undefined4 uStack_cac;
  undefined local_c88 [24];
  undefined4 uStack_c70;
  undefined4 local_c68;
  undefined4 uStack_c64;
  undefined4 uStack_c60;
  undefined4 uStack_c5c;
  undefined4 local_c58;
  undefined4 uStack_c54;
  undefined4 uStack_c50;
  undefined4 uStack_c4c;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined4 local_c38;
  undefined4 uStack_c34;
  undefined4 uStack_c30;
  undefined4 uStack_c2c;
  undefined local_c28 [72];
  undefined8 local_be0;
  undefined8 local_bb0;
  undefined8 local_b80;
  undefined4 local_870;
  undefined local_86c;
  undefined local_7d0;
  undefined local_30;
  
  if (*(char *)(param_2 + 0x18) == '\0') {
                    /* try { // try from 009fc4dc to 009fc4ec has its CatchHandler @ 009fc67d */
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_015927f0
    )(local_c88,param_2);
    uVar16 = *(undefined8 *)(param_1 + 0x12);
    uStack_cf0 = CONCAT31(uStack_cf0._1_3_,*(undefined *)(param_2 + 0x18));
    uVar14 = *param_1;
    uVar5 = param_1[1];
    uVar6 = param_1[2];
    uVar7 = param_1[3];
    uVar8 = param_1[4];
    uVar9 = param_1[5];
    uVar10 = param_1[6];
    uVar11 = param_1[7];
    uVar12 = *(undefined8 *)(param_1 + 8);
    uVar13 = *(undefined8 *)(param_1 + 10);
    uVar15 = *(undefined8 *)(param_1 + 0xc);
                    /* try { // try from 009fc541 to 009fc548 has its CatchHandler @ 009fc65d */
    uVar17 = _ZN90__LT_linera_exporter__common__ExporterCancellationSignal_u20_as_u20_core__clone__Clone_GT_5clone17hb5bfb22658923d4fE
                       (param_1 + 0x10);
    (*(code *)PTR_memcpy_01592358)(local_c28,param_3,0xa8);
    uStack_c70 = uStack_cf0;
    local_cb8 = (undefined4)uVar15;
    uStack_cb4 = (undefined4)((ulong)uVar15 >> 0x20);
    uStack_cb0 = (undefined4)uVar16;
    uStack_cac = (undefined4)((ulong)uVar16 >> 0x20);
    local_c38 = local_cb8;
    uStack_c34 = uStack_cb4;
    uStack_c30 = uStack_cb0;
    uStack_c2c = uStack_cac;
    local_7d0 = 0;
                    /* try { // try from 009fc5bf to 009fc5cb has its CatchHandler @ 009fc66a */
    local_c68 = uVar14;
    uStack_c64 = uVar5;
    uStack_c60 = uVar6;
    uStack_c5c = uVar7;
    local_c58 = uVar8;
    uStack_c54 = uVar9;
    uStack_c50 = uVar10;
    uStack_c4c = uVar11;
    local_c48 = uVar12;
    uStack_c40 = uVar13;
    local_b80 = uVar17;
    uVar16 = _ZN5tokio4task5spawn5spawn17h857259b511ae090fE(local_c88);
  }
  else if (*(char *)(param_2 + 0x18) == '\x01') {
                    /* try { // try from 009fc40d to 009fc41d has its CatchHandler @ 009fc67d */
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_015927f0
    )(local_c88,param_2);
    uVar2 = *(undefined *)(param_2 + 0x18);
    plVar3 = *(long **)(param_1 + 0xe);
    LOCK();
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    uVar16 = *(undefined8 *)(param_1 + 0x12);
    uStack_cf0 = CONCAT31(uStack_cf0._1_3_,uVar2);
                    /* try { // try from 009fc473 to 009fc47a has its CatchHandler @ 009fc644 */
    uVar15 = _ZN90__LT_linera_exporter__common__ExporterCancellationSignal_u20_as_u20_core__clone__Clone_GT_5clone17hb5bfb22658923d4fE
                       (param_1 + 0x10);
    (*(code *)PTR_memcpy_01592358)(&local_c58,param_3,0xa8);
    local_ce8 = SUB84(plVar3,0);
    uStack_ce4 = (undefined4)((ulong)plVar3 >> 0x20);
    uStack_ce0 = (undefined4)uVar16;
    uStack_cdc = (undefined4)((ulong)uVar16 >> 0x20);
    uStack_c70 = uStack_cf0;
    local_c68 = local_ce8;
    uStack_c64 = uStack_ce4;
    uStack_c60 = uStack_ce0;
    uStack_c5c = uStack_cdc;
    local_30 = 0;
                    /* try { // try from 009fc4ca to 009fc4d6 has its CatchHandler @ 009fc66a */
    local_bb0 = uVar15;
    uVar16 = _ZN5tokio4task5spawn5spawn17h91b7b5c710842c19E(local_c88);
  }
  else {
                    /* try { // try from 009fc5d6 to 009fc5da has its CatchHandler @ 009fc67d */
    uVar14 = _ZN15linera_exporter8runloops16logging_exporter15LoggingExporter3new17h7ab7c16c0e889298E
                       (*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
                    /* try { // try from 009fc5e1 to 009fc5e8 has its CatchHandler @ 009fc651 */
    uVar16 = _ZN90__LT_linera_exporter__common__ExporterCancellationSignal_u20_as_u20_core__clone__Clone_GT_5clone17hb5bfb22658923d4fE
                       (param_1 + 0x10);
    (*(code *)PTR_memcpy_01592358)(local_c88,param_3,0xa8);
    local_86c = 0;
    local_be0 = uVar16;
    local_870 = uVar14;
                    /* try { // try from 009fc61c to 009fc623 has its CatchHandler @ 009fc66a */
    uVar16 = _ZN5tokio4task5spawn5spawn17h87d449739dfa2e65E(local_c88);
  }
  _ZN4core3ptr58drop_in_place_LT_linera_service__config__DestinationId_GT_17ha22aadc4de93e11eE
            (param_2);
  return uVar16;
}