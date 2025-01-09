undefined8 * __rustcall uu_df::Options::from(undefined8 *param_1,undefined8 param_2)

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
  
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_138,param_2,&DAT_0010bea4,4);
  clap_builder::parser::error::MatchesError::unwrap(&local_c8,&DAT_0010bea4,4,&local_138);
  if (CONCAT44(uStack_c4,local_c8) == 0) {
    local_170 = -0x8000000000000000;
  }
  else {
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter
              (&local_170,&local_138);
  }
                    /* try { // try from 001c5f70 to 001c6001 has its CatchHandler @ 001c6472 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_138,param_2,"exclude-type",0xc);
  clap_builder::parser::error::MatchesError::unwrap(&local_c8,"exclude-type",0xc,&local_138);
  if (CONCAT44(uStack_c4,local_c8) == 0) {
    local_188 = -0x8000000000000000;
LAB_001c6064:
    uVar2 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"local",5);
    uVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"all",3);
    uVar4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_2,&DAT_0010bea0,4);
    blocks::read_block_size(&local_158,param_2);
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
      from::___closure__(&local_e8,param_2,&local_c8);
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
        core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>
                  (&local_188);
        goto LAB_001c6404;
      }
    }
                    /* try { // try from 001c6132 to 001c61dc has its CatchHandler @ 001c6459 */
    local_f0 = uVar1;
    cVar5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_2,"human-readable-binary",0x15);
    cVar6 = '\x01';
    if ((cVar5 == '\0') &&
       (cVar5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                          (param_2,"human-readable-decimal",0x16), cVar5 == '\0')) {
      cVar5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                        (param_2,"portability",0xb);
      cVar6 = '\x02';
      if (cVar5 == '\0') {
        cVar6 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source
                          (param_2,"output",6);
        cVar6 = (cVar6 == '\x02') * '\x03';
      }
    }
    cVar7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                      (param_2,"human-readable-binary",0x15);
    cVar5 = '\x01';
    if (cVar7 == '\0') {
      bVar8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
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
    uVar9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(param_2,"total",5);
    columns::Column::from_matches(&local_e8,param_2);
    if (CONCAT44(uStack_e4,local_e8) == 0) {
      local_148 = CONCAT44(uStack_cc,uStack_d0);
      local_158 = CONCAT44(uStack_dc,uStack_e0);
      uStack_150 = CONCAT44(uStack_d4,local_d8);
    }
    else {
      core::ops::function::FnOnce::call_once(&local_c8);
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
        core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>
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
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter
              (&local_e8,&local_138);
    local_188 = CONCAT44(uStack_e4,local_e8);
    uStack_180 = uStack_e0;
    uStack_17c = uStack_dc;
    local_178 = CONCAT44(uStack_d4,local_d8);
    if ((local_170 == -0x8000000000000000) || (local_188 == -0x8000000000000000)) goto LAB_001c6064;
                    /* try { // try from 001c603e to 001c60ff has its CatchHandler @ 001c6477 */
    get_intersected_types(&local_138,uStack_168,local_160,CONCAT44(uStack_dc,uStack_e0),local_178);
    if (local_138 == -0x8000000000000000) {
      core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>
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
    core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>
              (&local_188);
LAB_001c6404:
    plVar10 = &local_170;
LAB_001c6409:
    core::ptr::drop_in_place<core::option::Option<alloc::vec::Vec<alloc::string::String>>>(plVar10);
  }
  return param_1;
}