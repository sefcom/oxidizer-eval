
  fn uu_head::uu_head::h50c9b533b8c9e19e(arg1: *mut i64) -> i64

{
    let rax: i64 = arg1[3];
    let rcx: i64 = arg1[4];
    let mut var_60: i64 = rax;
    let var_58: i64 = rax + rcx * 0x18;
    let mut i: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h49c4ce57715093e8(&var_60);
    
    if i != 0
    {
        let rcx_3: i8 = *arg1.byte_offset(0x2a);
        let rcx_4: bool = *arg1.byte_offset(0x29);
        let rsi: bool = arg1[5] != 0 & rcx_4 == 0;
        let rcx_5: i64 = *arg1;
        let rcx_6: i64 = arg1[1];
        let rcx_7: i8 = *arg1.byte_offset(0x2b);
        let mut r15_1: *mut *mut c_void = nullptr;
        
        do
        {
            let mut var_108: *mut i32;
            let mut var_100: i8;
            let mut var_f0: i64;
            let mut var_d8: *mut *mut c_void;
            let mut var_d0: i32;
            let mut var_b0: *const i8;
            let mut var_a0: *mut c_void;
            let mut var_70: i64;
            let mut rbx_1: *const i8;
            let mut r12_1: u64;
            
            if rcx_3 == 0
            {
                loop
                {
                    rbx_1 = *i.byte_offset(8);
                    r12_1 = *i.byte_offset(0x10);
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he651f17c72d2bfc1(rbx_1, r12_1, "-: \nsrc/uu/head/src/head.rs==> …", 1) != 0
                    {
                        break;
                    }
                    
                    var_b0 = rbx_1;
                    let var_a8_1: u64 = r12_1;
                    std::fs::File::open::h0c25e6f8dfd437ae(&var_d0, rbx_1);
                    
                    if var_d0 == 0
                    {
                        let fd_1: i32;
                        let mut fd: i32 = fd_1;
                        
                        if rcx <= 1
                        {
                            if rcx_4 != 0
                            {
                                'label_4ba6f1:
                                
                                if (r15_1 & 1) != 0
                                {
                                    var_108 = &data_52cf20;
                                    let var_100_3: i64 = 1;
                                    let var_f8_7: i64 = 8;
                                    var_f0 = {0};
                                    std::io::stdio::_print::he918bceb0c89db46(&var_108);
                                }
                                
                                var_a0 = &var_b0;
                                let var_98_4: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h05a2559eaa6ef57c;
                                var_108 = &data_52cf40;
                                var_100 = 2;
                                let var_e8_4: i64 = 0;
                                let var_f8_8: *mut *mut c_void = &var_a0;
                                var_f0 = 1;
                                std::io::stdio::_print::he918bceb0c89db46(&var_108);
                            }
                        }
                        else if rsi == 0
                        {
                            goto 'label_4ba6f1;
                        }
                        
                        let rax_15: *mut *mut c_void =
                            uu_head::head_file::h48e6bcfaf0dc6df4(&fd, arg1);
                        var_d8 = rax_15;
                        core::ptr::drop_in_place$LT$std..fs..File$GT$::hcd6f8a6171cb1cbe(fd);
                        
                        if rax_15 != 0
                        {
                            goto 'label_4ba598;
                        }
                        
                        goto 'label_4ba2e5;
                    }
                    
                    let mut var_b8: *mut i128 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::ha41e17c1af67ee82();
                    uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                    let mut rax_2: i64;
                    let mut rdx_3: i64;
                    rax_2 = uucore::util_name::h60d842bf27b05e82();
                    var_70 = rax_2;
                    let var_68_1: i64 = rdx_3;
                    var_a0 = &var_70;
                    let var_98_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h05a2559eaa6ef57c;
                    let var_90_1: *mut *mut i128 = &var_b8;
                    let var_88_1: fn(arg1: *mut i64, arg2: *mut c_void) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha092e32133e67aba;
                    var_108 = &data_52ce60;
                    var_100 = 3;
                    let var_e8_1: i64 = 0;
                    let var_f8_1: *mut *mut c_void = &var_a0;
                    var_f0 = 2;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&var_108);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$::hc0cdad0ceeb81ca9(var_b8);
                    i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h49c4ce57715093e8(&var_60);
                    
                    if i == 0
                    {
                        return 0;
                    }
                }
            }
            else
            {
                rbx_1 = *i.byte_offset(8);
                r12_1 = *i.byte_offset(0x10);
            }
            
            if rcx <= 1
            {
                if rcx_4 != 0
                {
                    'label_4ba48b:
                    
                    if (r15_1 & 1) != 0
                    {
                        var_108 = &data_52cf20;
                        let var_100_1: i64 = 1;
                        let var_f8_2: i64 = 8;
                        var_f0 = {0};
                        std::io::stdio::_print::he918bceb0c89db46(&var_108);
                    }
                    
                    var_108 = &data_52cf30;
                    var_100 = 1;
                    let var_f8_3: i64 = 8;
                    var_f0 = {0};
                    std::io::stdio::_print::he918bceb0c89db46(&var_108);
                }
            }
            else if rsi == 0
            {
                goto 'label_4ba48b;
            }
            
            std::io::stdio::stdin::h7215cc131abb55d8();
            var_a0 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
            let mut rax_5: *mut i32;
            let mut rdx_5: i8;
            rax_5 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&var_a0);
            var_108 = rax_5;
            let mut rax_9: *mut *mut c_void;
            
            match rcx_5
            {
                0 =>
                {
                    rax_9 = uu_head::read_n_lines::hae3a156ed2e97641(&var_108);
                }
                1 =>
                {
                    rax_9 =
                        uu_head::read_but_last_n_lines::h3962164e084296b5(&var_108, rcx_6, rcx_7);
                }
                2 =>
                {
                    rax_9 = uu_head::read_n_bytes::h6fceecc1df8e2d16(&var_108);
                }
                3 =>
                {
                    rax_9 = uu_head::read_but_last_n_bytes::hc5f1d0ad028c7bde(&var_108, rcx_6);
                }
            }
            
            var_d8 = rax_9;
            core::ptr::drop_in_place$LT$std..io..stdio..StdinLock$GT$::hd27fd97215145d3b(var_108, 
                rdx_5 & 1);
            
            if rax_9 != 0
            {
                'label_4ba598:
                let rax_10: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he651f17c72d2bfc1(rbx_1, r12_1, "-: \nsrc/uu/head/src/head.rs==> …", 1);
                
                if rax_10 != 0
                {
                    rbx_1 = "standard input";
                }
                
                if rax_10 != 0
                {
                    r12_1 = 0xe;
                }
                
                var_b0 = rbx_1;
                let var_a8_2: u64 = r12_1;
                var_a0 = &var_b0;
                let var_98_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h05a2559eaa6ef57c;
                var_108 = &data_52cf60;
                let var_100_2: i64 = 2;
                let var_e8_2: i64 = 0;
                let var_f8_4: *mut *mut c_void = &var_a0;
                let mut var_f0_1: i64 = 1;
                let mut var_48: i128;
                core::option::Option$LT$T$GT$::map_or_else::hb3355800140cccf2(&var_48, &var_108);
                var_f0_1 = 1;
                var_108 = var_48;
                let var_38: i64;
                let var_f8_5: i64 = var_38;
                let rax_12: *mut i128 =
                    alloc::boxed::Box$LT$T$GT$::new::h92b1183da66f27c9(&var_108);
                var_d0 = rax_12;
                let var_c8: *mut *mut c_void = &data_52cfb8;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(_$LT$uucore..mods..error..USimpleError$u20$as$u20$uucore..mods..error..UError$GT$::code::h1158ea86a5f2627d(rax_12));
                let mut rax_14: i64;
                let mut rdx_8: i64;
                rax_14 = uucore::util_name::h60d842bf27b05e82();
                var_70 = rax_14;
                let var_68_2: i64 = rdx_8;
                var_a0 = &var_70;
                let var_98_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h05a2559eaa6ef57c;
                let var_90_2: *mut i32 = &var_d0;
                let var_88_2: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h8560145aaa71c4e2;
                var_108 = &data_52ce60;
                var_100 = 3;
                let var_e8_3: i64 = 0;
                let var_f8_6: *mut *mut c_void = &var_a0;
                var_f0 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_108);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hb08365f676f654b9(var_d0, var_c8);
            }
            
            'label_4ba2e5:
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h6d35cd5749ca4149(&var_d8);
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h49c4ce57715093e8(&var_60);
            r15_1 = 1;
        } while i != 0;
    }
    
    0
}
