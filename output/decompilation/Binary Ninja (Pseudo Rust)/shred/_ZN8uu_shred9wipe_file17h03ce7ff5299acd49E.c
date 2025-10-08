
  fn uu_shred::wipe_file::h03ce7ff5299acd49(arg1: i64, arg2: u64, arg3: i64, arg4: i8, arg5: i8, arg6: i64, arg7: i8, arg8: i8, arg9: i8, arg10: i8) -> u64

{
    let mut var_1c0: i32;
    std::fs::metadata::ha5a1382d2d84ac19(&var_1c0, arg1);
    let rbp: i32 = var_1c0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf505446dc2c0cf57(&var_1c0);
    let mut result: u64;
    let mut var_240: *mut i64;
    let mut result_1: u64;
    let mut var_e0: i32;
    let mut rax: *mut c_void;
    
    if rbp != 2
    {
        if std::path::Path::is_file::h6e28d87ff76ffc41(arg1, arg2) == 0
        {
            result_1 = 1;
            let var_210_2: i64 = arg1;
            let var_208_2: u64 = arg2;
            let var_200_2: i8 = 0;
            var_240 = &result_1;
            let var_238_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            rax = &data_4f9ff8;
            goto 'label_4645e0;
        }
        
        std::fs::metadata::ha5a1382d2d84ac19(&var_1c0, arg1);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h9b642052a68bccdc(&var_e0, &var_1c0);
        let result_2: u64;
        
        if var_e0 == 2
        {
            result = result_2;
        }
        else if arg10 == 0
        {
            'label_4646af:
            let mut var_268: i64 = 0;
            let var_260_1: i64 = 1;
            let var_258_1: i64 = 0;
            let mut var_1b8: i64;
            let mut var_190: i128;
            let var_90: i64;
            
            if var_90 != 0
            {
                if arg3 > 3
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hcf36b1515a67ed7b(&var_268, 2);
                    let rax_9: i64 = core::cmp::Ord::max::hede46e5ceb11a165(arg3 / 0xa, 3);
                    let r15_2: i64 = arg3 - rax_9;
                    let rdx_10: u64 = r15_2 / 0x16;
                    let mut var_1b0: i64;
                    let mut var_1a0: i64;
                    
                    if r15_2 >= 0x16
                    {
                        let mut r12_1: i64 = 1;
                        let mut cond:2_1: bool;
                        
                        do
                        {
                            var_1c0 = 0;
                            let var_1b8_2: i64 = 0x16;
                            let var_170_1: i128 = data_41ac10;
                            let var_180_1: i128 = data_41ac00;
                            let var_190_1: i128 = data_41abf0;
                            var_1a0 = data_41abe0;
                            var_1b0 = data_41abd0;
                            let var_160_1: i64 = 0xee000000dd00;
                            
                            loop
                            {
                                let rax_14: i32 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h99b9bf7e5b8e3c78(&var_1c0);
                                
                                if rax_14 == 2
                                {
                                    break;
                                }
                                
                                alloc::vec::Vec$LT$T$C$A$GT$::push::hcf36b1515a67ed7b(&var_268, 
                                    rax_14);
                            }
                            
                            cond:2_1 = r12_1 >= rdx_10;
                            r12_1 = r12_1 + 0;
                        } while !cond:2_1;
                    }
                    
                    var_1c0 = 0;
                    var_1b8 = 0x16;
                    var_1b0 = data_41abd0;
                    var_1a0 = data_41abe0;
                    var_190 = data_41abf0;
                    let var_180_2: i128 = data_41ac00;
                    let var_170_2: i128 = data_41ac10;
                    let var_160_2: i64 = 0xee000000dd00;
                    let mut i: i64 = r15_2 % 0x16;
                    
                    if r15_2 != rdx_10 * 0x16
                    {
                        do
                        {
                            let rax_18: i32 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h99b9bf7e5b8e3c78(&var_1c0);
                            
                            if rax_18 == 2
                            {
                                break;
                            }
                            
                            alloc::vec::Vec$LT$T$C$A$GT$::push::hcf36b1515a67ed7b(&var_268, rax_18);
                            i -= 1;
                        } while i != 0;
                    }
                    
                    let mut rbp_2: i64 = rax_9 - 1;
                    
                    loop
                    {
                        let temp2_1: i64 = rbp_2;
                        rbp_2 -= 1;
                        
                        if temp2_1 == 1
                        {
                            break;
                        }
                        
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hcf36b1515a67ed7b(&var_268, 2);
                    }
                    
                    var_e0 = rand::rngs::thread::rng::h4ff389470e265d23();
                    
                    if var_258_1 == 0
                    {
                        core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(1, 0);
                        /* no return */
                    }
                    
                    if var_258_1 >= 3
                    {
                        _$LT$$u5b$T$u5d$$u20$as$u20$rand..seq..slice..SliceRandom$GT$::partial_shuffle::hfb05d4cf488d0b42(&var_1c0, var_260_1 + 4, var_258_1 - 1, &var_e0, var_258_1 - 1);
                    }
                    
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hcf36b1515a67ed7b(&var_268, 2);
                    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::hd7a2e33c8d5cb4e1(&var_e0);
                }
                else
                {
                    let mut r15_1: i64 = arg3 + 1;
                    
                    loop
                    {
                        let temp1_1: i64 = r15_1;
                        r15_1 -= 1;
                        
                        if temp1_1 == 1
                        {
                            break;
                        }
                        
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hcf36b1515a67ed7b(&var_268, 2);
                    }
                }
                
                if arg8 != 0
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hcf36b1515a67ed7b(&var_268, 0);
                }
            }
            
            let mut var_f0: i64 = var_258_1;
            var_1c0 = 0x1b600000000;
            var_1b8 = 0;
            *var_1b8[4] = 0;
            *var_1b8[1] = 1;
            std::fs::OpenOptions::open::h21837edfec1e9a94(&var_e0, &var_1c0, arg1);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h632f7ee35326d08d(&result_1, &var_e0);
            result = result_1;
            
            if result == 0
            {
                let var_210: i64;
                let mut fd: i32 = var_210;
                let mut rax_22: i64 = var_90;
                
                if (arg5 & 1) != 0
                {
                    rax_22 = arg6;
                }
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6f2030208d89e65c(&result_1, &var_268);
                let var_1f8_1: i64 = 0;
                let mut var_1e8: i64;
                _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3848ec72732c2849(&var_1e8, &result_1);
                let i_1: i8;
                
                if i_1 != 3
                {
                    do
                    {
                        let r14_1: i64 = var_1e8;
                        let mut var_24c: i32 = i_1;
                        let mut var_1d8: i64;
                        let mut var_c8: i32;
                        
                        if arg9 != 0
                        {
                            uu_shred::pass_name::h9fc29581f7f0cfb7(&var_1d8, &var_24c);
                            let mut rax_26: i64;
                            let mut rdx_24: i64;
                            rax_26 = uucore::util_name::h074417a1e6395129();
                            var_e0 = rax_26;
                            let var_d8: i64 = rdx_24;
                            var_240 = &var_e0;
                            let var_238_3: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3641e459b5f3d84f;
                            var_1c0 = &data_4f9f98;
                            let var_1b8_3: i64 = 2;
                            let var_1a0_2: i64 = 0;
                            let var_1b0_2: *mut *mut i64 = &var_240;
                            let var_1a8_2: i64 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_1c0);
                            var_240 = 1;
                            let var_238_4: i64 = arg1;
                            let var_230_1: u64 = arg2;
                            let var_228_1: i8 = 0;
                            let mut var_e8: i64 = r14_1 + 1;
                            var_1c0 = &var_240;
                            let var_1b8_4: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            let var_1b0_3: *mut i64 = &var_e8;
                            let var_1a8_3: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                            let var_1a0_3: *mut i64 = &var_f0;
                            let var_198_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                            var_190 = &var_1d8;
                            *var_190[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            var_e0 = &data_4fa018;
                            let var_d8_1: i64 = 5;
                            let var_c0_1: i64 = 0;
                            let var_d0_1: *mut i32 = &var_1c0;
                            var_c8 = 4;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he3c04393cbc9b6ab(&var_1d8);
                        }
                        
                        let rax_28: i64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hbb93911bfa45ca03(uu_shred::do_pass::h5f3b51dd2439eeba(&fd, &var_24c, arg7, 
                            rax_22));
                        
                        if rax_28 == 0
                        {
                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h6a1521085a1ec2e6(0, &data_4f9bb8);
                        }
                        else
                        {
                            var_1d8 = rax_28;
                            let var_1d0_1: *mut *mut c_void = &data_4f9bb8;
                            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                            let mut rax_29: *mut i64;
                            let mut rdx_27: i64;
                            rax_29 = uucore::util_name::h074417a1e6395129();
                            var_240 = rax_29;
                            let var_238_5: i64 = rdx_27;
                            var_e0 = &var_240;
                            let var_d8_2: fn(arg1: *mut i64, arg2: i64) -> i64 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3641e459b5f3d84f;
                            let var_d0_2: *mut i64 = &var_1d8;
                            var_c8 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h58ae0d47b5df800c;
                            var_1c0 = &data_4fa068;
                            let var_1b8_5: i64 = 3;
                            let var_1a0_4: i64 = 0;
                            let var_1b0_4: *mut i32 = &var_e0;
                            let var_1a8_4: i64 = 2;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_1c0);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::he3ab67bba8a03065(var_1d8, var_1d0_1);
                        }
                        
                        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3848ec72732c2849(&var_1e8, &result_1);
                    } while i_1 != 3;
                }
                
                core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$uu_shred..PassType$GT$$GT$$GT$::hc8824b4a3d0f357c(&result_1);
                let mut result_4: u64;
                
                if arg4 != 0
                {
                    result_4 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hef0506ed209ce3dd(uu_shred::do_remove::he7f6ef1c114a8897(arg1, arg2, arg1, arg2, arg9, 
                        arg4));
                    result = result_4;
                }
                
                if arg4 == 0 || result_4 == 0
                {
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::h242f54cc5db43aa8(fd);
                    return 0;
                }
                
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h242f54cc5db43aa8(fd);
            }
            else
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_shred..PassType$GT$$GT$::h67aac5aa98fcce1e(var_268, var_260_1);
            }
        }
        else
        {
            let mut rdx_4: i32 = 0x80;
            let var_a8: i32;
            
            if var_a8 < 0
            {
                rdx_4 = var_a8;
            }
            
            let result_3: u64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hf4c04973a4b2e089(std::fs::set_permissions::haddd16cf0754072b(arg1, arg2, rdx_4));
            
            if result_3 == 0
            {
                goto 'label_4646af;
            }
            
            result = result_3;
        }
    }
    else
    {
        result_1 = 1;
        let var_210_1: i64 = arg1;
        let var_208_1: u64 = arg2;
        let var_200_1: i8 = 0;
        var_240 = &result_1;
        let var_238_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        rax = &data_4f9fd8;
        'label_4645e0:
        var_1c0 = rax;
        let var_1b8_1: i64 = 2;
        let var_1a0_1: i64 = 0;
        let var_1b0_1: *mut *mut i64 = &var_240;
        let var_1a8_1: i64 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h7bfa45f07eaf898e(&var_e0, &var_1c0);
        let var_c8_1: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h679aad62071d4597(&var_e0);
    }
    result
}
