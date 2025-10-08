void _ZN18alacritty_terminal10event_loop22EventLoop_LT_T_C_U_GT_3new17h0a50c5c3fcfa90fcE
               (undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
               undefined param_5,undefined param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
                    /* try { // try from 0046b63f to 0046b648 has its CatchHandler @ 0046b7db */
  local_a8 = param_2;
  local_70 = param_2;
  _ZN3std4sync4mpmc7channel17ha252193adc172ba6E(&local_a0);
  uVar12 = local_98;
  uVar10 = local_a0;
  uVar8 = CONCAT44(uStack_8c,local_90);
  uVar9 = CONCAT44(uStack_84,uStack_88);
  local_68 = local_a0;
  local_60 = local_98;
                    /* try { // try from 0046b671 to 0046b67b has its CatchHandler @ 0046b7c2 */
  (*(code *)PTR__ZN7polling6Poller3new17h54da8015f7437264E_009de508)(&local_a0);
  uStack_78 = uStack_84;
  uStack_7c = uStack_88;
  uStack_80 = uStack_8c;
  uVar13 = local_90;
  uVar1 = local_98;
  if ((int)local_a0 == 1) {
    *param_1 = local_98;
    param_1[0x13] = 2;
                    /* try { // try from 0046b696 to 0046b69f has its CatchHandler @ 0046b7bd */
    _ZN4core3ptr89drop_in_place_LT_std__sync__mpsc__Receiver_LT_alacritty_terminal__event_loop__Msg_GT__GT_17h82c9d4559ee14a57E
              (local_58);
                    /* try { // try from 0046b6a0 to 0046b6a9 has its CatchHandler @ 0046b7db */
    _ZN4core3ptr87drop_in_place_LT_std__sync__mpsc__Sender_LT_alacritty_terminal__event_loop__Msg_GT__GT_17h3379555d6b398184E
              (&local_68);
                    /* try { // try from 0046b6aa to 0046b6b1 has its CatchHandler @ 0046b7b8 */
    _ZN4core3ptr55drop_in_place_LT_alacritty_terminal__tty__unix__Pty_GT_17hd757896eccbf420dE
              (param_4);
                    /* try { // try from 0046b6b2 to 0046b6ba has its CatchHandler @ 0046b7b3 */
    _ZN4core3ptr49drop_in_place_LT_alacritty__event__EventProxy_GT_17hde04cda56e5a09b7E(param_3);
    _ZN4core3ptr154drop_in_place_LT_alloc__sync__Arc_LT_alacritty_terminal__sync__FairMutex_LT_alacritty_terminal__term__Term_LT_alacritty__event__EventProxy_GT__GT__GT__GT_17h894d15eab6fc536dE
              (&local_a8);
  }
  else {
    uVar11 = local_a0._4_4_;
    local_48 = local_90;
    uStack_44 = uStack_8c;
    uStack_40 = uStack_88;
    uStack_3c = uStack_84;
    local_a0 = 1;
    local_98 = 1;
    local_90 = uVar11;
    uStack_8c = (undefined4)uVar1;
    uStack_88 = (undefined4)((ulong)uVar1 >> 0x20);
    uStack_84 = uVar13;
                    /* try { // try from 0046b6fd to 0046b706 has its CatchHandler @ 0046b7c2 */
    uVar14 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0181621e79023cdcE(&local_a0);
    uVar1 = param_4[9];
    param_1[8] = param_4[8];
    param_1[9] = uVar1;
    uVar1 = *param_4;
    uVar2 = param_4[1];
    uVar3 = param_4[2];
    uVar4 = param_4[3];
    uVar5 = param_4[4];
    uVar6 = param_4[5];
    uVar7 = param_4[7];
    param_1[6] = param_4[6];
    param_1[7] = uVar7;
    param_1[4] = uVar5;
    param_1[5] = uVar6;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    *param_1 = uVar1;
    param_1[1] = uVar2;
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    param_1[0x13] = *param_3;
    param_1[0x14] = uVar1;
    param_1[0x15] = uVar2;
    param_1[0x16] = uVar3;
    param_1[0x17] = param_3[4];
    param_1[10] = uVar10;
    param_1[0xb] = uVar12;
    param_1[0xc] = uVar14;
    param_1[0xd] = local_70;
    param_1[0xe] = uVar8;
    param_1[0xf] = uVar9;
    param_1[0x10] = 0x8000000000000003;
    *(undefined *)(param_1 + 0x18) = param_5;
    *(undefined *)((long)param_1 + 0xc1) = param_6;
  }
  return;
}