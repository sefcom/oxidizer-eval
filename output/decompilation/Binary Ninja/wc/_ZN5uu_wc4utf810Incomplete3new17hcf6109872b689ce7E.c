
  int64_t uu_wc::utf8::Incomplete::new::hcf6109872b689ce7(int64_t arg1, int64_t arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    *var_18[4] = 0;
    int64_t rax_1;
    uint64_t rdx;
    rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h91a2381faada637b(arg2, &*var_18[4], 4);
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::heb9fab0cf9acb3ce(rax_1, rdx, 
        arg1, arg2);
    return arg2 << 0x20 | *var_18[4];
}
