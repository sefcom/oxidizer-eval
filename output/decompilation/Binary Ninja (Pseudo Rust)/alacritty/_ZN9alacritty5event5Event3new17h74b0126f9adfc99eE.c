
  fn alacritty::event::Event::new::h74b0126f9adfc99e(arg1: *mut i64, arg2: i64) -> i64

{
    let rax: i64 = _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::h4df5f2c2ba1db352();
    *arg1 = 1;
    arg1[1] = rax;
    /* tailcall */
    memcpy(&arg1[2], arg2, 0xb0)
}
