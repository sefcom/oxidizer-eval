/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _ZN9uu_numfmt6format15consider_suffix17h00abba19284ba538E
               (double param_1,undefined8 *param_2,byte param_3,undefined param_4,long param_5)

{
  double dVar1;
  undefined uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  double dVar8;
  undefined8 local_28;
  
  local_28 = 0x706050403020100;
  switch(param_3) {
  case 2:
    pcVar6 = "Unit \'auto\' isn\'t supported with --to options";
    uVar5 = 0x2d;
    goto LAB_001c3bcb;
  case 3:
    puVar4 = &DAT_00123078;
    param_3 = 0;
    break;
  default:
    param_3 = param_3 & 1;
    puVar4 = &DAT_001230c8;
    break;
  case 5:
    goto switchD_001c3bbd_caseD_5;
  }
  dVar8 = (double)(_DAT_00115de0 & (ulong)param_1);
  dVar1 = *(double *)(puVar4 + 8);
  if (dVar8 <= DAT_00115960 + dVar1) {
switchD_001c3bbd_caseD_5:
    param_2[1] = param_1;
    *(undefined *)((long)param_2 + 0x11) = 2;
    *param_2 = 0x8000000000000000;
  }
  else {
    lVar7 = 1;
    bVar3 = true;
    if ((((*(double *)(puVar4 + 0x10) <= dVar8) && (lVar7 = 2, *(double *)(puVar4 + 0x18) <= dVar8))
        && (lVar7 = 3, *(double *)(puVar4 + 0x20) <= dVar8)) &&
       (((lVar7 = 4, *(double *)(puVar4 + 0x28) <= dVar8 &&
         (lVar7 = 5, *(double *)(puVar4 + 0x30) <= dVar8)) &&
        ((lVar7 = 6, *(double *)(puVar4 + 0x38) <= dVar8 &&
         (lVar7 = 7, *(double *)(puVar4 + 0x40) <= dVar8)))))) {
      if (*(double *)(puVar4 + 0x48) <= dVar8) {
        pcVar6 = "Number is too big and unsupported";
        uVar5 = 0x21;
LAB_001c3bcb:
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h523a2f825c855b37E
                  (param_2,pcVar6,uVar5);
        return;
      }
      lVar7 = 8;
      bVar3 = false;
    }
    if (param_5 == 0) {
      dVar8 = (double)_ZN9uu_numfmt6format9div_round17hcdae20ad69b44c09E(param_4);
    }
    else {
      dVar8 = (double)_ZN9uu_numfmt6format20round_with_precision17h7f1d296807047857E
                                (param_1 / *(double *)(puVar4 + lVar7 * 8),param_4,param_5);
    }
    if (dVar1 <= (double)(_DAT_00115de0 & (ulong)dVar8)) {
      if (!bVar3) {
                    /* WARNING: Subroutine does not return */
        _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                  (8,8,&PTR_s_src_uu_numfmt_src_format_rs_00235b88);
      }
      dVar8 = dVar8 / dVar1;
    }
    else {
      lVar7 = lVar7 + -1;
    }
    uVar2 = *(undefined *)((long)&local_28 + lVar7);
    param_2[1] = dVar8;
    *(undefined *)(param_2 + 2) = uVar2;
    *(byte *)((long)param_2 + 0x11) = param_3;
    *param_2 = 0x8000000000000000;
  }
  return;
}