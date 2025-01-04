void __rustcall
uu_paste::DelimiterState::remove_trailing_delimiter(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = *(ulong *)(param_3 + 0x10);
    if (param_2 <= uVar1) {
      ::alloc::vec::Vec<T,A>::truncate(param_3,uVar1 - param_2);
      return;
    }
    if (uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      core::panicking::panic
                ("assertion failed: output_len == 0capacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rsreentrant init/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/cell/once.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/iter/traits/exact_size.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rsTried to shrink to a larger capacity/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/raw_vec.rs"
                 ,0x21,&PTR_s_src_uu_paste_src_paste_rs_00213610);
    }
  }
  return;
}