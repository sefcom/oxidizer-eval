void __rustcall
uu_ls::calculate_padding_collection
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
  undefined8 local_e8;
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
  local_c8 = 1;
  local_e8 = 1;
  local_d0 = 1;
  local_d8 = 1;
  local_e0 = 1;
  uVar18 = 1;
  local_40 = param_2;
  uVar13 = 1;
  uVar14 = 1;
  uVar15 = 1;
  do {
    uVar10 = uVar15;
    uVar16 = uVar14;
    uVar17 = uVar13;
    if (cVar1 == '\0') {
      lVar11 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                         (&local_40);
      if (lVar11 == 0) {
LAB_0022d287:
        *param_1 = uVar18;
        param_1[1] = local_e0;
        param_1[2] = local_d8;
        param_1[3] = local_d0;
        param_1[4] = local_e8;
        param_1[5] = uVar10;
        param_1[6] = uVar17;
        param_1[7] = uVar16;
        param_1[8] = local_c8;
        return;
      }
    }
    else {
      do {
        lVar11 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                           (&local_40);
        if (lVar11 == 0) goto LAB_0022d287;
        lVar12 = PathData::get_metadata(lVar11,param_5);
      } while (lVar12 == 0);
      display_inode(&local_70,*(undefined8 *)(lVar12 + 0x28));
      uVar13 = local_60;
      core::ptr::drop_in_place<alloc::string::String>(&local_70);
      uVar18 = core::cmp::max_by(uVar13,uVar18);
    }
    if ((cVar2 != '\0') && (lVar12 = PathData::get_metadata(lVar11,param_5), lVar12 != 0)) {
      uVar13 = get_block_size(*(undefined4 *)(lVar12 + 0x38),*(undefined8 *)(lVar12 + 0x60),uVar6,
                              uVar3);
      display_size(&local_70,uVar13,uVar3);
      uVar13 = local_60;
      core::ptr::drop_in_place<alloc::string::String>(&local_70);
      local_c8 = core::cmp::max_by(uVar13,local_c8);
    }
    uVar13 = uVar17;
    uVar14 = uVar16;
    uVar15 = uVar10;
    if (cVar4 == '\x01') {
      uVar13 = *(undefined8 *)(lVar11 + 0x40);
      display_dir_entry_size(&local_70,lVar11,param_4,param_5);
      uVar9 = local_48;
      uVar8 = local_50;
      uVar7 = local_58;
      uVar15 = local_60;
      uVar14 = local_68;
      local_e0 = core::cmp::max_by(local_70,local_e0);
      local_d8 = core::cmp::max_by(uVar14,local_d8);
      local_d0 = core::cmp::max_by(uVar15,local_d0);
      if (cVar5 != '\0') {
        local_e8 = core::cmp::max_by(uVar13,local_e8);
      }
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      if (param_3 != 1) {
        uVar13 = core::cmp::max_by(uVar8,uVar17);
        uVar14 = core::cmp::max_by(uVar9,uVar16);
        uVar15 = core::cmp::max_by(uVar7,uVar10);
        uVar15 = core::cmp::max_by(uVar15,uVar13);
      }
    }
  } while( true );
}