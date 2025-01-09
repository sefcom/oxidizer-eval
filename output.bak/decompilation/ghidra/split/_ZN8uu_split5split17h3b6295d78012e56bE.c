undefined  [16] __rustcall uu_split::split(long *param_1)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined8 **ppuVar5;
  char cVar6;
  undefined8 uVar8;
  undefined uVar7;
  undefined **ppuVar9;
  long lVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined8 local_230;
  undefined8 *local_228;
  code *local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 **local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined **local_180;
  ulong local_178;
  ulong local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined local_e8 [56];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulong local_70;
  undefined local_68 [24];
  undefined local_50 [24];
  undefined local_38 [24];
  
  lVar10 = param_1[0xf];
  lVar1 = param_1[0x10];
  cVar6 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(lVar10,lVar1,"-",1);
  if (cVar6 == '\0') {
    std::fs::File::open(&local_218,lVar10,lVar1);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_180,&local_218,param_1);
    auVar11._8_8_ = local_178;
    auVar11._0_8_ = local_180;
    if (local_180 != (undefined **)0x0) {
      return auVar11;
    }
    uVar8 = ::alloc::boxed::Box<T>::new(local_178 & 0xffffffff);
    ppuVar9 = &PTR_drop_in_place<std_fs_File>_002485f8;
  }
  else {
    uVar8 = std::io::stdio::stdin();
    uVar8 = ::alloc::boxed::Box<T>::new(uVar8);
    ppuVar9 = (undefined **)&DAT_00248650;
  }
  lVar10 = 0x2000;
  if (*param_1 != 0) {
    lVar10 = param_1[1];
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity(local_e8,lVar10,uVar8,ppuVar9);
  lVar10 = param_1[3];
  switch(param_1[2]) {
  case 6:
                    /* try { // try from 001ce0e9 to 001ce0f8 has its CatchHandler @ 001ce878 */
    LineChunkWriter::new(&local_218,lVar10,param_1);
    ppuVar5 = local_208;
    auVar12._8_8_ = local_208;
    auVar12._0_8_ = uStack_210;
    if (local_218 != (undefined **)0x8000000000000000) {
      local_f8 = local_190;
      uStack_f0 = uStack_188;
      local_108 = local_1a0;
      uStack_100 = uStack_198;
      local_118 = local_1b0;
      uStack_110 = uStack_1a8;
      local_128 = local_1c0;
      uStack_120 = uStack_1b8;
      local_138 = local_1d0;
      uStack_134 = uStack_1cc;
      uStack_130 = uStack_1c8;
      uStack_12c = uStack_1c4;
      local_148 = local_1e0;
      uStack_144 = uStack_1dc;
      uStack_140 = uStack_1d8;
      uStack_13c = uStack_1d4;
      local_158 = local_1f0;
      uStack_154 = uStack_1ec;
      uStack_150 = uStack_1e8;
      uStack_14c = uStack_1e4;
      local_168 = (undefined4)local_200;
      uStack_164 = local_200._4_4_;
      uStack_160 = (undefined4)uStack_1f8;
      uStack_15c = uStack_1f8._4_4_;
      local_180 = local_218;
      local_178 = uStack_210;
      local_170 = (ulong)local_208;
                    /* try { // try from 001ce1a4 to 001ce1b8 has its CatchHandler @ 001ce800 */
      auVar11 = std::io::copy::generic_copy(local_e8,&local_180);
      if (auVar11._0_8_ == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = ppuVar5;
        auVar12 = auVar3 << 0x40;
      }
      else {
        local_230 = auVar11._8_8_;
        cVar6 = std::io::error::Error::kind(auVar11._8_8_);
        uVar8 = local_230;
        if (cVar6 == '\'') {
          local_228 = &local_230;
          local_220 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
          local_218 = (undefined **)&DAT_00118130;
          uStack_210 = 1;
          uStack_1f8 = 0;
          local_208 = &local_228;
          local_200 = 1;
                    /* try { // try from 001ce21e to 001ce25d has its CatchHandler @ 001ce840 */
          core::option::Option<T>::map_or_else(&local_b0,0,&local_218);
          local_200 = CONCAT44(local_200._4_4_,1);
          local_218 = (undefined **)CONCAT44(uStack_ac,local_b0);
          uStack_210 = CONCAT44(uStack_a4,uStack_a8);
          local_208 = (undefined8 **)local_a0;
          uVar8 = ::alloc::boxed::Box<T>::new(&local_218);
          auVar12._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00248438;
          auVar12._0_8_ = uVar8;
          uVar8 = local_230;
        }
        else {
          uVar7 = std::io::error::Error::kind(local_230);
          local_218 = &PTR_s_input_output_error_002485e8;
          uStack_210 = 1;
          local_208 = (undefined8 **)0x8;
          local_200 = 0;
          uStack_1f8 = 0;
                    /* try { // try from 001ce6fe to 001ce726 has its CatchHandler @ 001ce840 */
          core::option::Option<T>::map_or_else(local_68,"input/output error",&local_218);
          auVar12 = uucore::mods::error::UIoError::new(uVar7,local_68);
        }
                    /* try { // try from 001ce72d to 001ce734 has its CatchHandler @ 001ce7e4 */
        core::ptr::drop_in_place<std::io::error::Error>(uVar8);
      }
                    /* try { // try from 001ce735 to 001ce741 has its CatchHandler @ 001ce878 */
      core::ptr::drop_in_place<uu_split::LineChunkWriter>(&local_180);
    }
    break;
  case 7:
    ByteChunkWriter::new(&local_218,lVar10,param_1);
    ppuVar5 = local_208;
    auVar12._8_8_ = local_208;
    auVar12._0_8_ = uStack_210;
    if (local_218 != (undefined **)0x8000000000000000) {
      local_f8 = local_190;
      uStack_f0 = uStack_188;
      local_108 = local_1a0;
      uStack_100 = uStack_198;
      local_118 = local_1b0;
      uStack_110 = uStack_1a8;
      local_128 = local_1c0;
      uStack_120 = uStack_1b8;
      local_138 = local_1d0;
      uStack_134 = uStack_1cc;
      uStack_130 = uStack_1c8;
      uStack_12c = uStack_1c4;
      local_148 = local_1e0;
      uStack_144 = uStack_1dc;
      uStack_140 = uStack_1d8;
      uStack_13c = uStack_1d4;
      local_158 = local_1f0;
      uStack_154 = uStack_1ec;
      uStack_150 = uStack_1e8;
      uStack_14c = uStack_1e4;
      local_168 = (undefined4)local_200;
      uStack_164 = local_200._4_4_;
      uStack_160 = (undefined4)uStack_1f8;
      uStack_15c = uStack_1f8._4_4_;
      local_180 = local_218;
      local_178 = uStack_210;
      local_170 = (ulong)local_208;
                    /* try { // try from 001ce4e0 to 001ce4f4 has its CatchHandler @ 001ce7ee */
      auVar11 = std::io::copy::generic_copy(local_e8,&local_180);
      if (auVar11._0_8_ == 0) {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = ppuVar5;
        auVar12 = auVar4 << 0x40;
      }
      else {
        local_230 = auVar11._8_8_;
        cVar6 = std::io::error::Error::kind(auVar11._8_8_);
        uVar8 = local_230;
        if (cVar6 == '\'') {
          local_228 = &local_230;
          local_220 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
          local_218 = (undefined **)&DAT_00118130;
          uStack_210 = 1;
          uStack_1f8 = 0;
          local_208 = &local_228;
          local_200 = 1;
                    /* try { // try from 001ce55a to 001ce599 has its CatchHandler @ 001ce824 */
          core::option::Option<T>::map_or_else(&local_98,0,&local_218);
          local_200 = CONCAT44(local_200._4_4_,1);
          local_218 = (undefined **)CONCAT44(uStack_94,local_98);
          uStack_210 = CONCAT44(uStack_8c,uStack_90);
          local_208 = (undefined8 **)local_88;
          uVar8 = ::alloc::boxed::Box<T>::new(&local_218);
          auVar12._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00248438;
          auVar12._0_8_ = uVar8;
          uVar8 = local_230;
        }
        else {
          uVar7 = std::io::error::Error::kind(local_230);
          local_218 = &PTR_s_input_output_error_002485e8;
          uStack_210 = 1;
          local_208 = (undefined8 **)0x8;
          local_200 = 0;
          uStack_1f8 = 0;
                    /* try { // try from 001ce779 to 001ce7a1 has its CatchHandler @ 001ce824 */
          core::option::Option<T>::map_or_else(local_50,"input/output error",&local_218);
          auVar12 = uucore::mods::error::UIoError::new(uVar7,local_50);
        }
                    /* try { // try from 001ce7a8 to 001ce7af has its CatchHandler @ 001ce7df */
        core::ptr::drop_in_place<std::io::error::Error>(uVar8);
      }
                    /* try { // try from 001ce7b0 to 001ce7bc has its CatchHandler @ 001ce878 */
      core::ptr::drop_in_place<uu_split::ByteChunkWriter>(&local_180);
    }
    break;
  case 8:
                    /* try { // try from 001ce272 to 001ce281 has its CatchHandler @ 001ce878 */
    LineBytesChunkWriter::new(&local_218,lVar10,param_1);
    ppuVar5 = local_208;
    auVar12._8_8_ = local_208;
    auVar12._0_8_ = uStack_210;
    if (local_218 != (undefined **)0x8000000000000000) {
      local_f8 = local_190;
      uStack_f0 = uStack_188;
      local_108 = local_1a0;
      uStack_100 = uStack_198;
      local_118 = local_1b0;
      uStack_110 = uStack_1a8;
      local_128 = local_1c0;
      uStack_120 = uStack_1b8;
      local_138 = local_1d0;
      uStack_134 = uStack_1cc;
      uStack_130 = uStack_1c8;
      uStack_12c = uStack_1c4;
      local_148 = local_1e0;
      uStack_144 = uStack_1dc;
      uStack_140 = uStack_1d8;
      uStack_13c = uStack_1d4;
      local_158 = local_1f0;
      uStack_154 = uStack_1ec;
      uStack_150 = uStack_1e8;
      uStack_14c = uStack_1e4;
      local_168 = (undefined4)local_200;
      uStack_164 = local_200._4_4_;
      uStack_160 = (undefined4)uStack_1f8;
      uStack_15c = uStack_1f8._4_4_;
      local_180 = local_218;
      local_178 = uStack_210;
      local_170 = (ulong)local_208;
                    /* try { // try from 001ce32d to 001ce341 has its CatchHandler @ 001ce812 */
      auVar11 = std::io::copy::generic_copy(local_e8,&local_180);
      if (auVar11._0_8_ == 0) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = ppuVar5;
        auVar12 = auVar2 << 0x40;
      }
      else {
        local_230 = auVar11._8_8_;
        cVar6 = std::io::error::Error::kind(auVar11._8_8_);
        uVar8 = local_230;
        if (cVar6 == '\'') {
          local_228 = &local_230;
          local_220 = _<std::io::error::Error_as_core::fmt::Display>::fmt;
          local_218 = (undefined **)&DAT_00118130;
          uStack_210 = 1;
          uStack_1f8 = 0;
          local_208 = &local_228;
          local_200 = 1;
                    /* try { // try from 001ce3a7 to 001ce3e6 has its CatchHandler @ 001ce85c */
          core::option::Option<T>::map_or_else(&local_80,0,&local_218);
          local_200 = CONCAT44(local_200._4_4_,1);
          local_218 = (undefined **)CONCAT44(uStack_7c,local_80);
          uStack_210 = CONCAT44(uStack_74,uStack_78);
          local_208 = (undefined8 **)local_70;
          uVar8 = ::alloc::boxed::Box<T>::new(&local_218);
          auVar12._8_8_ = &PTR_drop_in_place<uucore_mods_error_USimpleError>_00248438;
          auVar12._0_8_ = uVar8;
          uVar8 = local_230;
        }
        else {
          uVar7 = std::io::error::Error::kind(local_230);
          local_218 = &PTR_s_input_output_error_002485e8;
          uStack_210 = 1;
          local_208 = (undefined8 **)0x8;
          local_200 = 0;
          uStack_1f8 = 0;
                    /* try { // try from 001ce680 to 001ce6a8 has its CatchHandler @ 001ce85c */
          core::option::Option<T>::map_or_else(local_38,"input/output error",&local_218);
          auVar12 = uucore::mods::error::UIoError::new(uVar7,local_38);
        }
                    /* try { // try from 001ce6af to 001ce6b6 has its CatchHandler @ 001ce7e9 */
        core::ptr::drop_in_place<std::io::error::Error>(uVar8);
      }
                    /* try { // try from 001ce6b7 to 001ce6c3 has its CatchHandler @ 001ce878 */
      core::ptr::drop_in_place<uu_split::LineBytesChunkWriter>(&local_180);
    }
    break;
  default:
                    /* WARNING: Could not recover jumptable at 0x001ce409. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar11 = (*(code *)(&DAT_0012100c + *(int *)(&DAT_0012100c + param_1[2] * 4)))();
    return auVar11;
  }
  core::ptr::
  drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn_std::io::Read>>>
            (local_e8);
  return auVar12;
}