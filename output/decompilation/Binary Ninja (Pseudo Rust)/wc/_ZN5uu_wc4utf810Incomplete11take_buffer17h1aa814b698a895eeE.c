
  fn uu_wc::utf8::Incomplete::take_buffer::h1aa814b698a895ee(arg1: *mut c_void) -> i64

{
    let rsi: u64 = *arg1.byte_offset(4);
    *arg1.byte_offset(4) = 0;
    /* tailcall */
    _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h7028662c39c50e0f(0, rsi, arg1, 4)
}
