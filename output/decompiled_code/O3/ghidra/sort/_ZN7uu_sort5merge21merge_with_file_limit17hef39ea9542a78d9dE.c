undefined8 * __rustcall
uu_sort::merge::merge_with_file_limit
          (undefined8 *param_1,undefined4 *param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined auVar9 [16];
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  long local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined *puStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  long local_228;
  long local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  long local_168;
  long local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  long local_148;
  long local_140;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  
                    /* try { // try from 0022af2f to 0022af4b has its CatchHandler @ 0022b503 */
  uVar5 = _<core::iter::adapters::map::Map<I,F>as_core::iter::traits::exact_size::ExactSizeIterator>
          ::len(param_2);
  uVar1 = *(ulong *)(param_3 + 0x70);
  if (uVar1 < uVar5) {
    uVar5 = _<core::iter::adapters::map::Map<I,F>as_core::iter::traits::exact_size::ExactSizeIterator>
            ::len(param_2);
    local_338 = *param_2;
    uStack_334 = param_2[1];
    uStack_330 = param_2[2];
    uStack_32c = param_2[3];
    local_328 = param_2[4];
    uStack_324 = param_2[5];
    uStack_320 = param_2[6];
    uStack_31c = param_2[7];
    itertools::Itertools::chunks(&local_118,&local_338,uVar1);
    local_2c0 = 0;
    local_2b8 = 8;
    local_2b0 = 0;
    if (uVar5 != 0) {
      if (*(long *)(param_3 + 0x30) == -0x8000000000000000) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(param_3 + 0x38);
      }
      local_2a8 = *(undefined8 *)(param_3 + 0x40);
      local_2a0 = -0x7ffffffffffffffe;
      do {
        uVar8 = uVar5 - uVar1;
        if (uVar5 < uVar1) {
          uVar8 = 0;
        }
                    /* try { // try from 0022b04c to 0022b0db has its CatchHandler @ 0022b538 */
        _<itertools::groupbylazy::Chunks<I>as_core::iter::traits::iterator::Iterator>::next
                  (&local_338,&local_118);
        if (CONCAT44(uStack_334,local_338) == local_2a0) {
                    /* try { // try from 0022b4a6 to 0022b4d7 has its CatchHandler @ 0022b522 */
          uVar7 = core::option::unwrap_failed(&PTR_DAT_002ff7b8);
                    /* catch() { ... } // from try @ 0022b46a with catch @ 0022b4d8 */
                    /* catch() { ... } // from try @ 0022b04c with catch @ 0022b538 */
          core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedCompressedTmpFile>>
                    (&local_2c0);
          core::ptr::
          drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut_core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::__closure__>>>
                    (&local_118);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume(uVar7);
        }
        local_248 = local_2e8;
        uStack_240 = uStack_2e0;
        local_258 = local_2f8;
        uStack_250 = uStack_2f0;
        local_268 = CONCAT44(uStack_304,local_308);
        uStack_260 = CONCAT44(uStack_2fc,uStack_300);
        local_278 = local_318;
        puStack_270 = uStack_310;
        local_288 = CONCAT44(uStack_324,local_328);
        uStack_280 = CONCAT44(uStack_31c,uStack_320);
        local_298 = CONCAT44(uStack_334,local_338);
        uStack_290 = CONCAT44(uStack_32c,uStack_330);
        merge_without_limit(&local_228,&local_298,param_3);
        local_1b8 = CONCAT44(uStack_214,local_218);
        if (local_228 == 3) {
LAB_0022b409:
          param_1[1] = local_220;
          param_1[2] = local_1b8;
          *param_1 = 3;
LAB_0022b477:
                    /* try { // try from 0022b477 to 0022b483 has its CatchHandler @ 0022b4fe */
          core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedCompressedTmpFile>>
                    (&local_2c0);
          goto LAB_0022b484;
        }
        local_170 = local_1d0;
        local_180 = local_1e0;
        uStack_17c = uStack_1dc;
        uStack_178 = uStack_1d8;
        uStack_174 = uStack_1d4;
        local_190 = local_1f0;
        uStack_18c = uStack_1ec;
        uStack_188 = uStack_1e8;
        uStack_184 = uStack_1e4;
        uStack_1a0 = local_200;
        uStack_19c = uStack_1fc;
        uStack_198 = uStack_1f8;
        uStack_194 = uStack_1f4;
        uStack_1b0 = uStack_210;
        uStack_1ac = uStack_20c;
        uStack_1a8 = uStack_208;
        uStack_1a4 = uStack_204;
        local_1c8 = local_228;
        uStack_1c0 = local_220;
                    /* try { // try from 0022b148 to 0022b1b1 has its CatchHandler @ 0022b526 */
        tmp_dir::TmpDirWrapper::next_file(&local_228,param_4);
        if (local_220 == -0x8000000000000000) {
          *(undefined4 *)(param_1 + 1) = local_218;
          *(undefined4 *)((long)param_1 + 0xc) = uStack_214;
          *(undefined4 *)(param_1 + 2) = uStack_210;
          *(undefined4 *)((long)param_1 + 0x14) = uStack_20c;
LAB_0022b440:
          *param_1 = 3;
                    /* try { // try from 0022b447 to 0022b453 has its CatchHandler @ 0022b522 */
          core::ptr::drop_in_place<uu_sort::merge::FileMerger>(&local_1c8);
          goto LAB_0022b477;
        }
        local_168 = local_228;
        local_160 = local_220;
        local_158 = local_218;
        uStack_154 = uStack_214;
        uStack_150 = uStack_210;
        uStack_14c = uStack_20c;
        _<uu_sort::merge::WriteableCompressedTmpFile_as_uu_sort::merge::WriteableTmpFile>::create
                  (&local_338,&local_168,uVar7,local_2a8);
        lVar3 = CONCAT44(uStack_334,local_338);
        uVar6 = CONCAT44(uStack_32c,uStack_330);
        uVar4 = CONCAT44(uStack_324,local_328);
        if (lVar3 == -0x8000000000000000) {
          param_1[1] = uVar6;
          param_1[2] = uVar4;
          goto LAB_0022b440;
        }
        uStack_230 = uStack_2d0;
        uStack_240 = uStack_2e0;
        local_238 = local_2d8;
        uStack_280 = CONCAT44(uStack_31c,uStack_320);
        local_268 = CONCAT44(uStack_304,local_308);
        uStack_260 = CONCAT44(uStack_2fc,uStack_300);
        uStack_250 = uStack_2f0;
        local_248 = local_2e8;
        local_258 = local_2f8;
        puStack_270 = uStack_310;
        local_278 = local_318;
        local_2e8 = CONCAT44(uStack_174,uStack_178);
        uStack_2e0 = local_170;
        local_2f8 = CONCAT44(uStack_184,uStack_188);
        uStack_2f0 = CONCAT44(uStack_17c,local_180);
        local_308 = uStack_198;
        uStack_304 = uStack_194;
        uStack_300 = local_190;
        uStack_2fc = uStack_18c;
        local_318 = CONCAT44(uStack_1a4,uStack_1a8);
        uStack_310 = (undefined *)CONCAT44(uStack_19c,uStack_1a0);
        local_328 = (undefined4)local_1b8;
        uStack_324 = local_1b8._4_4_;
        uStack_320 = uStack_1b0;
        uStack_31c = uStack_1ac;
        local_338 = (undefined4)local_1c8;
        uStack_334 = local_1c8._4_4_;
        uStack_330 = (undefined4)uStack_1c0;
        uStack_32c = uStack_1c0._4_4_;
        local_298 = lVar3;
        uStack_290 = uVar6;
        local_288 = uVar4;
        uVar6 = _<uu_sort::merge::WriteableCompressedTmpFile_as_uu_sort::merge::WriteableTmpFile>::
                as_write(&local_298);
                    /* try { // try from 0022b274 to 0022b285 has its CatchHandler @ 0022b510 */
        auVar9 = FileMerger::write_all_to(&local_338,param_3,uVar6);
        if (auVar9._0_8_ != 0) {
          *(undefined (*) [16])(param_1 + 1) = auVar9;
          *param_1 = 3;
                    /* try { // try from 0022b46a to 0022b476 has its CatchHandler @ 0022b4d8 */
          core::ptr::drop_in_place<uu_sort::merge::WriteableCompressedTmpFile>(&local_298);
          goto LAB_0022b477;
        }
        local_2d8 = local_238;
        uStack_2d0 = uStack_230;
        local_2e8 = local_248;
        uStack_2e0 = uStack_240;
        local_2f8 = local_258;
        uStack_2f0 = uStack_250;
        local_308 = (undefined4)local_268;
        uStack_304 = local_268._4_4_;
        uStack_300 = (undefined4)uStack_260;
        uStack_2fc = uStack_260._4_4_;
        local_318 = local_278;
        uStack_310 = puStack_270;
        local_328 = (undefined4)local_288;
        uStack_324 = local_288._4_4_;
        uStack_320 = (undefined4)uStack_280;
        uStack_31c = uStack_280._4_4_;
        local_338 = (undefined4)local_298;
        uStack_334 = local_298._4_4_;
        uStack_330 = (undefined4)uStack_290;
        uStack_32c = uStack_290._4_4_;
                    /* try { // try from 0022b2f0 to 0022b366 has its CatchHandler @ 0022b524 */
        _<uu_sort::merge::WriteableCompressedTmpFile_as_uu_sort::merge::WriteableTmpFile>::
        finished_writing(&local_228,&local_338);
        local_1b8 = CONCAT44(uStack_214,local_218);
        if (local_228 == -0x8000000000000000) goto LAB_0022b409;
        local_130 = uStack_210;
        uStack_12c = uStack_20c;
        uStack_128 = uStack_208;
        uStack_124 = uStack_204;
        local_148 = local_228;
        local_140 = local_220;
        ::alloc::vec::Vec<T,A>::push(&local_2c0,&local_148);
        bVar2 = uVar1 < uVar5;
        uVar5 = uVar8;
      } while (bVar2);
    }
                    /* try { // try from 0022b378 to 0022b3ac has its CatchHandler @ 0022b522 */
    _<itertools::groupbylazy::Chunks<I>as_core::iter::traits::iterator::Iterator>::next
              (&local_338,&local_118);
    if (CONCAT44(uStack_334,local_338) != -0x7ffffffffffffffe) {
      core::ptr::
      drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut_core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::__closure__>>>>
                (&local_338);
                    /* WARNING: Subroutine does not return */
      core::panicking::panic(&DAT_0012faa6,0x2a,&PTR_DAT_002ff778);
    }
    core::ptr::
    drop_in_place<core::option::Option<itertools::groupbylazy::Chunk<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut_core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::__closure__>>>>
              (&local_338);
    _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
              (&local_298,&local_2c0);
                    /* try { // try from 0022b3c2 to 0022b3c6 has its CatchHandler @ 0022b4ec */
    local_318 = ::alloc::boxed::Box<T>::new();
    local_328 = (undefined4)local_288;
    uStack_324 = local_288._4_4_;
    uStack_320 = (undefined4)uStack_280;
    uStack_31c = uStack_280._4_4_;
    local_338 = (undefined4)local_298;
    uStack_334 = local_298._4_4_;
    uStack_330 = (undefined4)uStack_290;
    uStack_32c = uStack_290._4_4_;
    uStack_310 = &DAT_002ff870;
                    /* try { // try from 0022b3f2 to 0022b406 has its CatchHandler @ 0022b4da */
    merge_with_file_limit(param_1,&local_338,param_3,param_4);
LAB_0022b484:
    core::ptr::
    drop_in_place<itertools::groupbylazy::IntoChunks<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedCompressedTmpFile>,uu_sort::ext_sort::reader_writer<&mut_core::iter::adapters::map::Map<core::slice::iter::Iter<std::ffi::os_str::OsString>,uu_sort::open<&std::ffi::os_str::OsString>>,uu_sort::merge::WriteableCompressedTmpFile>::__closure__>>>
              (&local_118);
  }
  else {
    local_118 = *param_2;
    uStack_114 = param_2[1];
    uStack_110 = param_2[2];
    uStack_10c = param_2[3];
    local_108 = param_2[4];
    uStack_104 = param_2[5];
    uStack_100 = param_2[6];
    uStack_fc = param_2[7];
    merge_without_limit(param_1,&local_118,param_3);
  }
  return param_1;
}