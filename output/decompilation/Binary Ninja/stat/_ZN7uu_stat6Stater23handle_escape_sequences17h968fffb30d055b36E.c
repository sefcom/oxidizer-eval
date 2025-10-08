
  uint64_t uu_stat::Stater::handle_escape_sequences::h968fffb30d055b36(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4, int64_t arg5, char* arg6, int64_t arg7)

{
    int64_t r12 = *arg4;
    int64_t r14 = r12 + 1;
    *arg4 = r14;
    uint64_t result;
    void* const var_98;
    int32_t* var_68;
    int64_t* var_58;
    
    if (r14 >= arg5)
    {
        int32_t* rax;
        int64_t rdx;
        rax = uucore::util_name::h074417a1e6395129();
        var_68 = rax;
        int64_t var_60_1 = rdx;
        var_58 = &var_68;
        int64_t (* var_50_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        var_98 = &data_519e38;
        int64_t var_90_1 = 2;
        int64_t var_78_1 = 0;
        int64_t** var_88_1 = &var_58;
        int64_t var_80_1 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
        var_98 = &data_519e58;
        int64_t var_90_2 = 1;
        int64_t var_88_2 = 8;
        var_80_1 = {0};
        result = std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
        arg1[1] = 0x5c;
        *arg1 = 3;
    }
    else
    {
        if (r14 >= arg3)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(r14, arg3);
            /* no return */
        }
        
        result = *(arg2 + (r12 << 2) + 4);
        uint64_t rcx = result - 0x22;
        
        if (rcx > 0x56)
        {
            label_4758db:
            
            if ((result & 0xfffffff8) != 0x30)
            {
                int32_t var_44 = result;
                int32_t* rax_6;
                int64_t rdx_6;
                rax_6 = uucore::util_name::h074417a1e6395129();
                var_68 = rax_6;
                int64_t var_60_3 = rdx_6;
                var_58 = &var_68;
                int64_t (* var_50_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
                var_98 = &data_519e38;
                int64_t var_90_5 = 2;
                int64_t var_78_3 = 0;
                int64_t** var_88_5 = &var_58;
                int64_t var_80_3 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
                var_68 = &var_44;
                int64_t (* var_60_4)(int32_t* arg1, int64_t* arg2) =
                    _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                var_98 = &data_519e88;
                int64_t var_90_6 = 2;
                int64_t var_78_4 = 0;
                int32_t** var_88_6 = &var_68;
                int64_t var_80_4 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
                result = var_44;
                arg1[1] = result;
                *arg1 = 4;
            }
            else
            {
                char rbp_1 = 0;
                int32_t r13_1 = 0;
                int64_t var_40_1 = arg3;
                bool cond:0_1;
                
                do
                {
                    if (r14 >= arg3)
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(r14, var_40_1);
                        /* no return */
                    }
                    
                    char rax_1;
                    char rdx_1;
                    rax_1 =
                        core::char::methods::_$LT$impl$u20$char$GT$::to_digit::hcc2263739e531bec(
                        *(arg2 + (r14 << 2)), 8);
                    
                    if (!(rax_1 & 1))
                        break;
                    
                    rbp_1 = rdx_1 + (rbp_1 << 3);
                    r14 += 1;
                    *arg4 = r14;
                    
                    if (r14 >= arg5)
                        break;
                    
                    cond:0_1 = r13_1 < 2;
                    r13_1 += 1;
                    arg3 = var_40_1;
                } while (cond:0_1);
                *arg4 = r14 - 1;
                result = arg1;
                *(result + 8) = rbp_1;
                *result = 4;
            }
        }
        else
            switch (rcx)
            {
                case 0:
                {
                    arg1[1] = 0x22;
                    *arg1 = 4;
                    break;
                }
                case 1:
                case 2:
                case 3:
                case 4:
                case 6:
                case 7:
                case 8:
                case 9:
                case 0xa:
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
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1a:
                case 0x1b:
                case 0x1c:
                case 0x1d:
                case 0x1e:
                case 0x1f:
                case 0x20:
                case 0x21:
                case 0x22:
                case 0x23:
                case 0x24:
                case 0x25:
                case 0x26:
                case 0x27:
                case 0x28:
                case 0x29:
                case 0x2a:
                case 0x2b:
                case 0x2c:
                case 0x2d:
                case 0x2e:
                case 0x2f:
                case 0x30:
                case 0x31:
                case 0x32:
                case 0x33:
                case 0x34:
                case 0x35:
                case 0x36:
                case 0x37:
                case 0x38:
                case 0x39:
                case 0x3b:
                case 0x3c:
                case 0x3d:
                case 0x3e:
                case 0x41:
                case 0x42:
                case 0x43:
                case 0x45:
                case 0x46:
                case 0x47:
                case 0x48:
                case 0x49:
                case 0x4a:
                case 0x4b:
                case 0x4d:
                case 0x4e:
                case 0x4f:
                case 0x51:
                case 0x53:
                case 0x54:
                case 0x55:
                {
                    goto label_4758db;
                }
                case 5:
                {
                    arg1[1] = 0x27;
                    *arg1 = 4;
                    break;
                }
                case 0x3a:
                {
                    arg1[1] = 0x5c;
                    *arg1 = 4;
                    break;
                }
                case 0x3f:
                {
                    arg1[1] = 7;
                    *arg1 = 4;
                    break;
                }
                case 0x40:
                {
                    arg1[1] = 8;
                    *arg1 = 4;
                    break;
                }
                case 0x44:
                {
                    arg1[1] = 0xc;
                    *arg1 = 4;
                    break;
                }
                case 0x4c:
                {
                    arg1[1] = 0xa;
                    *arg1 = 4;
                    break;
                }
                case 0x50:
                {
                    arg1[1] = 0xd;
                    *arg1 = 4;
                    break;
                }
                case 0x52:
                {
                    arg1[1] = 9;
                    *arg1 = 4;
                    break;
                }
                case 0x56:
                {
                    if (r12 + 2 >= arg5)
                    {
                        int32_t* rax_7;
                        int64_t rdx_7;
                        rax_7 = uucore::util_name::h074417a1e6395129();
                        var_68 = rax_7;
                        int64_t var_60_5 = rdx_7;
                        var_58 = &var_68;
                        int64_t (* var_50_4)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
                        var_98 = &data_519e38;
                        int64_t var_90_7 = 2;
                        int64_t var_78_5 = 0;
                        int64_t** var_88_7 = &var_58;
                        int64_t var_80_5 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
                        var_98 = &data_519e78;
                        int64_t var_90_8 = 1;
                        int64_t var_88_8 = 8;
                        var_80_5 = {0};
                        result = std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
                        arg1[1] = 0x78;
                        *arg1 = 4;
                    }
                    else
                    {
                        void* rax_4;
                        int64_t rdx_3;
                        rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r12 + 2, arg6, arg7);
                        
                        if (!rax_4)
                        {
                            core::str::slice_error_fail::h1a2885084e28d077(arg6, arg7, r12 + 2, 
                                arg7);
                            /* no return */
                        }
                        
                        int64_t rdx_4;
                        result =
                            _$LT$str$u20$as$u20$uu_stat..ScanUtil$GT$::scan_char::hcad4fc309192c5fe(
                            rax_4, rdx_3, 0x10);
                        
                        if (result != 0x110000)
                        {
                            *arg4 = rdx_4 + r14;
                            arg1[1] = result;
                            *arg1 = 4;
                        }
                        else
                        {
                            int32_t* rax_5;
                            int64_t rdx_5;
                            rax_5 = uucore::util_name::h074417a1e6395129();
                            var_68 = rax_5;
                            int64_t var_60_2 = rdx_5;
                            var_58 = &var_68;
                            int64_t (* var_50_2)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
                            var_98 = &data_519e38;
                            int64_t var_90_3 = 2;
                            int64_t var_78_2 = 0;
                            int64_t** var_88_3 = &var_58;
                            int64_t var_80_2 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
                            var_98 = &data_519e68;
                            int64_t var_90_4 = 1;
                            int64_t var_88_4 = 8;
                            var_80_2 = {0};
                            result = std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
                            arg1[1] = 0x78;
                            *arg1 = 4;
                        }
                    }
                    break;
                }
            }
    }
    return result;
}
