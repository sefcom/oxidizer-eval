
  char* uu_numfmt::format::parse_suffix::h65381ef2a47d074c(uint64_t arg1, char* arg2, int64_t arg3, int64_t arg4 @ r13)

{
    int64_t var_20 = arg4;
    
    if (!arg3)
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4c3223c430555e40(arg1, "invalid number: ''invalid suffix…", 0x12);
    
    int32_t var_90 = 0;
    char rbp = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h8acf7e79f75ef2f1(arg2, arg3, 
        core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x69, &var_90), 1);
    char* var_a0 = arg2;
    void* var_98 = &arg2[arg3];
    
    if (rbp)
        core::str::validations::next_code_point_reverse::h55d2d504630d5ed9(&var_a0, arg1);
    
    char rax_3;
    int32_t rdx_1;
    rax_3 = core::str::validations::next_code_point_reverse::h55d2d504630d5ed9(&var_a0, arg1);
    int64_t var_60;
    
    if (rax_3 & 1)
    {
        uint64_t rax_4 = rdx_1 - 0x45;
        uint64_t r12_2;
        
        if (rax_4 <= 0x15)
        {
            switch (rax_4)
            {
                case 0:
                {
                    arg4 = 5;
                    break;
                }
                case 1:
                case 3:
                case 4:
                case 5:
                case 7:
                case 9:
                case 0xa:
                case 0xc:
                case 0xd:
                case 0xe:
                case 0x10:
                case 0x11:
                case 0x12:
                case 0x13:
                {
                    goto label_4698eb;
                }
                case 2:
                {
                    arg4 = 2;
                    break;
                }
                case 6:
                {
                    arg4 = 0;
                    break;
                }
                case 8:
                {
                    arg4 = 1;
                    break;
                }
                case 0xb:
                {
                    arg4 = 4;
                    break;
                }
                case 0xf:
                {
                    arg4 = 3;
                    break;
                }
                case 0x14:
                {
                    arg4 = 7;
                    break;
                }
                case 0x15:
                {
                    arg4 = 6;
                    break;
                }
            }
            
            r12_2 = ~rbp;
            goto label_469990;
        }
        
        label_4698eb:
        rax_4 = rdx_1 - 0x3a < 0xfffffff6;
        
        if (!(rbp | rax_4))
        {
            rbp = 2;
            r12_2 = 0;
            label_469990:
            int64_t r12_3 = r12_2 + arg3;
            char* rax_7;
            int64_t* rdx_5;
            rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r12_3, arg2, arg3);
            
            if (!rax_7)
            {
                core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 0, r12_3);
                /* no return */
            }
            
            char* result = core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::h05023748d9faa6d2(&var_60, rax_7, rdx_5);
            int64_t zmm0_2;
            
            if (!var_60)
            {
                int64_t var_58;
                zmm0_2 = var_58;
                label_469a02:
                *(arg1 + 8) = zmm0_2;
                *(arg1 + 0x10) = arg4;
                *(arg1 + 0x11) = rbp;
                *arg1 = -0x8000000000000000;
            }
            else
            {
                uu_numfmt::format::parse_suffix::_$u7b$$u7b$closure$u7d$$u7d$::h697123fed7d6da64(
                    &var_90);
                result = var_90;
                int64_t var_88;
                zmm0_2 = var_88;
                
                if (result == -0x8000000000000000)
                    goto label_469a02;
                
                *arg1 = result;
                *(arg1 + 8) = zmm0_2;
                int64_t var_80;
                *(arg1 + 0x10) = var_80;
            }
            return result;
        }
    }
    
    var_60 = 0;
    char* var_58_1 = arg2;
    int64_t var_50_1 = arg3;
    char var_48_1 = 1;
    int64_t* var_40 = &var_60;
    int64_t (* var_38_1)(int32_t* arg1, int64_t* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    var_90 = &data_5023a0;
    int64_t var_88_1 = 1;
    int64_t var_70_1 = 0;
    int64_t** var_80_1 = &var_40;
    int64_t var_78_1 = 1;
    return core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(arg1, &var_90);
}
