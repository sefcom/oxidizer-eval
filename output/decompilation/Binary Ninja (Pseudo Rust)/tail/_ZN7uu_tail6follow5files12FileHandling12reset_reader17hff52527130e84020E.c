
  fn uu_tail::follow::files::FileHandling::reset_reader::hff52527130e84020(arg1: *mut c_void, arg2: *mut i8, arg3: u64) -> i64

{
    let rax: i64;
    let var_18: i64 = rax;
    let rax_1: *mut c_void =
        uu_tail::follow::files::FileHandling::get_mut::h1b58406c510d0063(arg1, arg2, arg3);
    let result: i64 = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(*rax_1.byte_offset(0xc8), *rax_1.byte_offset(0xd0));
    *rax_1.byte_offset(0xc8) = 0;
    result
}
