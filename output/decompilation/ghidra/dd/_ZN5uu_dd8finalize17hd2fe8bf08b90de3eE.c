long _ZN5uu_dd8finalize17hd2fe8bf08b90de3eE
               (undefined8 param_1,undefined4 *param_2,ulong *param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,int *param_8,char param_9)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  ulong local_e8;
  long local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined local_98 [12];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  long local_60;
  long local_58;
  long lStack_50;
  undefined local_48;
  
                    /* try { // try from 00191997 to 001919d2 has its CatchHandler @ 00191b05 */
  local_128 = param_4;
  local_120 = param_5;
  _ZN5uu_dd11BlockWriter5flush17ha2b73a890b58a6a5E(&local_f8,param_1);
  if (local_f8 == 1) {
    lVar3 = CONCAT44(iStack_ec,iStack_f0);
  }
  else {
    local_108 = local_d8;
    uStack_104 = uStack_d4;
    uStack_100 = uStack_d0;
    uStack_fc = uStack_cc;
    lVar3 = _ZN5uu_dd11BlockWriter4sync17hb048f8c58f3d1132E(param_1);
    if (lVar3 == 0) {
      if (param_9 != '\0') {
                    /* try { // try from 00191a0f to 00191ab2 has its CatchHandler @ 00191b05 */
        _ZN5uu_dd11BlockWriter8truncate17h683e1b01b8f66d73E(param_1);
      }
      local_118 = *(undefined4 *)(param_3 + 2);
      uStack_114 = *(undefined4 *)((long)param_3 + 0x14);
      uStack_110 = *(undefined4 *)(param_3 + 3);
      uStack_10c = *(undefined4 *)((long)param_3 + 0x1c);
      uVar1 = *param_3;
      uVar2 = param_3[1];
      local_98 = (*(code *)PTR__ZN3std4time7Instant7elapsed17h537da767ad82472aE_00246d50)
                           (&local_128);
      local_68 = uVar1 + local_e8;
      local_60 = uVar2 + local_e0 + (ulong)CARRY8(uVar1,local_e8);
      local_58 = CONCAT44(uStack_114,local_118) + CONCAT44(uStack_104,local_108);
      lStack_50 = CONCAT44(uStack_10c,uStack_110) + CONCAT44(uStack_fc,uStack_100);
      local_88 = *param_2;
      uStack_84 = param_2[1];
      uStack_80 = param_2[2];
      uStack_7c = param_2[3];
      local_78 = param_2[4];
      uStack_74 = param_2[5];
      uStack_70 = param_2[6];
      uStack_6c = param_2[7];
      local_48 = 2;
      _ZN3std4sync4mpmc15Sender_LT_T_GT_4send17h514a0951d0dfaab8E
                (&local_f8,param_6,param_7,local_98);
      local_e8 = *(ulong *)(param_8 + 4);
      local_f8 = *param_8;
      iStack_f4 = param_8[1];
      iStack_f0 = param_8[2];
      iStack_ec = param_8[3];
                    /* try { // try from 00191acc to 00191ae0 has its CatchHandler @ 00191af0 */
      auVar4 = _ZN3std6thread18JoinInner_LT_T_GT_4join17h6209760d233c43caE(&local_f8);
      _ZN4core6result19Result_LT_T_C_E_GT_6expect17he805a987f3379d9aE(auVar4._0_8_,auVar4._8_8_);
      _ZN4core3ptr39drop_in_place_LT_uu_dd__BlockWriter_GT_17h4573056733d671f2E(param_1);
      return 0;
    }
  }
                    /* try { // try from 001919db to 001919e7 has its CatchHandler @ 00191af2 */
  _ZN4core3ptr60drop_in_place_LT_std__thread__JoinHandle_LT__LP__RP__GT__GT_17h04c84524a3cb659eE
            (param_8);
  _ZN4core3ptr39drop_in_place_LT_uu_dd__BlockWriter_GT_17h4573056733d671f2E(param_1);
  return lVar3;
}