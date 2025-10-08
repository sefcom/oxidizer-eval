void _ZN5uu_pr11parse_usize17ha0c8a08d466c6b5cE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_90 = param_3;
  local_88 = param_4;
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h0e26f3cdbc6a68b8E
            (&local_80);
  lVar1 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hfed9fdb9bcd55c4dE
                    (param_3,param_4,&local_80);
  if (lVar1 == 0) {
    *param_1 = 0x8000000000000006;
  }
  else {
    _ZN5uu_pr11parse_usize28__u7b__u7b_closure_u7d__u7d_17hc0ac91cb2498e34fE
              (&local_50,&local_90,lVar1);
    local_58 = local_28;
    local_68 = local_38;
    uStack_60 = uStack_30;
    local_78 = local_48;
    uStack_74 = uStack_44;
    uStack_70 = uStack_40;
    uStack_6c = uStack_3c;
    local_80 = local_50;
    _ZN4core3ops8function6FnOnce9call_once17hf083617b5147bd4aE(param_1,&local_80);
  }
  return;
}