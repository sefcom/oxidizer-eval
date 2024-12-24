long * __rustcall
uu_sort::chunks::read
          (long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
          undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9,
          undefined8 param_10)

{
  ulong uVar1;
  undefined uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulong local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  long local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulong local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  ulong *local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  ulong local_38;
  
  local_148 = param_3[2];
  local_158 = *param_3;
  uStack_150 = param_3[1];
  local_128 = param_3[5];
  local_138 = param_3[3];
  uStack_130 = param_3[4];
  local_108 = param_3[8];
  local_118 = param_3[6];
  uStack_110 = param_3[7];
  local_e8 = param_3[0xb];
  local_f8 = param_3[9];
  uStack_f0 = param_3[10];
  local_168 = param_3[0xe];
  local_178 = *(undefined4 *)(param_3 + 0xc);
  uStack_174 = *(undefined4 *)((long)param_3 + 100);
  uStack_170 = *(undefined4 *)(param_3 + 0xd);
  uStack_16c = *(undefined4 *)((long)param_3 + 0x6c);
  uVar1 = *(ulong *)(param_6 + 0x10);
  if (local_168 < uVar1) {
                    /* try { // try from 0026e7f5 to 0026e863 has its CatchHandler @ 0026ea94 */
    ::alloc::vec::Vec<T,A>::resize(&local_178,uVar1 + 0x2800,0);
  }
  auVar4 = _<core::ops::range::Range<usize>as_core::slice::index::SliceIndex<[T]>>::index_mut
                     (uVar1,CONCAT44(uStack_16c,uStack_170),local_168,
                      &PTR_s_src_uu_sort_src_chunks_rs_00301800);
  core::slice::_<impl[T]>::copy_from_slice
            (auVar4._0_8_,auVar4._8_8_,*(undefined8 *)(param_6 + 8),uVar1,
             &PTR_s_src_uu_sort_src_chunks_rs_00301818);
  read_to_buffer(&local_c8,param_7,&local_178,param_4,param_5,*(undefined8 *)(param_6 + 0x10),
                 param_9);
  if (local_c8 == 0) {
    uVar2 = (undefined)uStack_b8;
    local_e0 = uStack_c0;
    *(undefined8 *)(param_6 + 0x10) = 0;
    if (local_168 < uStack_c0) {
                    /* try { // try from 0026ea6b to 0026ea7a has its CatchHandler @ 0026ea94 */
      uVar3 = core::slice::index::slice_start_index_len_fail
                        (uStack_c0,local_168,&PTR_s_src_uu_sort_src_chunks_rs_00301848);
                    /* catch() { ... } // from try @ 0026ea25 with catch @ 0026ea7b */
      core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::numeric_str_cmp::NumInfo>>(&local_118);
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_138);
      core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::Line>>(&local_158);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar3);
    }
    uVar3 = core::slice::iter::Iter<T>::make_slice
                      (CONCAT44(uStack_16c,uStack_170) + uStack_c0,
                       local_168 + CONCAT44(uStack_16c,uStack_170));
                    /* try { // try from 0026e903 to 0026e90d has its CatchHandler @ 0026ea94 */
    ::alloc::vec::Vec<T,A>::append_elements(param_6,uVar3);
    if (uStack_c0 != 0) {
      local_38 = local_168;
      local_48 = CONCAT44(uStack_174,local_178);
      uStack_40 = CONCAT44(uStack_16c,uStack_170);
      uStack_b8 = local_128;
      local_c8 = local_138;
      uStack_c0 = uStack_130;
      local_b0 = local_158;
      uStack_a8 = uStack_150;
      local_a0 = local_148;
      local_68 = &local_e0;
      local_98 = local_118;
      uStack_90 = uStack_110;
      local_88 = local_108;
      local_80 = (undefined4)local_f8;
      uStack_7c = local_f8._4_4_;
      uStack_78 = (undefined4)uStack_f0;
      uStack_74 = uStack_f0._4_4_;
      local_70 = local_e8;
      local_60 = &param_9;
      local_58 = param_10;
      Chunk::try_new(&local_d8,&local_48,&local_c8);
      if (local_d8 != 0) {
        *param_1 = local_d8;
        param_1[1] = local_d0;
        return param_1;
      }
      uVar3 = std::sync::mpmc::Sender<T>::send(param_2);
      core::result::Result<T,E>::unwrap(uVar3);
      *(undefined *)(param_1 + 1) = uVar2;
      *param_1 = 0;
      return param_1;
    }
    *(undefined *)(param_1 + 1) = (undefined)uStack_b8;
    *param_1 = 0;
                    /* try { // try from 0026ea1b to 0026ea24 has its CatchHandler @ 0026ea8f */
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_178);
                    /* try { // try from 0026ea25 to 0026ea31 has its CatchHandler @ 0026ea7b */
    core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::GeneralF64ParseResult>>(&local_f8);
                    /* try { // try from 0026ea32 to 0026ea3b has its CatchHandler @ 0026ea8a */
    core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::numeric_str_cmp::NumInfo>>(&local_118);
                    /* try { // try from 0026ea3c to 0026ea45 has its CatchHandler @ 0026ea85 */
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_138);
  }
  else {
    *(undefined4 *)param_1 = (undefined4)uStack_c0;
    *(undefined4 *)((long)param_1 + 4) = uStack_c0._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_b8;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_b8._4_4_;
                    /* try { // try from 0026e87a to 0026e883 has its CatchHandler @ 0026ea8f */
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_178);
                    /* try { // try from 0026e884 to 0026e890 has its CatchHandler @ 0026ea80 */
    core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::GeneralF64ParseResult>>(&local_f8);
                    /* try { // try from 0026e891 to 0026e89a has its CatchHandler @ 0026ea8a */
    core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::numeric_str_cmp::NumInfo>>(&local_118);
                    /* try { // try from 0026e89b to 0026e8a4 has its CatchHandler @ 0026ea85 */
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&local_138);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::Line>>(&local_158);
  return param_1;
}