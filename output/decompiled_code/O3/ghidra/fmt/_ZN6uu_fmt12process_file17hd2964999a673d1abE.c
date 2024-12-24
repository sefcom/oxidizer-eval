undefined  [16] __rustcall
uu_fmt::process_file(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined auVar9 [16];
  ulong local_220 [7];
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined local_1d0;
  undefined local_1c8 [8];
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  uint uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  int local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined local_68 [56];
  
  cVar5 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,"-",1);
  if (cVar5 == '\0') {
    std::fs::File::open(local_1c8,param_1,param_2);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_118,local_1c8,param_1,param_2);
    if (CONCAT44(uStack_114,local_118) != 0) {
      auVar2._12_4_ = uStack_10c;
      auVar2._8_4_ = uStack_110;
      auVar2._0_8_ = CONCAT44(uStack_114,local_118);
      return auVar2;
    }
    local_220[0] = CONCAT44(local_220[0]._4_4_,uStack_110);
                    /* try { // try from 001b5ab1 to 001b5ad8 has its CatchHandler @ 001b5bff */
    std::fs::File::metadata(local_1c8,local_220);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_118,local_1c8,param_1,param_2);
    if (local_118 == 2) {
      uVar6 = CONCAT44(uStack_10c,uStack_110);
      ppuVar7 = (undefined **)CONCAT44(uStack_104,uStack_108);
    }
    else {
      if ((uStack_e0 & 0xf000) != 0x4000) {
        uVar6 = ::alloc::boxed::Box<T>::new(local_220[0] & 0xffffffff);
        ppuVar7 = &PTR_drop_in_place<std_fs_File>_00227760;
        goto LAB_001b586f;
      }
                    /* try { // try from 001b5b63 to 001b5ba7 has its CatchHandler @ 001b5bff */
      _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_118,"read error",10);
      local_1b0 = (undefined *)CONCAT44(local_1b0._4_4_,1);
      uVar6 = ::alloc::boxed::Box<T>::new(local_1c8);
      ppuVar7 = &PTR_drop_in_place<uucore_mods_error_USimpleError>_002276b0;
    }
    auVar9._8_8_ = ppuVar7;
    auVar9._0_8_ = uVar6;
    core::ptr::drop_in_place<std::fs::File>(local_220);
  }
  else {
    uVar6 = std::io::stdio::stdin();
    uVar6 = ::alloc::boxed::Box<T>::new(uVar6);
    ppuVar7 = (undefined **)&DAT_002277b8;
LAB_001b586f:
    std::io::buffered::bufreader::BufReader<R>::with_capacity(local_68,0x2000,uVar6,ppuVar7);
    local_220[0] = 0x8000000000000002;
    local_1d0 = 1;
    puVar8 = local_68;
    local_1e8 = param_3;
    local_1e0 = local_68;
    local_1d8 = param_3;
    while( true ) {
      while( true ) {
                    /* try { // try from 001b58c0 to 001b58d2 has its CatchHandler @ 001b5c37 */
        _<uu_fmt::parasplit::ParagraphStream_as_core::iter::traits::iterator::Iterator>::next
                  (&local_118,local_220);
        puVar4 = local_100;
        if (CONCAT44(uStack_114,local_118) == -0x8000000000000000) break;
        if (CONCAT44(uStack_114,local_118) == -0x7fffffffffffffff) {
                    /* try { // try from 001b5af8 to 001b5b11 has its CatchHandler @ 001b5c14 */
          core::ptr::drop_in_place<uu_fmt::parasplit::ParagraphStream>(local_220);
          uVar6 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush(param_4);
          auVar9 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                   ::map_err_context(uVar6);
          if (auVar9._0_8_ == 0) {
            core::ptr::
            drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn_std::io::Read>>>
                      (local_68);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = puVar8;
            return auVar3 << 0x40;
          }
          goto LAB_001b5b3a;
        }
        local_1b0 = local_100;
        puStack_1b8 = (undefined *)CONCAT44(uStack_104,uStack_108);
        local_168 = local_b8;
        uStack_160 = uStack_b0;
        local_178 = local_c8;
        uStack_174 = uStack_c4;
        uStack_170 = uStack_c0;
        uStack_16c = uStack_bc;
        local_188 = local_d8;
        uStack_184 = uStack_d4;
        uStack_180 = uStack_d0;
        uStack_17c = uStack_cc;
        local_198 = local_e8;
        uStack_194 = uStack_e4;
        uStack_190 = uStack_e0;
        uStack_18c = uStack_dc;
        local_1a8 = local_f8;
        uStack_1a4 = uStack_f4;
        uStack_1a0 = uStack_f0;
        uStack_19c = uStack_ec;
                    /* try { // try from 001b594f to 001b5965 has its CatchHandler @ 001b5c19 */
        uVar6 = linebreak::break_lines(local_1c8,param_3,param_4);
        auVar9 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
                 ::map_err_context(uVar6);
        if (auVar9._0_8_ != 0) {
                    /* try { // try from 001b5b23 to 001b5b2f has its CatchHandler @ 001b5bfd */
          core::ptr::drop_in_place<uu_fmt::parasplit::Paragraph>(local_1c8);
          goto LAB_001b5b30;
        }
                    /* try { // try from 001b5972 to 001b5979 has its CatchHandler @ 001b5c37 */
        core::ptr::drop_in_place<uu_fmt::parasplit::Paragraph>(local_1c8);
      }
      uStack_1c0 = CONCAT44(uStack_104,uStack_108);
      puStack_1b8 = local_100;
      lVar1 = param_4[2];
      if (local_100 < (undefined *)(*param_4 - lVar1)) {
        (*(code *)PTR_memcpy_0022b7b8)(param_4[1] + lVar1,uStack_1c0,local_100);
        param_4[2] = (long)(puVar4 + lVar1);
        uVar6 = 0;
      }
      else {
                    /* try { // try from 001b59d0 to 001b5a3b has its CatchHandler @ 001b5c28 */
        uVar6 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold
                          (param_4,uStack_1c0,local_100);
      }
      auVar9 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
               ::map_err_context(uVar6);
      if (auVar9._0_8_ != 0) break;
      lVar1 = param_4[2];
      if ((ulong)(*param_4 - lVar1) < 2) {
        uVar6 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(param_4,"\n",1);
      }
      else {
        *(undefined *)(param_4[1] + lVar1) = 10;
        param_4[2] = lVar1 + 1;
        uVar6 = 0;
      }
      auVar9 = _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
               ::map_err_context(uVar6);
      if (auVar9._0_8_ != 0) break;
                    /* try { // try from 001b5a44 to 001b5a4b has its CatchHandler @ 001b5c37 */
      core::ptr::drop_in_place<alloc::string::String>(local_1c8);
      puVar8 = puVar4;
    }
                    /* try { // try from 001b5a97 to 001b5aa0 has its CatchHandler @ 001b5bfd */
    core::ptr::drop_in_place<alloc::string::String>(local_1c8);
LAB_001b5b30:
                    /* try { // try from 001b5b30 to 001b5b39 has its CatchHandler @ 001b5c14 */
    core::ptr::drop_in_place<uu_fmt::parasplit::ParagraphStream>(local_220);
LAB_001b5b3a:
    core::ptr::
    drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn_std::io::Read>>>
              (local_68);
  }
  return auVar9;
}