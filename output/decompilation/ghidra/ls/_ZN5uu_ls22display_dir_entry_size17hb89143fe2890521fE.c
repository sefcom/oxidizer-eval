void _ZN5uu_ls22display_dir_entry_size17hb89143fe2890521fE
               (long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long local_98;
  long local_88;
  long local_80;
  undefined local_78 [16];
  long local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar4 = _ZN5uu_ls8PathData12get_metadata17hc7a96a0547653f90E(param_2,param_4);
  if (lVar4 == 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    _ZN5uu_ls19display_len_or_rdev17habe6b45626a6ff16E
              (&local_60,lVar4,*(undefined8 *)(param_3 + 0xd0),*(undefined *)(param_3 + 0xf1));
    lVar5 = local_50;
    if (CONCAT44(uStack_44,local_48) == -0x8000000000000000) {
      local_a8 = local_60;
      uStack_a4 = uStack_5c;
      uStack_a0 = uStack_58;
      uStack_9c = uStack_54;
      local_88 = local_50;
      local_98 = local_50;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_a8);
      local_80 = 0;
      lVar5 = 0;
    }
    else {
      local_68 = local_50;
      local_98 = local_38;
      local_a8 = local_48;
      uStack_a4 = uStack_44;
      uStack_a0 = uStack_40;
      uStack_9c = uStack_3c;
                    /* try { // try from 00228dac to 00228db3 has its CatchHandler @ 00228e5f */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_a8);
      local_80 = local_38;
      local_88 = local_38 + lVar5 + 2;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(local_78);
    }
    _ZN5uu_ls21display_symlink_count17h0e09a9bc6ad70230E(local_78,*(undefined8 *)(lVar4 + 0x30));
    lVar3 = local_68;
                    /* try { // try from 00228de7 to 00228df8 has its CatchHandler @ 00228e6e */
    uVar1 = *(undefined *)(param_3 + 0xe3);
    _ZN5uu_ls13display_uname17hf0da37ae6ca87e0cE(&local_a8,*(undefined4 *)(lVar4 + 0x3c),uVar1);
    lVar2 = local_98;
                    /* try { // try from 00228e02 to 00228e3d has its CatchHandler @ 00228e73 */
    _ZN5uu_ls13display_group17hd4d6945b2a81cff8E(&local_60,*(undefined4 *)(lVar4 + 0x40),uVar1);
    *param_1 = lVar3;
    param_1[1] = lVar2;
    param_1[2] = local_50;
    param_1[3] = local_88;
    param_1[4] = lVar5;
    param_1[5] = local_80;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_60);
                    /* try { // try from 00228e3e to 00228e45 has its CatchHandler @ 00228e6e */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_a8);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(local_78);
  }
  return;
}