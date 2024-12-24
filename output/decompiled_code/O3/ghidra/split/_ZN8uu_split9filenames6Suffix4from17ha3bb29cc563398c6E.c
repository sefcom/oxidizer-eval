/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * __rustcall
uu_split::filenames::Suffix::from(undefined8 *param_1,undefined8 param_2,ulong *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  undefined uVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  byte bVar13;
  undefined uVar14;
  uint uVar15;
  ulong *puVar16;
  byte bVar17;
  double dVar18;
  undefined auVar19 [16];
  ulong *local_a0;
  char local_90;
  undefined7 uStack_8f;
  ulong *puStack_88;
  long local_80;
  ulong *local_78;
  uint local_6c;
  ulong *local_68;
  long local_60;
  undefined8 uStack_58;
  double local_40;
  undefined8 local_38;
  
  local_78 = param_3;
  cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                    (param_2,"numeric-suffixes",0x10);
  cVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id
                    (param_2,"hex-suffixes",0xc);
  cVar5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"-d",2);
  cVar6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"-x",2);
  if (cVar3 != '\0') {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_68,param_2,"numeric-suffixes",0x10);
    lVar8 = clap_builder::parser::error::MatchesError::unwrap("numeric-suffixes",0x10,&local_68);
    bVar17 = 1;
    if (lVar8 == 0) {
      local_a0 = (ulong *)0x0;
      bVar13 = 1;
      goto LAB_001df562;
    }
    core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str
              (&local_90,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
    local_a0 = puStack_88;
    bVar17 = 1;
joined_r0x001df526:
    if (local_90 == '\0') {
      bVar13 = 0;
      local_90 = '\0';
      puStack_88 = local_a0;
      goto LAB_001df562;
    }
LAB_001df5b5:
    _<alloc::string::String_as_core::clone::Clone>::clone(&local_68,lVar8);
    param_1[3] = local_60;
    param_1[4] = uStack_58;
    param_1[1] = 0;
    param_1[2] = local_68;
    goto LAB_001df7d0;
  }
  if (cVar4 == '\0') {
    bVar17 = 1;
    if (cVar5 == '\0') {
      bVar17 = cVar6 * '\x02';
    }
  }
  else {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_68,param_2,"hex-suffixes",0xc);
    lVar8 = clap_builder::parser::error::MatchesError::unwrap("hex-suffixes",0xc,&local_68);
    bVar17 = 2;
    if (lVar8 != 0) {
      core::num::_<impl_usize>::from_str_radix
                (&local_90,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),0x10);
      local_a0 = puStack_88;
      goto joined_r0x001df526;
    }
  }
  bVar13 = 1;
  local_a0 = (ulong *)0x0;
LAB_001df562:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_68,param_2,"suffix-length");
  lVar8 = clap_builder::parser::error::MatchesError::unwrap("suffix-length",0xd,&local_68);
  if (lVar8 == 0) {
    puVar16 = (ulong *)0x2;
  }
  else {
    core::num::_<impl_core::str::traits::FromStr_for_usize>::from_str
              (&local_90,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
    puVar16 = puStack_88;
    if (local_90 != '\0') goto LAB_001df5b5;
  }
  puVar2 = PTR_log_0024df08;
  uVar15 = (uint)bVar13;
  if (puVar16 != (ulong *)0x0 && lVar8 != 0) {
    uVar15 = 0;
  }
  if (*local_78 < 6) {
    local_78 = *(ulong **)((long)local_78 + *(long *)(&DAT_00122c08 + *local_78 * 8));
    lVar9 = (long)local_a0 + (long)local_78;
    auVar19._8_4_ = (int)((ulong)lVar9 >> 0x20);
    auVar19._0_8_ = lVar9;
    auVar19._12_4_ = _UNK_00118254;
    local_38 = *(undefined8 *)(&DAT_00122c38 + (ulong)bVar17 * 8);
    local_6c = uVar15;
    local_40 = (double)(*(code *)PTR_log_0024df08)
                                 ((auVar19._8_8_ - _UNK_001181f8) +
                                  ((double)CONCAT44(_DAT_00118250,(int)lVar9) - _DAT_001181f0));
    dVar18 = (double)(*(code *)puVar2)(local_38);
    dVar18 = (double)(*(code *)PTR_ceil_0024df10)(local_40 / dVar18);
    puVar11 = (ulong *)0x0;
    if (0.0 <= dVar18) {
      puVar11 = (ulong *)((long)(dVar18 - _s__00117e10) & (long)dVar18 >> 0x3f | (long)dVar18);
    }
    puVar10 = (ulong *)0xffffffffffffffff;
    if (dVar18 <= _DAT_00117d88) {
      puVar10 = puVar11;
    }
    if (local_78 <= local_a0) {
      uVar15 = local_6c;
      if (puVar16 < puVar10) {
LAB_001df710:
        param_1[1] = 2;
        param_1[2] = puVar10;
        goto LAB_001df7d0;
      }
      goto LAB_001df72a;
    }
    if (puVar16 == (ulong *)0x0 || lVar8 == 0) {
      if (puVar16 <= puVar10) {
        puVar16 = puVar10;
      }
      uVar15 = 0;
      goto LAB_001df72a;
    }
    if (puVar16 < puVar10) goto LAB_001df710;
    uVar14 = 0;
  }
  else {
LAB_001df72a:
    uVar14 = (undefined)uVar15;
    puVar11 = (ulong *)0x2;
    if (puVar16 != (ulong *)0x0) {
      puVar11 = puVar16;
    }
    if (lVar8 != 0) {
      puVar16 = puVar11;
    }
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_68,param_2,"additional-suffix",0x11);
  lVar8 = clap_builder::parser::error::MatchesError::unwrap("additional-suffix",0x11,&local_68);
  if (lVar8 == 0) {
    core::option::unwrap_failed(&PTR_DAT_00249bb8);
    pcVar1 = (code *)swi(3);
    puVar12 = (undefined8 *)(*pcVar1)();
    return puVar12;
  }
  _<alloc::string::String_as_core::clone::Clone>::clone(&local_90,lVar8);
  local_60 = local_80 + (long)puStack_88;
  local_68 = puStack_88;
  uVar7 = core::iter::traits::iterator::Iterator::try_fold(&local_68);
  cVar3 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar7);
  if (cVar3 == '\0') {
    param_1[2] = local_80;
    *param_1 = CONCAT71(uStack_8f,local_90);
    param_1[1] = puStack_88;
    param_1[3] = puVar16;
    param_1[4] = local_a0;
    *(undefined *)(param_1 + 5) = uVar14;
    *(byte *)((long)param_1 + 0x29) = bVar17;
    return param_1;
  }
  param_1[4] = local_80;
  param_1[2] = CONCAT71(uStack_8f,local_90);
  param_1[3] = puStack_88;
  param_1[1] = 1;
LAB_001df7d0:
  *param_1 = 0x8000000000000000;
  return param_1;
}