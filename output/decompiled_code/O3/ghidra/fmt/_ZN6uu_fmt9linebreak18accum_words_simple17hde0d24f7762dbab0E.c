void __rustcall
uu_fmt::linebreak::accum_words_simple
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
  lVar10 = 0;
  lVar8 = BreakArgs::compute_width(lVar2,param_5,param_3,0);
  if (*(char *)(param_2 + 6) != '\0' || *(char *)(param_5 + 0x3a) != '\0') {
    lVar10 = (ulong)(byte)(*(char *)(param_5 + 0x3a) != '\0' & param_4 |
                          *(char *)(param_5 + 0x38) != '\0') + 1;
  }
  uVar11 = param_3 + lVar1 + lVar8 + lVar10;
  lVar8 = param_2[3];
  if (*(ulong *)(lVar2 + 0x30) < uVar11) {
    uVar9 = write_newline(param_2[1],param_2[2],lVar8);
    if (uVar9 == 0) {
      uVar3 = *(undefined8 *)(param_5 + 0x10);
      uVar4 = *(undefined8 *)(param_5 + 0x18);
      uVar5 = *(undefined8 *)(param_5 + 0x20);
      auVar12 = core::str::traits::
                _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::
                get(uVar5,uVar3,uVar4);
      if (auVar12._0_8_ == 0) {
        core::str::slice_error_fail
                  (uVar3,uVar4,uVar5,uVar4,&PTR_s_src_uu_fmt_src_linebreak_rs_00227b18);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = write_with_spaces(auVar12._0_8_,auVar12._8_8_,0,lVar8);
      if (uVar9 == 0) {
        uVar7 = *(undefined *)(param_5 + 0x39);
        *param_1 = lVar1 + param_2[5];
        goto LAB_001bce47;
      }
    }
  }
  else {
    uVar9 = write_with_spaces(*(undefined8 *)(param_5 + 0x10),*(undefined8 *)(param_5 + 0x18),lVar10
                              ,lVar8);
    if (uVar9 == 0) {
      uVar7 = *(undefined *)(param_5 + 0x39);
      *param_1 = uVar11;
      goto LAB_001bce47;
    }
  }
  *param_1 = uVar9;
  uVar7 = 2;
LAB_001bce47:
  *(undefined *)(param_1 + 1) = uVar7;
  return;
}