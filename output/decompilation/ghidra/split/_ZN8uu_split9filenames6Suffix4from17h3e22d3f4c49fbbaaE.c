void _ZN8uu_split9filenames6Suffix4from17h3e22d3f4c49fbbaaE
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
  byte bVar12;
  undefined uVar13;
  uint uVar14;
  ulong *puVar15;
  byte bVar16;
  double dVar17;
  undefined auVar18 [16];
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
  
  puVar2 = 
  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_00212098
  ;
  local_78 = param_3;
  cVar3 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h5efeb7e2d2f22590E_00212098
          )(param_2,"numeric-suffixes",0x10);
  cVar4 = (*(code *)puVar2)(param_2,"hex-suffixes",0xc);
  puVar2 = 
  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_002120a0
  ;
  cVar5 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_002120a0
          )(param_2,"-d",2);
  cVar6 = (*(code *)puVar2)(param_2,"-x",2);
  if (cVar3 != '\0') {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf389485a9e6f35abE
              (&local_68,param_2,"numeric-suffixes",0x10);
    lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h00d609c63283993eE
                      ("numeric-suffixes",0x10,&local_68);
    bVar16 = 1;
    if (lVar8 == 0) {
      local_a0 = (ulong *)0x0;
      bVar12 = 1;
      goto LAB_0016b198;
    }
    _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
              (&local_90,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),10);
    local_a0 = puStack_88;
joined_r0x0016b158:
    if (local_90 != '\x01') {
      bVar12 = 0;
      puStack_88 = local_a0;
      goto LAB_0016b198;
    }
LAB_0016b1ef:
    (*(code *)
      PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_002120a8
    )(&local_68,lVar8);
    param_1[3] = local_60;
    param_1[4] = uStack_58;
    param_1[1] = 0;
    param_1[2] = local_68;
    goto LAB_0016b40b;
  }
  if (cVar4 == '\0') {
    bVar16 = 1;
    if (cVar5 == '\0') {
      bVar16 = cVar6 * '\x02';
    }
  }
  else {
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf389485a9e6f35abE
              (&local_68,param_2,"hex-suffixes",0xc);
    lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h00d609c63283993eE
                      ("hex-suffixes",0xc,&local_68);
    bVar16 = 2;
    if (lVar8 != 0) {
      _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
                (&local_90,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),0x10);
      local_a0 = puStack_88;
      goto joined_r0x0016b158;
    }
  }
  bVar12 = 1;
  local_a0 = (ulong *)0x0;
LAB_0016b198:
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf389485a9e6f35abE
            (&local_68,param_2,"suffix-length");
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h00d609c63283993eE
                    ("suffix-length",0xd,&local_68);
  if (lVar8 == 0) {
    puVar15 = (ulong *)0x2;
  }
  else {
    _ZN4core3num23__LT_impl_u20_usize_GT_16from_ascii_radix17he77532141bbadde7E
              (&local_90,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10));
    puVar15 = puStack_88;
    if (local_90 == '\x01') goto LAB_0016b1ef;
  }
  puVar2 = PTR_log_002120b0;
  uVar14 = (uint)bVar12;
  if (puVar15 != (ulong *)0x0 && lVar8 != 0) {
    uVar14 = 0;
  }
  if (*local_78 < 6) {
    local_78 = *(ulong **)((long)local_78 + *(long *)(&DAT_0011d418 + *local_78 * 8));
    lVar9 = (long)local_a0 + (long)local_78;
    auVar18._8_4_ = (int)((ulong)lVar9 >> 0x20);
    auVar18._0_8_ = lVar9;
    auVar18._12_4_ = DAT_0011ac80._4_4_;
    local_38 = *(undefined8 *)(&DAT_0011d448 + (ulong)bVar16 * 8);
    local_6c = uVar14;
    local_40 = (double)(*(code *)PTR_log_002120b0)
                                 ((auVar18._8_8_ - _UNK_0011ac48) +
                                  ((double)CONCAT44((undefined4)DAT_0011ac80,(int)lVar9) -
                                  _DAT_0011ac40));
    dVar17 = (double)(*(code *)puVar2)(local_38);
    dVar17 = (double)(*(code *)PTR_ceil_002120b8)(local_40 / dVar17);
    puVar11 = (ulong *)0x0;
    if (0.0 <= dVar17) {
      puVar11 = (ulong *)((long)(dVar17 - _s__0011a858) & (long)dVar17 >> 0x3f | (long)dVar17);
    }
    puVar10 = (ulong *)0xffffffffffffffff;
    if (dVar17 <= _DAT_0011a7f0) {
      puVar10 = puVar11;
    }
    if (local_78 <= local_a0) {
      uVar14 = local_6c;
      if (puVar15 < puVar10) {
LAB_0016b34a:
        param_1[1] = 2;
        param_1[2] = puVar10;
        goto LAB_0016b40b;
      }
      goto LAB_0016b364;
    }
    if (puVar15 == (ulong *)0x0 || lVar8 == 0) {
      if (puVar15 <= puVar10) {
        puVar15 = puVar10;
      }
      uVar14 = 0;
      goto LAB_0016b364;
    }
    if (puVar15 < puVar10) goto LAB_0016b34a;
    uVar13 = 0;
  }
  else {
LAB_0016b364:
    uVar13 = (undefined)uVar14;
    puVar11 = (ulong *)0x2;
    if (puVar15 != (ulong *)0x0) {
      puVar11 = puVar15;
    }
    if (lVar8 != 0) {
      puVar15 = puVar11;
    }
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf389485a9e6f35abE
            (&local_68,param_2,"additional-suffix",0x11);
  lVar8 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h00d609c63283993eE
                    ("additional-suffix",0x11,&local_68);
  if (lVar8 == 0) {
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00212048)
              (&PTR_s_src_uu_split_src_filenames_rs_0020ab08);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (*(code *)
    PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_002120a8
  )(&local_90,lVar8);
  local_60 = local_80 + (long)puStack_88;
  local_68 = puStack_88;
  uVar7 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h5095833791d1b5f3E(&local_68);
  cVar3 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h428b104382774de8E
                    (uVar7,1);
  if (cVar3 == '\0') {
    param_1[2] = local_80;
    *param_1 = CONCAT71(uStack_8f,local_90);
    param_1[1] = puStack_88;
    param_1[3] = puVar15;
    param_1[4] = local_a0;
    *(undefined *)(param_1 + 5) = uVar13;
    *(byte *)((long)param_1 + 0x29) = bVar16;
    return;
  }
  param_1[4] = local_80;
  param_1[2] = CONCAT71(uStack_8f,local_90);
  param_1[3] = puStack_88;
  param_1[1] = 1;
LAB_0016b40b:
  *param_1 = 0x8000000000000000;
  return;
}