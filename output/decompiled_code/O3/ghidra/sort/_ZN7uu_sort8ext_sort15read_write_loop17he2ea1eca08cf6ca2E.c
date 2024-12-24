/* WARNING: Removing unreachable block (ram,0x0027a742) */

void __rustcall
uu_sort::ext_sort::read_write_loop
          (long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
          long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long local_218;
  long local_210;
  ulong local_208;
  long local_200;
  long local_1f8;
  undefined8 local_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  long local_188;
  char local_180;
  undefined7 uStack_17f;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
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
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined local_80 [16];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  long local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_1d0 = (undefined4)param_8;
  uStack_1cc = param_8._4_4_;
  uStack_1c8 = (undefined4)param_9;
  uStack_1c4 = param_9._4_4_;
                    /* try { // try from 0027a17a to 0027a186 has its CatchHandler @ 0027a6f1 */
  local_1d8 = param_2;
  local_190 = param_3;
  _<&mut_I_as_core::iter::traits::iterator::Iterator>::next(&local_178);
  if (local_178 == 2) {
                    /* try { // try from 0027a6a8 to 0027a6b4 has its CatchHandler @ 0027a6f1 */
    uVar5 = core::option::unwrap_failed(&DAT_00301f58);
                    /* catch() { ... } // from try @ 0027a5de with catch @ 0027a6b5 */
                    /* catch() { ... } // from try @ 0027a631 with catch @ 0027a6cb */
    core::ptr::
    drop_in_place<core::option::Option<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>>
              (&local_1f0);
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_1a8);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn_std::io::Read_core::marker::Send>>
              (local_200,local_1f8);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume(uVar5);
  }
  local_200 = CONCAT44(uStack_16c,uStack_170);
  local_1f8 = CONCAT44(uStack_164,local_168);
  if (local_178 == 0) {
    local_1a8 = 0;
    local_1a0 = 1;
    local_198 = 0;
    uVar6 = 8000;
    if (param_5 < 8000) {
      uVar6 = param_5;
    }
    iVar2 = 0;
    local_208 = param_4 & 0xff;
    local_210 = param_6;
    do {
      iVar2 = _<i32_as_core::iter::range::Step>::forward_unchecked(iVar2);
                    /* try { // try from 0027a239 to 0027a27b has its CatchHandler @ 0027a71b */
      chunks::RecycledChunk::new(&local_178,uVar6);
      chunks::read(&local_f8,&local_1d0,&local_178,1,param_5,&local_1a8,&local_200,&local_1d8,
                   local_208,local_210);
      lVar1 = CONCAT44(uStack_f4,local_f8);
      if (lVar1 != 0) {
        param_1[1] = lVar1;
        param_1[2] = CONCAT44(uStack_ec,uStack_f0);
        *param_1 = -0x7ffffffffffffffd;
        goto LAB_0027a647;
      }
      if ((char)uStack_f0 == '\0') {
        local_178 = CONCAT44(uStack_1cc,local_1d0);
        uStack_170 = uStack_1c8;
        uStack_16c = uStack_1c4;
                    /* try { // try from 0027a31a to 0027a333 has its CatchHandler @ 0027a6de */
        core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&local_178);
        lVar3 = std::sync::mpmc::Receiver<T>::recv(param_7);
        if (lVar3 == 0) {
          *param_1 = -0x8000000000000000;
        }
        else {
          local_178 = lVar3;
                    /* try { // try from 0027a348 to 0027a354 has its CatchHandler @ 0027a6b9 */
          lVar4 = std::sync::mpmc::Receiver<T>::recv(param_7);
          *param_1 = -0x7ffffffffffffffe - (ulong)(lVar4 == 0);
          param_1[1] = lVar3;
          param_1[2] = lVar4;
        }
        goto LAB_0027a647;
      }
    } while (iVar2 < 2);
    local_1f0 = CONCAT44(uStack_1cc,local_1d0);
    uStack_1e8 = uStack_1c8;
    uStack_1e4 = uStack_1c4;
    local_1c0 = 0;
    uStack_1b8 = 8;
    local_1b0 = 0;
    if (*(long *)(local_210 + 0x30) == -0x8000000000000000) {
      local_1e0 = 0;
    }
    else {
      local_1e0 = *(undefined8 *)(local_210 + 0x38);
    }
    uVar5 = *(undefined8 *)(local_210 + 0x40);
                    /* try { // try from 0027a3b8 to 0027a3c4 has its CatchHandler @ 0027a6ea */
    while (local_178 = std::sync::mpmc::Receiver<T>::recv(param_7), local_178 != 0) {
      local_218 = local_178;
                    /* try { // try from 0027a3db to 0027a4a4 has its CatchHandler @ 0027a6f6 */
      tmp_dir::TmpDirWrapper::next_file(&local_f8,local_190);
      if (CONCAT44(uStack_ec,uStack_f0) == -0x8000000000000000) {
        *(undefined4 *)(param_1 + 1) = local_e8;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_e4;
        *(undefined4 *)(param_1 + 2) = uStack_e0;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_dc;
        *param_1 = -0x7ffffffffffffffd;
LAB_0027a627:
                    /* try { // try from 0027a627 to 0027a630 has its CatchHandler @ 0027a6b7 */
        core::ptr::drop_in_place<uu_sort::chunks::Chunk>(&local_218);
LAB_0027a631:
                    /* try { // try from 0027a631 to 0027a63a has its CatchHandler @ 0027a6cb */
        core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::ClosedCompressedTmpFile>>
                  (&local_1c0);
        goto LAB_0027a63b;
      }
      local_70 = local_e8;
      uStack_6c = uStack_e4;
      uStack_68 = uStack_e0;
      uStack_64 = uStack_dc;
      write(&local_178,local_218,local_80,local_1e0,uVar5,local_208);
      if (local_178 == -0x8000000000000000) {
        param_1[1] = CONCAT44(uStack_16c,uStack_170);
        param_1[2] = CONCAT44(uStack_164,local_168);
        *param_1 = -0x7ffffffffffffffd;
        goto LAB_0027a627;
      }
      local_38 = CONCAT44(uStack_14c,local_150);
      local_48 = uStack_160;
      uStack_44 = uStack_15c;
      uStack_40 = uStack_158;
      uStack_3c = uStack_154;
      local_60 = local_178;
      local_58 = CONCAT44(uStack_16c,uStack_170);
      local_50 = CONCAT44(uStack_164,local_168);
      ::alloc::vec::Vec<T,A>::push(&local_1c0,&local_60);
                    /* try { // try from 0027a4aa to 0027a578 has its CatchHandler @ 0027a6ec */
      chunks::Chunk::recycle(&local_f8,local_218);
      if ((int)local_1f0 == 3) {
                    /* try { // try from 0027a3b0 to 0027a3b7 has its CatchHandler @ 0027a6ec */
        core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(&local_f8);
      }
      else {
        local_108 = local_88;
        local_118 = local_98;
        uStack_110 = uStack_90;
        local_128 = local_a8;
        uStack_120 = uStack_a0;
        local_138 = local_b8;
        uStack_130 = uStack_b0;
        local_148 = local_c8;
        uStack_144 = uStack_c4;
        uStack_140 = uStack_c0;
        uStack_13c = uStack_bc;
        uStack_158 = local_d8;
        uStack_154 = uStack_d4;
        local_150 = uStack_d0;
        uStack_14c = uStack_cc;
        local_168 = local_e8;
        uStack_164 = uStack_e4;
        uStack_160 = uStack_e0;
        uStack_15c = uStack_dc;
        local_178 = CONCAT44(uStack_f4,local_f8);
        uStack_170 = uStack_f0;
        uStack_16c = uStack_ec;
        chunks::read(&local_188,&local_1f0,&local_178,0);
        if (local_188 != 0) {
          param_1[1] = local_188;
          param_1[2] = CONCAT71(uStack_17f,local_180);
          *param_1 = -0x7ffffffffffffffd;
          goto LAB_0027a631;
        }
        if (local_180 == '\0') {
                    /* try { // try from 0027a598 to 0027a5a1 has its CatchHandler @ 0027a6d0 */
          core::ptr::
          drop_in_place<core::option::Option<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>>
                    (&local_1f0);
          local_1f0 = 3;
        }
      }
    }
    param_1[2] = local_1b0;
    *(undefined4 *)param_1 = (undefined4)local_1c0;
    *(undefined4 *)((long)param_1 + 4) = local_1c0._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_1b8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_1b8._4_4_;
                    /* try { // try from 0027a5de to 0027a5ea has its CatchHandler @ 0027a6b5 */
    core::ptr::
    drop_in_place<core::result::Result<uu_sort::chunks::Chunk,std::sync::mpsc::RecvError>>
              (&local_178);
LAB_0027a63b:
                    /* try { // try from 0027a63b to 0027a644 has its CatchHandler @ 0027a6de */
    core::ptr::
    drop_in_place<core::option::Option<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>>
              (&local_1f0);
LAB_0027a647:
                    /* try { // try from 0027a647 to 0027a653 has its CatchHandler @ 0027a6e5 */
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_1a8);
                    /* try { // try from 0027a65e to 0027a662 has its CatchHandler @ 0027a6f1 */
    core::ptr::drop_in_place<alloc::boxed::Box<dyn_std::io::Read_core::marker::Send>>
              (local_200,local_1f8);
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    param_1[1] = local_200;
    param_1[2] = local_1f8;
    *param_1 = -0x7ffffffffffffffd;
  }
  core::ptr::drop_in_place<std::sync::mpsc::SyncSender<uu_sort::chunks::Chunk>>(&local_1d0);
  return;
}