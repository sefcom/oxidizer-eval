undefined8 *
_ZN13turborepo_lsp7Backend3new17h8dbf922cb5011a47E(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined3 local_198;
  undefined5 uStack_195;
  undefined3 uStack_190;
  undefined5 uStack_18d;
  undefined4 uStack_188;
  uint local_184;
  undefined3 uStack_180;
  undefined4 uStack_17d;
  undefined4 local_179;
  
  local_198 = 2;
  uStack_195 = 0;
                    /* try { // try from 00784764 to 00784772 has its CatchHandler @ 00784892 */
  _ZN5tokio4sync5watch7channel17h0c21945f3d821a51E(&local_1c8,&local_198);
  uVar2 = local_1c8;
  local_1a8 = local_1c0;
  local_1a0 = local_1b8;
  local_198 = 1;
  uStack_195 = 0;
  uStack_190 = 1;
  uStack_18d = 0;
  uStack_188 = 0;
  local_184 = local_184 & 0xffffff00;
  uStack_180 = 0;
  uStack_17d = 0;
  local_179 = CONCAT31(local_179._1_3_,0x80);
                    /* try { // try from 007847c4 to 007847cd has its CatchHandler @ 0078486f */
  local_1b0 = param_2;
  uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h92fd88ceaf95ef48E(&local_198);
  local_1c8 = uVar4;
                    /* try { // try from 007847d6 to 007847da has its CatchHandler @ 00784860 */
  auVar5 = _ZN3std6thread5local17LocalKey_LT_T_GT_4with17hc249d54d2b254acaE();
  uVar1 = _UNK_00a269b0;
  uStack_188._3_1_ = (undefined)_DAT_00a269a8;
  local_184 = (uint)((ulong)_DAT_00a269a8 >> 8);
  uStack_180 = (undefined3)((ulong)_DAT_00a269a8 >> 0x28);
  uStack_17d = (undefined4)_UNK_00a269b0;
  local_179 = (undefined4)((ulong)_UNK_00a269b0 >> 0x20);
  uVar3 = local_179;
  uStack_195 = SUB85(PTR_DAT_00a26998,0);
  uStack_190 = (undefined3)((ulong)PTR_DAT_00a26998 >> 0x28);
  uStack_18d = (undefined5)_UNK_00a269a0;
  uStack_188._0_3_ = (undefined3)((ulong)_UNK_00a269a0 >> 0x28);
  *param_1 = param_2;
  param_1[1] = uVar4;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined *)((long)param_1 + 0x2c) = 0;
  local_179._0_1_ = (undefined)((ulong)uVar1 >> 0x20);
  *(ulong *)((long)param_1 + 0x2d) = CONCAT53(uStack_195,local_198);
  *(ulong *)((long)param_1 + 0x35) = CONCAT53(uStack_18d,uStack_190);
  *(ulong *)((long)param_1 + 0x3d) = CONCAT44(local_184,uStack_188);
  *(ulong *)((long)param_1 + 0x45) = CONCAT17((undefined)local_179,CONCAT43(uStack_17d,uStack_180));
  *(undefined4 *)((long)param_1 + 0x4c) = uVar3;
  *(undefined (*) [16])(param_1 + 10) = auVar5;
  param_1[2] = uVar2;
  param_1[3] = local_1c0;
  param_1[4] = local_1b8;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined *)((long)param_1 + 100) = 0;
  param_1[0xd] = 0x8000000000000000;
  return param_1;
}