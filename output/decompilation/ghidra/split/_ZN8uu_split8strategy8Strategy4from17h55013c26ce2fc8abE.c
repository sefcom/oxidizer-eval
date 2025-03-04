/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * _ZN8uu_split8strategy8Strategy4from17h55013c26ce2fc8abE
                 (long *param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  char *pcVar9;
  code *pcVar10;
  code *pcVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long local_d8;
  long lStack_d0;
  long local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_b8 [2];
  long lStack_b0;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long local_98;
  long local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long local_78;
  undefined local_70 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  int local_50 [2];
  long local_48;
  long lStack_40;
  long local_38;
  
  cVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12value_source17h1b5412f9501eb404E
                    (param_2,"lines",5);
  cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12value_source17h1b5412f9501eb404E
                    (param_2,"bytes",5);
  cVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12value_source17h1b5412f9501eb404E
                    (param_2,"line-bytes",10);
  cVar5 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12value_source17h1b5412f9501eb404E
                    (param_2,"number",6);
  if (cVar5 == '\x03') {
    cVar5 = cVar4;
    cVar1 = cVar3;
    if (*param_3 == -0x8000000000000000) {
      if (cVar2 == '\x02') goto joined_r0x001d74b8;
      if (cVar3 != '\x02') {
        if (cVar4 != '\x02') {
LAB_001d771f:
          param_1[1] = 6;
          param_1[2] = 1000;
          *param_1 = 4;
          return param_1;
        }
        goto LAB_001d7684;
      }
joined_r0x001d75e4:
      if (cVar4 == '\x02') goto LAB_001d7663;
      pcVar9 = "bytes";
      pcVar10 = _ZN8uu_split8strategy8Strategy5Bytes17hb7425c208cd7a728E;
      pcVar11 = _ZN8uu_split8strategy13StrategyError5Bytes17h676736075b7531fcE;
LAB_001d75fb:
      uVar8 = 5;
LAB_001d7600:
      _ZN8uu_split8strategy8Strategy4from13get_and_parse17h2131435d3ea4b88eE
                (param_1,param_2,pcVar9,uVar8,pcVar10,pcVar11);
      return param_1;
    }
  }
  else {
    if (*param_3 == -0x8000000000000000) {
      if (cVar2 != '\x02') {
        if (cVar3 == '\x02') {
          bVar12 = cVar4 == '\x02';
          cVar4 = cVar5;
          if (bVar12) goto LAB_001d7663;
          goto joined_r0x001d75e4;
        }
        if (cVar4 != '\x02') {
          if (cVar5 == '\x02') {
            _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h6b47e11c99165f29E
                      (&local_98,param_2,"number",6);
            lVar6 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h5fb9f4927eec1abaE
                              ("number",6,&local_98);
            if (lVar6 == 0) {
              _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_00248f18);
              pcVar10 = (code *)swi(3);
              plVar7 = (long *)(*pcVar10)();
              return plVar7;
            }
            _ZN8uu_split8strategy10NumberType4from17h9e6ddc21e9e979a9E
                      (local_50,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
            if (local_50[0] == 2) {
              local_c8 = local_38;
              local_d8 = local_48;
              lStack_d0 = lStack_40;
            }
            else {
              _ZN4core3ops8function6FnOnce9call_once17h363c2133120cb604E(&local_98,local_50);
              lStack_d0 = CONCAT44(uStack_84,uStack_88);
              local_d8 = local_90;
              local_c8 = CONCAT44(uStack_7c,uStack_80);
              if (local_98 != 4) {
                param_1[3] = local_c8;
                param_1[1] = local_90;
                param_1[2] = lStack_d0;
                *param_1 = local_98;
                param_1[4] = local_78;
                return param_1;
              }
            }
            param_1[3] = local_c8;
            param_1[1] = local_d8;
            param_1[2] = lStack_d0;
            *param_1 = 4;
            return param_1;
          }
          goto LAB_001d771f;
        }
        if (cVar5 == '\x02') goto LAB_001d7663;
LAB_001d7684:
        pcVar9 = "line-bytes";
        pcVar10 = _ZN8uu_split8strategy8Strategy9LineBytes17hf26230de56a853ccE;
        pcVar11 = _ZN8uu_split8strategy13StrategyError5Bytes17h676736075b7531fcE;
        uVar8 = 10;
        goto LAB_001d7600;
      }
      bVar12 = cVar3 == '\x02';
      cVar3 = cVar4;
      if (bVar12) goto LAB_001d7663;
joined_r0x001d74b8:
      if ((cVar3 == '\x02') || (cVar5 == '\x02')) goto LAB_001d7663;
      pcVar9 = "lines";
      pcVar10 = _ZN8uu_split8strategy8Strategy5Lines17h8a517b33f81912dbE;
      pcVar11 = _ZN8uu_split8strategy13StrategyError5Lines17h90ca753e299957d9E;
      goto LAB_001d75fb;
    }
    bVar12 = cVar2 == '\x02';
    cVar1 = cVar4;
    cVar2 = cVar3;
    if (bVar12) goto LAB_001d7663;
  }
  if (((cVar2 != '\x02') && (cVar1 != '\x02')) && (cVar5 != '\x02')) {
    _ZN6uucore6parser10parse_size18parse_size_u64_max17h351ae83d3c4e9b23E
              (local_b8,param_3[1],param_3[2]);
    if (local_b8[0] != 3) {
      uStack_c0 = uStack_a0;
      uStack_bc = uStack_9c;
      _ZN8uu_split8strategy8Strategy4from28__u7b__u7b_closure_u7d__u7d_17h0a4775b5dcd4ac08E
                (&local_98,param_3,&local_d8);
      local_68 = uStack_88;
      uStack_64 = uStack_84;
      uStack_60 = uStack_80;
      uStack_5c = uStack_7c;
      local_58 = local_78;
      lStack_b0 = local_90;
      if (local_98 != 4) {
        param_1[4] = local_78;
        param_1[2] = CONCAT44(uStack_84,uStack_88);
        param_1[3] = CONCAT44(uStack_7c,uStack_80);
        *param_1 = local_98;
        param_1[1] = local_90;
        return param_1;
      }
    }
    if (lStack_b0 == 0) {
      _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17hfac9650ce491ceb2E
                (param_1 + 2,local_70);
      uVar13 = _DAT_00118050;
      uVar14 = _UNK_00118054;
      uVar15 = _UNK_00118058;
      uVar16 = _UNK_0011805c;
    }
    else {
      param_1[2] = lStack_b0;
      uVar13 = _DAT_00118100;
      uVar14 = _UNK_00118104;
      uVar15 = _UNK_00118108;
      uVar16 = _UNK_0011810c;
    }
    *(undefined4 *)param_1 = uVar13;
    *(undefined4 *)((long)param_1 + 4) = uVar14;
    *(undefined4 *)(param_1 + 1) = uVar15;
    *(undefined4 *)((long)param_1 + 0xc) = uVar16;
    return param_1;
  }
LAB_001d7663:
  *param_1 = 3;
  return param_1;
}