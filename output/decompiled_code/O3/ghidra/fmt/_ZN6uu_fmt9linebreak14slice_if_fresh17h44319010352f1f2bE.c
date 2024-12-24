void __rustcall
uu_fmt::linebreak::slice_if_fresh
          (long *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          char param_6,byte param_7,byte param_8,byte param_9)

{
  code *pcVar1;
  undefined auVar2 [16];
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  auVar5._8_8_ = param_4;
  auVar5._0_8_ = param_3;
  if (param_2 == 0) {
    lVar4 = (ulong)(byte)(param_9 & param_7 | param_8) + 1;
    lVar3 = 0;
    if (param_7 != 0) {
      lVar3 = lVar4;
    }
    if (param_6 != '\0') {
      lVar3 = lVar4;
      auVar5 = auVar2;
    }
  }
  else {
    auVar5 = core::str::traits::
             _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::get
                       (param_5,param_3,param_4);
    if (auVar5._0_8_ == 0) {
      core::str::slice_error_fail
                (param_3,param_4,param_5,param_4,&PTR_s_src_uu_fmt_src_linebreak_rs_00227b90);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar3 = 0;
  }
  *param_1 = lVar3;
  *(undefined (*) [16])(param_1 + 1) = auVar5;
  return;
}