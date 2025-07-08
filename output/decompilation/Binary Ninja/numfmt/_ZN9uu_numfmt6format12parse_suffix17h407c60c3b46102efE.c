
  char* uu_numfmt::format::parse_suffix::h407c60c3b46102ef(uint64_t arg1, char* arg2, void* arg3, int64_t arg4 @ r12)

{
    int64_t var_28 = arg4;
    
    if (!arg3)
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h523a2f825c855b37(
            arg1, "invalid number: ''invalid suffix…", 0x12);
    
    int32_t var_90 = 0;
    char rbp = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::ha109e61deb96259b(arg2, arg3, 
        core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x69, &var_90), 1);
    char* var_a0 = arg2;
    int64_t var_98 = arg2 + arg3;
    
    if (rbp)
        core::str::validations::next_code_point_reverse::he73eefe5b7d03fc3(&var_a0, arg1);
    
    int32_t rax_3;
    int32_t rdx_1;
    rax_3 = core::str::validations::next_code_point_reverse::he73eefe5b7d03fc3(&var_a0, arg1);
    int64_t var_60;
    
    if (rax_3)
    {
        uint64_t rax_4 = rdx_1 - 0x45;
        void* rcx_4;
        
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
                    goto label_4c348b;
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
            
            uint64_t rcx_3 = ~rbp;
            rax_4 = 0;
            rcx_4 = rcx_3 + arg3;
            
            if (rcx_3 == -(arg3))
                goto label_4c3565;
            
            goto label_4c3537;
        }
        
        label_4c348b:
        rax_4 = rdx_1 - 0x3a < 0xfffffff6;
        
        if (!(rbp | rax_4))
        {
            rax_4 = 1;
            rbp = 2;
            rcx_4 = arg3;
            
            if (0 != -(arg3))
            {
                label_4c3537:
                
                if (rcx_4 < arg3)
                {
                    if (*(arg2 + rcx_4) > 0xbf)
                        goto label_4c3565;
                    
                    core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, rcx_4);
                    /* no return */
                }
                
                if (rax_4)
                    goto label_4c3565;
                
                core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, nullptr, rcx_4);
                /* no return */
            }
            
            label_4c3565:
            char* result = core::num::dec2flt::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$f64$GT$::from_str::hfde7dd7a3aaead31(&var_60, arg2, rcx_4);
            int64_t zmm0_2;
            
            if (!var_60)
            {
                int64_t var_58;
                zmm0_2 = var_58;
                label_4c35ab:
                *(arg1 + 8) = zmm0_2;
                *(arg1 + 0x10) = arg4;
                *(arg1 + 0x11) = rbp;
                *arg1 = -0x8000000000000000;
            }
            else
            {
                uu_numfmt::format::parse_suffix::_$u7b$$u7b$closure$u7d$$u7d$::hc249515d7f336463(
                    &var_90);
                result = var_90;
                int64_t var_88;
                zmm0_2 = var_88;
                
                if (result == -0x8000000000000000)
                    goto label_4c35ab;
                
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
    void* var_50_1 = arg3;
    char var_48_1 = 1;
    int64_t* var_40 = &var_60;
    int64_t (* var_38_1)(void* arg1, void* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    var_90 = &data_535ac0;
    int64_t var_88_1 = 1;
    int64_t var_70_1 = 0;
    int64_t** var_80_1 = &var_40;
    int64_t var_78_1 = 1;
    return core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(arg1, &var_90);
}
