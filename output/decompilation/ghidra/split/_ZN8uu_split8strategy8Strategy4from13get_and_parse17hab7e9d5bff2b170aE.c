void _ZN8uu_split8strategy8Strategy4from13get_and_parse17hab7e9d5bff2b170aE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               code *param_5,code *param_6)

{
  code *pcVar1;
  long lVar2;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf389485a9e6f35abE
            (&local_a8);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h00d609c63283993eE
                    (param_3,param_4,&local_a8);
  if (lVar2 != 0) {
    (*(code *)
      PTR__ZN6uucore8features6parser10parse_size18parse_size_u64_max17hec104ac5ce610c62E_00212110)
              (&local_78,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
    if (local_78 == 4) {
      if (CONCAT44(uStack_6c,uStack_70) == 0) {
        (*(code *)
          PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_002120a8
        )(&uStack_a0,lVar2);
        local_a8 = 1;
        (*param_6)(param_1,&local_a8);
      }
      else {
        (*param_5)(param_1 + 1);
        *param_1 = 4;
      }
    }
    else {
      local_48 = local_68;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      local_58 = local_78;
      uStack_54 = uStack_74;
      uStack_50 = uStack_70;
      uStack_4c = uStack_6c;
      (*param_6)(&local_a8,&local_58);
      param_1[4] = local_88;
      param_1[2] = local_98;
      param_1[3] = uStack_90;
      *param_1 = local_a8;
      param_1[1] = uStack_a0;
    }
    return;
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00212048)
            (&PTR_s_src_uu_split_src_strategy_rs_0020ae18);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}