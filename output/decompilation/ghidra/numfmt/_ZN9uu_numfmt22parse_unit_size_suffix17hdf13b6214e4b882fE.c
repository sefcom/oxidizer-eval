undefined  [16]
_ZN9uu_numfmt22parse_unit_size_suffix17hdf13b6214e4b882fE(undefined *param_1,long param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong extraout_RDX;
  double dVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [12];
  undefined4 local_28;
  undefined4 local_24;
  undefined *local_20;
  char *local_18;
  
  if (param_2 == 0) {
    uVar5 = 1;
    goto LAB_0016c834;
  }
  local_18 = param_1 + param_2;
  local_20 = param_1;
  auVar9 = _ZN4core3str11validations15next_code_point17h5d7df44f8cb1b62eE(&local_20);
  if ((auVar9 & (undefined  [12])0x1) != (undefined  [12])0x0) {
    local_20 = &DAT_0011aec4;
    local_18 = "grouping cannot be combined with --to";
    local_28 = auVar9._8_4_;
    auVar7 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8position17h8c3a699082174296E
                       (&local_20,&local_28);
    uVar4 = auVar7._8_8_;
    uVar5 = uVar4;
    if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) {
LAB_0016c841:
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar5;
      return auVar7 << 0x40;
    }
    if (param_2 == 2) {
      local_24 = 0;
      uVar3 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(0x69,&local_24);
      cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_9ends_with17h8acf7e79f75ef2f1E
                        (param_1,2,uVar3,1);
      uVar5 = extraout_RDX;
      if (cVar2 == '\0') goto LAB_0016c841;
      if (9 < uVar4 + 1) goto LAB_0016c86a;
      dVar6 = (double)(&DAT_0011ab10)[uVar4];
    }
    else {
      if (param_2 != 1) goto LAB_0016c841;
      if (9 < uVar4 + 1) goto LAB_0016c858;
      dVar6 = (double)(&DAT_0011aac0)[uVar4];
    }
    uVar4 = 0;
    if (0.0 <= dVar6) {
      uVar4 = (long)(dVar6 - _s__00119050) & (long)dVar6 >> 0x3f | (long)dVar6;
    }
    uVar5 = 0xffffffffffffffff;
    if (dVar6 <= _DAT_00118fa8) {
      uVar5 = uVar4;
    }
LAB_0016c834:
    auVar8._8_8_ = uVar5;
    auVar8._0_8_ = 1;
    return auVar8;
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00209978)(&DAT_00202828);
LAB_0016c858:
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00209690)();
LAB_0016c86a:
  (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_00209690)();
  pcVar1 = (code *)swi(3);
  auVar7 = (*pcVar1)();
  return auVar7;
}