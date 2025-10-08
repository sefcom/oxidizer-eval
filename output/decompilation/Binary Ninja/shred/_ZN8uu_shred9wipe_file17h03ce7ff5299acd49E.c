
  uint64_t uu_shred::wipe_file::h03ce7ff5299acd49(int64_t arg1, uint64_t arg2, int64_t arg3, char arg4, char arg5, int64_t arg6, char arg7, char arg8, char arg9, char arg10)

{
    int32_t var_1c0;
    std::fs::metadata::ha5a1382d2d84ac19(&var_1c0, arg1);
    int32_t rbp = var_1c0;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf505446dc2c0cf57(&var_1c0);
    uint64_t result;
    int64_t* var_240;
    uint64_t result_1;
    int32_t var_e0;
    void* const rax;
    
    if (rbp != 2)
    {
        if (!std::path::Path::is_file::h6e28d87ff76ffc41(arg1, arg2))
        {
            result_1 = 1;
            int64_t var_210_2 = arg1;
            uint64_t var_208_2 = arg2;
            char var_200_2 = 0;
            var_240 = &result_1;
            int64_t (* var_238_2)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            rax = &data_4f9ff8;
            goto label_4645e0;
        }
        
        std::fs::metadata::ha5a1382d2d84ac19(&var_1c0, arg1);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h9b642052a68bccdc(&var_e0, &var_1c0);
        uint64_t result_2;
        
        if (var_e0 == 2)
            result = result_2;
        else if (!arg10)
        {
            label_4646af:
            int64_t var_268 = 0;
            int64_t var_260_1 = 1;
            int64_t var_258_1 = 0;
            int64_t var_1b8;
            int128_t var_190;
            int64_t var_90;
            
            if (var_90)
            {
                if (arg3 > 3)
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hcf36b1515a67ed7b(&var_268, 2);
                    int64_t rax_9 = core::cmp::Ord::max::hede46e5ceb11a165(arg3 / 0xa, 3);
                    int64_t r15_2 = arg3 - rax_9;
                    uint64_t rdx_10 = r15_2 / 0x16;
                    int64_t var_1b0;
                    int64_t var_1a0;
                    
                    if (r15_2 >= 0x16)
                    {
                        int64_t r12_1 = 1;
                        bool cond:2_1;
                        
                        do
                        {
                            var_1c0 = 0;
                            int64_t var_1b8_2 = 0x16;
                            int128_t var_170_1 = data_41ac10;
                            int128_t var_180_1 = data_41ac00;
                            int128_t var_190_1 = data_41abf0;
                            var_1a0 = data_41abe0;
                            var_1b0 = data_41abd0;
                            int64_t var_160_1 = 0xee000000dd00;
                            
                            while (true)
                            {
                                int32_t rax_14 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h99b9bf7e5b8e3c78(&var_1c0);
                                
                                if (rax_14 == 2)
                                    break;
                                
                                alloc::vec::Vec$LT$T$C$A$GT$::push::hcf36b1515a67ed7b(&var_268, 
                                    rax_14);
                            }
                            
                            cond:2_1 = r12_1 >= rdx_10;
                            r12_1 = r12_1 + 0;
                        } while (!cond:2_1);
                    }
                    
                    var_1c0 = 0;
                    var_1b8 = 0x16;
                    var_1b0 = data_41abd0;
                    var_1a0 = data_41abe0;
                    var_190 = data_41abf0;
                    int128_t var_180_2 = data_41ac00;
                    int128_t var_170_2 = data_41ac10;
                    int64_t var_160_2 = 0xee000000dd00;
                    int64_t i = r15_2 % 0x16;
                    
                    if (r15_2 != rdx_10 * 0x16)
                    {
                        do
                        {
                            int32_t rax_18 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::h99b9bf7e5b8e3c78(&var_1c0);
                            
                            if (rax_18 == 2)
                                break;
                            
                            alloc::vec::Vec$LT$T$C$A$GT$::push::hcf36b1515a67ed7b(&var_268, rax_18);
                            i -= 1;
                        } while (i);
                    }
                    
                    int64_t rbp_2 = rax_9 - 1;
                    
                    while (true)
                    {
                        int64_t temp2_1 = rbp_2;
                        rbp_2 -= 1;
                        
                        if (temp2_1 == 1)
                            break;
                        
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hcf36b1515a67ed7b(&var_268, 2);
                    }
                    
                    var_e0 = rand::rngs::thread::rng::h4ff389470e265d23();
                    
                    if (!var_258_1)
                    {
                        core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(1, 0);
                        /* no return */
                    }
                    
                    if (var_258_1 >= 3)
                        _$LT$$u5b$T$u5d$$u20$as$u20$rand..seq..slice..SliceRandom$GT$::partial_shuffle::hfb05d4cf488d0b42(&var_1c0, var_260_1 + 4, var_258_1 - 1, &var_e0, var_258_1 - 1);
                    
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hcf36b1515a67ed7b(&var_268, 2);
                    core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::hd7a2e33c8d5cb4e1(&var_e0);
                }
                else
                {
                    int64_t r15_1 = arg3 + 1;
                    
                    while (true)
                    {
                        int64_t temp1_1 = r15_1;
                        r15_1 -= 1;
                        
                        if (temp1_1 == 1)
                            break;
                        
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hcf36b1515a67ed7b(&var_268, 2);
                    }
                }
                
                if (arg8)
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hcf36b1515a67ed7b(&var_268, 0);
            }
            
            int64_t var_f0 = var_258_1;
            var_1c0 = 0x1b600000000;
            var_1b8 = 0;
            *var_1b8[4] = 0;
            *var_1b8[1] = 1;
            std::fs::OpenOptions::open::h21837edfec1e9a94(&var_e0, &var_1c0, arg1);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h632f7ee35326d08d(&result_1, &var_e0);
            result = result_1;
            
            if (!result)
            {
                int64_t var_210;
                int32_t fd = var_210;
                int64_t rax_22 = var_90;
                
                if (arg5 & 1)
                    rax_22 = arg6;
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h6f2030208d89e65c(&result_1, &var_268);
                int64_t var_1f8_1 = 0;
                int64_t var_1e8;
                _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3848ec72732c2849(&var_1e8, &result_1);
                char i_1;
                
                if (i_1 != 3)
                {
                    do
                    {
                        int64_t r14_1 = var_1e8;
                        int32_t var_24c = i_1;
                        int64_t var_1d8;
                        int32_t var_c8;
                        
                        if (arg9)
                        {
                            uu_shred::pass_name::h9fc29581f7f0cfb7(&var_1d8, &var_24c);
                            int64_t rax_26;
                            int64_t rdx_24;
                            rax_26 = uucore::util_name::h074417a1e6395129();
                            var_e0 = rax_26;
                            int64_t var_d8 = rdx_24;
                            var_240 = &var_e0;
                            int64_t (* var_238_3)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3641e459b5f3d84f;
                            var_1c0 = &data_4f9f98;
                            int64_t var_1b8_3 = 2;
                            int64_t var_1a0_2 = 0;
                            int64_t** var_1b0_2 = &var_240;
                            int64_t var_1a8_2 = 1;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_1c0);
                            var_240 = 1;
                            int64_t var_238_4 = arg1;
                            uint64_t var_230_1 = arg2;
                            char var_228_1 = 0;
                            int64_t var_e8 = r14_1 + 1;
                            var_1c0 = &var_240;
                            int64_t (* var_1b8_4)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                            int64_t* var_1b0_3 = &var_e8;
                            uint64_t (* var_1a8_3)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                            int64_t* var_1a0_3 = &var_f0;
                            uint64_t (* var_198_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                            var_190 = &var_1d8;
                            *var_190[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            var_e0 = &data_4fa018;
                            int64_t var_d8_1 = 5;
                            int64_t var_c0_1 = 0;
                            int32_t* var_d0_1 = &var_1c0;
                            var_c8 = 4;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_e0);
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he3c04393cbc9b6ab(&var_1d8);
                        }
                        
                        int64_t rax_28 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hbb93911bfa45ca03(uu_shred::do_pass::h5f3b51dd2439eeba(&fd, &var_24c, arg7, 
                            rax_22));
                        
                        if (!rax_28)
                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h6a1521085a1ec2e6(0, &data_4f9bb8);
                        else
                        {
                            var_1d8 = rax_28;
                            void** const var_1d0_1 = &data_4f9bb8;
                            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                            int64_t* rax_29;
                            int64_t rdx_27;
                            rax_29 = uucore::util_name::h074417a1e6395129();
                            var_240 = rax_29;
                            int64_t var_238_5 = rdx_27;
                            var_e0 = &var_240;
                            int64_t (* var_d8_2)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3641e459b5f3d84f;
                            int64_t* var_d0_2 = &var_1d8;
                            var_c8 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h58ae0d47b5df800c;
                            var_1c0 = &data_4fa068;
                            int64_t var_1b8_5 = 3;
                            int64_t var_1a0_4 = 0;
                            int32_t* var_1b0_4 = &var_e0;
                            int64_t var_1a8_4 = 2;
                            std::io::stdio::_eprint::h57899770eacec2ad(&var_1c0);
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::he3ab67bba8a03065(var_1d8, var_1d0_1);
                        }
                        
                        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3848ec72732c2849(&var_1e8, &result_1);
                    } while (i_1 != 3);
                }
                
                core::ptr::drop_in_place$LT$core..iter..adapters..enumerate..Enumerate$LT$alloc..vec..into_iter..IntoIter$LT$uu_shred..PassType$GT$$GT$$GT$::hc8824b4a3d0f357c(&result_1);
                uint64_t result_4;
                
                if (arg4)
                {
                    result_4 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hef0506ed209ce3dd(uu_shred::do_remove::he7f6ef1c114a8897(arg1, arg2, arg1, arg2, arg9, 
                        arg4));
                    result = result_4;
                }
                
                if (!arg4 || !result_4)
                {
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::h242f54cc5db43aa8(fd);
                    return 0;
                }
                
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h242f54cc5db43aa8(fd);
            }
            else
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_shred..PassType$GT$$GT$::h67aac5aa98fcce1e(var_268, var_260_1);
        }
        else
        {
            int32_t rdx_4 = 0x80;
            int32_t var_a8;
            
            if (var_a8 < 0)
                rdx_4 = var_a8;
            
            uint64_t result_3 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hf4c04973a4b2e089(std::fs::set_permissions::haddd16cf0754072b(arg1, arg2, rdx_4));
            
            if (!result_3)
                goto label_4646af;
            
            result = result_3;
        }
    }
    else
    {
        result_1 = 1;
        int64_t var_210_1 = arg1;
        uint64_t var_208_1 = arg2;
        char var_200_1 = 0;
        var_240 = &result_1;
        int64_t (* var_238_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        rax = &data_4f9fd8;
        label_4645e0:
        var_1c0 = rax;
        int64_t var_1b8_1 = 2;
        int64_t var_1a0_1 = 0;
        int64_t** var_1b0_1 = &var_240;
        int64_t var_1a8_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h7bfa45f07eaf898e(&var_e0, &var_1c0);
        int32_t var_c8_1 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h679aad62071d4597(&var_e0);
    }
    return result;
}
