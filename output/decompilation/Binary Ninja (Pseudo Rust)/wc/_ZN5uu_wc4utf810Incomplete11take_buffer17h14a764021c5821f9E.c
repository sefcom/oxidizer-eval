
  fn uu_wc::utf8::Incomplete::take_buffer::h14a764021c5821f9(arg1: *mut c_void) -> i64

{
    let rdi: u64 = *arg1.byte_offset(4);
    *arg1.byte_offset(4) = 0;
    /* tailcall */
    _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hcc9c09d4ae31832d(rdi, arg1, 4)
}
