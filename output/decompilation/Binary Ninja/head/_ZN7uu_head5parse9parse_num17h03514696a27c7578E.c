
  int64_t* uu_head::parse::parse_num::h03514696a27c7578(uint64_t arg1, int64_t arg2, uint64_t arg3)

{
    char* rax;
    int64_t rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::h3dd4052efcf88c0e(arg2, arg3);
    char* r15 = rax;
    int64_t r14 = rdx;
    char* var_50 = r15;
    char rax_2;
    int32_t rdx_1;
    rax_2 = core::str::validations::next_code_point::h2ff41328517a3a4f(&var_50, arg1);
    int64_t* result;
    
    if (!(rax_2 & 1))
    {
        result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc3a09e7815fd3a4c(arg1 + 8, arg2, arg3);
        *arg1 = 1;
    }
    else
    {
        int32_t rbp_1;
        
        if (rdx_1 == 0x2b || rdx_1 == 0x2d)
        {
            char* rax_3;
            int64_t rdx_2;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15, r14);
            
            if (!rax_3)
            {
                core::str::slice_error_fail::h1a2885084e28d077(r15, r14, 1, r14);
                /* no return */
            }
            
            rbp_1 = rdx_1 == 0x2d;
            r14 = rdx_2;
            r15 = rax_3;
        }
        else
            rbp_1 = 0;
        
        uint64_t rdx_4;
        result = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h92d05917bc16c8c8(r15, r14);
        
        if (!rdx_4)
        {
            *(arg1 + 8) = 0;
            *(arg1 + 0x10) = rbp_1;
            *arg1 = 4;
        }
        else
        {
            result = uucore::features::parser::parse_size::parse_size_u64_max::hec104ac5ce610c62(
                &var_50, result, rdx_4);
            
            if (var_50 != 4)
            {
                int128_t zmm0_1 = var_50;
                int128_t var_40;
                *(arg1 + 0x10) = var_40;
                *arg1 = zmm0_1;
            }
            else
            {
                result = &rax[rdx];
                *(arg1 + 8) = result;
                *(arg1 + 0x10) = rbp_1;
                *arg1 = 4;
            }
        }
    }
    
    return result;
}
