
  int64_t (*)() uu_truncate::parse_mode_and_size::h9caa4c91beef10d4(uint64_t arg1, int64_t arg2, int64_t arg3)

{
    void* rax;
    uint64_t rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::h16e7859628600181(arg2, arg3);
    void* r15 = rax;
    uint64_t r14 = rdx;
    void* var_68 = r15;
    void* var_60 = rdx + r15;
    char rax_3;
    int32_t rdx_1;
    rax_3 = core::str::validations::next_code_point::h3ece29adbd85c47a(&var_68, arg1);
    int64_t (* result)();
    
    if (!(rax_3 & 1))
    {
        int128_t var_38;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc324d0392f7be5de(&var_38, r15, r14);
        *arg1 = 1;
        *(arg1 + 8) = var_38;
        int64_t (* result_1)();
        result = result_1;
        *(arg1 + 0x18) = result;
    }
    else
    {
        if (rdx_1 <= 0x3e && TEST_BITQ(0x5000a82000000000, rdx_1))
        {
            void* rax_5;
            uint64_t rdx_2;
            rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15, r14);
            
            if (!rax_5)
            {
                core::str::slice_error_fail::h1a2885084e28d077(r15, r14, 1, r14);
                /* no return */
            }
            
            r14 = rdx_2;
            r15 = rax_5;
        }
        
        int32_t var_58;
        uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(&var_58, r15, r14);
        result = uu_truncate::TruncateMode::Absolute::haa52d8e79eacf4d9;
        uint64_t r12_2 = rdx_1 - 0x25;
        
        if (r12_2 > 0x19)
            goto label_459a0a;
        
        switch (r12_2)
        {
            case 0:
            {
                result = uu_truncate::TruncateMode::RoundUp::h3665611802199c24;
                
                if (var_58 == 4)
                    goto label_459a16;
                
                goto label_459a37;
            }
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 7:
            case 9:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x18:
            {
                goto label_459a0a;
            }
            case 6:
            {
                result = uu_truncate::TruncateMode::Extend::h02181f0372cbefa4;
                
                if (var_58 == 4)
                    goto label_459a16;
                
                goto label_459a37;
            }
            case 8:
            {
                result = uu_truncate::TruncateMode::Reduce::ha51feeb989b1f368;
                
                if (var_58 == 4)
                    goto label_459a16;
                
                goto label_459a37;
            }
            case 0xa:
            {
                result = uu_truncate::TruncateMode::RoundDown::h60d8b907aa2e6a29;
                label_459a0a:
                
                if (var_58 != 4)
                {
                    label_459a37:
                    int128_t zmm0_1 = var_58;
                    int128_t var_48;
                    *(arg1 + 0x10) = var_48;
                    *arg1 = zmm0_1;
                }
                else
                {
                    label_459a16:
                    int64_t var_50;
                    int64_t rdx_7;
                    result = result(var_50);
                    *(arg1 + 8) = result;
                    *(arg1 + 0x10) = rdx_7;
                    *arg1 = 4;
                }
                break;
            }
            case 0x17:
            {
                result = uu_truncate::TruncateMode::AtMost::hf86653d9dfa9ec56;
                
                if (var_58 == 4)
                    goto label_459a16;
                
                goto label_459a37;
            }
            case 0x19:
            {
                result = uu_truncate::TruncateMode::AtLeast::hdca70991c1d34f87;
                
                if (var_58 == 4)
                    goto label_459a16;
                
                goto label_459a37;
            }
        }
    }
    
    return result;
}
