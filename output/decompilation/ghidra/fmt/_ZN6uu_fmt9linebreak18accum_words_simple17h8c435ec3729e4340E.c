void _ZN6uu_fmt9linebreak18accum_words_simple17h8c435ec3729e4340E
               (ulong *param_1,long *param_2,long param_3,byte param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined auVar12 [16];
  
  lVar1 = *(long *)(param_5 + 0x28);
  lVar2 = *param_2;
  lVar8 = _ZN6uu_fmt9linebreak9BreakArgs13compute_width17h78d96ea40f73ab18E(lVar2,param_5,param_3,0)
  ;
  lVar10 = 0;
  if (*(char *)(param_2 + 6) != '\0' || *(byte *)(param_5 + 0x3a) != 0) {
    lVar10 = (ulong)((byte)(param_4 & *(byte *)(param_5 + 0x3a) | *(byte *)(param_5 + 0x38)) & 1) +
             1;
  }
  uVar11 = param_3 + lVar1 + lVar8 + lVar10;
  lVar8 = param_2[3];
  if (*(ulong *)(lVar2 + 0x30) < uVar11) {
    uVar9 = _ZN6uu_fmt9linebreak13write_newline17h38b91d3d5ac133d3E(param_2[1],param_2[2],lVar8);
    if (uVar9 == 0) {
      uVar3 = *(undefined8 *)(param_5 + 0x10);
      uVar4 = *(undefined8 *)(param_5 + 0x18);
      uVar5 = *(undefined8 *)(param_5 + 0x20);
      auVar12 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                          (uVar5,uVar3,uVar4);
      if (auVar12._0_8_ == 0) {
        (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_001f7098)
                  (uVar3,uVar4,uVar5,uVar4,&PTR_s_src_uu_fmt_src_linebreak_rs_001f0308);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = _ZN6uu_fmt9linebreak17write_with_spaces17h61239a97c7a24215E
                        (auVar12._0_8_,auVar12._8_8_,0,lVar8);
      if (uVar9 == 0) {
        uVar7 = *(undefined *)(param_5 + 0x39);
        *param_1 = lVar1 + param_2[5];
        goto LAB_001616c7;
      }
    }
  }
  else {
    uVar9 = _ZN6uu_fmt9linebreak17write_with_spaces17h61239a97c7a24215E
                      (*(undefined8 *)(param_5 + 0x10),*(undefined8 *)(param_5 + 0x18),lVar10,lVar8)
    ;
    if (uVar9 == 0) {
      uVar7 = *(undefined *)(param_5 + 0x39);
      *param_1 = uVar11;
      goto LAB_001616c7;
    }
  }
  *param_1 = uVar9;
  uVar7 = 2;
LAB_001616c7:
  *(undefined *)(param_1 + 1) = uVar7;
  return;
}