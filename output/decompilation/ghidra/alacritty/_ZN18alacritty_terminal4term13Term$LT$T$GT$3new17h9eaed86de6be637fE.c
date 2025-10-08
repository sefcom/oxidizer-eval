void _ZN18alacritty_terminal4term13Term_LT_T_GT_3new17h9eaed86de6be637fE
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined local_5c8 [144];
  undefined8 local_538;
  undefined4 local_530;
  undefined local_518 [152];
  undefined auStack_480 [4];
  undefined auStack_47c [4];
  undefined auStack_478 [4];
  undefined auStack_474 [4];
  undefined auStack_470 [4];
  undefined auStack_46c [4];
  undefined auStack_468 [4];
  undefined local_464 [1076];
  
                    /* try { // try from 00470366 to 00470375 has its CatchHandler @ 00470602 */
  _ZN18alacritty_terminal4grid13Grid_LT_T_GT_3new17h0c2d46e3a6188c56E
            (local_5c8,param_3,param_4,param_2[3]);
                    /* try { // try from 00470376 to 0047038a has its CatchHandler @ 004705f3 */
  _ZN18alacritty_terminal4grid13Grid_LT_T_GT_3new17h0c2d46e3a6188c56E(local_518,param_3,param_4,0);
                    /* try { // try from 00470393 to 0047039c has its CatchHandler @ 004705e1 */
  _ZN4core4iter6traits8iterator8Iterator7collect17h5d5fd2af4f280153E(&local_5f8,local_538);
  uVar3 = local_5e8;
  uVar2 = local_5f0;
  uVar1 = local_5f8;
                    /* try { // try from 004703bd to 004703cd has its CatchHandler @ 004705ce */
  (*(code *)PTR__ZN18alacritty_terminal4term15TermDamageState3new17h0fc83946f2a9c521E_009de590)
            (&local_5f8,param_4,param_3);
  lVar5 = 7;
  while( true ) {
    auStack_480[lVar5 * 4] = 0;
    auStack_47c[lVar5 * 4] = 0;
    auStack_478[lVar5 * 4] = 0;
    auStack_474[lVar5 * 4] = 0;
    auStack_470[lVar5 * 4] = 0;
    if (lVar5 == 0x10f) break;
    auStack_46c[lVar5 * 4] = 0;
    auStack_468[lVar5 * 4] = 0;
    local_464[lVar5 * 4] = 0;
    lVar5 = lVar5 + 8;
  }
  *(undefined *)((long)param_1 + 0x6e2) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined *)(param_1 + 0x50) = 2;
  puVar4 = PTR_memcpy_009de0b0;
  (*(code *)PTR_memcpy_009de0b0)(param_1 + 5,local_5c8,0xb0);
  (*(code *)puVar4)(param_1 + 0x1b,local_518,0xb0);
  *(undefined *)((long)param_1 + 0x6e3) = 0;
  param_1[0x31] = uVar1;
  param_1[0x32] = uVar2;
  param_1[0x33] = uVar3;
  *(undefined4 *)((long)param_1 + 0x6dc) = 0x28081;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)((long)param_1 + 0x2a4) = local_530;
  (*(code *)puVar4)(param_1 + 0x55,local_464,0x434);
  *(undefined *)(param_1 + 0xdc) = 2;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *param_1 = *param_5;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = param_5[4];
  param_1[0x48] = 0x8000000000000000;
  param_1[0x34] = 0;
  param_1[0x35] = 8;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 1;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 1;
  param_1[0x3c] = 0;
  param_1[0x3d] = local_5f8;
  param_1[0x3e] = local_5f0;
  param_1[0x3f] = local_5e8;
  param_1[0x40] = uStack_5e0;
  param_1[0x41] = local_5d8;
  param_1[0x42] = uStack_5d0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  param_1[0x43] = *param_2;
  param_1[0x44] = uVar1;
  param_1[0x45] = uVar2;
  param_1[0x46] = uVar3;
  param_1[0x47] = param_2[4];
  return;
}