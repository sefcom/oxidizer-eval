undefined  [16] __rustcall
uu_fmt::parasplit::FileLines::match_prefix_generic
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4,char param_5)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined auVar8 [12];
  long local_48;
  long local_40;
  undefined8 local_38;
  
  uVar3 = core::slice::_<impl[T]>::starts_with(param_3,param_4,param_1,param_2);
  uVar6 = 0;
  if (((char)uVar3 == '\0') && (param_5 == '\0')) {
    local_40 = param_3 + param_4;
    local_38 = 0;
    local_48 = param_3;
    auVar8 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                       (&local_48);
    iVar4 = auVar8._8_4_;
    while (iVar4 != 0x110000) {
      uVar5 = auVar8._8_4_;
      uVar6 = auVar8._0_8_;
      auVar7 = core::str::traits::
               _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::
               get(uVar6,param_3,param_4);
      if (auVar7._0_8_ == 0) {
        core::str::slice_error_fail
                  (param_3,param_4,uVar6,param_4,&PTR_s_src_uu_fmt_src_parasplit_rs_00227910);
        pcVar1 = (code *)swi(3);
        auVar7 = (*pcVar1)();
        return auVar7;
      }
      uVar3 = core::slice::_<impl[T]>::starts_with(auVar7._0_8_,auVar7._8_8_,param_1,param_2);
      if ((char)uVar3 != '\0') {
        uVar3 = CONCAT71((int7)((ulong)uVar3 >> 8),1);
        goto LAB_001b9d31;
      }
      if (((4 < uVar5 - 9) && (uVar5 != 0x20)) &&
         ((uVar5 < 0x80 ||
          (cVar2 = core::unicode::unicode_data::white_space::lookup(uVar5), cVar2 == '\0')))) break;
      auVar8 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                         (&local_48);
      iVar4 = auVar8._8_4_;
    }
    uVar6 = 0;
    uVar3 = 0;
  }
LAB_001b9d31:
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar3;
  return auVar7;
}