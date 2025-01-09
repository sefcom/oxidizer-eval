undefined8 * __rustcall
uu_sort::merge::merge_with_file_limit
          (undefined8 *param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined auVar8 [16];
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  long local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
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
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  
                    /* try { // try from 0022bf9f to 0022bfbb has its CatchHandler @ 0022c49d */
  uVar4 = _<core::iter::adapters::map::Map<I,F>as_core::iter::traits::exact_size::ExactSizeIterator>
          ::len(param_2);
  uVar1 = *(ulong *)(param_3 + 0x70);
  if (uVar1 < uVar4) {
    uVar4 = _<core::iter::adapters::map::Map<I,F>as_core::iter::traits::exact_size::ExactSizeIterator>
            ::len(param_2);
    local_268 = *param_2;
    uStack_264 = param_2[1];
    uStack_260 = param_2[2];
    uStack_25c = param_2[3];
    local_258 = param_2[4];
    uStack_254 = param_2[5];
    uStack_250 = param_2[6];
    uStack_24c = param_2[7];
    itertools::Itertools::chunks(&local_e8,&local_268,uVar1);
    local_208 = 0;
    local_200 = 8;
    local_1f8 = 0;
    if (uVar4 != 0) {
      local_188 = -0x7ffffffffffffffe;
      do {
        uVar7 = uVar4 - uVar1;
        if (uVar4 < uVar1) {
          uVar7 = 0;
        }
                    /* try { // try from 0022c05c to 0022c0cd has its CatchHandler @ 0022c4d2 */
        _<itertools::groupbylazy::Chunks<I>as_core::iter::traits::iterator::Iterator>::next
                  (&local_1f0,&local_e8);
        if (local_1f0 == local_188) {
                    /* try { // try from 0022c440 to 0022c471 has its CatchHandler @ 0022c4bc */
          uVar5 = core::option::unwrap_failed(&PTR_DAT_003002e0);
                    /* catch() { ... } // from try @ 0022c404 with catch @ 0022c472 */
                    /* catch() { ... } // from try @ 0022c05c with catch @ 0022c4d2 */
          core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(&local_208);
          core::ptr::
          drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut_core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::__closure__>>>
                    (&local_e8);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume(uVar5);
        }
        local_198 = (undefined4)local_1d0;
        uStack_194 = local_1d0._4_4_;
        uStack_190 = (undefined4)uStack_1c8;
        uStack_18c = uStack_1c8._4_4_;
        local_1a8 = (undefined4)local_1e0;
        uStack_1a4 = local_1e0._4_4_;
        uStack_1a0 = (undefined4)uStack_1d8;
        uStack_19c = uStack_1d8._4_4_;
        local_1b8 = (undefined4)local_1f0;
        uStack_1b4 = local_1f0._4_4_;
        uStack_1b0 = (undefined4)uStack_1e8;
        uStack_1ac = uStack_1e8._4_4_;
        merge_without_limit(&local_268,&local_1b8,param_3);
        uVar5 = CONCAT44(uStack_25c,uStack_260);
        uVar6 = CONCAT44(uStack_254,local_258);
        if (CONCAT44(uStack_264,local_268) == 3) {
LAB_0022c3a4:
          param_1[1] = uVar5;
          param_1[2] = uVar6;
          *param_1 = 3;
LAB_0022c411:
                    /* try { // try from 0022c411 to 0022c41d has its CatchHandler @ 0022c498 */
          core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedPlainTmpFile>>(&local_208);
          goto LAB_0022c41e;
        }
        local_128 = local_210;
        local_138 = (undefined4)local_220;
        uStack_134 = local_220._4_4_;
        uStack_130 = (undefined4)uStack_218;
        uStack_12c = uStack_218._4_4_;
        local_148 = local_230;
        uStack_144 = uStack_22c;
        uStack_140 = (undefined4)uStack_228;
        uStack_13c = uStack_228._4_4_;
        uStack_158 = (undefined4)local_240;
        uStack_154 = local_240._4_4_;
        uStack_150 = (undefined4)uStack_238;
        uStack_14c = uStack_238._4_4_;
        uStack_168 = uStack_250;
        uStack_164 = uStack_24c;
        uStack_160 = (undefined4)local_248;
        uStack_15c = local_248._4_4_;
                    /* try { // try from 0022c126 to 0022c182 has its CatchHandler @ 0022c4c0 */
        local_180 = CONCAT44(uStack_264,local_268);
        uStack_178 = uVar5;
        local_170 = uVar6;
        tmp_dir::TmpDirWrapper::next_file(&local_1b8,param_4);
        if (CONCAT44(uStack_1ac,uStack_1b0) == -0x8000000000000000) {
          *(undefined4 *)(param_1 + 1) = local_1a8;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_1a4;
          *(undefined4 *)(param_1 + 2) = uStack_1a0;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_19c;
LAB_0022c3da:
          *param_1 = 3;
                    /* try { // try from 0022c3e1 to 0022c3ed has its CatchHandler @ 0022c4bc */
          core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&local_180);
          goto LAB_0022c411;
        }
        local_108 = CONCAT44(uStack_1b4,local_1b8);
        local_f8 = local_1a8;
        uStack_f4 = uStack_1a4;
        uStack_f0 = uStack_1a0;
        uStack_ec = uStack_19c;
        local_100 = CONCAT44(uStack_1ac,uStack_1b0);
        _<uu_sort::merge::WriteablePlainTmpFile_as_uu_sort::merge::WriteableTmpFile>::create
                  (&local_268,&local_108);
        lVar3 = CONCAT44(uStack_264,local_268);
        uVar5 = CONCAT44(uStack_25c,uStack_260);
        uVar6 = CONCAT44(uStack_254,local_258);
        if (lVar3 == -0x8000000000000000) {
          param_1[1] = uVar5;
          param_1[2] = uVar6;
          goto LAB_0022c3da;
        }
        uStack_1d8 = CONCAT44(uStack_24c,uStack_250);
        uStack_1c8 = local_240;
        local_1c0 = uStack_238;
        local_1d0 = local_248;
        uStack_218 = CONCAT44(uStack_12c,uStack_130);
        local_210 = local_128;
        uStack_228 = CONCAT44(uStack_13c,uStack_140);
        local_220 = CONCAT44(uStack_134,local_138);
        uStack_238 = CONCAT44(uStack_14c,uStack_150);
        local_230 = local_148;
        uStack_22c = uStack_144;
        local_248 = CONCAT44(uStack_15c,uStack_160);
        local_240 = (undefined *)CONCAT44(uStack_154,uStack_158);
        local_258 = (undefined4)local_170;
        uStack_254 = local_170._4_4_;
        uStack_250 = uStack_168;
        uStack_24c = uStack_164;
        local_268 = (undefined4)local_180;
        uStack_264 = local_180._4_4_;
        uStack_260 = (undefined4)uStack_178;
        uStack_25c = uStack_178._4_4_;
        local_1f0 = lVar3;
        uStack_1e8 = uVar5;
        local_1e0 = uVar6;
        uVar5 = _<uu_sort::merge::WriteablePlainTmpFile_as_uu_sort::merge::WriteableTmpFile>::
                as_write(&local_1f0);
                    /* try { // try from 0022c225 to 0022c236 has its CatchHandler @ 0022c4aa */
        auVar8 = FileMerger::write_all_to(&local_268,param_3,uVar5);
        if (auVar8._0_8_ != 0) {
          *(undefined (*) [16])(param_1 + 1) = auVar8;
          *param_1 = 3;
                    /* try { // try from 0022c404 to 0022c410 has its CatchHandler @ 0022c472 */
          core::ptr::drop_in_place<uu_sort::merge::WriteablePlainTmpFile>(&local_1f0);
          goto LAB_0022c411;
        }
        uStack_238 = local_1c0;
        local_248 = local_1d0;
        local_240 = uStack_1c8;
        local_258 = (undefined4)local_1e0;
        uStack_254 = local_1e0._4_4_;
        uStack_250 = (undefined4)uStack_1d8;
        uStack_24c = uStack_1d8._4_4_;
        local_268 = (undefined4)local_1f0;
        uStack_264 = local_1f0._4_4_;
        uStack_260 = (undefined4)uStack_1e8;
        uStack_25c = uStack_1e8._4_4_;
                    /* try { // try from 0022c274 to 0022c2d3 has its CatchHandler @ 0022c4be */
        _<uu_sort::merge::WriteablePlainTmpFile_as_uu_sort::merge::WriteableTmpFile>::
        finished_writing(&local_1b8,&local_268);
        uVar5 = CONCAT44(uStack_1ac,uStack_1b0);
        uVar6 = CONCAT44(uStack_1a4,local_1a8);
        if (CONCAT44(uStack_1b4,local_1b8) == -0x8000000000000000) goto LAB_0022c3a4;
        local_120 = CONCAT44(uStack_1b4,local_1b8);
        local_118 = uVar5;
        local_110 = uVar6;
        ::alloc::vec::Vec<T,A>::push(&local_208,&local_120);
        bVar2 = uVar1 < uVar4;
        uVar4 = uVar7;
      } while (bVar2);
    }
                    /* try { // try from 0022c2e0 to 0022c314 has its CatchHandler @ 0022c4bc */
    _<itertools::groupbylazy::Chunks<I>as_core::iter::traits::iterator::Iterator>::next
              (&local_268,&local_e8);
    if (CONCAT44(uStack_264,local_268) != -0x7ffffffffffffffe) {
      core::ptr::
      drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut_core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::__closure__>>>>
                (&local_268);
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_0012fbf6,0x2a,&PTR_DAT_003002a0);
    }
    core::ptr::
    drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut_core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::__closure__>>>>
              (&local_268);
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
              (&local_180,&local_208);
                    /* try { // try from 0022c32a to 0022c32e has its CatchHandler @ 0022c486 */
    local_248 = ::alloc::boxed::Box<T>::new();
    local_258 = (undefined4)local_170;
    uStack_254 = local_170._4_4_;
    uStack_250 = uStack_168;
    uStack_24c = uStack_164;
    local_268 = (undefined4)local_180;
    uStack_264 = local_180._4_4_;
    uStack_260 = (undefined4)uStack_178;
    uStack_25c = uStack_178._4_4_;
    local_240 = &DAT_00300398;
                    /* try { // try from 0022c35a to 0022c36e has its CatchHandler @ 0022c474 */
    merge_with_file_limit(param_1,&local_268,param_3,param_4);
LAB_0022c41e:
    core::ptr::
    drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,uu_sort::ext_sort::reader_writer<&mut_core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteablePlainTmpFile>::__closure__>>>
              (&local_e8);
  }
  else {
    local_e8 = *param_2;
    uStack_e4 = param_2[1];
    uStack_e0 = param_2[2];
    uStack_dc = param_2[3];
    local_d8 = param_2[4];
    uStack_d4 = param_2[5];
    uStack_d0 = param_2[6];
    uStack_cc = param_2[7];
    merge_without_limit(param_1,&local_e8,param_3);
  }
  return param_1;
}