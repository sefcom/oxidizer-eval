undefined8 * __rustcall uu_split::Settings::from(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined uVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  ulong unaff_R12;
  ulong uVar8;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long local_200;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  ulong local_1c8;
  ulong uStack_1c0;
  uint uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong local_188;
  ulong uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  long local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined local_128;
  undefined local_127;
  undefined local_126;
  long local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  ulong local_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_58 [2];
  ulong local_50;
  ulong uStack_48;
  undefined8 local_40;
  
  strategy::Strategy::from(local_58);
  if (local_58[0] == 4) {
    local_238 = local_40;
    local_248 = local_50;
    uStack_240 = uStack_48;
  }
  else {
    core::ops::function::FnOnce::call_once(&local_1c8,local_58);
    uStack_240 = CONCAT44(uStack_1b4,uStack_1b8);
    local_248 = uStack_1c0;
    local_238 = CONCAT44(uStack_1ac,uStack_1b0);
    if (local_1c8 != 9) {
      param_1[4] = local_238;
      param_1[2] = uStack_1c0;
      param_1[3] = uStack_240;
      param_1[1] = local_1c8;
      param_1[5] = uStack_1a8;
      *param_1 = 2;
      return param_1;
    }
  }
  local_c8 = (uint)local_248;
  uStack_c4 = local_248._4_4_;
  uStack_c0 = (undefined4)uStack_240;
  uStack_bc = uStack_240._4_4_;
  local_b8 = local_238;
  local_78 = (uint)local_248;
  uStack_74 = local_248._4_4_;
  uStack_70 = (undefined4)uStack_240;
  uStack_6c = uStack_240._4_4_;
  local_68 = local_238;
  filenames::Suffix::from(&local_1c8,param_2,&local_78);
  if (local_1c8 == 0x8000000000000000) {
    core::ops::function::FnOnce::call_once(&local_248);
    param_1[5] = CONCAT44(uStack_224,local_228);
    param_1[3] = local_238;
    param_1[4] = CONCAT44(uStack_22c,uStack_230);
    param_1[1] = local_248;
    param_1[2] = uStack_240;
    *param_1 = 2;
    return param_1;
  }
  local_1e8 = CONCAT44(uStack_1ac,uStack_1b0);
  uStack_f0 = uStack_1c0;
  uStack_e8 = CONCAT44(uStack_1b4,uStack_1b8);
  uStack_e0 = uStack_1b0;
  uStack_dc = uStack_1ac;
  uStack_d8 = (undefined4)uStack_1a8;
  uStack_d4 = uStack_1a8._4_4_;
  local_d0 = local_1a0;
  local_f8 = local_1c8;
                    /* try { // try from 001cb58f to 001cb748 has its CatchHandler @ 001cbb00 */
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many
            (&local_1c8,param_2,"separator",9);
  clap_builder::parser::error::MatchesError::unwrap(&local_248,"separator",9,&local_1c8);
  if (local_248 == 0) {
    uVar2 = 10;
    goto LAB_001cb6c5;
  }
  uStack_1b8 = (undefined4)local_238;
  uStack_1b4 = local_238._4_4_;
  uStack_1b0 = uStack_230;
  uStack_1ac = uStack_22c;
  local_1c8 = local_248;
  uStack_1c0 = uStack_240;
  lVar4 = _<clap_builder::parser::matches::arg_matches::ValuesRef<T>as_core::iter::traits::iterator::Iterator>
          ::next(&local_1c8);
  if (lVar4 == 0) {
    ppuVar7 = &PTR_s_src_uu_split_src_split_rs_00248858;
LAB_001cba9b:
                    /* try { // try from 001cba9b to 001cbaa0 has its CatchHandler @ 001cbb00 */
    core::option::unwrap_failed(ppuVar7);
LAB_001cbaa1:
                    /* try { // try from 001cbaa1 to 001cbaad has its CatchHandler @ 001cbae4 */
    uVar6 = core::option::unwrap_failed(&PTR_s_src_uu_split_src_split_rs_00248888);
                    /* catch() { ... } // from try @ 001cb751 with catch @ 001cbaae
                       catch() { ... } // from try @ 001cba0f with catch @ 001cbaae */
                    /* try { // try from 001cbab1 to 001cbb0f has its CatchHandler @ 001cbb18 */
    core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>
              (&local_1c8);
    core::ptr::drop_in_place<uu_split::filenames::Suffix>(&local_f8);
    puVar5 = (undefined8 *)_Unwind_Resume(uVar6);
    return puVar5;
  }
  local_200 = lVar4;
  uVar2 = core::iter::traits::iterator::Iterator::try_fold(&local_1c8,&local_200);
  cVar3 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar2);
  uVar6 = 6;
  if (cVar3 == '\0') {
LAB_001cba02:
    param_1[1] = uVar6;
    *param_1 = 2;
    goto LAB_001cba4b;
  }
  puVar1 = *(undefined **)(local_200 + 8);
  unaff_R12 = *(ulong *)(local_200 + 0x10);
  cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(puVar1,unaff_R12,"\\0",2);
  if (cVar3 == '\0') {
    if (unaff_R12 != 1) {
                    /* try { // try from 001cb9db to 001cb9ea has its CatchHandler @ 001cbb00 */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_1f8,puVar1,unaff_R12);
      param_1[4] = local_1e8;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_1f8;
      *(undefined4 *)((long)param_1 + 0x14) = local_1f8._4_4_;
      *(undefined4 *)(param_1 + 3) = uStack_1f0;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_1ec;
      uVar6 = 5;
      goto LAB_001cba02;
    }
    uVar2 = *puVar1;
  }
  else {
    uVar2 = 0;
  }
