undefined  [16] _ZN9uu_chroot11set_context17h8c46b364c6a89d00E(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined auVar4 [16];
  uint local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  uint local_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  lVar3 = _ZN9uu_chroot12enter_chroot17h98c30b2b91faf011E
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                     *(undefined *)(param_1 + 0x60));
  if (lVar3 != 0) goto LAB_00167c77;
  if (*(ulong *)(param_1 + 0x30) == 0x8000000000000003) {
switchD_001679ca_caseD_0:
    lVar3 = param_1 + 0x18;
    if (*(long *)(param_1 + 0x18) == -0x8000000000000000) {
      lVar3 = 0;
    }
    _ZN9uu_chroot35set_supplemental_gids_with_strategy17h8af8a3f17de6130dE(&local_48,0,lVar3);
    if (local_48 != 0xe) {
LAB_00167c10:
      local_4c = local_24;
      local_70 = local_48;
      local_6c = uStack_44;
      uStack_68 = uStack_40;
      uStack_64 = uStack_3c;
      uStack_60 = uStack_38;
      local_5c = uStack_34;
      uStack_58 = uStack_30;
      uStack_54 = uStack_2c;
      uStack_50 = uStack_28;
LAB_00167c6d:
      lVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h6d25de4dbe6fde20E(&local_70);
      goto LAB_00167c77;
    }
  }
  else {
    switch(*(ulong *)(param_1 + 0x30) ^ 0x8000000000000000) {
    case 0:
      goto switchD_001679ca_caseD_0;
    case 1:
      _ZN9uu_chroot11name_to_uid17h4c06bc9aac5f3697E
                (&local_48,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
      uVar1 = uStack_44;
      if (local_48 != 0xe) {
LAB_00167c32:
        uStack_58 = uStack_30;
        uStack_54 = uStack_2c;
        uStack_50 = uStack_28;
        local_4c = local_24;
        uStack_68 = uStack_40;
        uStack_64 = uStack_3c;
        uStack_60 = uStack_38;
        local_5c = uStack_34;
        local_70 = local_48;
        local_6c = uStack_44;
        goto LAB_00167c6d;
      }
      lVar3 = 0;
      if (*(long *)(param_1 + 0x18) != -0x8000000000000000) {
        lVar3 = param_1 + 0x18;
      }
      _ZN9uu_chroot35set_supplemental_gids_with_strategy17h8af8a3f17de6130dE
                (&local_48,((ulong)uStack_44 << 0x20) + 1,lVar3);
      if (local_48 == 0xe) {
        param_1 = param_1 + 0x38;
        lVar3 = _ZN9uu_chroot7set_gid17h96b8c03f678d01e3E(uVar1);
        if (lVar3 == 0) {
LAB_00167a69:
          lVar3 = _ZN9uu_chroot7set_uid17haa9800f67f007aa3E(uVar1);
          if (lVar3 == 0) break;
          goto LAB_00167bc3;
        }
        _ZN9uu_chroot11set_context28__u7b__u7b_closure_u7d__u7d_17h80dafbbd71a02e95E
                  (&local_70,param_1,lVar3);
        local_48 = local_6c;
        uStack_44 = uStack_68;
        uStack_40 = uStack_64;
        uStack_3c = uStack_60;
        uStack_38 = local_5c;
        uStack_34 = uStack_58;
        uStack_30 = uStack_54;
        uStack_2c = uStack_50;
        uStack_28 = local_4c;
        if (local_70 == 0xe) goto LAB_00167a69;
        goto LAB_00167bfc;
      }
      goto LAB_00167c10;
    case 2:
      _ZN9uu_chroot11name_to_gid17hce66daf4744ca6c7E
                (&local_48,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
      uVar1 = uStack_44;
      if (local_48 != 0xe) {
LAB_00167c51:
        uStack_58 = uStack_30;
        uStack_54 = uStack_2c;
        uStack_50 = uStack_28;
        local_4c = local_24;
        uStack_68 = uStack_40;
        uStack_64 = uStack_3c;
        uStack_60 = uStack_38;
        local_5c = uStack_34;
        local_70 = local_48;
        local_6c = uStack_44;
        goto LAB_00167c6d;
      }
      lVar3 = param_1 + 0x18;
      if (*(long *)(param_1 + 0x18) == -0x8000000000000000) {
        lVar3 = 0;
      }
      _ZN9uu_chroot35set_supplemental_gids_with_strategy17h8af8a3f17de6130dE(&local_48,0,lVar3);
      if (local_48 != 0xe) goto LAB_00167c10;
      lVar3 = _ZN9uu_chroot7set_gid17h96b8c03f678d01e3E(uVar1);
      if (lVar3 != 0) {
        _ZN9uu_chroot11set_context28__u7b__u7b_closure_u7d__u7d_17h80dafbbd71a02e95E
                  (&local_70,param_1 + 0x38,lVar3);
        goto LAB_00167bd3;
      }
      break;
    default:
      _ZN9uu_chroot11name_to_uid17h4c06bc9aac5f3697E
                (&local_48,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
      uVar1 = uStack_44;
      if (local_48 != 0xe) goto LAB_00167c32;
      _ZN9uu_chroot11name_to_gid17hce66daf4744ca6c7E
                (&local_48,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
      uVar2 = uStack_44;
      if (local_48 != 0xe) goto LAB_00167c51;
      lVar3 = 0;
      if (*(long *)(param_1 + 0x18) != -0x8000000000000000) {
        lVar3 = param_1 + 0x18;
      }
      _ZN9uu_chroot35set_supplemental_gids_with_strategy17h8af8a3f17de6130dE
                (&local_48,(ulong)uVar1 << 0x20 | 0x101,lVar3);
      if (local_48 != 0xe) goto LAB_00167c10;
      lVar3 = _ZN9uu_chroot7set_gid17h96b8c03f678d01e3E(uVar2);
      if (lVar3 != 0) {
        _ZN9uu_chroot11set_context28__u7b__u7b_closure_u7d__u7d_17h80dafbbd71a02e95E
                  (&local_70,param_1 + 0x48,lVar3);
        local_48 = local_6c;
        uStack_44 = uStack_68;
        uStack_40 = uStack_64;
        uStack_3c = uStack_60;
        uStack_38 = local_5c;
        uStack_34 = uStack_58;
        uStack_30 = uStack_54;
        uStack_2c = uStack_50;
        uStack_28 = local_4c;
        if (local_70 != 0xe) goto LAB_00167bfc;
      }
      lVar3 = _ZN9uu_chroot7set_uid17haa9800f67f007aa3E(uVar1);
      if (lVar3 == 0) break;
      param_1 = param_1 + 0x30;
LAB_00167bc3:
      _ZN9uu_chroot11set_context28__u7b__u7b_closure_u7d__u7d_17h5b3caec019f0d248E
                (&local_70,param_1,lVar3);
LAB_00167bd3:
      local_48 = local_6c;
      uStack_44 = uStack_68;
      uStack_40 = uStack_64;
      uStack_3c = uStack_60;
      uStack_38 = local_5c;
      uStack_34 = uStack_58;
      uStack_30 = uStack_54;
      uStack_2c = uStack_50;
      uStack_28 = local_4c;
      if (local_70 == 0xe) break;
LAB_00167bfc:
      local_4c = uStack_28;
      local_6c = local_48;
      uStack_68 = uStack_44;
      uStack_64 = uStack_40;
      uStack_60 = uStack_3c;
      local_5c = uStack_38;
      uStack_58 = uStack_34;
      uStack_54 = uStack_30;
      uStack_50 = uStack_2c;
      goto LAB_00167c6d;
    }
  }
  lVar3 = 0;
LAB_00167c77:
  auVar4._8_8_ = &
                 PTR__ZN4core3ptr50drop_in_place_LT_uu_chroot__error__ChrootError_GT_17h70d0c8dd677b313fE_001fabb0
  ;
  auVar4._0_8_ = lVar3;
  return auVar4;
}