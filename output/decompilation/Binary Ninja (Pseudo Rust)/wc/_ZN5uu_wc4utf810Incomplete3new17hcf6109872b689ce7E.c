
  fn uu_wc::utf8::Incomplete::new::hcf6109872b689ce7(arg1: i64, arg2: i64) -> i64

{
    let rax: i64;
    let mut var_18: i64 = rax;
    *var_18[4] = 0;
    let mut rax_1: i64;
    let mut rdx: u64;
    rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h91a2381faada637b(arg2, &*var_18[4], 4);
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::heb9fab0cf9acb3ce(rax_1, rdx, 
        arg1, arg2);
    arg2 << 0x20 | *var_18[4]
}
