/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 _ZN9uu_numfmt22parse_unit_size_suffix17h0d4904f7b87ea86bE(char *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 extraout_EDX;
  ulong extraout_RDX;
  ulong uVar4;
  undefined auVar5 [16];
  undefined4 local_28;
  undefined4 local_24;
  char *local_20;
  char *local_18;
  
  if (param_2 == 0) {
    return 1;
  }
  local_18 = param_1 + param_2;
  local_20 = param_1;
  iVar2 = _ZN4core3str11validations15next_code_point17hea6d5bf7d5f3451aE(&local_20);
  if (iVar2 == 0) {
    _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_s_src_uu_numfmt_src_numfmt_rs_002358a8);
    uVar4 = extraout_RDX;
LAB_001c0441:
                    /* WARNING: Subroutine does not return */
    _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
              (uVar4,10,&PTR_s_src_uu_numfmt_src_numfmt_rs_002358c0);
  }
  local_20 = "K";
  local_18 = "";
  local_28 = extraout_EDX;
  auVar5 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17ha514c49988fbe620E
                     (&local_20,&local_28);
  if (auVar5._0_8_ == 1) {
    if (param_2 == 1) {
      uVar4 = auVar5._8_8_ + 1;
      if (uVar4 < 10) {
        return 1;
      }
      goto LAB_001c0441;
    }
    if (param_2 == 2) {
      local_24 = 0;
      uVar3 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(&local_24);
      cVar1 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17ha109e61deb96259bE
                        (param_1,2,uVar3,1);
      if (cVar1 != '\0') {
        uVar4 = auVar5._8_8_ + 1;
        if (uVar4 < 10) {
          return 1;
        }
                    /* WARNING: Subroutine does not return */
        _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E
                  (uVar4,10,&PTR_s_src_uu_numfmt_src_numfmt_rs_002358d8);
      }
    }
  }
  return 0;
}