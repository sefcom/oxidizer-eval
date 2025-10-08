void _ZN4just6search6Search4find17h1e33858e96fbd947E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,ulong *param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  switch(*param_6 ^ 0x8000000000000000) {
  case 0:
    _ZN4just6search6Search17find_in_directory17h02746fb8a7674a3dE(param_1);
    return;
  case 1:
    _ZN4just6search6Search5clean17hd91959d13e0c6030E
              (&local_48,param_4,param_5,param_6[2],param_6[3]);
                    /* try { // try from 00388345 to 00388352 has its CatchHandler @ 00388500 */
    _ZN4just6search6Search8justfile17h0dde78ec0504c748E(&local_d8,param_2,param_3,local_40,local_38)
    ;
    local_88 = lStack_d0;
    lVar1 = local_88;
    uStack_80 = local_c8;
    lVar2 = uStack_80;
    uStack_78 = local_c0;
    local_88._0_4_ = (undefined4)lStack_d0;
    local_88._4_4_ = (undefined4)((ulong)lStack_d0 >> 0x20);
    uStack_80._0_4_ = (undefined4)local_c8;
    uStack_80._4_4_ = (undefined4)((ulong)local_c8 >> 0x20);
    local_88 = lVar1;
    uStack_80 = lVar2;
    if (local_d8 == -0x7ffffffffffffffa) {
      local_98 = local_c0;
      local_a8 = lStack_d0;
      uStack_a0 = local_c8;
                    /* try { // try from 00388391 to 00388398 has its CatchHandler @ 003884cb */
      _ZN4just6search6Search31working_directory_from_justfile17hd51585d6fd438247E
                (&local_d8,local_c8);
      lVar2 = local_c0;
      lVar1 = local_c8;
      local_88 = lStack_d0;
      lVar3 = local_88;
      uStack_80 = local_c8;
      uStack_78 = local_c0;
      if (local_d8 == -0x7ffffffffffffffa) {
        local_b0 = local_c0;
        local_c0 = lStack_d0;
        lStack_b8 = local_c8;
        local_c8 = local_98;
        param_1[4] = lVar1;
        param_1[5] = lVar2;
        param_1[2] = local_98;
        param_1[3] = lStack_d0;
        *(undefined4 *)param_1 = (undefined4)local_a8;
        *(undefined4 *)((long)param_1 + 4) = local_a8._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_a0;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_a0._4_4_;
      }
      else {
        param_1[4] = local_c0;
        local_88._0_4_ = (undefined4)lStack_d0;
        local_88._4_4_ = (undefined4)((ulong)lStack_d0 >> 0x20);
        uStack_80._0_4_ = (undefined4)local_c8;
        uStack_80._4_4_ = (undefined4)((ulong)local_c8 >> 0x20);
        *(undefined4 *)(param_1 + 2) = (undefined4)local_88;
        *(undefined4 *)((long)param_1 + 0x14) = local_88._4_4_;
        *(undefined4 *)(param_1 + 3) = (undefined4)uStack_80;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_80._4_4_;
        param_1[1] = local_d8;
        *param_1 = 0x8000000000000000;
        local_88 = lVar3;
        uStack_80 = lVar1;
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_a8);
      }
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
    puVar4 = &local_48;
    break;
  case 2:
    local_50 = param_5;
    _ZN4just6search6Search20find_global_justfile17hebd54203e27fdeacE(&local_88);
    local_68 = (undefined4)uStack_80;
    uStack_64 = uStack_80._4_4_;
    uStack_60 = (undefined4)uStack_78;
    uStack_5c = uStack_78._4_4_;
    local_58 = local_70;
    if (local_88 != -0x7ffffffffffffffa) {
      param_1[4] = local_70;
      param_1[2] = uStack_80;
      param_1[3] = uStack_78;
      param_1[1] = local_88;
      *param_1 = 0x8000000000000000;
      return;
    }
                    /* try { // try from 003881cd to 003881e7 has its CatchHandler @ 003884e8 */
    _ZN4just6search6Search12project_root17hdf3a1681c569c3d2E
              (&local_88,param_2,param_3,param_4,local_50);
    local_a8 = uStack_80;
    lVar1 = local_a8;
    uStack_a0 = uStack_78;
    lVar2 = uStack_a0;
    local_98 = local_70;
    if (local_88 == -0x7ffffffffffffffa) {
      *param_1 = CONCAT44(uStack_64,local_68);
      param_1[1] = CONCAT44(uStack_5c,uStack_60);
      param_1[4] = uStack_78;
      param_1[5] = local_70;
      param_1[2] = local_58;
      param_1[3] = uStack_80;
      return;
    }
    param_1[4] = local_70;
    local_a8._0_4_ = (undefined4)uStack_80;
    local_a8._4_4_ = (undefined4)((ulong)uStack_80 >> 0x20);
    uStack_a0._0_4_ = (undefined4)uStack_78;
    uStack_a0._4_4_ = (undefined4)((ulong)uStack_78 >> 0x20);
    *(undefined4 *)(param_1 + 2) = (undefined4)local_a8;
    *(undefined4 *)((long)param_1 + 0x14) = local_a8._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_a0;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_a0._4_4_;
    param_1[1] = local_88;
    *param_1 = 0x8000000000000000;
    puVar4 = (undefined8 *)&local_68;
    local_a8 = lVar1;
    uStack_a0 = lVar2;
    break;
  case 3:
    _ZN4just6search6Search5clean17hd91959d13e0c6030E
              (&local_a8,param_4,param_5,param_6[2],param_6[3]);
                    /* try { // try from 0038828b to 00388292 has its CatchHandler @ 00388502 */
    _ZN4just6search6Search31working_directory_from_justfile17hd51585d6fd438247E
              (&local_d8,uStack_a0,local_98);
    local_88 = lStack_d0;
    lVar1 = local_88;
    uStack_80 = local_c8;
    lVar2 = uStack_80;
    uStack_78 = local_c0;
    if (local_d8 == -0x7ffffffffffffffa) {
      local_b0 = local_c0;
      local_c0 = lStack_d0;
      lStack_b8 = local_c8;
      local_c8 = local_98;
      goto LAB_003882df;
    }
    param_1[4] = local_c0;
    local_88._0_4_ = (undefined4)lStack_d0;
    local_88._4_4_ = (undefined4)((ulong)lStack_d0 >> 0x20);
    uStack_80._0_4_ = (undefined4)local_c8;
    uStack_80._4_4_ = (undefined4)((ulong)local_c8 >> 0x20);
    *(undefined4 *)(param_1 + 2) = (undefined4)local_88;
    *(undefined4 *)((long)param_1 + 0x14) = local_88._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_80;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_80._4_4_;
    param_1[1] = local_d8;
    *param_1 = 0x8000000000000000;
    puVar4 = &local_a8;
    local_88 = lVar1;
    uStack_80 = lVar2;
    break;
  default:
    _ZN4just6search6Search5clean17hd91959d13e0c6030E
              (&local_a8,param_4,param_5,param_6[1],param_6[2]);
                    /* try { // try from 0038814d to 0038815c has its CatchHandler @ 00388504 */
    _ZN4just6search6Search5clean17hd91959d13e0c6030E
              (&local_88,param_4,param_5,param_6[4],param_6[5]);
    local_c8 = local_98;
    local_c0 = local_88;
    lStack_b8 = uStack_80;
    local_b0 = uStack_78;
LAB_003882df:
    param_1[4] = lStack_b8;
    param_1[5] = local_b0;
    param_1[2] = local_c8;
    param_1[3] = local_c0;
    *(undefined4 *)param_1 = (undefined4)local_a8;
    *(undefined4 *)((long)param_1 + 4) = local_a8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_a0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_a0._4_4_;
    return;
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(puVar4);
  return;
}