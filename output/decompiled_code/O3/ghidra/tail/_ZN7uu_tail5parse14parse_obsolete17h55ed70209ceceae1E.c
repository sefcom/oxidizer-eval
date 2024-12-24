undefined8 * __rustcall uu_tail::parse::parse_obsolete(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined uVar2;
  undefined uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  bool bVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  long local_40;
  ulong local_38;
  long lVar6;
  
  std::ffi::os_str::_<impl_core::convert::TryFrom<&std::ffi::os_str::OsStr>for&str>::try_from
            (&local_58,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  uVar10 = local_50;
  if (local_58 != 0) {
    *(undefined *)param_1 = 3;
    goto LAB_0020f4af;
  }
  local_58 = 0;
  uVar5 = core::char::methods::encode_utf8_raw(0x2d,&local_58);
  auVar14 = _<&str_as_core::str::pattern::Pattern>::strip_prefix_of(uVar5,uVar10,local_48);
  lVar6 = auVar14._0_8_;
  if (lVar6 == 0) {
    local_58 = local_58 & 0xffffffff00000000;
    uVar5 = core::char::methods::encode_utf8_raw(0x2b,&local_58);
    auVar14 = _<&str_as_core::str::pattern::Pattern>::strip_prefix_of(uVar5,uVar10,local_48);
    if (auVar14._0_8_ == 0) goto LAB_0020f702;
  }
  uVar9 = auVar14._8_8_;
  lVar12 = auVar14._0_8_;
  auVar14 = core::str::_<impl_str>::find(lVar12,uVar9);
  uVar10 = auVar14._8_8_;
  if (auVar14._0_8_ == 0) {
    uVar10 = uVar9;
  }
  if (uVar10 == 0) {
    local_50 = 10;
  }
  else {
    if (uVar10 < uVar9) {
      if (*(char *)(lVar12 + uVar10) < -0x40) {
LAB_0020f584:
        core::str::slice_error_fail(lVar12,uVar9,0,uVar10,&PTR_DAT_002be218);
        goto LAB_0020f5a6;
      }
    }
    else if (uVar10 != uVar9) goto LAB_0020f584;
    core::num::_<impl_core::str::traits::FromStr_for_u64>::from_str(&local_58,lVar12,uVar10);
    if ((char)local_58 != '\0') {
      *(undefined *)param_1 = 0;
      goto LAB_0020f4af;
    }
  }
LAB_0020f5a6:
  local_40 = lVar6;
  local_38 = local_50;
  auVar14 = core::str::traits::
            _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::get
                      (uVar10,lVar12,uVar9);
  uVar5 = auVar14._8_8_;
  lVar6 = auVar14._0_8_;
  if (lVar6 == 0) {
    core::str::slice_error_fail(lVar12,uVar9,uVar10,uVar9,&PTR_DAT_002be230);
    pcVar1 = (code *)swi(3);
    puVar8 = (undefined8 *)(*pcVar1)();
    return puVar8;
  }
  local_58 = local_58 & 0xffffffff00000000;
  uVar7 = core::char::methods::encode_utf8_raw(0x6c,&local_58);
  auVar15 = _<&str_as_core::str::pattern::Pattern>::strip_prefix_of(uVar7,lVar6,uVar5);
  uVar9 = auVar15._0_8_;
  if (uVar9 == 0) {
    local_58 = local_58 & 0xffffffff00000000;
    iVar11 = 99;
    uVar7 = core::char::methods::encode_utf8_raw(99,&local_58);
    auVar15 = _<&str_as_core::str::pattern::Pattern>::strip_prefix_of(uVar7,lVar6,uVar5);
    if (auVar15._0_8_ == 0) {
      local_58 = local_58 & 0xffffffff00000000;
      uVar7 = core::char::methods::encode_utf8_raw(0x62,&local_58);
      auVar16 = _<&str_as_core::str::pattern::Pattern>::strip_prefix_of(uVar7,lVar6,uVar5);
      iVar11 = 0x6c;
      auVar15 = auVar14;
      if (auVar16._0_8_ != 0) {
        iVar11 = 0x62;
        auVar15 = auVar16;
      }
    }
    uVar9 = auVar15._0_8_;
    uVar2 = _<char_as_core::str::pattern::Pattern>::is_contained_in(uVar9,auVar15._8_8_);
    local_50 = auVar15._8_8_ + uVar9;
    local_58 = uVar9;
    uVar3 = core::iter::traits::iterator::Iterator::try_fold(&local_58);
    cVar4 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar3);
    if (cVar4 == '\0') goto LAB_0020f6ed;
    if (iVar11 != 0x62) goto LAB_0020f70b;
    uVar10 = 0x200;
    bVar13 = false;
  }
  else {
    uVar2 = _<char_as_core::str::pattern::Pattern>::is_contained_in(uVar9,auVar15._8_8_);
    local_50 = uVar9 + auVar15._8_8_;
    local_58 = uVar9;
    uVar3 = core::iter::traits::iterator::Iterator::try_fold(&local_58);
    cVar4 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar3);
    if (cVar4 == '\0') {
LAB_0020f6ed:
      if ((local_40 == 0) || (uVar10 == 0)) {
LAB_0020f702:
        *(undefined *)((long)param_1 + 10) = 3;
        return param_1;
      }
      *(undefined *)param_1 = 2;
      goto LAB_0020f4af;
    }
    iVar11 = 0x6c;
LAB_0020f70b:
    bVar13 = iVar11 == 0x6c;
    uVar10 = 1;
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = local_38;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar10;
  if (SUB168(auVar14 * auVar15,8) == 0) {
    *param_1 = SUB168(auVar14 * auVar15,0);
    *(bool *)(param_1 + 1) = local_40 == 0;
    *(bool *)((long)param_1 + 9) = bVar13;
    *(undefined *)((long)param_1 + 10) = uVar2;
    return param_1;
  }
  *(undefined *)param_1 = 1;
LAB_0020f4af:
  *(undefined *)((long)param_1 + 10) = 2;
  return param_1;
}