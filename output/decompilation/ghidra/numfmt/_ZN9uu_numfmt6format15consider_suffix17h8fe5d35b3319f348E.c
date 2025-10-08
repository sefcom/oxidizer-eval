void _ZN9uu_numfmt6format15consider_suffix17h8fe5d35b3319f348E
               (double param_1,undefined8 *param_2,byte param_3,undefined param_4,long param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  double *pdVar7;
  long lVar8;
  double dVar9;
  undefined local_38 [2];
  undefined auStack_36 [2];
  undefined auStack_34 [2];
  undefined auStack_32 [2];
  double local_30;
  
  _local_38 = 0x706050403020100;
  switch(param_3) {
  case 2:
    pcVar6 = "Unit \'auto\' isn\'t supported with --to options";
    uVar5 = 0x2d;
    goto LAB_0016a01c;
  case 3:
    puVar4 = &DAT_0011aab8;
    param_3 = 0;
    break;
  default:
    param_3 = param_3 & 1;
    puVar4 = &DAT_0011ab08;
    break;
  case 5:
    goto switchD_0016a00e_caseD_5;
  }
  dVar9 = (double)(_DAT_001196f0 & (ulong)param_1);
  local_30 = *(double *)(puVar4 + 8);
  if (dVar9 <= DAT_00118fd0 + local_30) {
switchD_0016a00e_caseD_5:
    param_2[1] = param_1;
    *(undefined *)((long)param_2 + 0x11) = 2;
    *param_2 = 0x8000000000000000;
  }
  else {
    bVar2 = true;
    if (*(double *)(puVar4 + 0x10) <= dVar9) {
      if (*(double *)(puVar4 + 0x18) <= dVar9) {
        if (*(double *)(puVar4 + 0x20) <= dVar9) {
          if (*(double *)(puVar4 + 0x28) <= dVar9) {
            if (*(double *)(puVar4 + 0x30) <= dVar9) {
              if (*(double *)(puVar4 + 0x38) <= dVar9) {
                if (*(double *)(puVar4 + 0x40) <= dVar9) {
                  if (*(double *)(puVar4 + 0x48) <= dVar9) {
                    pcVar6 = "Number is too big and unsupported";
                    uVar5 = 0x21;
LAB_0016a01c:
                    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h4c3223c430555e40E
                              (param_2,pcVar6,uVar5);
                    return;
                  }
                  pdVar7 = &local_30;
                  lVar8 = 8;
                  bVar2 = false;
                }
                else {
                  pdVar7 = (double *)(local_38 + 7);
                  lVar8 = 7;
                }
              }
              else {
                pdVar7 = (double *)(local_38 + 6);
                lVar8 = 6;
              }
            }
            else {
              pdVar7 = (double *)(local_38 + 5);
              lVar8 = 5;
            }
          }
          else {
            pdVar7 = (double *)(local_38 + 4);
            lVar8 = 4;
          }
        }
        else {
          pdVar7 = (double *)(local_38 + 3);
          lVar8 = 3;
        }
      }
      else {
        pdVar7 = (double *)(local_38 + 2);
        lVar8 = 2;
      }
    }
    else {
      pdVar7 = (double *)(local_38 + 1);
      lVar8 = 1;
    }
    if (param_5 == 0) {
      dVar9 = (double)(*(code *)PTR__ZN9uu_numfmt6format9div_round17hdf3f58dd879fd2aeE_002098b0)
                                (param_4);
    }
    else {
      dVar9 = (double)_ZN9uu_numfmt6format20round_with_precision17hbeea945620f7b8d9E
                                (param_1 / *(double *)(puVar4 + lVar8 * 8),param_4,param_5);
    }
    if (local_30 <= (double)(_DAT_001196f0 & (ulong)dVar9)) {
      if (!bVar2) {
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00209690)
                  (8,8,&PTR_s_src_uu_numfmt_src_format_rs_00202448);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      dVar9 = dVar9 / local_30;
      uVar3 = local_38[lVar8];
    }
    else {
      uVar3 = *(undefined *)((long)pdVar7 + -1);
    }
    param_2[1] = dVar9;
    *(undefined *)(param_2 + 2) = uVar3;
    *(byte *)((long)param_2 + 0x11) = param_3;
    *param_2 = 0x8000000000000000;
  }
  return;
}