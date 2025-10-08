long _ZN5uu_dd7dd_copy17h97a31b652816ce40E(undefined4 *param_1,long *param_2)

{
  char cVar1;
  char cVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  int iVar9;
  byte bVar10;
  char cVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  bool bVar15;
  undefined auVar16 [12];
  int local_2ac;
  long local_2a0;
  long local_298;
  ulong local_290;
  long local_288;
  long *local_280;
  long local_278;
  long local_270;
  ulong local_268;
  ulong local_260;
  undefined **local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  long local_238;
  undefined8 uStack_230;
  undefined local_228 [12];
  undefined **local_218;
  long local_210;
  undefined **local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  long local_1e8;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined **local_188;
  long local_180;
  undefined8 local_178;
  long local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  long local_158;
  long local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  long local_138;
  long local_130;
  long local_128;
  undefined local_120 [24];
  long local_108 [8];
  long local_c8;
  long local_c0;
  ulong local_b8;
  int local_b0;
  undefined local_a8 [12];
  long local_98;
  long local_90;
  ulong local_88;
  int local_80;
  long *local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
                    /* try { // try from 00190fdc to 00191024 has its CatchHandler @ 001918ca */
  local_228 = (*(code *)PTR__ZN3std4time7Instant3now17h767314cc8c6c5886E_00246a10)();
  lVar13 = param_2[2];
  local_178 = _ZN5uu_dd10calc_bsize17hdf3018661f9ee7c0E
                        (*(undefined8 *)(*(long *)(param_1 + 2) + 0x70),
                         *(undefined8 *)(lVar13 + 0x78));
  _ZN3std4sync4mpmc7channel17hfa786908ce127370E(&local_208);
  lVar6 = uStack_200;
  ppuVar5 = local_208;
  local_218 = local_208;
  local_210 = uStack_200;
  local_258 = (undefined **)local_1f8;
  uStack_250 = (undefined4)uStack_1f0;
  uStack_24c = uStack_1f0._4_4_;
  local_248 = CONCAT31(local_248._1_3_,*(undefined *)(*(long *)(param_1 + 2) + 0xa6));
  local_1f8 = (undefined ***)&DAT_8000000000000000;
  local_208 = (undefined **)0x0;
  uStack_1e0 = uStack_1e0 & 0xffffff00;
                    /* try { // try from 00191092 to 001910c3 has its CatchHandler @ 001918c5 */
  _ZN3std6thread7Builder15spawn_unchecked17hc49a1619cc03f387E(local_108,&local_208,&local_258);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hde2740aff8c517d5E(&local_148,local_108);
  bVar10 = *(byte *)(lVar13 + 0x93) ^ 1;
  if ((**(int **)(param_1 + 2) == 2) || (*(long *)(*(int **)(param_1 + 2) + 2) != 0)) {
                    /* try { // try from 001910ee to 0019110e has its CatchHandler @ 001918b7 */
    _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h06af5c098bf34970E
              (&local_1a0,0xdd,local_178,&PTR_DAT_0023de40);
                    /* try { // try from 0019110f to 00191123 has its CatchHandler @ 001918a9 */
    (*(code *)PTR__ZN5uu_dd5Alarm13with_interval17h0592b4190ad49d75E_00246cb0)(local_120,1,0);
                    /* try { // try from 0019112a to 00191152 has its CatchHandler @ 001918c0 */
    uVar12 = (*(code *)PTR__ZN5uu_dd5Alarm17manual_trigger_fn17hde6ca228babcadfaE_00246cc0)
                       (local_120);
    _ZN5uu_dd8progress13SignalHandler22install_signal_handler17hb77c05ee19a2f2b6E(local_108,uVar12);
    lVar13 = *(long *)(param_1 + 2);
    if ((local_108[0] == 0) && (local_168 = local_108 + 1, *(char *)(lVar13 + 0xa6) != '\x02')) {
      local_258 = (undefined **)&local_168;
      uStack_250 = 0x181fb0;
      uStack_24c = 0;
      local_208 = &PTR_DAT_0023de20;
      uStack_200 = 2;
      local_1e8 = 0;
      uStack_1f0 = 1;
                    /* try { // try from 001911db to 00191223 has its CatchHandler @ 0019189e */
      local_1f8 = &local_258;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00246780)(&local_208);
      lVar13 = *(long *)(param_1 + 2);
    }
    cVar1 = *(char *)(lVar13 + 0x45);
    cVar2 = *(char *)(param_2[2] + 0x9c);
    if (*(char *)(param_2[2] + 0xa5) == '\0') {
      uStack_240 = (undefined4)param_2[2];
      uStack_23c = (undefined4)((ulong)param_2[2] >> 0x20);
      uStack_250 = *(undefined4 *)param_2;
      uStack_24c = *(undefined4 *)((long)param_2 + 4);
      local_248 = *(undefined4 *)(param_2 + 1);
      uStack_244 = *(undefined4 *)((long)param_2 + 0xc);
      local_258 = (undefined **)&DAT_8000000000000000;
    }
    else {
      _ZN5uu_dd14bufferedoutput14BufferedOutput3new17hbb882339419c4f36E(&local_208,param_2);
      uStack_230 = CONCAT44(uStack_1dc,uStack_1e0);
      local_238 = local_1e8;
      local_248 = SUB84(local_1f8,0);
      uStack_244 = (undefined4)((ulong)local_1f8 >> 0x20);
      uStack_240 = (undefined4)uStack_1f0;
      uStack_23c = (undefined4)(uStack_1f0 >> 0x20);
      local_258 = local_208;
      uStack_250 = (undefined4)uStack_200;
      uStack_24c = uStack_200._4_4_;
    }
    local_188 = local_218;
    local_180 = local_210;
    local_270 = 0;
    local_278 = 0;
    local_280 = (long *)0x0;
    local_288 = 0;
    local_2ac = 0;
    local_290 = 0;
    local_298 = 0;
    local_2a0 = 0;
    local_268 = 0;
    local_170 = 0;
    local_260 = 0;
LAB_00191300:
    puVar3 = *(ulong **)(param_1 + 2);
    uVar4 = *puVar3;
    if (uVar4 != 2) {
      uVar14 = local_298 + local_2a0;
      if ((uVar4 & 1) != 0) {
        uVar14 = local_290;
      }
      if (uVar14 < puVar3[1]) goto LAB_00191336;
LAB_001915d2:
      uStack_200 = CONCAT44(uStack_24c,uStack_250);
      local_1e8 = local_238;
      uStack_1e0 = (uint)uStack_230;
      uStack_1dc = uStack_230._4_4_;
      local_1f8 = (undefined ***)CONCAT44(uStack_244,local_248);
      uStack_1f0 = CONCAT44(uStack_23c,uStack_240);
      local_208 = local_258;
      local_c8 = local_2a0;
      local_c0 = local_298;
      local_b8 = local_290;
      local_b0 = local_2ac;
      uStack_160 = local_288;
      local_168 = local_280;
      local_158 = local_278;
      local_150 = local_270;
      local_38 = local_138;
      local_48 = local_148;
      uStack_44 = uStack_144;
      uStack_40 = uStack_140;
      uStack_3c = uStack_13c;
                    /* try { // try from 00191695 to 001916d8 has its CatchHandler @ 00191891 */
      lVar13 = _ZN5uu_dd8finalize17hd2fe8bf08b90de3eE
                         (&local_208,&local_c8,&local_168,local_228._0_8_,local_228._8_4_,local_188,
                          local_180,&local_48,bVar10);
                    /* try { // try from 001916e4 to 001916f2 has its CatchHandler @ 001918c0 */
      _ZN4core3ptr103drop_in_place_LT_core__result__Result_LT_uu_dd__progress__SignalHandler_C_std__io__error__Error_GT__GT_17h510969c33d4f529eE
                (local_108);
      _ZN4core3ptr33drop_in_place_LT_uu_dd__Alarm_GT_17ha6da245dddaf5862E(local_120);
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h270e478e73f6834bE
                (local_1a0,local_198);
                    /* try { // try from 00191717 to 00191723 has its CatchHandler @ 001918ca */
      _ZN4core3ptr79drop_in_place_LT_std__sync__mpsc__Sender_LT_uu_dd__progress__ProgUpdate_GT__GT_17hfd684a6e04b6e3d8E
                (&local_218);
      goto LAB_001917bb;
    }
LAB_00191336:
    uVar12 = _ZN5uu_dd15calc_loop_bsize17hf5b351f02be9ced6E
                       (uVar4,puVar3[1],local_2a0,local_298,local_280,local_288,puVar3[0xe],
                        local_178);
                    /* try { // try from 0019135d to 001915cc has its CatchHandler @ 001918cf */
    _ZN5uu_dd11read_helper17h46da3b2d66f4431eE(&local_208,param_1,&local_1a0,uVar12);
    uVar4 = uStack_1f0;
    pppuVar7 = local_1f8;
    lVar13 = uStack_200;
    if ((int)local_208 != 1) {
      if (uStack_200 == 0 && local_1f8 == (undefined ***)0x0) goto LAB_001915d2;
      iVar9 = (int)local_1e8;
      _ZN5uu_dd11BlockWriter12write_blocks17hb7310594a23c1026E
                (&local_208,&local_258,local_198,local_190);
      uVar14 = uStack_1f0;
      pppuVar8 = local_1f8;
      if ((int)local_208 == 1) goto LAB_00191731;
      local_130 = local_1e8;
      local_128 = CONCAT44(uStack_1dc,uStack_1e0);
      if (cVar1 != '\0') {
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hab12e77de6c67244E
                  (local_260 >> 0x3f,&PTR_DAT_0023de58);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hab12e77de6c67244E
                  (uVar4 >> 0x3f,&PTR_DAT_0023de70);
        _ZN5uu_dd5Input13discard_cache17h505abcb6f4256ec2E(*param_1,param_1[1],local_260,uVar4);
      }
      if (cVar2 != '\0') {
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hab12e77de6c67244E
                  ((long)local_268 < 0 || local_170 != 0,&PTR_DAT_0023de88);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hab12e77de6c67244E
                  ((long)pppuVar8 < 0 || uVar14 != 0,&PTR_DAT_0023dea0);
        _ZN5uu_dd11BlockWriter13discard_cache17hd6361abadcee340dE(&local_258,local_268,pppuVar8);
      }
      local_260 = local_260 + uVar4;
      bVar15 = CARRY8(local_268,(ulong)pppuVar8);
      local_268 = local_268 + (long)pppuVar8;
      local_170 = local_170 + uVar14 + (ulong)bVar15;
      local_2a0 = local_2a0 + lVar13;
      local_298 = local_298 + (long)pppuVar7;
      local_2ac = local_2ac + iVar9;
      local_290 = local_290 + uVar4;
      local_278 = local_278 + local_130;
      local_270 = local_270 + local_128;
      bVar15 = CARRY8((ulong)local_280,(ulong)pppuVar8);
      local_280 = (long *)((long)local_280 + (long)pppuVar8);
      local_288 = local_288 + uVar14 + (ulong)bVar15;
      cVar11 = (*(code *)PTR__ZN5uu_dd5Alarm11get_trigger17h676d02444d734923E_00246cc8)(local_120);
      if ((byte)(cVar11 - 1U) < 2) {
        auVar16 = (*(code *)PTR__ZN3std4time7Instant7elapsed17h537da767ad82472aE_00246d50)
                            (local_228);
        local_58 = cVar11 != '\x01';
        local_98 = local_2a0;
        local_90 = local_298;
        local_88 = local_290;
        local_80 = local_2ac;
        local_78 = local_280;
        local_70 = local_288;
        local_68 = local_278;
        local_60 = local_270;
        local_a8 = auVar16;
        _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h514a0951d0dfaab8E
                  (&local_208,local_188,local_180,local_a8);
      }
      goto LAB_00191300;
    }
LAB_00191731:
    lVar13 = uStack_200;
    _ZN4core3ptr39drop_in_place_LT_uu_dd__BlockWriter_GT_17h4573056733d671f2E(&local_258);
                    /* try { // try from 0019173d to 00191749 has its CatchHandler @ 001918c0 */
    _ZN4core3ptr103drop_in_place_LT_core__result__Result_LT_uu_dd__progress__SignalHandler_C_std__io__error__Error_GT__GT_17h510969c33d4f529eE
              (local_108);
    _ZN4core3ptr33drop_in_place_LT_uu_dd__Alarm_GT_17ha6da245dddaf5862E(local_120);
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h270e478e73f6834bE
              (local_1a0,local_198);
    bVar15 = false;
  }
  else {
                    /* try { // try from 00191773 to 00191781 has its CatchHandler @ 001918b7 */
    lVar13 = _ZN5uu_dd24flush_caches_full_length17h2d347dd9f2f16b2fE(param_1,param_2);
    if (lVar13 == 0) {
      uStack_1f0 = param_2[2];
      uStack_200 = *param_2;
      local_1f8 = (undefined ***)param_2[1];
      local_208 = (undefined **)&DAT_8000000000000000;
      local_248 = 0;
      uStack_244 = 0;
      uStack_240 = 0;
      local_258 = (undefined **)0x0;
      uStack_250 = 0;
      uStack_24c = 0;
      local_108[2] = 0;
      local_108[3] = 0;
      local_108[0] = 0;
      local_108[1] = 0;
      local_158 = local_138;
      local_168 = (long *)CONCAT44(uStack_144,local_148);
      uStack_160 = CONCAT44(uStack_13c,uStack_140);
                    /* try { // try from 00191850 to 00191886 has its CatchHandler @ 001918b7 */
      lVar13 = _ZN5uu_dd8finalize17hd2fe8bf08b90de3eE
                         (&local_208,&local_258,local_108,local_228._0_8_,local_228._8_4_,ppuVar5,
                          lVar6,&local_168,bVar10);
      bVar15 = false;
      goto LAB_0019179a;
    }
    bVar15 = true;
  }
                    /* try { // try from 0019178d to 00191799 has its CatchHandler @ 001918c5 */
  _ZN4core3ptr60drop_in_place_LT_std__thread__JoinHandle_LT__LP__RP__GT__GT_17h04c84524a3cb659eE
            (&local_148);
LAB_0019179a:
                    /* try { // try from 0019179a to 001917ab has its CatchHandler @ 001918ca */
  _ZN4core3ptr79drop_in_place_LT_std__sync__mpsc__Sender_LT_uu_dd__progress__ProgUpdate_GT__GT_17hfd684a6e04b6e3d8E
            (&local_218);
  if (bVar15) {
    _ZN4core3ptr34drop_in_place_LT_uu_dd__Output_GT_17he2074b4203b220e7E
              (*(undefined4 *)param_2,*(undefined4 *)((long)param_2 + 4));
  }
LAB_001917bb:
  _ZN4core3ptr33drop_in_place_LT_uu_dd__Input_GT_17h0e5e373a8e2b4ad9E(param_1[1]);
  return lVar13;
}