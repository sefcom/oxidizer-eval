void _ZN5uu_ls28calculate_padding_collection17h3b8c962303b7ca71E
               (undefined8 *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  byte bVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar13 = param_3 * 0x130 + param_2;
  bVar1 = *(byte *)(param_4 + 0xf1);
  bVar2 = *(byte *)(param_4 + 0xf2);
  uVar5 = *(undefined8 *)(param_4 + 0xd8);
  uVar3 = *(undefined *)(param_4 + 0xf9);
  local_38 = param_3;
  if (*(char *)(param_4 + 0x100) == '\x01') {
    bVar4 = *(byte *)(param_4 + 0xf3);
    local_e0 = 1;
    uVar12 = 1;
    local_c0 = 1;
    local_d8 = 1;
    local_b0 = 1;
    local_b8 = 1;
    local_c8 = 1;
    uVar8 = 1;
    uVar7 = 1;
    do {
      uVar11 = uVar7;
      uVar10 = uVar8;
      if ((bVar1 & 1) == 0) {
        if (param_2 == lVar13) goto LAB_0029f9a2;
        lVar6 = param_2 + 0x130;
        lVar9 = param_2;
      }
      else {
        do {
          lVar9 = param_2;
          if (lVar9 == lVar13) goto LAB_0029f9a2;
          lVar6 = _ZN5uu_ls8PathData12get_metadata17h14c40f15e3077b4fE(lVar9,param_5);
          param_2 = lVar9 + 0x130;
        } while (lVar6 == 0);
        _ZN5uu_ls13display_inode17hb17e23d9a426a075E(&local_88,*(undefined8 *)(lVar6 + 0x28));
        uVar8 = local_78;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_88);
        local_c8 = _ZN4core3cmp3Ord3max17h3082798d7e57ba36E(uVar8,local_c8);
        lVar6 = lVar9 + 0x130;
      }
      param_2 = lVar6;
      local_40 = uVar12;
      if (((bVar2 & 1) != 0) &&
         (lVar6 = _ZN5uu_ls8PathData12get_metadata17h14c40f15e3077b4fE(lVar9,param_5), lVar6 != 0))
      {
        uVar8 = _ZN5uu_ls14get_block_size17hab622dcab93c70dfE
                          (*(undefined4 *)(lVar6 + 0x38),*(undefined8 *)(lVar6 + 0x60),uVar5,uVar3);
        _ZN5uu_ls12display_size17hb2e480a0d8619531E(&local_88,uVar8,uVar3);
        uVar8 = local_78;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_88);
        local_e0 = _ZN4core3cmp3Ord3max17h3082798d7e57ba36E(uVar8,local_e0);
      }
      uVar8 = *(undefined8 *)(lVar9 + 0x40);
      _ZN5uu_ls22display_dir_entry_size17h765544fbf6779e6bE(&local_88,lVar9,param_4,param_5);
      uVar12 = local_78;
      uVar7 = local_80;
      local_48 = local_70;
      local_58 = local_68;
      local_50 = local_60;
      local_b8 = _ZN4core3cmp3Ord3max17h3082798d7e57ba36E(local_88,local_b8);
      local_b0 = _ZN4core3cmp3Ord3max17h3082798d7e57ba36E(uVar7,local_b0);
      local_d8 = _ZN4core3cmp3Ord3max17h3082798d7e57ba36E(uVar12,local_d8);
      if ((bVar4 & 1) != 0) {
        local_c0 = _ZN4core3cmp3Ord3max17h3082798d7e57ba36E(uVar8,local_c0);
      }
      uVar12 = 0;
      uVar8 = 0;
      uVar7 = 0;
      if (local_38 != 1) {
        uVar7 = _ZN4core3cmp3Ord3max17h3082798d7e57ba36E(local_58,uVar11);
        uVar12 = _ZN4core3cmp3Ord3max17h3082798d7e57ba36E(local_50,local_40);
        uVar8 = _ZN4core3cmp3Ord3max17h3082798d7e57ba36E(local_48,uVar10);
        uVar8 = _ZN4core3cmp3Ord3max17h3082798d7e57ba36E(uVar8,uVar7);
      }
    } while( true );
  }
  if ((bVar2 & 1) != 0) {
    local_e0 = 1;
    local_c8 = 1;
    do {
      lVar9 = param_2;
      if ((bVar1 & 1) == 0) {
        if (param_2 == lVar13) goto LAB_0029f93f;
        lVar9 = param_2 + 0x130;
      }
      else {
        do {
          param_2 = lVar9;
          if (param_2 == lVar13) goto LAB_0029f93f;
          lVar9 = param_2 + 0x130;
          lVar6 = _ZN5uu_ls8PathData12get_metadata17h14c40f15e3077b4fE(param_2,param_5);
        } while (lVar6 == 0);
        _ZN5uu_ls13display_inode17hb17e23d9a426a075E(&local_88,*(undefined8 *)(lVar6 + 0x28));
        uVar8 = local_78;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_88);
        local_c8 = _ZN4core3cmp3Ord3max17h3082798d7e57ba36E(uVar8,local_c8);
      }
      lVar6 = _ZN5uu_ls8PathData12get_metadata17h14c40f15e3077b4fE(param_2,param_5);
      param_2 = lVar9;
      if (lVar6 != 0) {
        uVar8 = _ZN5uu_ls14get_block_size17hab622dcab93c70dfE
                          (*(undefined4 *)(lVar6 + 0x38),*(undefined8 *)(lVar6 + 0x60),uVar5,uVar3);
        _ZN5uu_ls12display_size17hb2e480a0d8619531E(&local_88,uVar8,uVar3);
        uVar8 = local_78;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_88);
        local_e0 = _ZN4core3cmp3Ord3max17h3082798d7e57ba36E(uVar8,local_e0);
      }
    } while( true );
  }
  local_e0 = 1;
  uVar12 = 1;
  uVar11 = 1;
  uVar10 = 1;
  local_c0 = 1;
  local_d8 = 1;
  local_b0 = 1;
  local_b8 = 1;
  local_c8 = 1;
  if ((bVar1 & 1) != 0) {
    while (local_c8 = uVar12, param_2 != lVar13) {
      lVar9 = param_2 + 0x130;
      lVar6 = _ZN5uu_ls8PathData12get_metadata17h14c40f15e3077b4fE(param_2,param_5);
      param_2 = lVar9;
      uVar12 = local_c8;
      if (lVar6 != 0) {
        _ZN5uu_ls13display_inode17hb17e23d9a426a075E(&local_88,*(undefined8 *)(lVar6 + 0x28));
        uVar5 = local_78;
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hfc5b24fb008ea041E(&local_88);
        uVar12 = _ZN4core3cmp3Ord3max17h3082798d7e57ba36E(uVar5,local_c8);
      }
    }
    local_e0 = 1;
    uVar11 = 1;
    uVar10 = 1;
    local_b8 = 1;
    local_b0 = 1;
    local_d8 = 1;
    local_c0 = 1;
    uVar12 = 1;
  }
LAB_0029f9a2:
  *param_1 = local_c8;
  param_1[1] = local_b8;
  param_1[2] = local_b0;
  param_1[3] = local_d8;
  param_1[4] = local_c0;
  param_1[5] = uVar10;
  param_1[6] = uVar11;
  param_1[7] = uVar12;
  param_1[8] = local_e0;
  return;
LAB_0029f93f:
  uVar12 = 1;
  uVar11 = 1;
  uVar10 = 1;
  local_b8 = 1;
  local_b0 = 1;
  local_d8 = 1;
  local_c0 = 1;
  goto LAB_0029f9a2;
}