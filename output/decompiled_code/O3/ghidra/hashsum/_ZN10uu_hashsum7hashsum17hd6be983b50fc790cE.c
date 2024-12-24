undefined  [16] __rustcall uu_hashsum::hashsum(undefined8 ****param_1,undefined4 *param_2)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 ***pppuVar5;
  undefined **ppuVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined auVar9 [16];
  undefined8 ***local_1a8;
  code *pcStack_1a0;
  undefined8 ***local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  code *local_180;
  undefined8 ***local_178;
  code *local_170;
  undefined8 ***local_168;
  undefined8 ***local_160;
  undefined8 ***local_158;
  undefined8 ***local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 ***local_120;
  undefined8 ***local_118;
  undefined8 ***local_110;
  undefined8 ***local_108;
  code *pcStack_100;
  undefined8 ***local_f8;
  undefined local_f0 [16];
  undefined8 ***local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined local_b0 [56];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_components_004806f8;
  local_d0 = (undefined8 **)0x169ad6;
  if (*(char *)(param_1 + 5) == '\0') {
    local_d0 = (undefined8 **)0x169ad5;
  }
  local_c8 = 1;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_68 = *(undefined8 *)(param_2 + 4);
  uStack_60 = *(undefined8 *)(param_2 + 6);
  local_58 = *(undefined8 *)(param_2 + 8);
  uStack_50 = *(undefined8 *)(param_2 + 10);
  local_48 = *(undefined8 *)(param_2 + 0xc);
  uStack_40 = *(undefined8 *)(param_2 + 0xe);
  local_d8 = param_1 + 2;
  local_168 = param_1;
  do {
                    /* try { // try from 002782c0 to 002782cc has its CatchHandler @ 0027881b */
    auVar9 = _<core::iter::adapters::map::Map<I,F>as_core::iter::traits::iterator::Iterator>::next
                       (&local_78);
    lVar4 = auVar9._0_8_;
    if (lVar4 == 0) {
      ppppuVar7 = param_1;
      ppppuVar8 = (undefined8 ****)0x0;
LAB_002787d5:
      core::ptr::drop_in_place<uu_hashsum::Options>(local_168[2],local_168[3]);
      auVar9._8_8_ = ppppuVar7;
      auVar9._0_8_ = ppppuVar8;
      return auVar9;
    }
                    /* try { // try from 002782d9 to 0027836e has its CatchHandler @ 00278858 */
    (*(code *)puVar1)(&local_160,lVar4);
    (*(code *)puVar1)(&local_1a8,"-",1);
    cVar2 = _<std::path::Components_as_core::cmp::PartialEq>::eq(&local_160,&local_1a8);
    if (cVar2 == '\0') {
      std::fs::File::open(&local_1a8,lVar4,auVar9._8_8_);
      _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
      ::map_err_context(&local_160,&local_1a8);
      ppppuVar7 = (undefined8 ****)local_158;
      ppppuVar8 = (undefined8 ****)local_160;
      if ((undefined8 ****)local_160 != (undefined8 ****)0x0) goto LAB_002787d5;
      uVar3 = ::alloc::boxed::Box<T>::new((ulong)local_158 & 0xffffffff);
      ppuVar6 = &PTR_drop_in_place<std_fs_File>_0043c9b0;
    }
    else {
      uVar3 = (*(code *)PTR_stdin_00480700)();
      uVar3 = ::alloc::boxed::Box<T>::new(uVar3);
      ppuVar6 = (undefined **)&DAT_0043ca08;
    }
    std::io::buffered::bufreader::BufReader<R>::with_capacity(local_b0,0x2000,uVar3,ppuVar6);
                    /* try { // try from 00278377 to 00278399 has its CatchHandler @ 00278846 */
    uucore::features::checksum::digest_reader
              (&local_1a8,local_d8,local_b0,*(undefined *)(param_1 + 5),param_1[4]);
    _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
    ::map_err_context(&local_160,&local_1a8);
    ppppuVar7 = (undefined8 ****)local_150;
    ppppuVar8 = (undefined8 ****)local_158;
    param_1 = (undefined8 ****)local_168;
    if ((undefined8 ****)local_160 == (undefined8 ****)0x8000000000000000) {
                    /* try { // try from 002787c1 to 002787cd has its CatchHandler @ 002787ff */
      core::ptr::
      drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn_std::io::Read>>>
                (local_b0);
      goto LAB_002787d5;
    }
    local_120 = local_160;
    local_118 = local_158;
    local_110 = local_150;
                    /* try { // try from 002783d4 to 002783ea has its CatchHandler @ 0027881d */
    (*(code *)PTR_escape_filename_00480708)(&local_1a8,lVar4,auVar9._8_8_);
    local_f8 = local_198;
    local_108 = local_1a8;
    pcStack_100 = pcStack_1a0;
    local_c0 = (undefined4)local_190;
    uStack_bc = local_190._4_4_;
    uStack_b8 = (undefined4)uStack_188;
    uStack_b4 = uStack_188._4_4_;
    if (*(char *)((long)param_1 + 0x29) == '\0') {
      if (*(char *)((long)param_1 + 0x2a) == '\0') {
        if (*(char *)((long)param_1 + 0x2b) == '\0') {
          local_1a8 = (undefined8 ***)&local_c0;
          pcStack_1a0 = _<&T_as_core::fmt::Display>::fmt;
          local_198 = &local_120;
          local_190 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          uStack_188 = (undefined8 ****)&local_d0;
          local_180 = _<&T_as_core::fmt::Display>::fmt;
          local_178 = &local_108;
          local_170 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_160 = (undefined8 ***)&DAT_0043ca60;
          local_158 = (undefined8 ***)&DAT_00000005;
          local_140 = 0;
          local_148 = (code *)0x4;
          local_150 = &local_1a8;
          (*(code *)PTR__print_00480710)(&local_160);
        }
        else {
          local_1a8 = &local_120;
          pcStack_1a0 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_198 = &local_d0;
          local_190 = _<&T_as_core::fmt::Display>::fmt;
          uStack_188 = (undefined8 ****)local_f0;
          local_180 = (code *)PTR_fmt_00480720;
          local_160 = (undefined8 ***)&DAT_0043cab0;
          local_158 = (undefined8 ****)0x4;
          local_140 = 0;
          local_148 = (code *)0x3;
          local_150 = &local_1a8;
          local_f0 = auVar9;
          (*(code *)PTR__print_00480710)(&local_160);
        }
      }
      else {
        local_160 = &local_120;
        local_158 = (undefined8 ***)_<alloc::string::String_as_core::fmt::Display>::fmt;
        local_1a8 = (undefined8 ***)&DAT_0043c8e0;
        pcStack_1a0 = (code *)0x2;
        uStack_188 = (undefined8 ****)0x0;
        local_190 = (code *)0x1;
        local_198 = &local_160;
        (*(code *)PTR__print_00480710)(&local_1a8);
      }
    }
    else {
                    /* try { // try from 00278422 to 00278533 has its CatchHandler @ 00278822 */
      cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(*param_1,param_1[1],"blake2b (",7)
      ;
      if (cVar2 == '\0') {
        ::alloc::str::_<impl_str>::to_ascii_uppercase(local_f0,*param_1,param_1[1]);
        local_1a8 = (undefined8 ***)&local_c0;
        pcStack_1a0 = _<&T_as_core::fmt::Display>::fmt;
        local_190 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        uStack_188 = &local_108;
        local_180 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_178 = &local_120;
        local_170 = _<alloc::string::String_as_core::fmt::Display>::fmt;
        local_160 = (undefined8 ***)&DAT_0043caf0;
        local_158 = (undefined8 ***)&DAT_00000005;
        local_140 = 0;
        local_148 = (code *)0x4;
        local_198 = (undefined8 ***)local_f0;
        local_150 = &local_1a8;
                    /* try { // try from 002785b5 to 002785bd has its CatchHandler @ 00278809 */
        (*(code *)PTR__print_00480710)(&local_160);
                    /* try { // try from 002785be to 00278782 has its CatchHandler @ 00278822 */
        core::ptr::drop_in_place<alloc::string::String>(local_f0);
      }
      else {
        lVar4 = (*(code *)param_1[3][6])(param_1[2]);
        if (lVar4 == 0x200) {
          local_160 = &local_108;
          local_158 = (undefined8 ***)_<alloc::string::String_as_core::fmt::Display>::fmt;
          local_150 = &local_120;
          local_148 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_1a8 = (undefined8 ***)&PTR_s_BLAKE2b___0043cb40;
          pcStack_1a0 = (code *)0x3;
          uStack_188 = (undefined8 ****)0x0;
          local_190 = (code *)0x2;
          local_198 = &local_160;
          (*(code *)PTR__print_00480710)(&local_1a8);
        }
        else {
          pppuVar5 = (undefined8 ***)(*(code *)param_1[3][6])(param_1[2]);
          local_1a8 = (undefined8 ***)local_f0;
          pcStack_1a0 = (code *)PTR_fmt_00480718;
          local_198 = &local_108;
          local_190 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          uStack_188 = &local_120;
          local_180 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_160 = (undefined8 ***)&PTR_DAT_0043cb70;
          local_158 = (undefined8 ****)0x4;
          local_140 = 0;
          local_148 = (code *)0x3;
          local_150 = &local_1a8;
          local_f0._0_8_ = pppuVar5;
          (*(code *)PTR__print_00480710)(&local_160);
        }
      }
    }
                    /* try { // try from 00278790 to 0027879c has its CatchHandler @ 0027881d */
    core::ptr::drop_in_place<alloc::string::String>(&local_108);
                    /* try { // try from 0027879d to 002787a9 has its CatchHandler @ 00278846 */
    core::ptr::drop_in_place<alloc::string::String>(&local_120);
                    /* try { // try from 002787aa to 002787b6 has its CatchHandler @ 00278858 */
    core::ptr::
    drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn_std::io::Read>>>
              (local_b0);
  } while( true );
}