void _ZN8uu_split8strategy8Strategy4from13get_and_parse17h2131435d3ea4b88eE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               code *param_5,code *param_6)

{
  code *pcVar1;
  long lVar2;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_50 [2];
  long local_48;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h6b47e11c99165f29E
            (&local_78);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h5fb9f4927eec1abaE
                    (param_3,param_4,&local_78);
  if (lVar2 != 0) {
    _ZN6uucore6parser10parse_size18parse_size_u64_max17h351ae83d3c4e9b23E
              (local_50,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
    if (local_50[0] == 3) {
      if (local_48 == 0) {
        _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
                  (&uStack_70,lVar2);
        local_78 = 1;
        (*param_6)(param_1,&local_78);
      }
      else {
        (*param_5)(param_1 + 1);
        *param_1 = 4;
      }
    }
    else {
      _ZN4core3ops8function6FnOnce9call_once17h28af8ecb4f0850c0E(&local_78,param_6,local_50);
      param_1[4] = local_58;
      param_1[2] = local_68;
      param_1[3] = uStack_60;
      *param_1 = local_78;
      param_1[1] = uStack_70;
    }
    return;
  }
  _ZN4core6option13unwrap_failed17h0e11329e76906eaaE(&PTR_DAT_00248f30);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}