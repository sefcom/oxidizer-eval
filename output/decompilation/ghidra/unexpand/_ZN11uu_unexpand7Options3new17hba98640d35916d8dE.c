undefined8 *
_ZN11uu_unexpand7Options3new17hba98640d35916d8dE(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
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
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hbd246043b6daf010E
            (&local_198,param_2,&DAT_001148ac,4);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h9cfde3e4273ed929E
            (&local_e8,&DAT_001148ac,4,&local_198);
  if (CONCAT44(uStack_e4,local_e8) == 0) {
    puVar6 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(8,8);
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,8);
    }
    *puVar6 = 8;
    _ZN5alloc5slice4hack8into_vec17h55aa47da59082a8fE(&local_148,puVar6,1);
  }
  else {
    local_78 = local_b8;
    uStack_74 = uStack_b4;
    uStack_70 = uStack_b0;
    uStack_6c = uStack_ac;
    local_88 = local_c8;
    uStack_84 = uStack_c4;
    uStack_80 = uStack_c0;
    uStack_7c = uStack_bc;
    local_98 = local_d8;
    uStack_94 = uStack_d4;
    uStack_90 = uStack_d0;
    uStack_8c = uStack_cc;
    local_a8 = local_e8;
    uStack_a4 = uStack_e4;
    uStack_a0 = uStack_e0;
    uStack_9c = uStack_dc;
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h94a4c0b45001b4d0E
              (&local_1b8,&local_a8);
                    /* try { // try from 001b1a62 to 001b1a78 has its CatchHandler @ 001b1d73 */
    _ZN5alloc3str17join_generic_copy17h53cf3b33d1518b53E
              (&local_198,CONCAT44(uStack_1ac,uStack_1b0),local_1a8,",",1);
    local_f8 = local_188;
    local_108 = (undefined4)local_198;
    uStack_104 = local_198._4_4_;
    uStack_100 = (undefined4)uStack_190;
    uStack_fc = uStack_190._4_4_;
                    /* try { // try from 001b1a9b to 001b1aa4 has its CatchHandler @ 001b1d61 */
    _ZN11uu_unexpand14tabstops_parse17h79f903e022d9dc45E(&local_198,uStack_190);
    local_128 = uStack_190;
    uVar1 = local_128;
    uStack_120 = local_188;
    uVar2 = uStack_120;
    local_118 = local_180;
    local_128._0_4_ = (undefined4)uStack_190;
    local_128._4_4_ = (undefined4)((ulong)uStack_190 >> 0x20);
    uStack_120._0_4_ = (undefined4)local_188;
    uStack_120._4_4_ = (undefined4)((ulong)local_188 >> 0x20);
    local_128 = uVar1;
    uStack_120 = uVar2;
    if (local_198 != 0) {
      param_1[3] = local_180;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_128;
      *(undefined4 *)((long)param_1 + 0xc) = local_128._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_120;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_120._4_4_;
      *param_1 = 0x8000000000000000;
                    /* try { // try from 001b1aec to 001b1af8 has its CatchHandler @ 001b1d73 */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3bdde1cb9e2913b2E(&local_108);
      _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h472c5ae7f3c85b84E
                (&local_1b8);
      return param_1;
    }
    local_138 = local_180;
    local_148 = (undefined4)local_128;
    uStack_144 = local_128._4_4_;
    uStack_140 = (undefined4)uStack_120;
    uStack_13c = uStack_120._4_4_;
                    /* try { // try from 001b1b56 to 001b1b62 has its CatchHandler @ 001b1d73 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h3bdde1cb9e2913b2E(&local_108);
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h472c5ae7f3c85b84E
              (&local_1b8);
  }
                    /* try { // try from 001b1b6b to 001b1c65 has its CatchHandler @ 001b1d80 */
  cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"all",3);
  if ((cVar3 == '\0') &&
     (cVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11contains_id17h8ab577f2647f3b72E
                        (param_2,&DAT_001148ac,4), cVar3 == '\0')) {
    bVar4 = 0;
  }
  else {
    bVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"first-only",10);
    bVar4 = bVar4 ^ 1;
  }
  bVar5 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                    (param_2,"no-utf8",7);
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17hbd246043b6daf010E
            (&local_198,param_2,"file",4);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h9cfde3e4273ed929E
            (&local_e8,"file",4,&local_198);
  if (CONCAT44(uStack_e4,local_e8) == 0) {
    puVar7 = (undefined4 *)_ZN5alloc5alloc6Global10alloc_impl17hf61749d460433fffE(8,0x18);
    if (puVar7 == (undefined4 *)0x0) {
                    /* try { // try from 001b1d44 to 001b1d53 has its CatchHandler @ 001b1d80 */
                    /* WARNING: Subroutine does not return */
      _ZN5alloc5alloc18handle_alloc_error17h3816d26e7f8ae8a1E(8,0x18);
    }
                    /* try { // try from 001b1c80 to 001b1c98 has its CatchHandler @ 001b1d54 */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17hde6101a7564f34fbE
              (&local_198,"-",1);
    local_1a8 = local_188;
    local_1b8 = (undefined4)local_198;
    uStack_1b4 = local_198._4_4_;
    uStack_1b0 = (undefined4)uStack_190;
    uStack_1ac = uStack_190._4_4_;
    *(undefined8 *)(puVar7 + 4) = local_188;
    *puVar7 = (undefined4)local_198;
    puVar7[1] = local_198._4_4_;
    puVar7[2] = (undefined4)uStack_190;
    puVar7[3] = uStack_190._4_4_;
                    /* try { // try from 001b1cb4 to 001b1cc3 has its CatchHandler @ 001b1d80 */
    _ZN5alloc5slice4hack8into_vec17h32000ed39324e2bfE(&local_1b8,puVar7,1);
  }
  else {
    local_38 = local_b8;
    uStack_34 = uStack_b4;
    uStack_30 = uStack_b0;
    uStack_2c = uStack_ac;
    local_48 = local_c8;
    uStack_44 = uStack_c4;
    uStack_40 = uStack_c0;
    uStack_3c = uStack_bc;
    local_58 = local_d8;
    uStack_54 = uStack_d4;
    uStack_50 = uStack_d0;
    uStack_4c = uStack_cc;
    local_68 = local_e8;
    uStack_64 = uStack_e4;
    uStack_60 = uStack_e0;
    uStack_5c = uStack_dc;
    _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h63fb22ca47c48f7eE
              (&local_1b8,&local_68);
  }
  *param_1 = CONCAT44(uStack_1b4,local_1b8);
  param_1[1] = CONCAT44(uStack_1ac,uStack_1b0);
  param_1[4] = CONCAT44(uStack_13c,uStack_140);
  param_1[5] = local_138;
  param_1[2] = local_1a8;
  param_1[3] = CONCAT44(uStack_144,local_148);
  *(byte *)(param_1 + 6) = bVar4;
  *(byte *)((long)param_1 + 0x31) = bVar5 ^ 1;
  return param_1;
}