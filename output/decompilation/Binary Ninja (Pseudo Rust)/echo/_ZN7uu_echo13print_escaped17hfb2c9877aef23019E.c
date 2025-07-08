
  fn uu_echo::print_escaped::hfb2c9877aef23019(arg1: *mut i8, arg2: i64, arg3: i64, arg4: *mut i64, arg5: *mut i8 @ rax) -> u64

{
    let mut var_40: i64 = arg2;
    let var_38: i64 = arg3 + arg2;
    let mut rcx: i64 = 0;
    
    loop
    {
        let mut var_50: i64 = 0;
        
        if rcx == 0
        {
            arg5 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h67bb1ffa54fe1617(&var_40);
        }
        
        let mut result: u64;
        
        if arg5 == 0
        {
            result = arg1;
            *result = 0;
            return result;
        }
        
        let rax: i8 = *arg5;
        let var_48: *mut i8;
        let mut var_5a: i8;
        let mut rsi_2: *mut i8;
        let mut rdi_4: *mut i64;
        
        if rax != 0x5c
        {
            var_5a = rax;
            'label_4a4769:
            rdi_4 = arg4;
            rsi_2 = &var_5a;
            'label_4a476f:
            result = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(rdi_4, rsi_2, 1);
            
            if result != 0
            {
                *arg1.byte_offset(8) = result;
                *arg1 = 1;
                return result;
            }
        }
        else
        {
            let rax_2: *mut i8 = *
                core::option::Option$LT$T$GT$::get_or_insert_with::hedc8c424b7d46203(&var_50, 
                &var_40);
            let mut rax_3: i8;
            
            if rax_2 != 0
            {
                rax_3 = *rax_2;
            }
            
            if rax_2 != 0 && rax_3 - 0x31 < 7
            {
                let mut rax_4: i8;
                let mut rdx_3: i8;
                rax_4 = uu_echo::parse_backslash_number::he56ed8545e2dc3bc(&var_50, 0, rax_3);
                
                if (rax_4 & 1) != 0
                {
                    var_5a = rdx_3;
                    goto 'label_4a4769;
                }
                
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            let mut rax_6: *mut i8 = var_48;
            let cond:0_1: bool = var_50 == 0;
            var_50 = 0;
            
            if cond:0_1
            {
                rax_6 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h67bb1ffa54fe1617(&var_40);
                
                if rax_6 == 0
                {
                    'label_4a47f5:
                    rdi_4 = arg4;
                    rsi_2 = &data_41b404[0x17];
                    goto 'label_4a476f;
                }
            }
            else if rax_6 == 0
            {
                goto 'label_4a47f5;
            }
            
            result = *rax_6;
            let rcx_2: u64 = result - 0x30;
            let mut rsi: *mut c_void;
            let mut r13_1: u64;
            
            if rcx_2 > 0x48
            {
                'label_4a4858:
                var_5a = 0x5c;
                let var_59_1: i8 = result;
                r13_1 = 2;
                rsi = &var_5a;
            }
            else
            {
                r13_1 = 1;
                let mut var_5b: i8;
                
                match rcx_2
                {
                    0 =>
                    {
                        let mut rax_5: i8;
                        let mut rdx_4: i8;
                        rax_5 =
                            uu_echo::parse_backslash_number::he56ed8545e2dc3bc(&var_50, 1, 0xe0);
                        
                        if (rax_5 & 1) == 0
                        {
                            rsi = &data_41b426;
                        }
                        else
                        {
                            var_5b = rdx_4;
                            rsi = &var_5b;
                        }
                    }
                    1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0xa | 0xb | 0xc | 0xd | 0xe | 0xf | 0x10 |
                        0x11 | 0x12 | 0x13 | 0x14 | 0x15 | 0x16 | 0x17 | 0x18 | 0x19 | 0x1a | 0x1b
                        | 0x1c | 0x1d | 0x1e | 0x1f | 0x20 | 0x21 | 0x22 | 0x23 | 0x24 | 0x25 |
                        0x26 | 0x27 | 0x28 | 0x29 | 0x2a | 0x2b | 0x2d | 0x2e | 0x2f | 0x30 | 0x34
                        | 0x37 | 0x38 | 0x39 | 0x3a | 0x3b | 0x3c | 0x3d | 0x3f | 0x40 | 0x41 |
                        0x43 | 0x45 | 0x47 =>
                    {
                        goto 'label_4a4858;
                    }
                    0x2c =>
                    {
                        rsi = &data_41b404[0x17];
                    }
                    0x31 =>
                    {
                        rsi = &data_41b41c;
                    }
                    0x32 =>
                    {
                        rsi = &data_41b41d;
                    }
                    0x33 =>
                    {
                        arg1[1] = 1;
                        *arg1 = 0;
                        return result;
                    }
                    0x35 =>
                    {
                        rsi = &data_41b41e;
                    }
                    0x36 =>
                    {
                        rsi = &data_41b41f;
                    }
                    0x3e =>
                    {
                        rsi = &data_41b420;
                    }
                    0x42 =>
                    {
                        rsi = &data_41b421;
                    }
                    0x44 =>
                    {
                        rsi = &data_41b422;
                    }
                    0x46 =>
                    {
                        rsi = &data_41b423;
                    }
                    0x48 =>
                    {
                        let mut rax_7: i8;
                        let mut rdx_5: i8;
                        rax_7 =
                            uu_echo::parse_backslash_number::he56ed8545e2dc3bc(&var_50, 2, 0xe0);
                        r13_1 = 2;
                        rsi = &data_41b424;
                        
                        if (rax_7 & 1) != 0
                        {
                            var_5b = rdx_5;
                            rsi = &var_5b;
                            r13_1 = 1;
                        }
                    }
                }
            }
            
            result = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg4, rsi, r13_1);
            
            if result != 0
            {
                *arg1.byte_offset(8) = result;
                result = 1;
                *arg1 = 1;
                return result;
            }
        }
        rcx = var_50;
        arg5 = var_48;
    }
}