LAB_001cb6c5:
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
            (&local_1c8,param_2,"-io-blksize",0xb);
  lVar4 = clap_builder::parser::error::MatchesError::unwrap("-io-blksize",0xb,&local_1c8);
  if (lVar4 == 0) {
    uVar8 = 0;
LAB_001cb767:
                    /* try { // try from 001cb767 to 001cb7af has its CatchHandler @ 001cbb00 */
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
              (&local_248,param_2,"prefix",6);
    lVar4 = clap_builder::parser::error::MatchesError::unwrap("prefix",6,&local_248);
    if (lVar4 != 0) {
      _<alloc::string::String_as_core::clone::Clone>::clone(&local_a8,lVar4);
      local_228 = uStack_d8;
      uStack_224 = uStack_d4;
      uStack_220 = (undefined4)local_d0;
      uStack_21c = local_d0._4_4_;
      local_238 = uStack_e8;
      uStack_230 = uStack_e0;
      uStack_22c = uStack_dc;
      local_248 = local_f8;
      uStack_240 = uStack_f0;
                    /* try { // try from 001cb7d7 to 001cb81f has its CatchHandler @ 001cbae4 */
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                (&local_1f8,param_2,"input",5);
      lVar4 = clap_builder::parser::error::MatchesError::unwrap("input",5,&local_1f8);
      if (lVar4 != 0) {
        _<alloc::string::String_as_core::clone::Clone>::clone(&local_90,lVar4);
                    /* try { // try from 001cb820 to 001cb861 has its CatchHandler @ 001cbad2 */
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one
                  (&local_1f8,param_2,"filter",6);
        lVar4 = clap_builder::parser::error::MatchesError::unwrap("filter",6,&local_1f8);
        if (lVar4 == 0) {
          local_118 = -0x8000000000000000;
        }
        else {
          _<alloc::string::String_as_core::clone::Clone>::clone(&local_1f8,lVar4);
          local_108 = local_1e8;
          local_118 = local_1f8;
          uStack_110 = uStack_1f0;
          uStack_10c = uStack_1ec;
        }
                    /* try { // try from 001cb899 to 001cb8c4 has its CatchHandler @ 001cbac0 */
        cVar3 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source
                          (param_2,"verbose",7);
        local_127 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag
                              (param_2,"elide-empty-files",0x11);
        local_128 = cVar3 == '\x02';
        uStack_190 = local_98;
        local_1a0 = local_a8;
        uStack_198 = uStack_a0;
        local_188 = local_248;
        uStack_180 = uStack_240;
        local_178 = (undefined4)local_238;
        uStack_174 = local_238._4_4_;
        uStack_170 = uStack_230;
        uStack_16c = uStack_22c;
        local_168 = local_228;
        uStack_164 = uStack_224;
        uStack_160 = uStack_220;
        uStack_15c = uStack_21c;
        local_158 = local_90;
        uStack_150 = uStack_88;
        local_148 = local_80;
        uStack_138 = CONCAT44(uStack_10c,uStack_110);
        local_140 = local_118;
        local_130 = local_108;
        uStack_1a8 = local_b8;
        uStack_1b8 = local_c8;
        uStack_1b4 = uStack_c4;
        uStack_1b0 = uStack_c0;
        uStack_1ac = uStack_bc;
        local_1c8 = uVar8;
        uStack_1c0 = unaff_R12;
        local_126 = uVar2;
        if ((((CONCAT44(uStack_c4,local_c8) < 6) && (CONCAT44(uStack_c4,local_c8) < 6)) &&
            ((0x2aUL >> ((ulong)local_c8 & 0x3f) & 1) != 0)) && (local_118 != -0x8000000000000000))
        {
          param_1[1] = 7;
          *param_1 = 2;
          core::ptr::drop_in_place<uu_split::Settings>(&local_1c8);
          return param_1;
        }
        (*(code *)PTR_memcpy_0024d5a8)(param_1,&local_1c8,0xa8);
        return param_1;
      }
      goto LAB_001cbaa1;
    }
    ppuVar7 = &PTR_s_src_uu_split_src_split_rs_00248870;
    goto LAB_001cba9b;
  }
  uucore::parser::parse_size::parse_size_u64
            (&local_1c8,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
  unaff_R12 = uStack_1c0;
  if ((int)local_1c8 == 3) {
    if (uStack_1c0 != 0) {
      if (uStack_1c0 < 0x20000001) {
        core::ptr::
        drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>
                  (&local_1c8);
        uVar8 = 1;
        goto LAB_001cb767;
      }
      goto LAB_001cb751;
    }
                    /* try { // try from 001cba0f to 001cba1c has its CatchHandler @ 001cbaae */
    _<alloc::string::String_as_core::clone::Clone>::clone(&local_248,lVar4);
  }
  else {
LAB_001cb751:
                    /* try { // try from 001cb751 to 001cb75e has its CatchHandler @ 001cbaae */
    _<alloc::string::String_as_core::clone::Clone>::clone(&local_248,lVar4);
  }
  param_1[4] = local_238;
  *(uint *)(param_1 + 2) = (uint)local_248;
  *(undefined4 *)((long)param_1 + 0x14) = local_248._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_240;
  *(undefined4 *)((long)param_1 + 0x1c) = uStack_240._4_4_;
  param_1[1] = 8;
  *param_1 = 2;
                    /* try { // try from 001cba3e to 001cba4a has its CatchHandler @ 001cbb00 */
  core::ptr::drop_in_place<core::result::Result<u64,uucore::parser::parse_size::ParseSizeError>>
            (&local_1c8);
LAB_001cba4b:
  core::ptr::drop_in_place<uu_split::filenames::Suffix>(&local_f8);
  return param_1;
}