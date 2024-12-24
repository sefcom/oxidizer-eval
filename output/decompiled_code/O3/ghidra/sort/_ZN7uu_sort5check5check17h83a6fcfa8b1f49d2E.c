/* WARNING: Removing unreachable block (ram,0x00242f69) */

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
                    /* try { // try from 0024294c to 0024295d has its CatchHandler @ 00242eff */
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
                    /* try { // try from 00242993 to 002429a4 has its CatchHandler @ 00242eee */
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
                    /* try { // try from 002429f4 to 00242a05 has its CatchHandler @ 00242f15 */
    _<uu_sort::GlobalSettings_as_core::clone::Clone>::clone(&local_d0,local_268);
    local_110 = local_208;
    local_108 = local_200;
    local_1d0 = lVar2;
    uStack_1c8 = uVar4;
    local_1c0 = lVar10;
    uStack_1b8 = uVar8;
    (*(code *)PTR_memcpy_00306060)(&local_1b0,&local_d0,0xa0);
    local_c0 = -0x8000000000000000;
    local_d0 = 0;
                    /* try { // try from 00242a7b to 00242ab3 has its CatchHandler @ 00242f15 */
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
                    /* try { // try from 00242afb to 00242b1b has its CatchHandler @ 00242f40 */
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
    local_258 = &PTR_s_src_uu_sort_src_check_rs_00300160;
                    /* try { // try from 00242b6c to 00242b73 has its CatchHandler @ 00242efa */
    while (uVar8 = local_250,
          lVar7 = _<std::sync::mpsc::IntoIter<T>as_core::iter::traits::iterator::Iterator>::next
                            (&local_1e8), lVar2 = local_270, lVar7 != 0) {
      lVar10 = lVar10 + 1;
      local_270 = 0;
      local_260 = lVar7;
      if (lVar2 != 0) {
        local_228 = lVar2;
        if (*(long *)(lVar2 + 0x28) == 0) {
LAB_00242eaf:
                    /* try { // try from 00242eaf to 00242eb9 has its CatchHandler @ 00242f04 */
          uVar8 = core::option::unwrap_failed(local_258);
                    /* catch() { ... } // from try @ 00242e1a with catch @ 00242eba */
                    /* try { // try from 00242ebd to 00242f77 has its CatchHandler @ 00242f9e */
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
          local_258 = &PTR_s_src_uu_sort_src_check_rs_00300178;
          goto LAB_00242eaf;
        }
        puVar9 = *(undefined8 **)(lVar7 + 0x20);
                    /* try { // try from 00242bd5 to 00242be4 has its CatchHandler @ 00242ef6 */
        cVar5 = compare_by(*(long *)(lVar2 + 0x20) + *(long *)(lVar2 + 0x28) * 0x18 + -0x18,puVar9,
                           local_268,lVar2 + 0x30,lVar7 + 0x30);
        if (cVar5 != cVar3 && SBORROW1(cVar5,cVar3) == (char)(cVar5 + cVar1) < '\0') {
                    /* try { // try from 00242de3 to 00242df8 has its CatchHandler @ 00242f04 */
          std::sys::os_str::bytes::Slice::to_owned(&local_1d0,uVar8,local_210);
          local_238 = local_1c0;
          local_248 = (undefined4)local_1d0;
          uStack_244 = local_1d0._4_4_;
          uStack_240 = (undefined4)uStack_1c8;
          uStack_23c = uStack_1c8._4_4_;
                    /* try { // try from 00242e1a to 00242e26 has its CatchHandler @ 00242eba */
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_d0,*puVar9,puVar9[1]);
          local_198 = local_c0;
          local_1a8 = local_d0;
          lStack_1a0 = lStack_c8;
          local_1b0 = local_238;
          local_1c0 = CONCAT44(uStack_244,local_248);
          uStack_1b8 = CONCAT44(uStack_23c,uStack_240);
          local_1d0 = (ulong)CONCAT61(local_1d0._2_6_,*(undefined *)(local_268 + 0x86)) << 8;
                    /* try { // try from 00242e84 to 00242e90 has its CatchHandler @ 00242f04 */
          uStack_1c8 = lVar10;
          uVar8 = ::alloc::boxed::Box<T>::new(&local_1d0);
                    /* try { // try from 00242e91 to 00242e9d has its CatchHandler @ 00242ef8 */
          core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&local_228);
LAB_00242d6c:
                    /* try { // try from 00242d6c to 00242d75 has its CatchHandler @ 00242ee2 */
          core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&local_260);
                    /* try { // try from 00242d76 to 00242d82 has its CatchHandler @ 00242ee9 */
          core::ptr::drop_in_place<std::sync::mpsc::IntoIter<uu_sort::chunks::Chunk>>(&local_1e8);
                    /* try { // try from 00242d83 to 00242d8c has its CatchHandler @ 00242ee4 */
          core::ptr::drop_in_place<core::option::Option<uu_sort::chunks::Chunk>>(&local_270);
                    /* try { // try from 00242d8f to 00242d9b has its CatchHandler @ 00242eff */
          core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::RecycledChunk>>
                    (&local_1f8);
          return uVar8;
        }
                    /* try { // try from 00242bf3 to 00242c1f has its CatchHandler @ 00242f13 */
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
                    /* try { // try from 00242c60 to 00242c8b has its CatchHandler @ 00242f1a */
        auVar12 = _<itertools::tuple_impl::TupleWindows<I,T>as_core::iter::traits::iterator::Iterator>
                  ::next(&local_d0);
        puVar9 = auVar12._8_8_;
        if (auVar12._0_8_ == 0) break;
        cVar5 = compare_by(auVar12._0_8_,puVar9,local_268,local_260 + 0x30,local_260 + 0x30);
        lVar10 = lVar10 + 1;
        if (cVar5 != cVar3 && SBORROW1(cVar5,cVar3) == (char)(cVar5 + cVar1) < '\0') {
                    /* try { // try from 00242cc1 to 00242cd8 has its CatchHandler @ 00242ef8 */
          std::sys::os_str::bytes::Slice::to_owned(&local_1d0,local_250,local_210);
          local_218 = local_1c0;
          local_228 = local_1d0;
          uStack_220 = (undefined4)uStack_1c8;
          uStack_21c = uStack_1c8._4_4_;
                    /* try { // try from 00242cfb to 00242d04 has its CatchHandler @ 00242ec9 */
          _<T_as_alloc::slice::hack::ConvertVec>::to_vec(&local_248,*puVar9,puVar9[1]);
          local_198 = local_238;
          local_1a8 = CONCAT44(uStack_244,local_248);
          lStack_1a0 = CONCAT44(uStack_23c,uStack_240);
          local_1b0 = local_218;
          local_1c0 = local_228;
          uStack_1b8 = CONCAT44(uStack_21c,uStack_220);
          local_1d0 = (ulong)CONCAT61(local_1d0._2_6_,*(undefined *)(local_268 + 0x86)) << 8;
                    /* try { // try from 00242d5c to 00242d68 has its CatchHandler @ 00242ef8 */
          uStack_1c8 = lVar10;
          uVar8 = ::alloc::boxed::Box<T>::new(&local_1d0);
          goto LAB_00242d6c;
        }
      }
      lVar2 = local_260;
                    /* try { // try from 00242ca5 to 00242cae has its CatchHandler @ 00242ed8 */
      core::ptr::drop_in_place<core::option::Option<uu_sort::chunks::Chunk>>(&local_270);
      local_270 = lVar2;
    }
                    /* try { // try from 00242db8 to 00242dc4 has its CatchHandler @ 00242ee9 */
    core::ptr::drop_in_place<std::sync::mpsc::IntoIter<uu_sort::chunks::Chunk>>(&local_1e8);
                    /* try { // try from 00242dc5 to 00242dce has its CatchHandler @ 00242ee4 */
    core::ptr::drop_in_place<core::option::Option<uu_sort::chunks::Chunk>>(&local_270);
                    /* try { // try from 00242dd1 to 00242ddd has its CatchHandler @ 00242eff */
    core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::RecycledChunk>>
              (&local_1f8);
    uStack_1c8 = 0;
  }
  return uStack_1c8;
}