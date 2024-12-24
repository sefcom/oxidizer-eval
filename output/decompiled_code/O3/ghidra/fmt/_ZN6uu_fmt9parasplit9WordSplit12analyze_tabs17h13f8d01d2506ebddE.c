void __rustcall
uu_fmt::parasplit::WordSplit::analyze_tabs(long *param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined auVar8 [16];
  ulong local_58;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_40 = param_4 + param_3;
  local_38 = 0;
  lVar5 = 0;
  lVar7 = 1;
  local_48 = param_3;
LAB_001bab39:
  uVar6 = 0;
LAB_001bab48:
  do {
    auVar8 = _<core::str::iter::CharIndices_as_core::iter::traits::iterator::Iterator>::next
                       (&local_48);
    uVar4 = auVar8._8_4_;
    if (uVar4 == 0x20) goto LAB_001bab45;
    if (uVar4 == 0x110000) {
      lVar7 = 0;
LAB_001babd7:
      *param_1 = lVar5;
      param_1[1] = local_58;
      param_1[2] = uVar6;
      param_1[3] = lVar7;
      param_1[4] = auVar8._0_8_;
      return;
    }
    if (4 < uVar4 - 9) {
      if ((uVar4 < 0x80) ||
         (cVar3 = core::unicode::unicode_data::white_space::lookup(auVar8._8_8_ & 0xffffffff),
         cVar3 == '\0')) goto LAB_001babd7;
LAB_001bab45:
      uVar6 = uVar6 + 1;
      goto LAB_001bab48;
    }
    if (uVar4 != 9) goto LAB_001bab45;
    if (lVar5 == 0) break;
    uVar1 = *(ulong *)(param_2 + 0x40);
    if (uVar1 == 0) {
      core::panicking::panic_const::panic_const_div_by_zero
                (&PTR_s_src_uu_fmt_src_parasplit_rs_00227a48);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((uVar6 | uVar1) >> 0x20 == 0) {
      uVar6 = (uVar6 & 0xffffffff) / (uVar1 & 0xffffffff);
    }
    else {
      uVar6 = uVar6 / uVar1;
    }
    uVar6 = (uVar6 + 1) * uVar1;
    lVar5 = 1;
  } while( true );
  lVar5 = 1;
  local_58 = uVar6;
  goto LAB_001bab39;
}