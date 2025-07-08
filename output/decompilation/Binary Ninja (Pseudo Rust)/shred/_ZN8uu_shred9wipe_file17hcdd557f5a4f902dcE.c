
  fn uu_shred::wipe_file::hcdd557f5a4f902dc(arg1: *mut i8, arg2: u64, arg3: i64, arg4: i8, arg5: i64, arg6: i64, arg7: i8, arg8: i8, arg9: i8, arg10: i8) -> *mut i128

{
    let mut var_220: i32;
    std::fs::metadata::h605f1ca78403f0bd(&var_220, arg1);
    let rbx: i32 = var_220;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h057e93f1d1d682ca(&var_220);
    let mut rbp_1: *mut i128;
    let mut var_298: *mut i128;
    let mut var_140: *mut i64;
    let mut var_e0: i32;
    let mut rax: *mut c_void;
    
    if rbx != 2
    {
        if std::path::Path::is_file::h82f08f46fb8d8099(arg1, arg2) == 0
        {
            var_298 = 1;
            let var_290_2: *mut i8 = arg1;
            let var_288_2: u64 = arg2;
            let var_280_2: i8 = 0;
            var_140 = &var_298;
            let var_138_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            rax = &data_5386f8;
            goto 'label_4bcf57;
        }
        
        std::fs::metadata::h605f1ca78403f0bd(&var_220, arg1);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hfeeb5d3bb5da4e93(&var_e0, &var_220);
        let var_d8: *mut i128;
        
        if var_e0 != 2
        {
            let mut var_a8: i32;
            
            if arg10 != 0
            {
                let mut rdx_4: i32 = 0x80;
                
                if var_a8 < 0
                {
                    rdx_4 = var_a8;
                }
                
                let rax_6: *mut i128 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8b41e8b25dbfd909(std::fs::set_permissions::hedfd3098c0eec3ac(arg1, arg2, 
                    rdx_4));
                
                if rax_6 != 0
                {
                    return rax_6;
                }
            }
            
            let mut var_2b0: i64 = 0;
            let var_2a8_1: i64 = 1;
            let var_2a0_1: i64 = 0;
            let mut var_218: i64;
            let mut var_1f0: i128;
            let mut var_1e0: i128;
            let mut var_1d0: i128;
            let var_90: i64;
            
            if var_90 != 0
            {
                if arg3 > 3
                {
                    let rdx_6: u64 = arg3 / 0x16;
                    let mut var_210: i64;
                    let mut var_200: i64;
                    
                    if arg3 >= 0x16
                    {
                        let mut r15_1: i64 = 0;
                        
                        do
                        {
                            r15_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(r15_1);
                            var_220 = 0;
                            let var_218_2: i64 = 0x16;
                            let var_1d0_1: i128 = *data_41f0e8;
                            let var_1e0_1: i128 = *data_41f0d8;
                            let var_1f0_1: i128 = data_41f0c8;
                            var_200 = data_41f0b8;
                            var_210 = data_41f0a8;
                            let var_1c0_1: i64 = 0xee000000dd00;
                            
                            loop
                            {
                                let rax_11: i32 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0c495dba700bde13(&var_220);
                                
                                if rax_11 == 2
                                {
                                    break;
                                }
                                
                                alloc::vec::Vec$LT$T$C$A$GT$::push::heca98b157ed7cb4d(&var_2b0, 
                                    rax_11);
                            }
                            
                            core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$uu_shred..Pattern$C$22_usize$GT$$GT$::hccc20f2342448aa1();
                        } while r15_1 < rdx_6;
                    }
                    
                    var_220 = 0;
                    var_218 = 0x16;
                    var_210 = data_41f0a8;
                    var_200 = data_41f0b8;
                    var_1f0 = data_41f0c8;
                    var_1e0 = *data_41f0d8;
                    var_1d0 = *data_41f0e8;
                    let var_1c0_2: i64 = 0xee000000dd00;
                    let mut i: i64 = arg3 % 0x16;
                    let i_3: i64 = i;
                    
                    if arg3 != rdx_6 * 0x16
                    {
                        do
                        {
                            let rax_15: i32 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0c495dba700bde13(&var_220);
                            
                            if rax_15 == 2
                            {
                                break;
                            }
                            
                            alloc::vec::Vec$LT$T$C$A$GT$::push::heca98b157ed7cb4d(&var_2b0, rax_15);
                            i -= 1;
                        } while i != 0;
                    }
                    
                    core::ptr::drop_in_place$LT$core..iter..adapters..take..Take$LT$core..array..iter..IntoIter$LT$uu_shred..Pattern$C$22_usize$GT$$GT$$GT$::hd3bf92e12aae45fe();
                    var_220 = rand::rngs::thread::thread_rng::hb51ef0c041e68525();
                    _$LT$$u5b$T$u5d$$u20$as$u20$rand..seq..SliceRandom$GT$::shuffle::he012a51162e821c4(var_2a8_1, var_2a0_1, &var_220);
                    let mut i_1: i64 = 0;
                    
                    do
                    {
                        let rax_20: i64 = i_1 * (arg3 - 1);
                        let rbp_3: u64;
                        let mut r15_2: u64;
                        
                        if (rax_20 | (rbp_3 + 2)) >> 0x20 == 0
                        {
                            r15_2 = COMBINE(0, rax_20) / (rbp_3 + 2);
                        }
                        else
                        {
                            r15_2 = COMBINE(0, rax_20) / (rbp_3 + 2);
                        }
                        
                        if r15_2 >= var_2a0_1
                        {
                            core::panicking::panic_bounds_check::h25a5330941572dd1(r15_2, 
                                var_2a0_1);
                            /* no return */
                        }
                        
                        i_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(i_1);
                        *(var_2a8_1 + (r15_2 << 2)) = 2;
                    } while i_1 < arg3 / 0xa + 3;
                    
                    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::h89ac64e96d66995e(&var_220);
                }
                else
                {
                    let mut r12_1: i64 = 0;
                    
                    while r12_1 < arg3
                    {
                        r12_1 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(r12_1);
                        alloc::vec::Vec$LT$T$C$A$GT$::push::heca98b157ed7cb4d(&var_2b0, 2);
                    }
                }
                
                if arg8 != 0
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::heca98b157ed7cb4d(&var_2b0, 0);
                }
            }
            
            let mut var_108: i64 = var_2a0_1;
            var_220 = 0x1b600000000;
            var_218 = 0;
            *var_218[4] = 0;
            *var_218[1] = 1;
            std::fs::OpenOptions::open::h42007666e681861e(&var_e0, &var_220, arg1);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hdcf338468f0daf60(&var_298, &var_e0);
            rbp_1 = var_298;
            
            if rbp_1 == 0
            {
                let var_290: i64;
                let mut fd: i32 = var_290;
                let mut rax_27: i64 = arg6;
                
                if arg5 == 0
                {
                    rax_27 = var_90;
                }
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfb8255cffa267b63(&var_140, &var_2b0);
                let var_120_1: i64 = 0;
                let mut var_250: i64;
                _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h21af7eed97fbc67b(&var_250, &var_140);
                let i_2: i8;
                
                if i_2 != 3
                {
                    do
                    {
                        let rbx_6: i64 = var_250;
                        let mut var_2b4: i32 = i_2;
                        let mut var_240: *mut i128;
                        let mut var_c8: i32;
                        
                        if arg9 != 0
                        {
                            let mut var_f8: ();
                            uu_shred::pass_name::hc502fb7b05ee159f(&var_f8, &var_2b4);
                            let mut rax_32: i64;
                            let mut rdx_19: i64;
                            rax_32 = uucore::util_name::h60d842bf27b05e82();
                            var_e0 = rax_32;
                            let var_d8_1: i64 = rdx_19;
                            var_298 = &var_e0;
                            let var_290_3: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
                            var_220 = &data_538698;
                            let var_218_3: i64 = 2;
                            let var_200_2: i64 = 0;
                            let var_210_2: *mut *mut i128 = &var_298;
                            let var_208_2: i64 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_220);
                            var_240 = 1;
                            let var_238_1: *mut i8 = arg1;
                            let var_230_1: u64 = arg2;
                            let var_228_1: i8 = 0;
                            let mut var_100: i64 = rbx_6 + 1;
                            var_e0 = &var_240;
                            let var_d8_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                            let var_d0_1: *mut i64 = &var_100;
                            var_c8 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                            let var_c0_1: *mut i64 = &var_108;
                            let var_b8_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
                            let var_b0_1: *mut c_void = &var_f8;
                            var_a8 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            var_220 = 2;
                            let var_210_3: i64 = 2;
                            let var_200_3: i64 = 0;
                            let var_1f8_1: i64 = 0x20;
                            var_1f0 = 3;
                            *var_1f0[8] = 2;
                            *var_1e0[8] = 0;
                            __builtin_memcpy(&var_1d0, 
                                "\x02\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x19);
                            let var_1b0_1: i64 = 2;
                            let var_1a0_1: i64 = 2;
                            let mut var_190: i64;
                            __builtin_memcpy(&var_190, 
                                "\x02\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x11);
                            let var_178_1: i64 = 2;
                            let var_168_1: i64 = 2;
                            let var_158_1: i64 = 3;
                            let var_150_1: i64 = 0x20;
                            let var_148_1: i8 = 3;
                            var_298 = &data_538808;
                            let var_290_4: i64 = 5;
                            let var_278_1: *mut i32 = &var_220;
                            let var_270_1: i64 = 4;
                            let var_288_3: *mut i32 = &var_e0;
                            let mut var_280: i8;
                            var_280 = 4;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_298);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h79f0f67a09ddf38f(&var_f8);
                        }
                        
                        let rax_35: *mut i128 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h5a7c198f926f4856(uu_shred::do_pass::hd89cf0ca9cbf1708(&fd, &var_2b4, 
                            arg7, rax_27));
                        
                        if rax_35 != 0
                        {
                            var_240 = rax_35;
                            let var_238_2: *mut i64 = &data_5389a0;
                            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                            let mut rax_36: *mut i128;
                            let mut rdx_22: i64;
                            rax_36 = uucore::util_name::h60d842bf27b05e82();
                            var_298 = rax_36;
                            let var_290_5: i64 = rdx_22;
                            var_e0 = &var_298;
                            let var_d8_3: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h264c667d1212e3ad;
                            let var_d0_2: *mut *mut i128 = &var_240;
                            var_c8 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hfa48898c7684171a;
                            var_220 = &data_538718;
                            let var_218_4: i64 = 3;
                            let var_200_4: i64 = 0;
                            let var_210_4: *mut i32 = &var_e0;
                            let var_208_3: i64 = 2;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_220);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hbf158212341c390e(var_240, var_238_2);
                        }
                        
                        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h21af7eed97fbc67b(&var_250, &var_140);
                    } while i_2 != 3;
                }
                
                core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$uu_shred..PassType$GT$$GT$$GT$::h3fb90667d107ca3f(&var_140);
                let mut rax_30: *mut i128;
                
                if arg4 != 0
                {
                    rax_30 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd9d95a9b55133fba(uu_shred::do_remove::h7b1c5ba904fda3f1(arg1, arg2, arg1, arg2, arg9, 
                        arg4));
                    rbp_1 = rax_30;
                }
                
                if arg4 == 0 || rax_30 == 0
                {
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::h7f7a30b7b330e79b(fd);
                    return nullptr;
                }
                
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h7f7a30b7b330e79b(fd);
            }
            else
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_shred..PassType$GT$$GT$::hc7ae42648a6b147f(&var_2b0);
            }
        }
        else
        {
            rbp_1 = var_d8;
        }
    }
    else
    {
        var_298 = 1;
        let var_290_1: *mut i8 = arg1;
        let var_288_1: u64 = arg2;
        let var_280_1: i8 = 0;
        var_140 = &var_298;
        let var_138_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        rax = &data_5386d8;
        'label_4bcf57:
        var_220 = rax;
        let var_218_1: i64 = 2;
        let var_200_1: i64 = 0;
        let var_210_1: *mut *mut i64 = &var_140;
        let var_208_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h2a91f0892e8dc529(&var_e0, &var_220);
        let var_c8_1: i32 = 1;
        rbp_1 = alloc::boxed::Box$LT$T$GT$::new::h46ce8461a54b80d6(&var_e0);
    }
    rbp_1
}
