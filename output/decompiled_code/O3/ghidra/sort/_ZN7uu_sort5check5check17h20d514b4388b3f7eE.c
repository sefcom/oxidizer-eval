/* WARNING: Removing unreachable block (ram,0x00248539) */

undefined8 __rustcall uu_sort::check::check(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined auVar12 [16];
  long local_270;
  long local_268;
  long local_260;
  undefined **local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  long local_238;
  long local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  long local_218;
  undefined8 local_210;
  undefined8 local_208;
  long local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  long local_1a8;
  long lStack_1a0;
  long local_198;
  undefined8 local_110;
  long local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  
  cVar1 = *(char *)(param_3 + 0x84);
  cVar3 = -cVar1;
  open(&local_1d0,param_1,param_2);
  if (local_1d0 == 0) {
    local_208 = uStack_1c8;
    local_200 = local_1c0;
                    /* try { // try from 00247f1c to 00247f2d has its CatchHandler @ 002484cf */
    local_268 = param_3;
    local_210 = param_2;
    std::sync::mpmc::sync_channel(&local_1d0,2);
    uVar4 = uStack_1b8;
    lVar2 = local_1c0;
    local_1f8 = (undefined4)local_1d0;
    uStack_1f4 = local_1d0._4_4_;
    uStack_1f0 = (undefined4)uStack_1c8;
    uStack_1ec = uStack_1c8._4_4_;
    local_100 = local_1c0;
    local_f8 = uStack_1b8;
                    /* try { // try from 00247f63 to 00247f74 has its CatchHandler @ 002484be */
    local_250 = param_1;
    std::sync::mpmc::sync_channel(&local_1d0,2);
    uVar8 = uStack_1c8;
    lVar10 = local_1d0;
    local_f0 = local_1d0;
    local_e8 = uStack_1c8;
    local_258 = (undefined **)local_1c0;
    local_e0 = local_1c0;
    local_1d8 = uStack_1b8;
    local_d8 = uStack_1b8;
                    /* try { // try from 00247fc4 to 00247fd5 has its CatchHandler @ 002484e5 */
    _<uu_sort::GlobalSettings_as_core::clone::Clone>::clone(&local_d0,local_268);
    local_110 = local_208;
    local_108 = local_200;
    local_1d0 = lVar2;
    uStack_1c8 = uVar4;
    local_1c0 = lVar10;
    uStack_1b8 = uVar8;
    (*(code *)PTR_memcpy_00306c40)(&local_1b0,&local_d0,0xa0);
    local_c0 = -0x8000000000000000;
    local_d0 = 0;
                    /* try { // try from 0024804b to 00248083 has its CatchHandler @ 002484e5 */
    std::thread::Builder::spawn_unchecked(&local_248,&local_d0,&local_1d0);
    core::result::Result<T,E>::expect(&local_d0,&local_248);
    core::ptr::
    drop_in_place<std::thread::JoinHandle<core::result::Result<(),alloc::boxed::Box<dyn_uucore::mods::error::UError>>>>
              (&local_d0);
    uVar11 = 0x19000;
    if (*(ulong *)(local_268 + 0x68) < 0x19000) {
      uVar11 = *(ulong *)(local_268 + 0x68);
    }
    iVar6 = 0;
    do {
      iVar6 = _<i32_as_core::iter::range::Step>::forward_unchecked(iVar6);
                    /* try { // try from 002480cb to 002480eb has its CatchHandler @ 00248510 */
      chunks::RecycledChunk::new(&local_1d0,uVar11);
      std::sync::mpmc::Sender<T>::send(&local_d0,&local_1f8,&local_1d0);
      core::ptr::
      drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::RecycledChunk>>>
                (&local_d0);
    } while (iVar6 < 2);
    local_270 = 0;
    local_1e8 = (long)local_258;
    local_1e0 = local_1d8;
    lVar10 = 0;
    local_258 = &PTR_s_src_uu_sort_src_check_rs_00300ea0;
                    /* try { // try from 0024813c to 00248143 has its CatchHandler @ 002484ca */
    while (uVar8 = local_250,
          lVar7 = _<std::sync::mpsc::IntoIter<T>as_core::iter::traits::iterator::Iterator>::next
                            (&local_1e8), lVar2 = local_270, lVar7 != 0) {
      lVar10 = lVar10 + 1;
      local_270 = 0;
      local_260 = lVar7;
      if (lVar2 != 0) {
        local_228 = lVar2;
        if (*(long *)(lVar2 + 0x28) == 0) {
LAB_0024847f:
                    /* try { // try from 0024847f to 00248489 has its CatchHandler @ 002484d4 */
          uVar8 = core::option::unwrap_failed(local_258);
                    /* catch() { ... } // from try @ 002483ea with catch @ 0024848a */
                    /* try { // try from 0024848d to 00248547 has its CatchHandler @ 0024856e */
          core::ptr::drop_in_place<std::ffi::os_str::OsString>(&local_248);
          core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&local_228);
          core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&local_260);
          core::ptr::drop_in_place<std::sync::mpsc::IntoIter<uu_sort::chunks::Chunk>>(&local_1e8);
          core::ptr::drop_in_place<core::option::Option<uu_sort::chunks::Chunk>>(&local_270);
          core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::RecycledChunk>>
                    (&local_1f8);
                    /* WARNING: Subroutine does not return */
          _Unwind_Resume(uVar8);
        }
        if (*(long *)(lVar7 + 0x28) == 0) {
          local_258 = &PTR_s_src_uu_sort_src_check_rs_00300eb8;
          goto LAB_0024847f;
        }
        puVar9 = *(undefined8 **)(lVar7 + 0x20);
                    /* try { // try from 002481a5 to 002481b4 has its CatchHandler @ 002484c6 */
        cVar5 = compare_by(*(long *)(lVar2 + 0x20) + *(long *)(lVar2 + 0x28) * 0x18 + -0x18,puVar9,
                           local_268,lVar2 + 0x30,lVar7 + 0x30);
        if (cVar5 != cVar3 && SBORROW1(cVar5,cVar3) == (char)(cVar5 + cVar1) < '\0') {
                    /* try { // try from 002483b3 to 002483c8 has its CatchHandler @ 002484d4 */
          std::sys::os_str::bytes::Slice::to_owned(&local_1d0,uVar8,local_210);
          local_238 = local_1c0;
          local_248 = (undefined4)local_1d0;
          uStack_244 = local_1d0._4_4_;
          uStack_240 = (undefined4)uStack_1c8;
          uStack_23c = uStack_1c8._4_4_;
                    /* try { // try from 002483ea to 002483f6 has its CatchHandler @ 0024848a */
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_d0,*puVar9,puVar9[1]);
          local_198 = local_c0;
          local_1a8 = local_d0;
          lStack_1a0 = lStack_c8;
          local_1b0 = local_238;
          local_1c0 = CONCAT44(uStack_244,local_248);
          uStack_1b8 = CONCAT44(uStack_23c,uStack_240);
          local_1d0 = (ulong)CONCAT61(local_1d0._2_6_,*(undefined *)(local_268 + 0x86)) << 8;
                    /* try { // try from 00248454 to 00248460 has its CatchHandler @ 002484d4 */
          uStack_1c8 = lVar10;
          uVar8 = ::alloc::boxed::Box<T>::new(&local_1d0);
                    /* try { // try from 00248461 to 0024846d has its CatchHandler @ 002484c8 */
          core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&local_228);
LAB_0024833c:
                    /* try { // try from 0024833c to 00248345 has its CatchHandler @ 002484b2 */
          core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&local_260);
                    /* try { // try from 00248346 to 00248352 has its CatchHandler @ 002484b9 */
          core::ptr::drop_in_place<std::sync::mpsc::IntoIter<uu_sort::chunks::Chunk>>(&local_1e8);
                    /* try { // try from 00248353 to 0024835c has its CatchHandler @ 002484b4 */
          core::ptr::drop_in_place<core::option::Option<uu_sort::chunks::Chunk>>(&local_270);
                    /* try { // try from 0024835f to 0024836b has its CatchHandler @ 002484cf */
          core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::RecycledChunk>>
                    (&local_1f8);
          return uVar8;
        }
                    /* try { // try from 002481c3 to 002481ef has its CatchHandler @ 002484e3 */
        chunks::Chunk::recycle(&local_1d0,local_228);
        std::sync::mpmc::Sender<T>::send(&local_d0,&local_1f8,&local_1d0);
        core::ptr::
        drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::RecycledChunk>>>
                  (&local_d0);
      }
      local_d0 = *(long *)(local_260 + 0x20);
      lStack_c8 = local_d0 + *(long *)(local_260 + 0x28) * 0x18;
      local_c0 = 0;
      while( true ) {
                    /* try { // try from 00248230 to 0024825b has its CatchHandler @ 002484ea */
        auVar12 = _<itertools::tuple_impl::TupleWindows<I,T>as_core::iter::traits::iterator::Iterator>
                  ::next(&local_d0);
        puVar9 = auVar12._8_8_;
        if (auVar12._0_8_ == 0) break;
        cVar5 = compare_by(auVar12._0_8_,puVar9,local_268,local_260 + 0x30,local_260 + 0x30);
        lVar10 = lVar10 + 1;
        if (cVar5 != cVar3 && SBORROW1(cVar5,cVar3) == (char)(cVar5 + cVar1) < '\0') {
                    /* try { // try from 00248291 to 002482a8 has its CatchHandler @ 002484c8 */
          std::sys::os_str::bytes::Slice::to_owned(&local_1d0,local_250,local_210);
          local_218 = local_1c0;
          local_228 = local_1d0;
          uStack_220 = (undefined4)uStack_1c8;
          uStack_21c = uStack_1c8._4_4_;
                    /* try { // try from 002482cb to 002482d4 has its CatchHandler @ 00248499 */
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_248,*puVar9,puVar9[1]);
          local_198 = local_238;
          local_1a8 = CONCAT44(uStack_244,local_248);
          lStack_1a0 = CONCAT44(uStack_23c,uStack_240);
          local_1b0 = local_218;
          local_1c0 = local_228;
          uStack_1b8 = CONCAT44(uStack_21c,uStack_220);
          local_1d0 = (ulong)CONCAT61(local_1d0._2_6_,*(undefined *)(local_268 + 0x86)) << 8;
                    /* try { // try from 0024832c to 00248338 has its CatchHandler @ 002484c8 */
          uStack_1c8 = lVar10;
          uVar8 = ::alloc::boxed::Box<T>::new(&local_1d0);
          goto LAB_0024833c;
        }
      }
      lVar2 = local_260;
                    /* try { // try from 00248275 to 0024827e has its CatchHandler @ 002484a8 */
      core::ptr::drop_in_place<core::option::Option<uu_sort::chunks::Chunk>>(&local_270);
      local_270 = lVar2;
    }
                    /* try { // try from 00248388 to 00248394 has its CatchHandler @ 002484b9 */
    core::ptr::drop_in_place<std::sync::mpsc::IntoIter<uu_sort::chunks::Chunk>>(&local_1e8);
                    /* try { // try from 00248395 to 0024839e has its CatchHandler @ 002484b4 */
    core::ptr::drop_in_place<core::option::Option<uu_sort::chunks::Chunk>>(&local_270);
                    /* try { // try from 002483a1 to 002483ad has its CatchHandler @ 002484cf */
    core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::RecycledChunk>>
              (&local_1f8);
    uStack_1c8 = 0;
  }
  return uStack_1c8;
}