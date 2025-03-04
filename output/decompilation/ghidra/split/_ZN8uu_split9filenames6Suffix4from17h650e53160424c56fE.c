/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
_ZN8uu_split9filenames6Suffix4from17h650e53160424c56fE
          (undefined8 *param_1,undefined8 param_2,ulong *param_3)

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
  cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                    (param_2,"numeric-suffixes",0x10);
  cVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                    (param_2,"hex-suffixes",0xc);
  cVar5 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"-d",2);
  cVar6 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"-x",2);
  if (cVar3 != '\0') {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h6b47e11c99165f29E
              (&local_68,param_2,"numeric-suffixes",0x10);
    lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h5fb9f4927eec1abaE
                      ("numeric-suffixes",0x10,&local_68);
    bVar17 = 1;
    if (lVar8 == 0) {
      local_a0 = (ulong *)0x0;
      bVar13 = 1;
      goto LAB_001d9722;
    }
    _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E
              (&local_90,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
    local_a0 = puStack_88;
    bVar17 = 1;
joined_r0x001d96e6:
    if (local_90 == '\0') {
      bVar13 = 0;
      local_90 = '\0';
      puStack_88 = local_a0;
      goto LAB_001d9722;
    }
LAB_001d9775:
    _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
              (&local_68,lVar8);
    param_1[3] = local_60;
    param_1[4] = uStack_58;
    param_1[1] = 0;
    param_1[2] = local_68;
    goto LAB_001d9990;
  }
  if (cVar4 == '\0') {
    bVar17 = 1;
    if (cVar5 == '\0') {
      bVar17 = cVar6 * '\x02';
    }
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h6b47e11c99165f29E
              (&local_68,param_2,"hex-suffixes",0xc);
    lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h5fb9f4927eec1abaE
                      ("hex-suffixes",0xc,&local_68);
    bVar17 = 2;
    if (lVar8 != 0) {
      _ZN4core3num23__LT_impl_u20_usize_GT_14from_str_radix17h79418e6c334030c0E
                (&local_90,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),0x10);
      local_a0 = puStack_88;
      goto joined_r0x001d96e6;
    }
  }
  bVar13 = 1;
  local_a0 = (ulong *)0x0;
LAB_001d9722:
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h6b47e11c99165f29E
            (&local_68,param_2,"suffix-length");
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h5fb9f4927eec1abaE
                    ("suffix-length",0xd,&local_68);
  if (lVar8 == 0) {
    puVar16 = (ulong *)0x2;
  }
  else {
    _ZN4core3num62__LT_impl_u20_core__str__traits__FromStr_u20_for_u20_usize_GT_8from_str17h35e67cae0c0452a5E
              (&local_90,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
    puVar16 = puStack_88;
    if (local_90 != '\0') goto LAB_001d9775;
  }
  puVar2 = PTR_log_0024d928;
  uVar15 = (uint)bVar13;
  if (puVar16 != (ulong *)0x0 && lVar8 != 0) {
    uVar15 = 0;
  }
  if (*local_78 < 6) {
    local_78 = *(ulong **)((long)local_78 + *(long *)(&DAT_001224c8 + *local_78 * 8));
    lVar9 = (long)local_a0 + (long)local_78;
    auVar19._8_4_ = (int)((ulong)lVar9 >> 0x20);
    auVar19._0_8_ = lVar9;
    auVar19._12_4_ = _UNK_00117fd4;
    local_38 = *(undefined8 *)(&DAT_001224f8 + (ulong)bVar17 * 8);
    local_6c = uVar15;
    local_40 = (double)(*(code *)PTR_log_0024d928)
                                 ((auVar19._8_8_ - _UNK_00117f78) +
                                  ((double)CONCAT44(_DAT_00117fd0,(int)lVar9) - _DAT_00117f70));
    dVar18 = (double)(*(code *)puVar2)(local_38);
    dVar18 = (double)(*(code *)PTR_ceil_0024d930)(local_40 / dVar18);
    puVar11 = (ulong *)0x0;
    if (0.0 <= dVar18) {
      puVar11 = (ulong *)((long)(dVar18 - _s__00117c10) & (long)dVar18 >> 0x3f | (long)dVar18);
    }
    puVar10 = (ulong *)0xffffffffffffffff;
    if (dVar18 <= _DAT_00117b88) {
      puVar10 = puVar11;
    }
    if (local_78 <= local_a0) {
      uVar15 = local_6c;
      if (puVar16 < puVar10) {
LAB_001d98d0:
        param_1[1] = 2;
        param_1[2] = puVar10;
        goto LAB_001d9990;
      }
      goto LAB_001d98ea;
    }
    if (puVar16 == (ulong *)0x0 || lVar8 == 0) {
      if (puVar16 <= puVar10) {
        puVar16 = puVar10;
      }
      uVar15 = 0;
      goto LAB_001d98ea;
    }
    if (puVar16 < puVar10) goto LAB_001d98d0;
    uVar14 = 0;
  }
  else {
LAB_001d98ea:
    uVar14 = (undefined)uVar15;
    puVar11 = (ulong *)0x2;
    if (puVar16 != (ulong *)0x0) {
      puVar11 = puVar16;
    }
    if (lVar8 != 0) {
      puVar16 = puVar11;
    }
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h6b47e11c99165f29E
            (&local_68,param_2,"additional-suffix",0x11);
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h5fb9f4927eec1abaE
                    ("additional-suffix",0x11,&local_68);
  if (lVar8 == 0) {
    _ZN4core6option13unwrap_failed17h0e11329e76906eaaE
              (&PTR_s_src_uu_split_src_filenames_rs_00249110);
    pcVar1 = (code *)swi(3);
    puVar12 = (undefined8 *)(*pcVar1)();
    return puVar12;
  }
  _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
            (&local_90,lVar8);
  local_60 = local_80 + (long)puStack_88;
  local_68 = puStack_88;
  uVar7 = _ZN4core4iter6traits8iterator8Iterator8try_fold17heae82aa079024b40E(&local_68);
  cVar3 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17ha5fb3b5979973e2aE
                    (uVar7);
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
LAB_001d9990:
  *param_1 = 0x8000000000000000;
  return param_1;
}