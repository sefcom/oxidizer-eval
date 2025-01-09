undefined8 __rustcall uu_fmt::parasplit::ParagraphStream::is_mail_header(long param_1)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined uVar6;
  undefined auVar7 [16];
  long local_20;
  long local_18;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    lVar1 = *(long *)(param_1 + 8);
    uVar2 = *(ulong *)(param_1 + 0x10);
    cVar3 = core::slice::_<impl[T]>::starts_with(lVar1,uVar2,"From ",5);
    uVar4 = 1;
    if (cVar3 == '\0') {
      auVar7 = core::str::_<impl_str>::find(lVar1,uVar2);
      uVar5 = auVar7._8_8_;
      uVar4 = 0;
      if ((auVar7._0_8_ != 0) && (uVar5 != 0)) {
        uVar6 = uVar5 == uVar2;
        if (uVar2 <= uVar5) goto LAB_001b9c7e;
        if (*(char *)(lVar1 + uVar5) < -0x40) {
          do {
            uVar6 = 1;
            core::str::slice_error_fail(lVar1,uVar2);
LAB_001b9c7e:
          } while (!(bool)uVar6);
        }
        local_18 = uVar5 + lVar1;
        local_20 = lVar1;
        uVar6 = core::iter::traits::iterator::Iterator::try_fold(&local_20);
        uVar4 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar6);
        return uVar4;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}