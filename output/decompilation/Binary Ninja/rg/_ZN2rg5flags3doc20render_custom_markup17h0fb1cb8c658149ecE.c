
  int64_t rg::flags::doc::render_custom_markup::h0fb1cb8c658149ec(int128_t* arg1, char* arg2, void* arg3)

{
    void* r15 = arg3;
    char* r14 = arg2;
    char const* const var_40 = "flag-negateinternal error: enter…";
    int64_t var_38 = 0xb;
    int64_t rax;
    uint64_t rdx;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h02ccee15b84dfdd3(r15, 1, 1);
    int64_t var_a8 = rax;
    uint64_t var_a0 = rdx;
    int64_t var_98 = 0;
    char const* const* var_c8 = &var_40;
    int64_t (* var_c0)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    char const (** const var_70)[0xfb] = &data_7ead28;
    int64_t var_68 = 2;
    int64_t var_50 = 0;
    char const* const** var_60 = &var_c8;
    int64_t var_58 = 1;
    int128_t var_88;
    core::option::Option$LT$T$GT$::map_or_else::hd29ff726b4b92504(&var_88, 0, rdx, &var_70);
    var_c8 = var_88;
    
    while (true)
    {
        char rax_2;
        void* rdx_2;
        rax_2 = core::str::_$LT$impl$u20$str$GT$::find::h2e6bfdbb875eb727(r14, r15, &var_c8);
        
        if (!(rax_2 & 1))
            break;
        
        int64_t rax_3;
        int64_t rdx_4;
        rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rdx_2, r14, r15);
        
        if (!rax_3)
        {
            core::str::slice_error_fail::h1a2885084e28d077(r14, r15, nullptr, rdx_2);
            /* no return */
        }
        
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_a8, rax_3, rdx_4 + rax_3);
        int64_t var_78;
        void* rbp_2 = rdx_2 + var_78;
        void* rax_4;
        int64_t rdx_7;
        rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbp_2, r14, r15);
        
        if (!rax_4)
        {
            core::str::slice_error_fail::h1a2885084e28d077(r14, r15, rbp_2, r15);
            /* no return */
        }
        
        char rax_5;
        void* rdx_8;
        rax_5 = core::str::_$LT$impl$u20$str$GT$::find::h93486ebb28bd6af0(rax_4, rdx_7);
        
        if (!(rax_5 & 1))
        {
            var_88 = &var_c8;
            *var_88[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_70 = &data_7ead48;
            int64_t var_68_1 = 2;
            int64_t var_50_1 = 0;
            int128_t* var_60_1 = &var_88;
            int64_t var_58_1 = 1;
            core::panicking::panic_fmt::h96f341d36638c225(&var_70);
            /* no return */
        }
        
        void* rbx_2 = rdx_8 + rbp_2;
        void* rax_6;
        uint64_t rdx_10;
        rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rbp_2, rbx_2, r14, r15);
        
        if (!rax_6)
        {
            core::str::slice_error_fail::h1a2885084e28d077(r14, r15, rbp_2, rbx_2);
            /* no return */
        }
        
        rg::flags::doc::man::generate_flag::_$u7b$$u7b$closure$u7d$$u7d$::h4e6e445adcbab60f(rax_6, 
            rdx_10, &var_a8);
        void* rax_7;
        void* rdx_13;
        rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbx_2 + 1, r14, r15);
        
        if (!rax_7)
        {
            core::str::slice_error_fail::h1a2885084e28d077(r14, r15, rbx_2 + 1, r15);
            /* no return */
        }
        
        r15 = rdx_13;
        r14 = rax_7;
    }
    
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h2fdea5a3ee2c8f62(&var_a8, r14, r15 + r14);
    arg1[1] = var_98;
    *arg1 = var_a8;
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_c8);
}
