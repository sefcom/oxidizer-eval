
  int64_t uu_ls::parse_time_style::hacb3b16b50cd334e(int128_t* arg1, void* arg2)

{
    uint64_t rax = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x78, 0);
    
    if (!rax)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    int128_t var_f8;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_f8, "full-isoBorrowedENOTSOCKclassify…", 8);
    int128_t zmm0 = var_f8;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_f8, "long-i", 8);
    int128_t zmm0_1 = var_f8;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_f8, "isolocale+FORMAT (e.g., +%H:%M) …", 3);
    int128_t var_c8 = var_f8;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_f8, "locale+FORMAT (e.g., +%H:%M) for…", 6);
    int128_t var_a8 = var_f8;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_f8, "+FORMAT (e.g., +%H:%M) for a 'da…", 0x30);
    int64_t var_e8;
    int64_t var_78 = var_e8;
    int128_t var_88 = var_f8;
    *(rax + 0x10) = var_e8;
    *rax = zmm0;
    *(rax + 0x28) = var_e8;
    *(rax + 0x18) = zmm0_1;
    *(rax + 0x40) = var_e8;
    *(rax + 0x30) = var_c8;
    *(rax + 0x48) = var_a8;
    *(rax + 0x58) = var_e8;
    *(rax + 0x60) = var_88;
    *(rax + 0x70) = var_78;
    var_c8 = 5;
    *var_c8[8] = rax;
    int64_t var_b8_1 = 5;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5fe44c4217b6c6ae(&var_f8, 
        arg2, "time-stylefull-timeignorecontext…", 0xa);
    void* rax_11 = clap_builder::parser::error::MatchesError::unwrap::he9eef133f866d763(
        "time-stylefull-timeignorecontext…", 0xa, &var_f8);
    int64_t rcx_2;
    
    if (!rax_11)
    {
        if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "full-timeignorecontextgroup-dire…", 9))
        {
            label_591239:
            rcx_2 = -0x8000000000000000;
            goto label_591293;
        }
        
        label_59128f:
        rcx_2 = -0x7ffffffffffffffd;
        label_591293:
        *(arg1 + 8) = rcx_2;
        *arg1 = -0x7ffffffffffffffa;
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h89a7ff1ac4baee33(&var_c8);
    }
    
    if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, 
        "full-timeignorecontextgroup-dire…", 9))
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h172437770ffa9ae0(
            &var_f8, arg2, "full-timeignorecontextgroup-dire…", 9);
        
        if (!var_f8)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        int64_t var_98_1 = var_e8;
        var_a8 = var_f8;
        char rax_14;
        int64_t rdx_1;
        rax_14 = _$LT$clap_builder..parser..matches..arg_matches..Indices$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::he8af42fbff276d33(&var_a8);
        clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h172437770ffa9ae0(
            &var_f8, arg2, "time-stylefull-timeignorecontext…", 0xa);
        
        if (!var_f8)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        var_78 = var_e8;
        var_88 = var_f8;
        char rax_16;
        int64_t rdx_2;
        rax_16 = _$LT$clap_builder..parser..matches..arg_matches..Indices$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::next_back::he8af42fbff276d33(&var_88);
        
        if (rax_14 & 1 && !(rax_16 & rdx_1 <= rdx_2))
            goto label_591239;
    }
    
    char* r12_2 = *(rax_11 + 8);
    uint64_t r14_1 = *(rax_11 + 0x10);
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(r12_2, r14_1, "full-isoBorrowedENOTSOCKclassify…", 8))
        goto label_591239;
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(r12_2, r14_1, "long-i", 8))
    {
        rcx_2 = -0x7fffffffffffffff;
        goto label_591293;
    }
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(r12_2, r14_1, "isolocale+FORMAT (e.g., +%H:%M) …", 3))
    {
        rcx_2 = -0x7ffffffffffffffe;
        goto label_591293;
    }
    
    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h652dfc76ef3eba10(r12_2, r14_1, "locale+FORMAT (e.g., +%H:%M) for…", 6))
        goto label_59128f;
    
    var_a8 = r12_2;
    *var_a8[8] = &r12_2[r14_1];
    char rax_23;
    int32_t rdx_3;
    rax_23 = core::str::validations::next_code_point::h1047ff23da431e49(&var_a8, arg1);
    int32_t rax_24 = 0x110000;
    
    if (rax_23 & 1)
        rax_24 = rdx_3;
    
    if (rax_24 == 0x2b)
    {
        void* rax_30;
        uint64_t rdx_5;
        rax_30 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, r12_2, r14_1);
        
        if (!rax_30)
        {
            core::str::slice_error_fail::h1a2885084e28d077(r12_2, r14_1, 1, r14_1);
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_f8, rax_30, rdx_5);
        *(arg1 + 0x18) = var_e8;
        *(arg1 + 8) = var_f8;
        *arg1 = -0x7ffffffffffffffa;
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h89a7ff1ac4baee33(&var_c8);
    }
    
    if (rax_24 == 0x110000)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_88, 
        rax_11);
    int128_t var_e0_1 = var_c8;
    int128_t zmm0_7 = var_88;
    var_f8 = zmm0_7;
    arg1[2] = *var_e0_1[8];
    *(arg1 + 0x28) = var_b8_1;
    arg1[1] = var_78;
    int64_t result = var_e0_1;
    *(arg1 + 0x18) = result;
    *arg1 = zmm0_7;
    return result;
}
