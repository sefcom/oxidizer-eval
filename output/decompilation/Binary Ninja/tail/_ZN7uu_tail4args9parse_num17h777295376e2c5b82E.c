
  int64_t uu_tail::args::parse_num::h777295376e2c5b82(uint64_t arg1, int64_t arg2, int64_t arg3)

{
    void* rax;
    uint64_t rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::h7d9223cb22f63277(arg2, arg3);
    void* r15 = rax;
    uint64_t r14 = rdx;
    void* rax_2 = rdx + r15;
    void* var_58 = r15;
    char rax_3;
    int32_t rdx_1;
    rax_3 = core::str::validations::next_code_point::h4e3882b40d59c120(&var_58, arg1);
    int64_t rbp;
    
    if (!(rax_3 & 1))
        rbp = 0;
    else
    {
        void* rax_4;
        uint64_t rdx_3;
        
        if (rdx_1 == 0x2b)
        {
            rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, r15, r14);
            
            if (!rax_4)
            {
                core::str::slice_error_fail::h1a2885084e28d077(r15, r14, 1, r14);
                /* no return */
            }
            
            rbp = 1;
            r14 = rdx_3;
            r15 = rax_4;
        }
        else if (rdx_1 != 0x2d)
            rbp = 0;
        else
        {
            rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, r15, r14);
            
            if (!rax_4)
            {
                core::str::slice_error_fail::h1a2885084e28d077(r15, r14, 1, r14);
                /* no return */
            }
            
            rbp = 0;
            r14 = rdx_3;
            r15 = rax_4;
        }
    }
    
    uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(&var_58, r15, r14);
    int64_t rax_7;
    
    if (var_58 != 4)
    {
        int128_t var_38;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_38, r15, r14);
        int64_t var_28;
        *(arg1 + 0x18) = var_28;
        *(arg1 + 8) = var_38;
        rax_7 = 1;
    }
    else
    {
        if (!rax_2)
        {
            if (!rbp)
                *(arg1 + 8) = 3;
            else
                *(arg1 + 8) = 2;
        }
        else if (!rbp)
        {
            *(arg1 + 8) = 0;
            *(arg1 + 0x10) = rax_2;
        }
        else
        {
            *(arg1 + 8) = 1;
            *(arg1 + 0x10) = rax_2;
        }
        
        rax_7 = 4;
    }
    
    *arg1 = rax_7;
    return core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..features..parser..parse_size..ParseSizeError$GT$$GT$::hf3bc7b467f48f35c(&var_58);
}
