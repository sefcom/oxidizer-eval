void _ZN7uu_join20parse_print_settings17h7df2ac24ec40344eE(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined uVar3;
  undefined uVar4;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  char *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  char *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  char *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  char *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined local_b0 [64];
  undefined local_70 [64];
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hdf06f95a7b97cd47E
            (local_b0,param_2,"v",1);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h1dd9f4a8c089b7dfE(&local_f0,"v",1,local_b0);
  if (CONCAT44(uStack_ec,local_f0) == 0) {
    local_1b8 = _ZN4core3ops8function6FnOnce9call_once17hd000ac33043b820cE;
    uStack_1b0 = "a Display implementation returned an error unexpectedly";
    local_1a8 = "a Display implementation returned an error unexpectedly";
    uStack_1a0 = 0;
    uStack_190 = 0;
    uStack_180 = 0;
  }
  else {
    local_188 = local_c0;
    uStack_180 = uStack_b8;
    local_198 = local_d0;
    uStack_190 = uStack_c8;
    local_1a8 = local_e0;
    uStack_1a0 = uStack_d8;
    local_1b8 = (code *)CONCAT44(uStack_ec,local_f0);
    uStack_1b0 = (char *)CONCAT44(uStack_e4,uStack_e8);
  }
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hdf06f95a7b97cd47E
            (local_b0,param_2,"a",1);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h1dd9f4a8c089b7dfE(&local_130,"a",1,local_b0)
  ;
  if (CONCAT44(uStack_12c,local_130) == 0) {
    local_178 = _ZN4core3ops8function6FnOnce9call_once17hd000ac33043b820cE;
    uStack_170 = "a Display implementation returned an error unexpectedly";
    local_168 = "a Display implementation returned an error unexpectedly";
    uStack_160 = 0;
    uStack_150 = 0;
    uStack_140 = 0;
  }
  else {
    local_148 = local_100;
    uStack_140 = uStack_f8;
    local_158 = local_110;
    uStack_150 = uStack_108;
    local_168 = local_120;
    uStack_160 = uStack_118;
    local_178 = (code *)CONCAT44(uStack_12c,local_130);
    uStack_170 = (char *)CONCAT44(uStack_124,uStack_128);
  }
  _ZN4core4iter6traits8iterator8Iterator5chain17h151f974d6a98c263E(local_b0,&local_1b8,&local_178);
  uVar1 = _ZN4core4iter8adapters5chain17and_then_or_clear17hd7f35116e82399f1E(local_b0);
  lVar2 = _ZN4core6option15Option_LT_T_GT_7or_else17h73b79e6fbab2ae65E(uVar1,local_70);
  if (lVar2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    do {
      _ZN7uu_join17parse_file_number17h95ac4b0d73e9ada5E
                (&local_130,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
      if (CONCAT44(uStack_12c,local_130) != 0) {
        *param_1 = CONCAT44(uStack_12c,local_130);
        param_1[1] = CONCAT44(uStack_124,uStack_128);
        return;
      }
      if ((char)uStack_128 == '\0') {
        uVar4 = 1;
      }
      else {
        uVar3 = 1;
      }
      uVar1 = _ZN4core4iter8adapters5chain17and_then_or_clear17hd7f35116e82399f1E(local_b0);
      lVar2 = _ZN4core6option15Option_LT_T_GT_7or_else17h73b79e6fbab2ae65E(uVar1,local_70);
    } while (lVar2 != 0);
  }
  *(bool *)(param_1 + 1) = CONCAT44(uStack_ec,local_f0) == 0;
  *(undefined *)((long)param_1 + 9) = uVar4;
  *(undefined *)((long)param_1 + 10) = uVar3;
  *param_1 = 0;
  return;
}