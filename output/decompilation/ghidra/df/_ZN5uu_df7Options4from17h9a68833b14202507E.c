undefined8 * _ZN5uu_df7Options4from17h9a68833b14202507E(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  undefined uVar9;
  long *plVar10;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  long local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h27ab3648ae7e279eE
            (&local_138,param_2,&DAT_0010bea4,4);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h54548e49bef11fabE
            (&local_c8,&DAT_0010bea4,4,&local_138);
  if (CONCAT44(uStack_c4,local_c8) == 0) {
    local_170 = -0x8000000000000000;
  }
  else {
    _ZN111__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter_nested__SpecFromIterNested_LT_T_C_I_GT__GT_9from_iter17h7ac0ca4ae1fc3b40E
              (&local_170,&local_138);
  }
                    /* try { // try from 001c5f70 to 001c6001 has its CatchHandler @ 001c6472 */
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h27ab3648ae7e279eE
            (&local_138,param_2,"exclude-type",0xc);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17h54548e49bef11fabE
            (&local_c8,"exclude-type",0xc,&local_138);
  if (CONCAT44(uStack_c4,local_c8) == 0) {
    local_188 = -0x8000000000000000;
LAB_001c6064:
    uVar2 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"local",5);
    uVar3 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"all",3);
    uVar4 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,&DAT_0010bea0,4);
    _ZN5uu_df6blocks15read_block_size17h03278a4ead33fd1dE(&local_158,param_2);
    if ((int)local_158 == 3) {
      local_f0 = uStack_150;
      uVar1 = local_f0;
    }
    else {
      local_b8 = (undefined4)local_148;
      uStack_b4 = local_148._4_4_;
      uStack_b0 = uStack_140;
      uStack_ac = uStack_13c;
      local_c8 = (int)local_158;
      uStack_c4 = local_158._4_4_;
      uStack_c0 = (undefined4)uStack_150;
      uStack_bc = uStack_150._4_4_;
      _ZN5uu_df7Options4from28__u7b__u7b_closure_u7d__u7d_17h9de0386ab5ed2208E
                (&local_e8,param_2,&local_c8);
      _local_48 = CONCAT44(uStack_d4,local_d8);
      _uStack_40 = CONCAT44(uStack_cc,uStack_d0);
      uVar1 = CONCAT44(uStack_dc,uStack_e0);
      if (CONCAT44(uStack_e4,local_e8) != 5) {
        *(undefined4 *)(param_1 + 3) = local_d8;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_d4;
        *(undefined4 *)(param_1 + 4) = uStack_d0;
        *(undefined4 *)((long)param_1 + 0x24) = uStack_cc;
        param_1[1] = CONCAT44(uStack_e4,local_e8);
        param_1[2] = CONCAT44(uStack_dc,uStack_e0);
        *param_1 = 0x8000000000000000;
                    /* try { // try from 001c63d1 to 001c63da has its CatchHandler @ 001c6435 */
        _ZN4core3ptr93drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT__GT_17hf865592599343d61E
                  (&local_188);
        goto LAB_001c6404;
      }
    }
                    /* try { // try from 001c6132 to 001c61dc has its CatchHandler @ 001c6459 */
    local_f0 = uVar1;
    cVar5 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"human-readable-binary",0x15);
    cVar6 = '\x01';
    if ((cVar5 == '\0') &&
       (cVar5 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                          (param_2,"human-readable-decimal",0x16), cVar5 == '\0')) {
      cVar5 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                        (param_2,"portability",0xb);
      cVar6 = '\x02';
      if (cVar5 == '\0') {
        cVar6 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12value_source17h1b5412f9501eb404E
                          (param_2,"output",6);
        cVar6 = (cVar6 == '\x02') * '\x03';
      }
    }
    cVar7 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"human-readable-binary",0x15);
    cVar5 = '\x01';
    if (cVar7 == '\0') {
      bVar8 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                        (param_2,"human-readable-decimal",0x16);
      cVar5 = (bVar8 ^ 1) * '\x02';
    }
    local_78 = local_160;
    local_88 = local_170;
    uStack_80 = uStack_168;
    local_58 = local_178;
    local_68 = (undefined4)local_188;
    uStack_64 = local_188._4_4_;
    uStack_60 = uStack_180;
    uStack_5c = uStack_17c;
                    /* try { // try from 001c6226 to 001c624c has its CatchHandler @ 001c643a */
    uVar9 = _ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h5d143567c1b61cafE
                      (param_2,"total",5);
    _ZN5uu_df7columns6Column12from_matches17h15f1a0d2790b5397E(&local_e8,param_2);
    if (CONCAT44(uStack_e4,local_e8) == 0) {
      local_148 = CONCAT44(uStack_cc,uStack_d0);
      local_158 = CONCAT44(uStack_dc,uStack_e0);
      uStack_150 = CONCAT44(uStack_d4,local_d8);
    }
    else {
      _ZN4core3ops8function6FnOnce9call_once17hd7cb1b151e127991E(&local_c8);
      local_158 = CONCAT44(uStack_bc,uStack_c0);
      uStack_150 = CONCAT44(uStack_b4,local_b8);
      local_148 = CONCAT44(uStack_ac,uStack_b0);
      if (CONCAT44(uStack_c4,local_c8) != 5) {
        _local_48 = CONCAT44(uStack_bc,uStack_c0);
        _uStack_40 = CONCAT44(uStack_b4,local_b8);
        param_1[4] = local_148;
        *(undefined4 *)(param_1 + 2) = uStack_c0;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_bc;
        *(undefined4 *)(param_1 + 3) = local_b8;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_b4;
        param_1[1] = CONCAT44(uStack_c4,local_c8);
        *param_1 = 0x8000000000000000;
                    /* try { // try from 001c62cc to 001c62d8 has its CatchHandler @ 001c6423 */
        local_38 = local_148;
        _ZN4core3ptr93drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT__GT_17hf865592599343d61E
                  (&local_68);
        plVar10 = &local_88;
        goto LAB_001c6409;
      }
    }
    param_1[8] = local_58;
    param_1[6] = CONCAT44(uStack_64,local_68);
    param_1[7] = CONCAT44(uStack_5c,uStack_60);
    param_1[4] = uStack_80;
    param_1[5] = local_78;
    param_1[2] = local_148;
    param_1[3] = local_88;
    *param_1 = local_158;
    param_1[1] = uStack_150;
    param_1[9] = local_f0;
    *(undefined *)(param_1 + 10) = uVar2;
    *(undefined *)((long)param_1 + 0x51) = uVar3;
    *(undefined *)((long)param_1 + 0x52) = uVar4;
    *(undefined *)((long)param_1 + 0x53) = uVar9;
    *(char *)((long)param_1 + 0x54) = cVar5;
    *(char *)((long)param_1 + 0x55) = cVar6;
  }
  else {
    local_128 = CONCAT44(uStack_b4,local_b8);
    local_138 = CONCAT44(uStack_c4,local_c8);
    uStack_130 = uStack_c0;
    uStack_12c = uStack_bc;
    _ZN111__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter_nested__SpecFromIterNested_LT_T_C_I_GT__GT_9from_iter17h88abd33993a73e4cE
              (&local_e8,&local_138);
    local_188 = CONCAT44(uStack_e4,local_e8);
    uStack_180 = uStack_e0;
    uStack_17c = uStack_dc;
    local_178 = CONCAT44(uStack_d4,local_d8);
    if ((local_170 == -0x8000000000000000) || (local_188 == -0x8000000000000000)) goto LAB_001c6064;
                    /* try { // try from 001c603e to 001c60ff has its CatchHandler @ 001c6477 */
    _ZN5uu_df7Options21get_intersected_types17haafdf2c96660658eE
              (&local_138,uStack_168,local_160,CONCAT44(uStack_dc,uStack_e0),local_178);
    if (local_138 == -0x8000000000000000) {
      _ZN4core3ptr93drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT__GT_17hf865592599343d61E
                (&local_138);
      goto LAB_001c6064;
    }
    param_1[4] = local_128;
    *(undefined4 *)(param_1 + 2) = (undefined4)local_138;
    *(undefined4 *)((long)param_1 + 0x14) = local_138._4_4_;
    *(undefined4 *)(param_1 + 3) = uStack_130;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_12c;
    param_1[1] = 4;
    *param_1 = 0x8000000000000000;
                    /* try { // try from 001c63fa to 001c6403 has its CatchHandler @ 001c6472 */
    _ZN4core3ptr93drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT__GT_17hf865592599343d61E
              (&local_188);
LAB_001c6404:
    plVar10 = &local_170;
LAB_001c6409:
    _ZN4core3ptr93drop_in_place_LT_core__option__Option_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT__GT_17hf865592599343d61E
              (plVar10);
  }
  return param_1;
}