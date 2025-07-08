
  int128_t* uu_mktemp::dry_exec::h0a7898737835babc(int128_t* arg1, int64_t arg2, size_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t arg8)

{
    int64_t r13 = arg6 + arg5;
    int64_t var_a0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::he204a1af3f1eb867(&var_a0, r13 + arg8, 0);
    int64_t var_98;
    
    if (var_a0)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_98);
        /* no return */
    }
    
    int64_t var_b8 = var_98;
    int64_t var_a8 = 0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8d008c8d94641a94(&var_b8, arg4, arg4 + arg5);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h4c607371e1e29218(&var_b8, arg6, 0x58);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8d008c8d94641a94(&var_b8, arg7, arg8 + arg7);
    int64_t var_90;
    int64_t rax_1;
    int64_t rdx_3;
    rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::ha3c98ad8690eec67(arg5, r13, var_90, var_a8);
    var_a0 = rand::rngs::thread::thread_rng::hb51ef0c041e68525();
    rand::rng::Rng::fill::h79ce3d99f0d48795(&var_a0, rax_1, rdx_3);
    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::hd7d8697e44513e9b(&var_a0);
    var_a0 = rax_1;
    int64_t var_98_1 = rax_1 + rdx_3;
    
    for (char* i = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7c90eff0bcfd7e5b(&var_a0); i; i = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7c90eff0bcfd7e5b(&var_a0))
    {
        uint8_t rcx_1 = *i;
        uint32_t rdx_8 = rcx_1 / 0x3e;
        rcx_1 -= (rdx_8 << 6) - rdx_8 * 2;
        
        if (rcx_1 < 0xa)
            rcx_1 |= 0x30;
        else if (rcx_1 >= 0x24)
            rcx_1 += 0x1d;
        else
            rcx_1 += 0x57;
        
        *i = rcx_1;
    }
    
    int64_t var_58 = var_a8;
    int128_t var_68 = var_b8;
    alloc::string::String::from_utf8::hacb364918987915a(&var_a0, &var_68);
    void var_48;
    core::result::Result$LT$T$C$E$GT$::unwrap::h66f1ec1b8c34f280(&var_48, &var_a0);
    std::path::Path::join::h5103fbfd94f4eefa(arg1, arg2, arg3, &var_48);
    return arg1;
}
