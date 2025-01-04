void __rustcall
uu_od::parse_inputs::parse_offset_operand(undefined8 *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  int iVar9;
  undefined **ppuVar10;
  long unaff_R13;
  undefined auVar11 [16];
  undefined4 local_50 [2];
  long local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  local_50[0] = 0;
  uVar5 = core::char::methods::encode_utf8_raw(0x2b,local_50);
  bVar2 = core::slice::_<impl[T]>::starts_with(param_2,param_3,uVar5,1);
  auVar11 = core::str::traits::
            _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>::get
                      (bVar2,param_3,param_2,param_3);
  uVar5 = auVar11._8_8_;
  lVar8 = auVar11._0_8_;
  if (lVar8 == 0) {
    core::str::slice_error_fail
              (param_2,param_3,bVar2,param_3,&PTR_s_src_uu_od_src_parse_inputs_rs_00241f00);
  }
  else {
    local_38 = param_1;
    cVar3 = core::slice::_<impl[T]>::starts_with(lVar8,uVar5,"0x",2);
    if ((cVar3 == '\0') &&
       (cVar3 = core::slice::_<impl[T]>::starts_with(lVar8,uVar5,"0X",2), cVar3 == '\0')) {
      local_50[0] = 0;
      uVar6 = core::char::methods::encode_utf8_raw(0x62,local_50);
      bVar4 = core::slice::_<impl[T]>::ends_with(lVar8,uVar5,uVar6,1);
      unaff_R13 = param_3 - (ulong)bVar4;
      auVar11 = core::str::traits::
                _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>::get
                          (bVar2,unaff_R13,param_2,param_3);
      local_40 = auVar11._8_8_;
      if (auVar11._0_8_ == 0) {
        ppuVar10 = &PTR_s_src_uu_od_src_parse_inputs_rs_00241f18;
        goto LAB_001d32b1;
      }
      lVar8 = 0x200;
      if (bVar4 == 0) {
        lVar8 = 1;
      }
      local_50[0] = 0;
      uVar5 = core::char::methods::encode_utf8_raw(0x2e,local_50);
      bVar4 = core::slice::_<impl[T]>::ends_with(auVar11._0_8_,local_40,uVar5,1);
      unaff_R13 = unaff_R13 - (ulong)bVar4;
      iVar9 = (uint)bVar4 * 2 + 8;
    }
    else {
      bVar2 = bVar2 | 2;
      lVar8 = 1;
      iVar9 = 0x10;
      unaff_R13 = param_3;
    }
    auVar11 = core::str::traits::
              _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::Range<usize>>::get
                        (bVar2,unaff_R13,param_2,param_3);
    if (auVar11._0_8_ != 0) {
      core::num::_<impl_u64>::from_str_radix(local_50,auVar11._0_8_,auVar11._8_8_,iVar9);
      lVar8 = lVar8 * local_48;
      pcVar7 = (char *)0x0;
      if ((char)local_50[0] != '\0') {
        pcVar7 = "parse failed";
        lVar8 = 0xc;
      }
      local_38[1] = lVar8;
      *local_38 = pcVar7;
      return;
    }
  }
  ppuVar10 = &PTR_s_src_uu_od_src_parse_inputs_rs_00241f30;
LAB_001d32b1:
  core::str::slice_error_fail(param_2,param_3,bVar2,unaff_R13,ppuVar10);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}