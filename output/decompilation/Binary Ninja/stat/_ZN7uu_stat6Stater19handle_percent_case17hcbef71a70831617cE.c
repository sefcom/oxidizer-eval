
  uint64_t uu_stat::Stater::handle_percent_case::hcbef71a70831617c(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4, int64_t arg5, char* arg6, uint64_t arg7)

{
    void* r12 = *arg4;
    uint64_t result = r12 + 1;
    *arg4 = result;
    
    if (result >= arg5)
    {
        *arg1 = 3;
        arg1[1] = 0x25;
    }
    else
    {
        if (result >= arg3)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(result, arg3);
            /* no return */
        }
        
        if (*(arg2 + (r12 << 2) + 4) != 0x25)
        {
            int16_t var_10c_1 = 0;
            int32_t var_110 = 0;
            uu_stat::Stater::process_flags::hab64942a0ebe541a(arg2, arg3, arg4, arg5, &var_110);
            int64_t rbx_2 = *arg4;
            void* rax;
            int64_t rdx_2;
            rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbx_2, arg6, arg7);
            
            if (!rax)
            {
                core::str::slice_error_fail::h1a2885084e28d077(arg6, arg7, rbx_2, arg7);
                /* no return */
            }
            
            char var_70;
            _$LT$str$u20$as$u20$uu_stat..ScanUtil$GT$::scan_num::ha5b104d34638ed06(&var_70, rax, 
                rdx_2);
            void* const var_f8;
            int64_t var_c0_1;
            void var_a8;
            int128_t var_a0;
            int64_t var_90;
            
            if (!(var_70 & 1))
                var_c0_1 = 0;
            else
            {
                int64_t var_60;
                rbx_2 += var_60;
                
                if (rbx_2 >= arg5)
                {
                    label_475315:
                    int64_t rax_1 = core::cmp::Ord::min::h7daa075e7606d488(rbx_2, arg5 - 1);
                    var_f8 = r12;
                    int64_t var_f0_1 = rax_1;
                    char var_e8_1 = 0;
                    int64_t rax_2;
                    int64_t rdx_4;
                    rax_2 = _$LT$core..ops..range..RangeInclusive$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::he315e8eb3b0334b6(&var_f8, arg2, arg3);
                    core::iter::traits::iterator::Iterator::collect::h90f37a8f28207592(&var_a8, 
                        rax_2);
                    var_90 = 0;
                    int128_t var_88_1 = var_a0;
                    char var_78_1 = 1;
                    int64_t* var_58 = &var_90;
                    int64_t (* var_50_1)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_f8 = &data_5199e0;
                    int64_t var_f0_2 = 2;
                    int64_t var_d8_1 = 0;
                    var_e8_1 = &var_58;
                    int64_t var_e0_1 = 1;
                    int128_t var_48;
                    core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_48, &var_f8);
                    var_e0_1 = 1;
                    var_f8 = var_48;
                    int64_t var_38;
                    var_e8_1 = var_38;
                    arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h173a34a4352a059d(&var_f8);
                    arg1[2] = &data_519a38;
                    *arg1 = 5;
                    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(
                        &var_a8);
                }
                
                if (rbx_2 >= arg3)
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rbx_2, arg3);
                    /* no return */
                }
                
                if (*(arg2 + (rbx_2 << 2)) == 0x25)
                    goto label_475315;
                
                int64_t var_68;
                var_c0_1 = var_68;
            }
            
            result = uu_stat::check_bound::h3dee2e7f7020c454(arg6, arg7, arg5, r12, rbx_2);
            int64_t* rcx_3;
            
            if (!result)
            {
                int64_t rsi_8 = arg3;
                
                if (rbx_2 >= rsi_8)
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rbx_2, rsi_8);
                    /* no return */
                }
                
                char var_e8;
                uint64_t var_b8;
                int64_t* rdx_10;
                uint64_t rbp_6;
                int64_t rdi_13;
                
                if (*(arg2 + (rbx_2 << 2)) != 0x2e)
                {
                    rdi_13 = arg2;
                    rbp_6 = 0;
                    rcx_3 = arg1;
                    rdx_10 = arg4;
                }
                else
                {
                    rbx_2 += 1;
                    result = uu_stat::check_bound::h3dee2e7f7020c454(arg6, arg7, arg5, r12, rbx_2);
                    
                    if (result)
                        goto label_475452;
                    
                    void* rax_5;
                    int64_t rdx_9;
                    rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbx_2, arg6, arg7);
                    
                    if (!rax_5)
                    {
                        core::str::slice_error_fail::h1a2885084e28d077(arg6, arg7, rbx_2, arg7);
                        /* no return */
                    }
                    
                    _$LT$str$u20$as$u20$uu_stat..ScanUtil$GT$::scan_num::ha94ea7e66c723cbc(&var_f8, 
                        rax_5, rdx_9);
                    
                    if (!(var_f8 & 1))
                        rbp_6 = 1;
                    else
                    {
                        int32_t var_f0;
                        uint64_t rax_6 = var_f0;
                        var_b8 = rax_6;
                        rbp_6 = ~rax_6 >> 0x1e & 0xfffffffe;
                        rbx_2 += var_e8;
                    }
                    
                    result = uu_stat::check_bound::h3dee2e7f7020c454(arg6, arg7, arg5, r12, rbx_2);
                    rcx_3 = arg1;
                    rsi_8 = arg3;
                    rdx_10 = arg4;
                    rdi_13 = arg2;
                    
                    if (result)
                        goto label_475457;
                }
                
                *rdx_10 = rbx_2;
                result = rbx_2 + 1 < arg5;
                
                if (result & rbx_2 + 1 < rsi_8)
                {
                    int32_t rax_8 = *(rdi_13 + (rbx_2 << 2) + 4);
                    var_70 = rax_8;
                    
                    if (rbx_2 >= rsi_8)
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(rbx_2, rsi_8);
                        /* no return */
                    }
                    
                    if ((*(rdi_13 + (rbx_2 << 2)) | 4) == 0x4c && (rax_8 == 0x72 || rax_8 == 0x64))
                    {
                        var_90 = rdi_13 + (rbx_2 << 2);
                        int128_t var_88;
                        var_88 =
                            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                        *var_88[8] = &var_70;
                        char var_78;
                        var_78 =
                            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                        var_f8 = &data_41cfd0;
                        int64_t var_f0_3 = 2;
                        int64_t var_d8_2 = 0;
                        var_e8 = &var_90;
                        int64_t var_e0_2 = 2;
                        core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_a8, 
                            &var_f8);
                        *rdx_10 = rbx_2 + 1;
                        void* rax_10 = var_a0;
                        var_f8 = rax_10;
                        void* var_f0_4 = *var_a0[8] + rax_10;
                        char rax_11;
                        int32_t rdx_11;
                        rax_11 = core::str::validations::next_code_point::h60eba128fb062bb1(
                            &var_f8, &var_a8);
                        
                        if (!(rax_11 & 1) || rdx_11 == 0x110000)
                        {
                            core::option::unwrap_failed::h893f57cb7db71cb7();
                            /* no return */
                        }
                        
                        arg1[4] = var_10c_1;
                        *(arg1 + 0x1c) = var_110;
                        *arg1 = rbp_6;
                        arg1[1] = var_b8;
                        arg1[2] = var_c0_1;
                        arg1[3] = rdx_11;
                        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_a8);
                    }
                }
                
                if (rbx_2 >= rsi_8)
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rbx_2, rsi_8);
                    /* no return */
                }
                
                result = *(rdi_13 + (rbx_2 << 2));
                rcx_3[4] = var_10c_1;
                *(rcx_3 + 0x1c) = var_110;
                *rcx_3 = rbp_6;
                rcx_3[1] = var_b8;
                rcx_3[2] = var_c0_1;
                rcx_3[3] = result;
            }
            else
            {
                label_475452:
                rcx_3 = arg1;
                label_475457:
                rcx_3[1] = result;
                rcx_3[2] = &data_519a38;
                *rcx_3 = 5;
            }
        }
        else
        {
            *arg4 = r12 + 2;
            *arg1 = 3;
            arg1[1] = 0x25;
        }
    }
    
    return result;
}
