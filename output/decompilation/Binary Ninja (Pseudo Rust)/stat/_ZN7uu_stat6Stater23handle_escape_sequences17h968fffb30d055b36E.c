
  fn uu_stat::Stater::handle_escape_sequences::h968fffb30d055b36(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i64, arg5: i64, arg6: *mut i8, arg7: i64) -> u64

{
    let r12: i64 = *arg4;
    let mut r14: i64 = r12 + 1;
    *arg4 = r14;
    let mut result: u64;
    let mut var_98: *mut c_void;
    let mut var_68: *mut i32;
    let mut var_58: *mut i64;
    
    if r14 >= arg5
    {
        let mut rax: *mut i32;
        let mut rdx: i64;
        rax = uucore::util_name::h074417a1e6395129();
        var_68 = rax;
        let var_60_1: i64 = rdx;
        var_58 = &var_68;
        let var_50_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        var_98 = &data_519e38;
        let var_90_1: i64 = 2;
        let var_78_1: i64 = 0;
        let var_88_1: *mut *mut i64 = &var_58;
        let mut var_80_1: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
        var_98 = &data_519e58;
        let var_90_2: i64 = 1;
        let var_88_2: i64 = 8;
        var_80_1 = {0};
        result = std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
        arg1[1] = 0x5c;
        *arg1 = 3;
    }
    else
    {
        if r14 >= arg3
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(r14, arg3);
            /* no return */
        }
        
        result = *(arg2 + (r12 << 2) + 4);
        let rcx: u64 = result - 0x22;
        
        if rcx > 0x56
        {
            'label_4758db:
            
            if (result & 0xfffffff8) != 0x30
            {
                let mut var_44: i32 = result;
                let mut rax_6: *mut i32;
                let mut rdx_6: i64;
                rax_6 = uucore::util_name::h074417a1e6395129();
                var_68 = rax_6;
                let var_60_3: i64 = rdx_6;
                var_58 = &var_68;
                let var_50_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
                var_98 = &data_519e38;
                let var_90_5: i64 = 2;
                let var_78_3: i64 = 0;
                let var_88_5: *mut *mut i64 = &var_58;
                let var_80_3: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
                var_68 = &var_44;
                let var_60_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                    _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                var_98 = &data_519e88;
                let var_90_6: i64 = 2;
                let var_78_4: i64 = 0;
                let var_88_6: *mut *mut i32 = &var_68;
                let var_80_4: i64 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
                result = var_44;
                arg1[1] = result;
                *arg1 = 4;
            }
            else
            {
                let mut rbp_1: i8 = 0;
                let mut r13_1: i32 = 0;
                let var_40_1: i64 = arg3;
                let mut cond:0_1: bool;
                
                do
                {
                    if r14 >= arg3
                    {
                        core::panicking::panic_bounds_check::h025cadc56a971af7(r14, var_40_1);
                        /* no return */
                    }
                    
                    let mut rax_1: i8;
                    let mut rdx_1: i8;
                    rax_1 =
                        core::char::methods::_$LT$impl$u20$char$GT$::to_digit::hcc2263739e531bec(
                        *(arg2 + (r14 << 2)), 8);
                    
                    if (rax_1 & 1) == 0
                    {
                        break;
                    }
                    
                    rbp_1 = rdx_1 + (rbp_1 << 3);
                    r14 += 1;
                    *arg4 = r14;
                    
                    if r14 >= arg5
                    {
                        break;
                    }
                    
                    cond:0_1 = r13_1 < 2;
                    r13_1 += 1;
                    arg3 = var_40_1;
                } while cond:0_1;
                *arg4 = r14 - 1;
                result = arg1;
                *(result + 8) = rbp_1;
                *result = 4;
            }
        }
        else
        {
            match rcx
            {
                0 =>
                {
                    arg1[1] = 0x22;
                    *arg1 = 4;
                }
                1 | 2 | 3 | 4 | 6 | 7 | 8 | 9 | 0xa | 0xb | 0xc | 0xd | 0xe | 0xf | 0x10 | 0x11 |
                    0x12 | 0x13 | 0x14 | 0x15 | 0x16 | 0x17 | 0x18 | 0x19 | 0x1a | 0x1b | 0x1c |
                    0x1d | 0x1e | 0x1f | 0x20 | 0x21 | 0x22 | 0x23 | 0x24 | 0x25 | 0x26 | 0x27 |
                    0x28 | 0x29 | 0x2a | 0x2b | 0x2c | 0x2d | 0x2e | 0x2f | 0x30 | 0x31 | 0x32 |
                    0x33 | 0x34 | 0x35 | 0x36 | 0x37 | 0x38 | 0x39 | 0x3b | 0x3c | 0x3d | 0x3e |
                    0x41 | 0x42 | 0x43 | 0x45 | 0x46 | 0x47 | 0x48 | 0x49 | 0x4a | 0x4b | 0x4d |
                    0x4e | 0x4f | 0x51 | 0x53 | 0x54 | 0x55 =>
                {
                    goto 'label_4758db;
                }
                5 =>
                {
                    arg1[1] = 0x27;
                    *arg1 = 4;
                }
                0x3a =>
                {
                    arg1[1] = 0x5c;
                    *arg1 = 4;
                }
                0x3f =>
                {
                    arg1[1] = 7;
                    *arg1 = 4;
                }
                0x40 =>
                {
                    arg1[1] = 8;
                    *arg1 = 4;
                }
                0x44 =>
                {
                    arg1[1] = 0xc;
                    *arg1 = 4;
                }
                0x4c =>
                {
                    arg1[1] = 0xa;
                    *arg1 = 4;
                }
                0x50 =>
                {
                    arg1[1] = 0xd;
                    *arg1 = 4;
                }
                0x52 =>
                {
                    arg1[1] = 9;
                    *arg1 = 4;
                }
                0x56 =>
                {
                    if r12 + 2 >= arg5
                    {
                        let mut rax_7: *mut i32;
                        let mut rdx_7: i64;
                        rax_7 = uucore::util_name::h074417a1e6395129();
                        var_68 = rax_7;
                        let var_60_5: i64 = rdx_7;
                        var_58 = &var_68;
                        let var_50_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
                        var_98 = &data_519e38;
                        let var_90_7: i64 = 2;
                        let var_78_5: i64 = 0;
                        let var_88_7: *mut *mut i64 = &var_58;
                        let mut var_80_5: i64 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
                        var_98 = &data_519e78;
                        let var_90_8: i64 = 1;
                        let var_88_8: i64 = 8;
                        var_80_5 = {0};
                        result = std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
                        arg1[1] = 0x78;
                        *arg1 = 4;
                    }
                    else
                    {
                        let mut rax_4: *mut c_void;
                        let mut rdx_3: i64;
                        rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r12 + 2, arg6, arg7);
                        
                        if rax_4 == 0
                        {
                            core::str::slice_error_fail::h1a2885084e28d077(arg6, arg7, r12 + 2, 
                                arg7);
                            /* no return */
                        }
                        
                        let mut rdx_4: i64;
                        result =
                            _$LT$str$u20$as$u20$uu_stat..ScanUtil$GT$::scan_char::hcad4fc309192c5fe(
                            rax_4, rdx_3, 0x10);
                        
                        if result != 0x110000
                        {
                            *arg4 = rdx_4 + r14;
                            arg1[1] = result;
                            *arg1 = 4;
                        }
                        else
                        {
                            let mut rax_5: *mut i32;
                            let mut rdx_5: i64;
                            rax_5 = uucore::util_name::h074417a1e6395129();
                            var_68 = rax_5;
                            let var_60_2: i64 = rdx_5;
                            var_58 = &var_68;
                            let var_50_2: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
                            var_98 = &data_519e38;
                            let var_90_3: i64 = 2;
                            let var_78_2: i64 = 0;
                            let var_88_3: *mut *mut i64 = &var_58;
                            let mut var_80_2: i64 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
                            var_98 = &data_519e68;
                            let var_90_4: i64 = 1;
                            let var_88_4: i64 = 8;
                            var_80_2 = {0};
                            result = std::io::stdio::_eprint::h57899770eacec2ad(&var_98);
                            arg1[1] = 0x78;
                            *arg1 = 4;
                        }
                    }
                }
            }
        }
    }
    result
}
