
  int64_t* uu_truncate::parse_mode_and_size::hbf18cbb89603c372(uint64_t arg1, int64_t arg2, int64_t arg3)

{
    void* rax;
    uint64_t rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_matches::ha02f30b080304904(arg2, arg3);
    void* r15 = rax;
    uint64_t r14 = rdx;
    void* var_68 = r15;
    void* var_60 = rdx + r15;
    int32_t rax_3;
    int32_t rdx_1;
    rax_3 = core::str::validations::next_code_point::h369b2919962b1982(&var_68, arg1);
    int64_t* result;
    
    if (!rax_3)
    {
        int128_t var_38;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h40f585cb9c895814(&var_38, 
            r15, r14);
        *arg1 = 1;
        *(arg1 + 8) = var_38;
        int64_t* result_1;
        result = result_1;
        *(arg1 + 0x18) = result;
    }
    else
    {
        if (rdx_1 <= 0x3e && TEST_BITQ(0x5000a82000000000, rdx_1))
        {
            void* rax_5;
            uint64_t rdx_2;
            rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r15, r14);
            
            if (!rax_5)
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(r15, r14, 1, r14);
                /* no return */
            }
            
            r15 = rax_5;
            r14 = rdx_2;
        }
        
        int32_t var_58;
        result = uucore::parser::parse_size::parse_size_u64::h6825c2c9656edafa(&var_58, r15, r14);
        int64_t (* rdi_4)() = uu_truncate::TruncateMode::Absolute::h347de2dbbee0cf00;
        uint64_t r12_2 = rdx_1 - 0x25;
        
        if (r12_2 > 0x19)
            goto label_4ae4aa;
        
        switch (r12_2)
        {
            case 0:
            {
                rdi_4 = uu_truncate::TruncateMode::RoundUp::h3f2c9049b3c57539;
                
                if (var_58 == 3)
                    goto label_4ae4b6;
                
                goto label_4ae4da;
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
                goto label_4ae4aa;
            }
            case 6:
            {
                rdi_4 = uu_truncate::TruncateMode::Extend::h27ea7d0ae1c2c8a5;
                
                if (var_58 == 3)
                    goto label_4ae4b6;
                
                goto label_4ae4da;
            }
            case 8:
            {
                rdi_4 = uu_truncate::TruncateMode::Reduce::h771393dc84ef47d0;
                
                if (var_58 == 3)
                    goto label_4ae4b6;
                
                goto label_4ae4da;
            }
            case 0xa:
            {
                rdi_4 = uu_truncate::TruncateMode::RoundDown::h0cc310891f82e44a;
                label_4ae4aa:
                
                if (var_58 != 3)
                {
                    label_4ae4da:
                    int128_t zmm0_1 = var_58;
                    int128_t var_48;
                    *(arg1 + 0x10) = var_48;
                    *arg1 = zmm0_1;
                }
                else
                {
                    label_4ae4b6:
                    int64_t var_50;
                    int64_t rdx_5;
                    result =
                        core::ops::function::FnOnce::call_once::h6b1857dc3b9e4b9a(rdi_4, var_50);
                    *(arg1 + 8) = result;
                    *(arg1 + 0x10) = rdx_5;
                    *arg1 = 3;
                }
                break;
            }
            case 0x17:
            {
                rdi_4 = uu_truncate::TruncateMode::AtMost::hdf07773400549dc0;
                
                if (var_58 == 3)
                    goto label_4ae4b6;
                
                goto label_4ae4da;
            }
            case 0x19:
            {
                rdi_4 = uu_truncate::TruncateMode::AtLeast::h331a3778f5ffdb1c;
                
                if (var_58 == 3)
                    goto label_4ae4b6;
                
                goto label_4ae4da;
            }
        }
    }
    
    return result;
}
