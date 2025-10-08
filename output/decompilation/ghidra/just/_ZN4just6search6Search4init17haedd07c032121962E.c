void _ZN4just6search6Search4init17haedd07c032121962E
               (undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  long local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  switch(*param_2 ^ 0x8000000000000000) {
  case 0:
    _ZN4just6search6Search12project_root17hdf3a1681c569c3d2E
              (&local_d8,param_5,param_6,param_3,param_4);
    local_88 = uStack_d0;
    uVar1 = local_88;
    uStack_80 = uStack_c8;
    uVar2 = uStack_80;
    local_78 = local_c0;
    if (local_d8 == -0x7ffffffffffffffa) {
      local_98 = local_c0;
      local_88._0_4_ = (undefined4)uStack_d0;
      local_88._4_4_ = (undefined4)((ulong)uStack_d0 >> 0x20);
      uStack_80._0_4_ = (undefined4)uStack_c8;
      uStack_80._4_4_ = (undefined4)((ulong)uStack_c8 >> 0x20);
      local_a8 = (undefined4)local_88;
      uStack_a4 = local_88._4_4_;
      uStack_a0 = (undefined4)uStack_80;
      uStack_9c = uStack_80._4_4_;
                    /* try { // try from 00388b96 to 00388baf has its CatchHandler @ 00388ea1 */
      local_88 = uVar1;
      uStack_80 = uVar2;
      _ZN3std4path4Path4join17h1eac0ae5e7efa361E(&local_58,uStack_c8,local_c0,&DAT_00169778,8);
      *param_1 = local_58;
      param_1[1] = uStack_50;
      param_1[4] = CONCAT44(uStack_9c,uStack_a0);
      param_1[5] = local_98;
      param_1[2] = local_48;
      param_1[3] = CONCAT44(uStack_a4,local_a8);
    }
    else {
      param_1[4] = local_c0;
      param_1[2] = uStack_d0;
      param_1[3] = uStack_c8;
      param_1[1] = local_d8;
      *param_1 = 0x8000000000000000;
    }
    break;
  case 1:
    _ZN4just6search6Search5clean17hd91959d13e0c6030E(local_70,param_3,param_4,param_2[2],param_2[3])
    ;
                    /* try { // try from 00388d59 to 00388d66 has its CatchHandler @ 00388eb9 */
    _ZN4just6search6Search12project_root17hdf3a1681c569c3d2E
              (&local_d8,param_5,param_6,local_68,local_60);
    local_88 = uStack_d0;
    uVar1 = local_88;
    uStack_80 = uStack_c8;
    uVar2 = uStack_80;
    local_78 = local_c0;
    local_88._0_4_ = (undefined4)uStack_d0;
    local_88._4_4_ = (undefined4)((ulong)uStack_d0 >> 0x20);
    uStack_80._0_4_ = (undefined4)uStack_c8;
    uStack_80._4_4_ = (undefined4)((ulong)uStack_c8 >> 0x20);
    local_88 = uVar1;
    uStack_80 = uVar2;
    if (local_d8 == -0x7ffffffffffffffa) {
      local_98 = local_c0;
      local_a8 = (undefined4)local_88;
      uStack_a4 = local_88._4_4_;
      uStack_a0 = (undefined4)uStack_80;
      uStack_9c = uStack_80._4_4_;
                    /* try { // try from 00388da5 to 00388dbe has its CatchHandler @ 00388e84 */
      _ZN3std4path4Path4join17h1eac0ae5e7efa361E(&local_40,uStack_c8,local_c0,&DAT_00169778,8);
      local_b0 = local_98;
      local_c0 = CONCAT44(uStack_a4,local_a8);
      uStack_b8 = CONCAT44(uStack_9c,uStack_a0);
      uStack_c8 = local_30;
      *(undefined4 *)param_1 = local_40;
      *(undefined4 *)((long)param_1 + 4) = uStack_3c;
      *(undefined4 *)(param_1 + 1) = uStack_38;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_34;
      param_1[4] = uStack_b8;
      param_1[5] = local_98;
      param_1[2] = local_30;
      param_1[3] = local_c0;
    }
    else {
      param_1[4] = local_c0;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_88;
      *(undefined4 *)((long)param_1 + 0x14) = local_88._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_80;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_80._4_4_;
      param_1[1] = local_d8;
      *param_1 = 0x8000000000000000;
    }
    puVar3 = local_70;
    goto LAB_00388e6e;
  case 2:
    param_1[1] = 0x8000000000000000;
    *param_1 = 0x8000000000000000;
    break;
  case 3:
    _ZN4just6search6Search5clean17hd91959d13e0c6030E
              (&local_a8,param_3,param_4,param_2[2],param_2[3]);
                    /* try { // try from 00388ca8 to 00388caf has its CatchHandler @ 00388ebb */
    _ZN4just6search6Search31working_directory_from_justfile17hd51585d6fd438247E
              (&local_d8,CONCAT44(uStack_9c,uStack_a0),local_98);
    local_88 = uStack_d0;
    uVar1 = local_88;
    uStack_80 = uStack_c8;
    uVar2 = uStack_80;
    local_78 = local_c0;
    if (local_d8 == -0x7ffffffffffffffa) {
      local_b0 = local_c0;
      local_c0 = uStack_d0;
      uStack_b8 = uStack_c8;
      uStack_c8 = local_98;
      goto LAB_00388cfc;
    }
    param_1[4] = local_c0;
    local_88._0_4_ = (undefined4)uStack_d0;
    local_88._4_4_ = (undefined4)((ulong)uStack_d0 >> 0x20);
    uStack_80._0_4_ = (undefined4)uStack_c8;
    uStack_80._4_4_ = (undefined4)((ulong)uStack_c8 >> 0x20);
    *(undefined4 *)(param_1 + 2) = (undefined4)local_88;
    *(undefined4 *)((long)param_1 + 0x14) = local_88._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_80;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_80._4_4_;
    param_1[1] = local_d8;
    *param_1 = 0x8000000000000000;
    puVar3 = &local_a8;
    local_88 = uVar1;
    uStack_80 = uVar2;
LAB_00388e6e:
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(puVar3);
    break;
  default:
    _ZN4just6search6Search5clean17hd91959d13e0c6030E
              (&local_a8,param_3,param_4,param_2[1],param_2[2]);
                    /* try { // try from 00388c38 to 00388c47 has its CatchHandler @ 00388ebd */
    _ZN4just6search6Search5clean17hd91959d13e0c6030E
              (&local_88,param_3,param_4,param_2[4],param_2[5]);
    uStack_c8 = local_98;
    local_c0 = local_88;
    uStack_b8 = uStack_80;
    local_b0 = local_78;
LAB_00388cfc:
    param_1[4] = uStack_b8;
    param_1[5] = local_b0;
    param_1[2] = uStack_c8;
    param_1[3] = local_c0;
    *(undefined4 *)param_1 = local_a8;
    *(undefined4 *)((long)param_1 + 4) = uStack_a4;
    *(undefined4 *)(param_1 + 1) = uStack_a0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_9c;
  }
  return;
}