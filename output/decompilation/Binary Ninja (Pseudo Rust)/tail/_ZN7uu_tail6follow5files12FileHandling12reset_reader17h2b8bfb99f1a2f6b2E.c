
  fn uu_tail::follow::files::FileHandling::reset_reader::h2b8bfb99f1a2f6b2(arg1: *mut c_void, arg2: *mut i8, arg3: size_t) -> i64

{
    let rax: *mut c_void =
        uu_tail::follow::files::FileHandling::get_mut::h1a80ce1ee4fcf7dc(arg1, arg2, arg3);
    let result: i64 = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hb79f29454372363d(*rax.byte_offset(0xc8), *rax.byte_offset(0xd0));
    *rax.byte_offset(0xc8) = 0;
    result
}
