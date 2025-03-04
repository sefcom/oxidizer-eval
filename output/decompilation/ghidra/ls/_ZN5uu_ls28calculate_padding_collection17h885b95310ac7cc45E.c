void _ZN5uu_ls28calculate_padding_collection17h885b95310ac7cc45E
               (undefined8 *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  char cVar1;
  char cVar2;
  undefined uVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  local_38 = param_3 * 0x130 + param_2;
  cVar1 = *(char *)(param_4 + 0xe9);
  cVar2 = *(char *)(param_4 + 0xea);
  uVar6 = *(undefined8 *)(param_4 + 0xd8);
  uVar3 = *(undefined *)(param_4 + 0xf1);
  cVar4 = *(char *)(param_4 + 0xf8);
  cVar5 = *(char *)(param_4 + 0xeb);
  local_e0 = 1;
  local_c8 = 1;
  local_d0 = 1;
  local_d8 = 1;
  uVar16 = 1;
  uVar19 = 1;
  local_40 = param_2;
  uVar14 = 1;
  uVar13 = 1;
  uVar15 = 1;
  do {
    uVar10 = uVar15;
    uVar17 = uVar13;
    uVar18 = uVar14;
    if (cVar1 == '\0') {
      lVar11 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb7b65ed0162d4d31E
                         (&local_40);
      if (lVar11 == 0) {
LAB_0022d2f2:
        *param_1 = uVar16;
        param_1[1] = local_d8;
        param_1[2] = local_d0;
        param_1[3] = local_c8;
        param_1[4] = local_e0;
        param_1[5] = uVar10;
        param_1[6] = uVar17;
        param_1[7] = uVar18;
        param_1[8] = uVar19;
        return;
      }
    }
    else {
      do {
        lVar11 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hb7b65ed0162d4d31E
                           (&local_40);
        if (lVar11 == 0) goto LAB_0022d2f2;
        lVar12 = _ZN5uu_ls8PathData12get_metadata17hc7a96a0547653f90E(lVar11,param_5);
      } while (lVar12 == 0);
      _ZN5uu_ls13display_inode17h3361fe679ac3feaaE(&local_70,*(undefined8 *)(lVar12 + 0x28));
      uVar14 = local_60;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_70);
      uVar16 = _ZN4core3cmp6max_by17h7ee1a79e2ed707c0E(uVar14,uVar16);
    }
    if ((cVar2 != '\0') &&
       (lVar12 = _ZN5uu_ls8PathData12get_metadata17hc7a96a0547653f90E(lVar11,param_5), lVar12 != 0))
    {
      uVar14 = _ZN5uu_ls14get_block_size17h2a7c975a8304f17eE
                         (*(undefined4 *)(lVar12 + 0x38),*(undefined8 *)(lVar12 + 0x60),uVar6,uVar3)
      ;
      _ZN5uu_ls12display_size17hba9b1cbdd7c6b199E(&local_70,uVar14,uVar3);
      uVar14 = local_60;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hb27a9c8978a01f77E(&local_70);
      uVar19 = _ZN4core3cmp6max_by17h7ee1a79e2ed707c0E(uVar14,uVar19);
    }
    uVar14 = uVar18;
    uVar13 = uVar17;
    uVar15 = uVar10;
    if (cVar4 == '\x01') {
      uVar14 = *(undefined8 *)(lVar11 + 0x40);
      _ZN5uu_ls22display_dir_entry_size17hb89143fe2890521fE(&local_70,lVar11,param_4,param_5);
      uVar9 = local_48;
      uVar8 = local_50;
      uVar7 = local_58;
      uVar15 = local_60;
      uVar13 = local_68;
      local_d8 = _ZN4core3cmp6max_by17h7ee1a79e2ed707c0E(local_70,local_d8);
      local_d0 = _ZN4core3cmp6max_by17h7ee1a79e2ed707c0E(uVar13,local_d0);
      local_c8 = _ZN4core3cmp6max_by17h7ee1a79e2ed707c0E(uVar15,local_c8);
      if (cVar5 != '\0') {
        local_e0 = _ZN4core3cmp6max_by17h7ee1a79e2ed707c0E(uVar14,local_e0);
      }
      uVar14 = 0;
      uVar13 = 0;
      uVar15 = 0;
      if (param_3 != 1) {
        uVar13 = _ZN4core3cmp6max_by17h7ee1a79e2ed707c0E(uVar8,uVar17);
        uVar14 = _ZN4core3cmp6max_by17h7ee1a79e2ed707c0E(uVar9,uVar18);
        uVar15 = _ZN4core3cmp6max_by17h7ee1a79e2ed707c0E(uVar7,uVar10);
        uVar15 = _ZN4core3cmp6max_by17h7ee1a79e2ed707c0E(uVar15,uVar13);
      }
    }
  } while( true );
}