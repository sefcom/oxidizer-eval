void __rustcall
uu_fmt::parasplit::FileLines::compute_indent
          (ulong *param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  code *pcVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined auVar9 [16];
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_40 = param_4 + param_3;
  local_38 = 0;
  local_48 = param_3;
  auVar9 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                     (&local_48);
  if (auVar9._8_4_ == 0x110000) {
    uVar5 = 0;
    uVar3 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    do {
      uVar3 = auVar9._0_8_;
      uVar8 = auVar9._8_8_ & 0xffffffff;
      if (uVar3 == param_5) {
        uVar6 = uVar5;
      }
      uVar7 = auVar9._8_4_;
      if (uVar3 < param_5) {
LAB_001b9df5:
        if (uVar7 != 9) goto LAB_001b9dd0;
        uVar3 = *(ulong *)(param_2 + 0x40);
        if (uVar3 == 0) {
          core::panicking::panic_const::panic_const_div_by_zero
                    (&PTR_s_src_uu_fmt_src_parasplit_rs_00227928);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((uVar5 | uVar3) >> 0x20 == 0) {
          uVar5 = (uVar5 & 0xffffffff) / (uVar3 & 0xffffffff);
        }
        else {
          uVar5 = uVar5 / uVar3;
        }
        uVar5 = (uVar5 + 1) * uVar3;
      }
      else {
        if (uVar7 != 0x20) {
          if (uVar7 - 9 < 5) goto LAB_001b9df5;
          if ((uVar7 < 0x80) ||
             (cVar2 = core::unicode::unicode_data::white_space::lookup(uVar8), cVar2 == '\0'))
          goto LAB_001b9e6b;
        }
LAB_001b9dd0:
        lVar4 = char_width(uVar8);
        uVar5 = uVar5 + lVar4;
      }
      auVar9 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                         (&local_48);
    } while (auVar9._8_4_ != 0x110000);
    uVar3 = 0;
  }
LAB_001b9e6b:
  *param_1 = uVar3;
  param_1[1] = uVar6;
  param_1[2] = uVar5;
  return;
}