/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * __rustcall uu_split::strategy::Strategy::from(long *param_1,undefined8 param_2,long *param_3)

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
  
  cVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(param_2,"lines",5);
  cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(param_2,"bytes",5);
  cVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source
                    (param_2,"line-bytes",10);
  cVar5 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source(param_2,"number",6);
  if (cVar5 == '\x03') {
    cVar5 = cVar4;
    cVar1 = cVar3;
    if (*param_3 == -0x8000000000000000) {
      if (cVar2 == '\x02') goto joined_r0x001d7588;
      if (cVar3 != '\x02') {
        if (cVar4 != '\x02') {
LAB_001d77ef:
          param_1[1] = 6;
          param_1[2] = 1000;
          *param_1 = 4;
          return param_1;
        }
        goto LAB_001d7754;
      }
joined_r0x001d76b4:
      if (cVar4 == '\x02') goto LAB_001d7733;
      pcVar9 = "bytes";
      pcVar10 = Bytes;
      pcVar11 = StrategyError::Bytes;
LAB_001d76cb:
      uVar8 = 5;
LAB_001d76d0:
      from::get_and_parse(param_1,param_2,pcVar9,uVar8,pcVar10,pcVar11);
      return param_1;
    }
  }
  else {
    if (*param_3 == -0x8000000000000000) {
      if (cVar2 != '\x02') {
        if (cVar3 == '\x02') {
          bVar12 = cVar4 == '\x02';
          cVar4 = cVar5;
          if (bVar12) goto LAB_001d7733;
          goto joined_r0x001d76b4;
        }
        if (cVar4 != '\x02') {
          if (cVar5 == '\x02') {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                      (&local_98,param_2,"number",6);
            lVar6 = clap_builder::parser::error::MatchesError::unwrap("number",6,&local_98);
            if (lVar6 == 0) {
              core::option::unwrap_failed(&PTR_s_src_uu_split_src_strategy_rs_00249438);
              pcVar10 = (code *)swi(3);
              plVar7 = (long *)(*pcVar10)();
              return plVar7;
            }
            NumberType::from(local_50,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
            if (local_50[0] == 2) {
              local_c8 = local_38;
              local_d8 = local_48;
              lStack_d0 = lStack_40;
            }
            else {
              core::ops::function::FnOnce::call_once(&local_98,local_50);
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
          goto LAB_001d77ef;
        }
        if (cVar5 == '\x02') goto LAB_001d7733;
LAB_001d7754:
        pcVar9 = "line-bytes";
        pcVar10 = LineBytes;
        pcVar11 = StrategyError::Bytes;
        uVar8 = 10;
        goto LAB_001d76d0;
      }
      bVar12 = cVar3 == '\x02';
      cVar3 = cVar4;
      if (bVar12) goto LAB_001d7733;
joined_r0x001d7588:
      if ((cVar3 == '\x02') || (cVar5 == '\x02')) goto LAB_001d7733;
      pcVar9 = "lines";
      pcVar10 = Lines;
      pcVar11 = StrategyError::Lines;
      goto LAB_001d76cb;
    }
    bVar12 = cVar2 == '\x02';
    cVar1 = cVar4;
    cVar2 = cVar3;
    if (bVar12) goto LAB_001d7733;
  }
  if (((cVar2 != '\x02') && (cVar1 != '\x02')) && (cVar5 != '\x02')) {
    uucore::parser::parse_size::parse_size_u64_max(local_b8,param_3[1],param_3[2]);
    if (local_b8[0] != 3) {
      uStack_c0 = uStack_a0;
      uStack_bc = uStack_9c;
      from::___closure__(&local_98,param_3,&local_d8);
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
      _<T_as_alloc::string::ToString>::to_string(param_1 + 2,local_70);
      uVar13 = _DAT_001182d0;
      uVar14 = _UNK_001182d4;
      uVar15 = _UNK_001182d8;
      uVar16 = _UNK_001182dc;
    }
    else {
      param_1[2] = lStack_b0;
      uVar13 = _DAT_00118380;
      uVar14 = _UNK_00118384;
      uVar15 = _UNK_00118388;
      uVar16 = _UNK_0011838c;
    }
    *(undefined4 *)param_1 = uVar13;
    *(undefined4 *)((long)param_1 + 4) = uVar14;
    *(undefined4 *)(param_1 + 1) = uVar15;
    *(undefined4 *)((long)param_1 + 0xc) = uVar16;
    return param_1;
  }
LAB_001d7733:
  *param_1 = 3;
  return param_1;
}