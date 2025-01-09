undefined  [16] __rustcall uu_hashsum::hashsum(undefined8 *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined ****ppppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *****pppppuVar8;
  undefined8 uVar9;
  undefined *****pppppuVar10;
  long *plVar11;
  undefined *****unaff_R15;
  undefined auVar12 [16];
  undefined ****local_170;
  code *pcStack_168;
  undefined ****local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  code *local_148;
  undefined ****local_140;
  code *local_138;
  long *local_130;
  undefined ****local_128;
  undefined ****local_120;
  undefined ****local_118;
  code *local_110;
  undefined8 local_108;
  undefined8 *local_e8;
  undefined ****local_e0;
  undefined ****local_d8;
  undefined ****local_d0;
  undefined ****local_c8;
  code *pcStack_c0;
  undefined ****local_b8;
  undefined ***local_b0;
  undefined8 local_a8;
  char *local_a0;
  undefined8 local_98;
  undefined local_90 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined local_68 [56];
  
  local_b0 = (undefined ***)0x169967;
  if (*(char *)(param_1 + 5) == '\0') {
    local_b0 = (undefined ***)0x169966;
  }
  local_a8 = 1;
  local_a0 = "-";
  local_98 = 1;
  auVar12 = _<core::iter::sources::once::Once<T>as_core::iter::traits::iterator::Iterator>::next
                      (&local_a0);
  puVar1 = PTR_components_0047f610;
  if (auVar12._0_8_ != 0) {
    pppppuVar10 = (undefined *****)(param_1 + 2);
    local_130 = param_1 + 3;
    local_e8 = param_1;
    do {
                    /* try { // try from 00278190 to 00278234 has its CatchHandler @ 0027876d */
      uVar7 = auVar12._8_8_;
      uVar9 = auVar12._0_8_;
      (*(code *)puVar1)(&local_128,uVar9,uVar7);
      (*(code *)puVar1)(&local_170,"-",1);
      cVar2 = _<std::path::Components_as_core::cmp::PartialEq>::eq(&local_128,&local_170);
      if (cVar2 == '\0') {
        std::fs::File::open(&local_170,uVar9,uVar7);
        _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
        ::map_err_context(&local_128,&local_170);
        pppppuVar8 = (undefined *****)local_128;
        plVar11 = local_130;
        unaff_R15 = (undefined *****)local_120;
        if ((undefined *****)local_128 != (undefined *****)0x0) goto LAB_002786f6;
        uVar3 = ::alloc::boxed::Box<T>::new((ulong)local_120 & 0xffffffff);
        ppuVar6 = &PTR_drop_in_place<std_fs_File>_0043bb90;
      }
      else {
        uVar3 = (*(code *)PTR_stdin_0047f618)();
        uVar3 = ::alloc::boxed::Box<T>::new(uVar3);
        ppuVar6 = (undefined **)&DAT_0043bbe8;
      }
      std::io::buffered::bufreader::BufReader<R>::with_capacity(local_68,0x2000,uVar3,ppuVar6);
                    /* try { // try from 0027823e to 0027825f has its CatchHandler @ 0027875b */
      uucore::features::checksum::digest_reader
                (&local_170,pppppuVar10,local_68,*(undefined *)(param_1 + 5),param_1[4]);
      _<core::result::Result<T,std::io::error::Error>as_uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
      ::map_err_context(&local_128,&local_170);
      unaff_R15 = (undefined *****)local_118;
      pppppuVar8 = (undefined *****)local_120;
      if ((undefined *****)local_128 == (undefined *****)0x8000000000000000) {
                    /* try { // try from 002786da to 002786e6 has its CatchHandler @ 0027871a */
        core::ptr::
        drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn_std::io::Read>>>
                  (local_68);
        plVar11 = local_130;
        goto LAB_002786f6;
      }
      local_e0 = local_128;
      local_d8 = local_120;
      local_d0 = local_118;
                    /* try { // try from 0027829d to 002782b0 has its CatchHandler @ 00278734 */
      (*(code *)PTR_escape_filename_0047f620)(&local_170,uVar9,uVar7);
      local_b8 = local_160;
      local_c8 = local_170;
      pcStack_c0 = pcStack_168;
      local_78 = (undefined4)local_158;
      uStack_74 = local_158._4_4_;
      uStack_70 = (undefined4)uStack_150;
      uStack_6c = uStack_150._4_4_;
      if (*(char *)((long)local_e8 + 0x29) == '\0') {
        if (*(char *)((long)local_e8 + 0x2a) == '\0') {
          if (*(char *)((long)local_e8 + 0x2b) == '\0') {
            local_170 = (undefined ****)&local_78;
            pcStack_168 = _<&T_as_core::fmt::Display>::fmt;
            local_160 = (undefined ****)&local_e0;
            local_158 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            uStack_150 = (undefined *****)&local_b0;
            local_148 = _<&T_as_core::fmt::Display>::fmt;
            local_140 = (undefined ****)&local_c8;
            local_138 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            local_128 = (undefined ****)&DAT_0043bb40;
            local_120 = (undefined ****)&DAT_00000005;
            local_108 = 0;
            local_118 = (undefined ****)&local_170;
            local_110 = (code *)0x4;
            (*(code *)PTR__print_0047f628)(&local_128);
          }
          else {
            local_170 = (undefined ****)&local_e0;
            pcStack_168 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            local_160 = &local_b0;
            local_158 = _<&T_as_core::fmt::Display>::fmt;
            uStack_150 = (undefined *****)local_90;
            local_148 = (code *)PTR_fmt_0047f638;
            local_128 = (undefined ****)&DAT_0043bb00;
            local_120 = (undefined ****)0x4;
            local_108 = 0;
            local_118 = (undefined ****)&local_170;
            local_110 = (code *)0x3;
            local_90 = auVar12;
            (*(code *)PTR__print_0047f628)(&local_128);
          }
        }
        else {
          local_128 = (undefined ****)&local_e0;
          local_120 = (undefined ****)_<alloc::string::String_as_core::fmt::Display>::fmt;
          local_170 = (undefined ****)&DAT_0043b958;
          pcStack_168 = (code *)0x2;
          uStack_150 = (undefined *****)0x0;
          local_158 = (code *)0x1;
          local_160 = (undefined ****)&local_128;
          (*(code *)PTR__print_0047f628)(&local_170);
        }
      }
      else {
                    /* try { // try from 002782f6 to 00278416 has its CatchHandler @ 00278739 */
        cVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                          (*local_e8,local_e8[1],"blake2b",7);
        if (cVar2 == '\0') {
          ::alloc::str::_<impl_str>::to_ascii_uppercase(local_90,*local_e8,local_e8[1]);
          local_170 = (undefined ****)&local_78;
          pcStack_168 = _<&T_as_core::fmt::Display>::fmt;
          local_158 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          uStack_150 = &local_c8;
          local_148 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_140 = (undefined ****)&local_e0;
          local_138 = _<alloc::string::String_as_core::fmt::Display>::fmt;
          local_128 = (undefined ****)&DAT_0043bab0;
          local_120 = (undefined ****)&DAT_00000005;
          local_108 = 0;
          local_118 = (undefined ****)&local_170;
          local_110 = (code *)0x4;
          local_160 = (undefined ****)local_90;
                    /* try { // try from 00278496 to 0027849e has its CatchHandler @ 00278722 */
          (*(code *)PTR__print_0047f628)(&local_128);
                    /* try { // try from 0027849f to 00278670 has its CatchHandler @ 00278739 */
          core::ptr::drop_in_place<alloc::string::String>(local_90);
        }
        else {
          lVar4 = (**(code **)(*local_130 + 0x30))(*pppppuVar10);
          if (lVar4 == 0x200) {
            local_128 = (undefined ****)&local_c8;
            local_120 = (undefined ****)_<alloc::string::String_as_core::fmt::Display>::fmt;
            local_118 = (undefined ****)&local_e0;
            local_110 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            local_170 = (undefined ****)&PTR_s_BLAKE2b_____0043ba40;
            pcStack_168 = (code *)0x3;
            uStack_150 = (undefined *****)0x0;
            local_158 = (code *)0x2;
            local_160 = (undefined ****)&local_128;
            (*(code *)PTR__print_0047f628)(&local_170);
          }
          else {
            ppppuVar5 = (undefined ****)(**(code **)(*local_130 + 0x30))(*pppppuVar10);
            pcStack_168 = (code *)PTR_fmt_0047f630;
            local_160 = (undefined ****)&local_c8;
            local_158 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            uStack_150 = &local_e0;
            local_148 = _<alloc::string::String_as_core::fmt::Display>::fmt;
            local_128 = (undefined ****)&PTR_DAT_0043ba70;
            local_120 = (undefined ****)0x4;
            local_108 = 0;
            local_118 = (undefined ****)&local_170;
            local_110 = (code *)0x3;
            local_170 = (undefined ****)local_90;
            local_90._0_8_ = ppppuVar5;
            (*(code *)PTR__print_0047f628)(&local_128);
          }
        }
      }
                    /* try { // try from 00278680 to 0027868c has its CatchHandler @ 00278734 */
      core::ptr::drop_in_place<alloc::string::String>(&local_c8);
                    /* try { // try from 0027868d to 00278699 has its CatchHandler @ 0027875b */
      core::ptr::drop_in_place<alloc::string::String>(&local_e0);
                    /* try { // try from 0027869a to 002786a6 has its CatchHandler @ 0027876d */
      core::ptr::
      drop_in_place<std::io::buffered::bufreader::BufReader<alloc::boxed::Box<dyn_std::io::Read>>>
                (local_68);
      param_1 = local_e8;
      auVar12 = _<core::iter::sources::once::Once<T>as_core::iter::traits::iterator::Iterator>::next
                          (&local_a0);
      unaff_R15 = pppppuVar10;
    } while (auVar12._0_8_ != 0);
  }
  pppppuVar10 = (undefined *****)(param_1 + 2);
  pppppuVar8 = (undefined *****)0x0;
  plVar11 = param_1 + 3;
LAB_002786f6:
  core::ptr::drop_in_place<uu_hashsum::Options>(*pppppuVar10,*plVar11);
  auVar12._8_8_ = unaff_R15;
  auVar12._0_8_ = pppppuVar8;
  return auVar12;
}