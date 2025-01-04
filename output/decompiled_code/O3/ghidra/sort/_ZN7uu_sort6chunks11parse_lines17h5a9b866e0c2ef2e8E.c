void __rustcall
uu_sort::chunks::parse_lines
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined param_5,
          undefined8 param_6)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined2 local_38;
  
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  local_c8 = 0;
  auVar2 = core::char::methods::encode_utf8_raw(param_5,&local_c8);
  auVar2 = _<&str_as_core::str::pattern::Pattern>::strip_suffix_of
                     (auVar2._0_8_,auVar2._8_8_,param_1,param_2);
  if (auVar2._0_8_ == 0) {
    auVar2 = auVar1;
  }
  if (*(long *)(param_3 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: lines.is_empty()line_numbersilentOpenFailederrorReadFailedParseKeyErrorkeymsgOpenTmpFileFailedCompressProgExecutionFailedTmpFileCreationFailedUft8Errorcapacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/slice.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rsTried to shrink to a larger capacity/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/raw_vec.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs"
               ,0x22,&PTR_s_src_uu_sort_src_chunks_rs_00301948);
  }
  if (*(long *)(param_4 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: line_data.selections.is_empty()",0x31,
               &PTR_s_src_uu_sort_src_chunks_rs_00301930);
  }
  if (*(long *)(param_4 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: line_data.num_infos.is_empty()",0x30,
               &PTR_s_src_uu_sort_src_chunks_rs_00301918);
  }
  if (*(long *)(param_4 + 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
    core::panicking::panic
              ("assertion failed: line_data.parsed_floats.is_empty()",0x34,
               &PTR_s_src_uu_sort_src_chunks_rs_00301900);
  }
  local_e0 = 0;
  local_d8 = 8;
  local_d0 = 0;
                    /* try { // try from 0025d1ef to 0025d263 has its CatchHandler @ 0025d2e4 */
  _<char_as_core::str::pattern::Pattern>::into_searcher(&local_c8,param_5,auVar2._0_8_,auVar2._8_8_)
  ;
  local_68 = CONCAT44(uStack_c4,local_c8);
  local_48 = local_a8;
  uStack_44 = uStack_a4;
  uStack_40 = uStack_a0;
  uStack_3c = uStack_9c;
  local_58 = local_b8;
  uStack_54 = uStack_b4;
  uStack_50 = uStack_b0;
  uStack_4c = uStack_ac;
  uStack_60 = uStack_c0;
  local_80 = 0;
  uStack_78 = 0;
  local_38 = 1;
  local_90 = &local_e0;
  local_98 = param_4;
  local_88 = param_6;
  local_70 = auVar2._8_8_;
  _<alloc::vec::Vec<T,A>as_alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend(param_3,&local_98)
  ;
  core::ptr::drop_in_place<alloc::vec::Vec<core::ops::range::Range<usize>>>(&local_e0);
  return;
}