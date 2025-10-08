void _ZN4just6search6Search17find_in_directory17h02746fb8a7674a3dE(undefined8 *param_1)

{
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  _ZN4just6search6Search8justfile17h0dde78ec0504c748E(&local_58);
  if (local_58 != -0x7ffffffffffffffa) {
    param_1[4] = local_40;
    param_1[2] = uStack_50;
    param_1[3] = uStack_48;
    param_1[1] = local_58;
    *param_1 = 0x8000000000000000;
    return;
  }
  local_18 = local_40;
  local_78 = (undefined4)uStack_50;
  uStack_74 = (undefined4)((ulong)uStack_50 >> 0x20);
  uStack_70 = (undefined4)uStack_48;
  uStack_6c = (undefined4)((ulong)uStack_48 >> 0x20);
  local_28 = local_78;
  uStack_24 = uStack_74;
  uStack_20 = uStack_70;
  uStack_1c = uStack_6c;
                    /* try { // try from 00388a1b to 00388a24 has its CatchHandler @ 00388ae6 */
  _ZN4just6search6Search31working_directory_from_justfile17hd51585d6fd438247E(&local_58,uStack_48);
  if (local_58 == -0x7ffffffffffffffa) {
    param_1[4] = uStack_48;
    param_1[5] = local_40;
    param_1[2] = local_18;
    param_1[3] = uStack_50;
    *param_1 = CONCAT44(uStack_24,local_28);
    param_1[1] = CONCAT44(uStack_1c,uStack_20);
    return;
  }
  param_1[4] = local_40;
  local_78 = (undefined4)uStack_50;
  uStack_74 = (undefined4)((ulong)uStack_50 >> 0x20);
  uStack_70 = (undefined4)uStack_48;
  uStack_6c = (undefined4)((ulong)uStack_48 >> 0x20);
  *(undefined4 *)(param_1 + 2) = local_78;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_74;
  *(undefined4 *)(param_1 + 3) = uStack_70;
  *(undefined4 *)((long)param_1 + 0x1c) = uStack_6c;
  param_1[1] = local_58;
  *param_1 = 0x8000000000000000;
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_28);
  return;
}