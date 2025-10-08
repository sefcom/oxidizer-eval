void _ZN9uu_chroot35set_supplemental_gids_with_strategy17h8af8a3f17de6130dE
               (int *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    _ZN9uu_chroot21handle_missing_groups17h3a01081f3f4106e6E(param_1);
    return;
  }
  local_70 = 0;
  local_68 = 4;
  local_60 = 0;
  lVar3 = *(long *)(param_3 + 0x10);
  if (lVar3 == 0) {
    lVar3 = _ZN9uu_chroot21set_supplemental_gids17h6e10f73cbbb1a6e6E(4,0);
  }
  else {
    lVar1 = *(long *)(param_3 + 8);
    lVar4 = 0;
    do {
                    /* try { // try from 0016787a to 00167896 has its CatchHandler @ 00167924 */
      _ZN9uu_chroot11name_to_gid17hce66daf4744ca6c7E
                (&local_58,*(undefined8 *)(lVar1 + 8 + lVar4),*(undefined8 *)(lVar1 + 0x10 + lVar4))
      ;
      if (local_58 != 0xe) {
        *(undefined8 *)(param_1 + 6) = local_40;
        *(undefined8 *)(param_1 + 8) = uStack_38;
        param_1[2] = local_50;
        param_1[3] = iStack_4c;
        param_1[4] = iStack_48;
        param_1[5] = iStack_44;
        *param_1 = local_58;
        param_1[1] = local_54;
        goto LAB_00167906;
      }
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hd7306e6e4a779136E(&local_70);
      lVar4 = lVar4 + 0x18;
    } while (lVar3 * 0x18 != lVar4);
    lVar3 = _ZN9uu_chroot21set_supplemental_gids17h6e10f73cbbb1a6e6E(local_68,local_60);
  }
  if (lVar3 == 0) {
    iVar2 = 0xe;
  }
  else {
    *(long *)(param_1 + 2) = lVar3;
    iVar2 = 0xc;
  }
  *param_1 = iVar2;
LAB_00167906:
  _ZN4core3ptr47drop_in_place_LT_alloc__vec__Vec_LT_u32_GT__GT_17hd86db2e6974637b8E
            (local_70,local_68);
  return;
}