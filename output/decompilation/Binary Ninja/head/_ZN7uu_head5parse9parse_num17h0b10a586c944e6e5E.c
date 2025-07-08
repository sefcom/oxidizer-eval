
  uint64_t uu_head::parse::parse_num::h0b10a586c944e6e5(uint64_t arg1, int64_t arg2, uint64_t arg3)

{
    char* rax;
    void* rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::h3f31f53537262b42(arg2, arg3);
    char* r15 = rax;
    void* r14 = rdx;
    char* var_50 = r15;
    int32_t rax_2;
    int32_t rdx_1;
    rax_2 = core::str::validations::next_code_point::hbd45400f08067c57(&var_50, arg1);
    
    if (!rax_2)
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h06f047f66f37fa7f(arg1 + 8, 
            arg2, arg3);
        *arg1 = 1;
    }
    else
    {
        int32_t rbp_1;
        
        if (rdx_1 == 0x2b || rdx_1 == 0x2d)
        {
            char* rax_3;
            void* rdx_2;
            rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r15, r14);
            
            if (!rax_3)
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(r15, r14, 1, r14);
                /* no return */
            }
            
            rbp_1 = rdx_1 == 0x2d;
            r15 = rax_3;
            r14 = rdx_2;
        }
        else
            rbp_1 = 0;
        
        void* rax_4;
        uint64_t rdx_4;
        rax_4 =
            core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h64aa6c7f4fac8ad0(r15, r14, 0x30);
        
        if (!rdx_4)
        {
            *(arg1 + 8) = 0;
            *(arg1 + 0x10) = rbp_1;
            *arg1 = 3;
        }
        else
        {
            uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_50, rax_4, rdx_4);
            
            if (var_50 != 3)
            {
                int128_t zmm0_1 = var_50;
                int128_t var_40;
                *(arg1 + 0x10) = var_40;
                *arg1 = zmm0_1;
            }
            else
            {
                *(arg1 + 8) = rax + rdx;
                *(arg1 + 0x10) = rbp_1;
                *arg1 = 3;
            }
        }
    }
    
    return arg1;
}
