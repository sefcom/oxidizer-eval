undefined8 *
_ZN9uu_csplit13CsplitOptions3new17h18a4d0e2255fb53bE(undefined8 *param_1,undefined8 param_2)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 **local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined local_e0 [24];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 *local_40;
  code *local_38;
  
  uVar1 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"keep-files",10);
  uVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"quiet",5);
  uVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"elide-empty-files",0x11);
  uVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,&DAT_00165d60,0x10);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf15a83bd2d124092E
            (&local_c8,param_2,"prefix",6);
  lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hd942431c9d8b51dcE
                    ("prefix",6,&local_c8);
  if (lVar5 == 0) {
    local_e0._0_8_ = 0x8000000000000000;
  }
  else {
    _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
              (local_e0,lVar5);
  }
                    /* try { // try from 002bcf58 to 002bcf99 has its CatchHandler @ 002bd1bd */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf15a83bd2d124092E
            (&local_c8,param_2,"suffix-format",0xd);
  lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hd942431c9d8b51dcE
                    ("suffix-format",0xd,&local_c8);
  if (lVar5 == 0) {
    local_68 = 0x8000000000000000;
  }
  else {
    _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
              (&local_c8,lVar5);
    local_68 = CONCAT44(uStack_c4,local_c8);
    uStack_60 = uStack_c0;
    uStack_5c = uStack_bc;
  }
                    /* try { // try from 002bcfbe to 002bcfff has its CatchHandler @ 002bd1ab */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17hf15a83bd2d124092E
            (&local_c8,param_2,"digits: ",6);
  lVar5 = _ZN12clap_builder6parser5error12MatchesError6unwrap17hd942431c9d8b51dcE
                    ("digits: ",6,&local_c8);
  if (lVar5 == 0) {
    local_118 = (undefined *)0x8000000000000000;
  }
  else {
    _ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h8f45b0d02f4dafdaE
              (&local_c8,lVar5);
    local_118 = (undefined *)CONCAT44(uStack_c4,local_c8);
  }
  _ZN9uu_csplit10split_name9SplitName3new17h3397569db94b2c64E
            (&local_c8,local_e0,&local_68,&local_118);
  if (CONCAT44(uStack_c4,local_c8) != -0x8000000000000000) {
    param_1[10] = local_78;
    param_1[0xb] = uStack_70;
    param_1[8] = local_88;
    param_1[9] = uStack_80;
    param_1[6] = local_98;
    param_1[7] = uStack_90;
    param_1[4] = CONCAT44(uStack_a4,local_a8);
    param_1[5] = uStack_a0;
    param_1[2] = CONCAT44(uStack_b4,local_b8);
    param_1[3] = CONCAT44(uStack_ac,uStack_b0);
    *param_1 = CONCAT44(uStack_c4,local_c8);
    param_1[1] = CONCAT44(uStack_bc,uStack_c0);
    *(undefined *)(param_1 + 0xc) = uVar1;
    *(undefined *)((long)param_1 + 0x61) = uVar2;
    *(undefined *)((long)param_1 + 0x62) = uVar3;
    *(undefined *)((long)param_1 + 99) = uVar4;
    return param_1;
  }
  local_48 = uStack_a0;
  uStack_50 = local_a8;
  uStack_4c = uStack_a4;
  uStack_60 = local_b8;
  uStack_5c = uStack_b4;
                    /* try { // try from 002bd0e0 to 002bd198 has its CatchHandler @ 002bd199 */
  local_e0._0_16_ = _ZN6uucore9util_name17h60d842bf27b05e82E();
  local_38 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h2dda48c026ef89ebE;
  local_118 = &DAT_003e1d78;
  uStack_110 = 2;
  local_f8 = 0;
  local_108 = &local_40;
  local_100 = 1;
  local_40 = (undefined8 *)local_e0;
  _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_118);
  local_e0._8_8_ =
       _ZN75__LT_uu_csplit__csplit_error__CsplitError_u20_as_u20_core__fmt__Display_GT_3fmt17hf6930a6d48bf4e10E
  ;
  local_118 = &DAT_003e1d98;
  uStack_110 = 2;
  local_f8 = 0;
  local_100 = 1;
  local_108 = (undefined8 **)local_e0;
  local_e0._0_8_ = &local_68;
  _ZN3std2io5stdio7_eprint17hcdfeec148c7134f7E(&local_118);
  uVar6 = _ZN3std7process4exit17hf8c1b9d00a2a86fdE(1);
                    /* catch() { ... } // from try @ 002bd0e0 with catch @ 002bd199 */
                    /* try { // try from 002bd19c to 002bd1c9 has its CatchHandler @ 002bd1d2 */
  _ZN4core3ptr57drop_in_place_LT_uu_csplit__csplit_error__CsplitError_GT_17h6243e11635bc4809E
            (&local_68);
  puVar7 = (undefined8 *)_Unwind_Resume(uVar6);
  return puVar7;
}