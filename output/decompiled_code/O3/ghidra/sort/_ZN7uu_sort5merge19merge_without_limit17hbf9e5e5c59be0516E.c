/* WARNING: Removing unreachable block (ram,0x00231285) */

void __rustcall
uu_sort::merge::merge_without_limit(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong local_2a0;
  undefined8 uStack_298;
  undefined8 *local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined8 local_270;
  undefined8 uStack_268;
  ulong local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  ulong local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  long local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  ulong local_1d8;
  ulong local_1d0;
  undefined8 local_1c8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  ulong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
                    /* try { // try from 00230aef to 00230b03 has its CatchHandler @ 002311bf */
  local_288 = param_3;
  local_1f0 = param_2;
  std::sync::mpmc::channel(&local_1a0);
  local_280 = (undefined4)local_1a0;
  uStack_27c = local_1a0._4_4_;
  uStack_278 = (undefined4)uStack_198;
  uStack_274 = uStack_198._4_4_;
  local_1e8 = (undefined4)local_190;
  uStack_1e4 = local_190._4_4_;
  uStack_1e0 = (undefined4)uStack_188;
  uStack_1dc = uStack_188._4_4_;
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  _<core::iter::adapters::map::Map<I,F>as_core::iter::traits::iterator::Iterator>::size_hint
            (&local_d8,uVar5,uVar1);
                    /* try { // try from 00230b47 to 00230b55 has its CatchHandler @ 002311cf */
  ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_1a0,local_d8,0);
  if (local_1a0 == 0) {
    local_270 = uStack_198;
    uStack_268 = local_190;
    local_260 = 0;
    _<core::iter::adapters::map::Map<I,F>as_core::iter::traits::iterator::Iterator>::size_hint
              (&local_d8,uVar5,uVar1);
                    /* try { // try from 00230ba6 to 00230bb4 has its CatchHandler @ 002311c7 */
    ::alloc::raw_vec::RawVec<T,A>::try_allocate_in(&local_1a0,local_d8,0);
    local_290 = param_1;
    if (local_1a0 == 0) {
      local_230 = uStack_198;
      local_228 = local_190;
      local_220 = 0;
      core::iter::traits::iterator::Iterator::enumerate(&local_1d8,param_2);
      while( true ) {
                    /* try { // try from 00230c30 to 00230c44 has its CatchHandler @ 00231236 */
        _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>::
        next(&local_218,&local_1d8);
        uVar2 = local_218;
        if (uStack_210 == -0x7fffffffffffffff) {
                    /* try { // try from 00230dbc to 00230dc8 has its CatchHandler @ 002311d7 */
          core::ptr::
          drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn_core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>_Output_core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>>>
                    (&local_1d8);
          uVar2 = local_260;
          if (local_260 != 0) {
            uVar6 = 0;
            do {
              uVar3 = _<usize_as_core::iter::range::Step>::forward_unchecked(uVar6);
                    /* try { // try from 00230dfb to 00230e95 has its CatchHandler @ 00231238 */
              chunks::RecycledChunk::new(&local_d8,0x2000);
              local_128 = local_68;
              local_138 = local_78;
              uStack_130 = uStack_70;
              local_148 = local_88;
              uStack_140 = uStack_80;
              local_158 = local_98;
              uStack_150 = uStack_90;
              local_1a0 = uVar6;
              std::sync::mpmc::Sender<T>::send(&local_d8,&local_280,&local_1a0);
              core::result::Result<T,E>::unwrap(&local_d8,&PTR_DAT_002ff8b0);
              uVar6 = uVar3;
            } while (uVar3 < uVar2);
          }
                    /* try { // try from 00230ea4 to 00230eb5 has its CatchHandler @ 002311d7 */
          _<uu_sort::GlobalSettings_as_core::clone::Clone>::clone(&local_d8,local_288);
          local_1a0 = CONCAT44(uStack_1e4,local_1e8);
          uStack_198 = CONCAT44(uStack_1dc,uStack_1e0);
          local_190 = local_270;
          uStack_188 = uStack_268;
          local_180 = local_260;
          (*(code *)PTR_memcpy_00306060)(&local_178,&local_d8,0xa0);
          local_c8 = 0x8000000000000000;
          local_d8 = 0;
                    /* try { // try from 00230f1b to 00230f49 has its CatchHandler @ 002311d7 */
          std::thread::Builder::spawn_unchecked(&local_1d8,&local_d8,&local_1a0);
          core::result::Result<T,E>::expect(&local_258,&local_1d8);
          local_218 = 0;
          uStack_210 = 8;
          uStack_208 = 0;
          _<alloc::vec::Vec<T,A>as_core::iter::traits::collect::IntoIterator>::into_iter
                    (&local_d8,&local_230);
          local_b8 = 0;
          _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
          ::next(&local_1d8,&local_d8);
          if (local_1d0 != 3) {
            do {
              uVar2 = local_1d8;
              local_2a0 = local_1d0;
              uStack_298 = local_1c8;
                    /* try { // try from 0023111f to 00231153 has its CatchHandler @ 002311e3 */
              lVar4 = std::sync::mpmc::Receiver<T>::recv(&local_2a0);
              if (lVar4 == 0) {
                    /* try { // try from 002310e0 to 002310e7 has its CatchHandler @ 002311dc */
                core::ptr::drop_in_place<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>
                          (&local_2a0);
              }
              else {
                local_1a0 = 1;
                uStack_198 = 1;
                local_190 = lVar4;
                local_190 = ::alloc::boxed::Box<T>::new(&local_1a0);
                uStack_188 = 0;
                local_1a0 = local_2a0;
                uStack_198 = uStack_298;
                local_180 = uVar2;
                    /* try { // try from 0023117d to 00231187 has its CatchHandler @ 002311de */
                ::alloc::vec::Vec<T,A>::push(&local_218,&local_1a0);
              }
              _<core::iter::adapters::enumerate::Enumerate<I>as_core::iter::traits::iterator::Iterator>
              ::next(&local_1d8,&local_d8);
            } while (local_1d0 != 3);
          }
                    /* try { // try from 00230fb1 to 00230fbd has its CatchHandler @ 002311ba */
          core::ptr::
          drop_in_place<core::iter::adapters::enumerate::Enumerate<alloc::vec::into_iter::IntoIter<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>>
                    (&local_d8);
          local_c8 = uStack_208;
          local_d8 = local_218;
          uStack_d0 = (undefined4)uStack_210;
          uStack_cc = uStack_210._4_4_;
                    /* try { // try from 00230fde to 00230ffc has its CatchHandler @ 002311b5 */
          binary_heap_plus::binary_heap::BinaryHeap<T,C>::from_vec_cmp_raw
                    (&local_1a0,&local_d8,local_288,1);
          local_290[6] = CONCAT44(uStack_254,local_258);
          local_290[7] = CONCAT44(uStack_24c,uStack_250);
          local_290[8] = CONCAT44(uStack_244,local_248);
          local_290[2] = local_1a0;
          local_290[3] = uStack_198;
          local_290[4] = local_190;
          local_290[5] = uStack_188;
          *local_290 = CONCAT44(uStack_27c,local_280);
          local_290[1] = CONCAT44(uStack_274,uStack_278);
          local_290[9] = 0;
          return;
        }
        local_248 = local_200;
        uStack_244 = uStack_1fc;
        uStack_240 = uStack_1f8;
        uStack_23c = uStack_1f4;
        local_258 = (undefined4)uStack_210;
        uStack_254 = uStack_210._4_4_;
        uStack_250 = (undefined4)uStack_208;
        uStack_24c = uStack_208._4_4_;
                    /* try { // try from 00230c6f to 00230c7b has its CatchHandler @ 00231218 */
        std::sync::mpmc::sync_channel(&local_1a0,2);
        local_2a0 = local_1a0;
        uStack_298 = uStack_198;
                    /* try { // try from 00230c99 to 00230ca2 has its CatchHandler @ 0023121d */
        ::alloc::vec::Vec<T,A>::push(&local_230,local_190,uStack_188);
        local_190 = CONCAT44(uStack_254,local_258);
        if (local_190 == -0x8000000000000000) break;
        local_178 = CONCAT44(uStack_23c,uStack_240);
        local_1a0 = local_2a0;
        uStack_188 = CONCAT44(uStack_24c,uStack_250);
        local_180 = CONCAT44(uStack_244,local_248);
        uStack_170 = 0;
        local_168 = 1;
        uStack_160 = 0;
                    /* try { // try from 00230d0e to 00230db4 has its CatchHandler @ 0023123d */
        ::alloc::vec::Vec<T,A>::push(&local_270,&local_1a0);
        chunks::RecycledChunk::new(&local_d8,0x2000);
        local_1a0 = uVar2;
        local_128 = local_68;
        local_138 = local_78;
        uStack_130 = uStack_70;
        local_148 = local_88;
        uStack_140 = uStack_80;
        local_158 = local_98;
        uStack_150 = uStack_90;
        uStack_188 = local_c8;
        uStack_198 = local_d8;
        local_190 = CONCAT44(uStack_cc,uStack_d0);
        std::sync::mpmc::Sender<T>::send(&local_d8,&local_280,&local_1a0);
        core::result::Result<T,E>::unwrap(&local_d8,&PTR_DAT_002ff8c8);
      }
      *(undefined4 *)(local_290 + 1) = uStack_250;
      *(undefined4 *)((long)local_290 + 0xc) = uStack_24c;
      *(undefined4 *)(local_290 + 2) = local_248;
      *(undefined4 *)((long)local_290 + 0x14) = uStack_244;
      *local_290 = 3;
                    /* try { // try from 0023104e to 00231057 has its CatchHandler @ 002311b0 */
      core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&local_2a0);
                    /* try { // try from 0023105a to 00231066 has its CatchHandler @ 002311d7 */
      core::ptr::
      drop_in_place<core::iter::adapters::enumerate::Enumerate<core::iter::adapters::map::Map<alloc::vec::into_iter::IntoIter<uu_sort::merge::ClosedPlainTmpFile>,alloc::boxed::Box<dyn_core::ops::function::FnMut<(uu_sort::merge::ClosedPlainTmpFile,)>_Output_core::result::Result<uu_sort::merge::PlainTmpMergeInput,alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>>>
                (&local_1d8);
                    /* try { // try from 00231069 to 00231072 has its CatchHandler @ 002311c7 */
      core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpsc::Receiver<uu_sort::chunks::Chunk>>>
                (&local_230);
                    /* try { // try from 00231075 to 0023107e has its CatchHandler @ 002311cf */
      core::ptr::
      drop_in_place<alloc::vec::Vec<core::option::Option<uu_sort::merge::ReaderFile<uu_sort::merge::PlainTmpMergeInput>>>>
                (&local_270);
                    /* try { // try from 0023107f to 0023108b has its CatchHandler @ 002311ab */
      core::ptr::drop_in_place<std::sync::mpsc::Receiver<(usize,uu_sort::chunks::RecycledChunk)>>
                (&local_1e8);
                    /* try { // try from 0023108e to 00231097 has its CatchHandler @ 002311bf */
      core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>
                (&local_280);
      return;
    }
                    /* try { // try from 002311a5 to 002311aa has its CatchHandler @ 002311c7 */
    uVar5 = ::alloc::raw_vec::handle_error(uStack_198,local_190);
  }
  else {
                    /* try { // try from 00231195 to 0023119a has its CatchHandler @ 002311cf */
    uVar5 = ::alloc::raw_vec::handle_error(uStack_198,local_190);
  }
                    /* catch() { ... } // from try @ 0023107f with catch @ 002311ab */
  core::ptr::drop_in_place<std::sync::mpsc::Sender<(usize,uu_sort::chunks::RecycledChunk)>>
            (&local_280);
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar5);
}