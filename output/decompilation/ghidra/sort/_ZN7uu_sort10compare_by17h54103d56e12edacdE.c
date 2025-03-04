ulong _ZN7uu_sort10compare_by17h54103d56e12edacdE
                (undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long local_40;
  long local_38;
  
  local_40 = *(long *)(param_3 + 8);
  local_38 = *(long *)(param_3 + 0x10) * 0x38 + local_40;
  uVar7 = param_2[2] * *(long *)(param_3 + 0x58);
  uVar8 = *(long *)(param_3 + 0x58) * param_1[2];
  uVar6 = *(ulong *)(param_5 + 0x10);
  uVar1 = *(ulong *)(param_4 + 0x10);
  lVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1dc45998b69df0a3E
                    (&local_40);
  if (lVar5 == 0) {
    bVar2 = 0;
    if (((*(char *)(param_3 + 0x98) != '\x05') && (bVar2 = 0, *(char *)(param_3 + 0x83) == '\0')) &&
       (*(char *)(param_3 + 0x84) == '\0')) {
      uVar6 = param_1[1];
      uVar1 = param_2[1];
      uVar7 = uVar1;
      if (uVar6 < uVar1) {
        uVar7 = uVar6;
      }
      iVar4 = (*(code *)PTR_memcmp_00306f48)(*param_1,*param_2,uVar7);
      lVar5 = uVar6 - uVar1;
      if (iVar4 != 0) {
        lVar5 = (long)iVar4;
      }
      bVar2 = 0xff;
      if (-1 < lVar5) {
        bVar2 = lVar5 != 0;
      }
    }
    bVar3 = -bVar2;
    if (*(char *)(param_3 + 0x82) == '\0') {
      bVar3 = bVar2;
    }
    return (ulong)bVar3;
  }
  if (*(char *)(lVar5 + 0x37) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00223e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)(&DAT_0012eb40 + *(int *)(&DAT_0012eb40 + (ulong)*(byte *)(lVar5 + 0x35) * 4))
            )();
    return uVar6;
  }
  if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
    _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
              (uVar8,uVar1,&PTR_s_src_uu_sort_src_sort_rs_002ffd18);
  }
  if (uVar7 < uVar6) {
                    /* WARNING: Could not recover jumptable at 0x00223dcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)(&DAT_0012eb40 + *(int *)(&DAT_0012eb40 + (ulong)*(byte *)(lVar5 + 0x35) * 4))
            )();
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
            (uVar7,uVar6,&PTR_s_src_uu_sort_src_sort_rs_002ffd30);
}