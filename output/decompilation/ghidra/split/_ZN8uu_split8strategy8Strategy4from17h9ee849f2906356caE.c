void _ZN8uu_split8strategy8Strategy4from17h9ee849f2906356caE
               (long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  code *pcVar9;
  code *pcVar10;
  int local_d8;
  undefined4 uStack_d4;
  long lStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  long local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long local_98;
  int local_68 [2];
  long local_60;
  long local_48;
  long lStack_40;
  long local_38;
  
  puVar1 = 
  PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches12value_source17h45c0c3cb9ce2c562E_00212108
  ;
  local_b0 = param_4;
  cVar2 = (*(code *)
            PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches12value_source17h45c0c3cb9ce2c562E_00212108
          )(param_2,"lines",5);
  cVar3 = (*(code *)puVar1)(param_2,"bytes",5);
  cVar4 = (*(code *)puVar1)(param_2,"line-bytes",10);
  cVar5 = (*(code *)puVar1)(param_2,"number",6);
  uVar6 = local_b0;
  if (cVar5 == '\x03') {
    if (param_3 == 0) {
      if (cVar2 == '\x02') {
        if (cVar3 == '\x02' || cVar4 == '\x02') goto LAB_0016cf9a;
        goto LAB_0016ce2e;
      }
      if (cVar3 != '\x02') {
        if (cVar4 != '\x02') {
LAB_0016d052:
          param_1[1] = 6;
          param_1[2] = 1000;
          *param_1 = 4;
          return;
        }
LAB_0016cfb8:
        pcVar8 = "line-bytes";
        pcVar9 = _ZN8uu_split8strategy8Strategy9LineBytes17h19bda4236560f972E;
        pcVar10 = _ZN8uu_split8strategy13StrategyError5Bytes17he256feb8297d9309E;
        uVar6 = 10;
        goto LAB_0016cef9;
      }
      if (cVar4 == '\x02') goto LAB_0016cf9a;
LAB_0016cedf:
      pcVar8 = "bytes";
      pcVar9 = _ZN8uu_split8strategy8Strategy5Bytes17h389c294e0bdb9103E;
      pcVar10 = _ZN8uu_split8strategy13StrategyError5Bytes17he256feb8297d9309E;
LAB_0016cef4:
      uVar6 = 5;
LAB_0016cef9:
      _ZN8uu_split8strategy8Strategy4from13get_and_parse17hab7e9d5bff2b170aE
                (param_1,param_2,pcVar8,uVar6,pcVar9,pcVar10);
      return;
    }
    if ((cVar2 == '\x02' || cVar3 == '\x02') || cVar4 == '\x02') {
LAB_0016cf9a:
      *param_1 = 3;
      return;
    }
  }
  else {
    if (param_3 == 0) {
      if (cVar2 != '\x02') {
        if (cVar3 != '\x02') {
          if (cVar4 != '\x02') {
            if (cVar5 != '\x02') goto LAB_0016d052;
            _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf389485a9e6f35abE
                      (&local_d8,param_2,"number",6);
            lVar7 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h00d609c63283993eE
                              ("number",6,&local_d8);
            if (lVar7 == 0) {
              (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00212048)
                        (&PTR_s_src_uu_split_src_strategy_rs_0020ae00);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            _ZN8uu_split8strategy10NumberType4from17hc4926dd19f854e4eE
                      (&local_d8,*(undefined8 *)(lVar7 + 8),*(undefined8 *)(lVar7 + 0x10));
            if (local_d8 != 2) {
              param_1[3] = CONCAT44(uStack_c4,uStack_c8);
              param_1[1] = CONCAT44(uStack_d4,local_d8);
              param_1[2] = lStack_d0;
              *param_1 = 2;
              param_1[4] = CONCAT44(uStack_bc,uStack_c0);
              return;
            }
            param_1[3] = CONCAT44(uStack_bc,uStack_c0);
            param_1[1] = lStack_d0;
            param_1[2] = CONCAT44(uStack_c4,uStack_c8);
            goto LAB_0016cea2;
          }
          if (cVar5 == '\x02') goto LAB_0016cf9a;
          goto LAB_0016cfb8;
        }
        if (cVar4 == '\x02' || cVar5 == '\x02') goto LAB_0016cf9a;
        goto LAB_0016cedf;
      }
      if (((cVar4 == '\x02') || (cVar3 == '\x02')) || (cVar5 == '\x02')) goto LAB_0016cf9a;
LAB_0016ce2e:
      pcVar8 = "lines";
      pcVar9 = _ZN8uu_split8strategy8Strategy5Lines17hdcf7ada74ecbd750E;
      pcVar10 = _ZN8uu_split8strategy13StrategyError5Lines17hecced561c0a9074bE;
      goto LAB_0016cef4;
    }
    if (((cVar4 == '\x02') || (cVar3 == '\x02')) || ((cVar2 == '\x02' || (cVar5 == '\x02'))))
    goto LAB_0016cf9a;
  }
  (*(code *)
    PTR__ZN6uucore8features6parser10parse_size18parse_size_u64_max17hec104ac5ce610c62E_00212110)
            (local_68,param_3,local_b0);
  if (local_68[0] != 4) {
    _ZN8uu_split8strategy8Strategy4from28__u7b__u7b_closure_u7d__u7d_17h308887bee19c411eE
              (&local_d8,param_3,uVar6,local_68);
    local_a8 = uStack_c8;
    uStack_a4 = uStack_c4;
    uStack_a0 = uStack_c0;
    uStack_9c = uStack_bc;
    local_98 = local_b8;
    local_60 = lStack_d0;
    if (CONCAT44(uStack_d4,local_d8) != 4) {
      param_1[4] = local_b8;
      param_1[2] = CONCAT44(uStack_c4,uStack_c8);
      param_1[3] = CONCAT44(uStack_bc,uStack_c0);
      *param_1 = CONCAT44(uStack_d4,local_d8);
      param_1[1] = lStack_d0;
      return;
    }
  }
  if (local_60 == 0) {
    uVar6 = (*(code *)
              PTR__ZN4core3fmt3num3imp23__LT_impl_u20_usize_GT_4_fmt17h71a478bc15827a22E_00212118)
                      (0,&local_d8,0x14);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hfadfb68a35ae07bfE
              (&local_48,uVar6);
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = local_48;
    param_1[3] = lStack_40;
    param_1[4] = local_38;
    return;
  }
  param_1[1] = 6;
  param_1[2] = local_60;
LAB_0016cea2:
  *param_1 = 4;
  return;
}