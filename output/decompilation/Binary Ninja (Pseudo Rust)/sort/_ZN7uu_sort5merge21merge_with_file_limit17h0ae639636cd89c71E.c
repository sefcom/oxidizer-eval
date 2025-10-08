
  fn uu_sort::merge::merge_with_file_limit::h0ae639636cd89c71(arg1: *mut i128, arg2: *mut c_void, arg3: *mut i64, arg4: *mut c_void) -> i64

{
    let mut rbp: *mut c_void = arg2;
    let mut r12: i64;
    r12 = 1;
    let mut r14: i64;
    r14 = 1;
    let rax_1: i64 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h78e3e0e94831f6c4(*arg1.byte_offset(8), *arg1.byte_offset(0x18));
    let mut r12_1: i64 = *rbp.byte_offset(0x70);
    let var_338: *mut c_void = rbp;
    let mut result: i64;
    let mut var_328: i128;
    let mut var_318: i128;
    
    if rax_1 <= r12_1
    {
        let zmm0: i128 = *arg1;
        let var_308_2: i128 = arg1[2];
        var_318 = arg1[1];
        var_328 = zmm0;
        r12_1 = 1;
        let mut var_110: i64;
        uu_sort::merge::merge_without_limit::h80cd809e48cc4469(&var_110, &var_328, rbp);
        let rax_12: i64 = var_110;
        let result_7: i64;
        result = result_7;
        
        if rax_12 == 3
        {
            core::ptr::drop_in_place$LT$uu_sort..Output$GT$::h7def0b71731a8447(arg3);
        }
        else
        {
            let var_b8: i64;
            let var_58_1: i64 = var_b8;
            let var_c8: i128;
            let var_68_1: i128 = var_c8;
            let var_d8: i128;
            let var_78_1: i128 = var_d8;
            let var_e8: i128;
            let var_88_1: i128 = var_e8;
            let var_f8: i128;
            let var_98_1: i128 = var_f8;
            let mut var_b0: i64 = rax_12;
            let result_8: i64 = result;
            let var_100: i64;
            let var_a0_1: i64 = var_100;
            let mut result_10: i64;
            let mut rdx_6: i64;
            result_10 =
                uu_sort::merge::FileMerger::write_all::h2b3249daabe0a644(&var_b0, var_338, arg3);
            result = result_10;
        }
    }
    else
    {
        let rax_2: *mut c_void = rbp.byte_offset(0x70);
        let mut var_230: i64 = 0;
        let var_228_1: i64 = 8;
        let var_220_1: i64 = 0;
        let mut var_2c8: i64 = 0;
        let var_2c0_1: i64 = 8;
        let mut var_2b8_1: i64 = 0;
        let zmm1: i128 = arg1[1];
        let var_248_1: i128 = arg1[2];
        let mut var_268: i128 = *arg1;
        let mut r13: i64 = 0;
        let var_190_1: i64 = -0x7fffffffffffffff;
        let mut var_308: i128;
        let var_2d0: i64;
        let mut var_2a0: i64;
        let mut var_218: i128;
        let mut var_208: i128;
        let mut rbp_1: i64;
        let mut r15_1: *mut c_void;
        
        loop
        {
            r14 = 1;
            let mut var_50: i64;
            _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h55f9042cb984729c(&var_50, &var_268);
            
            if var_50 == var_190_1
            {
                r14 = 1;
                r15_1 = 1;
                core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$::had869a410baf204a(&var_268);
                break;
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::h722223bf552c46c3(&var_2c8, &var_50);
            r13 = var_2b8_1;
            
            if r13 >= r12_1
            {
                let mut var_188: i64 = r13;
                
                if r13 != r12_1
                {
                    var_328 = 0;
                    core::panicking::assert_failed::h449f2a7fe5426575(0, &var_188, rax_2, &var_328);
                    /* no return */
                }
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h48a48fdffd5a02e7(&var_2a0, &var_2c8);
                uu_sort::merge::merge_without_limit::ha3c300bc310eefed(&var_328, &var_2a0, rbp);
                let rax_5: i64 = var_328;
                result = *var_328[8];
                
                if rax_5 == 3
                {
                    r14 = 0;
                }
                else
                {
                    let var_1c0_1: i64 = var_2d0;
                    let zmm0_1: i128 = var_318;
                    var_218 = rax_5;
                    *var_218[8] = result;
                    var_208 = var_318;
                    var_2c8 = 0;
                    let var_2c0_2: i64 = 8;
                    var_2b8_1 = 0;
                    let mut var_1b8: i64;
                    uu_sort::tmp_dir::TmpDirWrapper::next_file::he098c4319062daf7(&var_1b8, arg4);
                    let result_3: i64;
                    let result_4: i64;
                    
                    if result_3 == -0x8000000000000000
                    {
                        result = result_4;
                        r14 = 1;
                        core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hca51d1930952c542(&var_218);
                    }
                    else
                    {
                        let mut var_150: i64 = var_1b8;
                        let result_14: i64 = result_3;
                        let var_140_1: i128 = result_4;
                        _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::h64c37076d2e0d4de(&var_328, &var_150);
                        let rax_7: i64 = var_328;
                        result = *var_328[8];
                        rbp_1 = var_318;
                        
                        if rax_7 == -0x8000000000000000
                        {
                            r14 = 1;
                            core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hca51d1930952c542(&var_218);
                        }
                        else
                        {
                            let var_288_1: i128 = var_318;
                            var_2a0 = rax_7;
                            let result_1: i64 = result;
                            let zmm0_3: i128 = var_218;
                            let mut var_2f8_1: i128 = var_308;
                            let var_308_1: i128 = zmm0_1;
                            var_318 = var_208;
                            var_328 = zmm0_3;
                            let mut result_9: i64;
                            let mut rdx_2: i64;
                            result_9 = uu_sort::merge::FileMerger::write_all_to::h3cdf5e6a2cb467f4(
                                &var_328, var_338);
                            result = result_9;
                            
                            if result_9 != 0
                            {
                                core::ptr::drop_in_place$LT$uu_sort..merge..WriteablePlainTmpFile$GT$::hfc260a928aebfa87(&var_2a0);
                            }
                            else
                            {
                                var_2f8_1 = *var_308[8];
                                let zmm0_4: i128 = var_2a0;
                                var_308 = var_288_1;
                                var_318 = rbp_1;
                                var_328 = zmm0_4;
                                _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hce1338451b6e3b63(&var_1b8, &var_328);
                                let rax_10: i64 = var_1b8;
                                result = result_3;
                                
                                if rax_10 != -0x8000000000000000
                                {
                                    let mut var_180: i64 = rax_10;
                                    let result_5: i64 = result;
                                    let result_13: i64 = result_4;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::hb4bc2dc398314653(&var_230, 
                                        &var_180);
                                    r13 = 0;
                                    rbp = var_338;
                                    continue;
                                }
                            }
                            
                            r14 = 1;
                        }
                    }
                }
                
                r15_1 = 1;
                core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$::had869a410baf204a(&var_268);
                
                if r14 != 0
                {
                    r15_1 = 1;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::hfa635afc00c55704(&var_2c8);
                }
                
                goto 'label_4c5bc8;
            }
        }
        
        if r13 == 0
        {
            r14 = 1;
            'label_4c5c02:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hf75d9570fff832c0(&var_218, &var_230);
            let rax_16: i64 = alloc::boxed::Box$LT$T$GT$::new::h68503a33d47fff4b();
            let zmm0_8: i128 = var_218;
            var_318 = var_208;
            var_328 = zmm0_8;
            var_308 = rax_16;
            *var_308[8] = &data_58c790;
            let mut result_11: i64;
            let mut rdx_10: i64;
            result_11 =
                uu_sort::merge::merge_with_file_limit::h0ae639636cd89c71(&var_328, rbp, arg3, arg4);
            result = result_11;
            
            if r14 != 0
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::hfa635afc00c55704(&var_2c8);
            }
        }
        else
        {
            if r13 >= r12_1
            {
                r14 = 1;
                r15_1 = 1;
                core::panicking::panic::h85d6dd562679980c("assertion failed: batch.len() < …");
                /* no return */
            }
            
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h48a48fdffd5a02e7(&var_2a0, &var_2c8);
            r15_1 = 1;
            uu_sort::merge::merge_without_limit::ha3c300bc310eefed(&var_328, &var_2a0, rbp);
            let rax_13: i64 = var_328;
            result = *var_328[8];
            
            if rax_13 == 3
            {
                goto 'label_4c5bc8;
            }
            
            let var_1c0_2: i64 = var_2d0;
            let zmm0_6: i128 = var_318;
            var_218 = rax_13;
            *var_218[8] = result;
            var_208 = var_318;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::he098c4319062daf7(&var_268, arg4);
            let rax_14: i64 = *var_268[8];
            
            if rax_14 != -0x8000000000000000
            {
                let mut var_130: i64 = var_268;
                let var_128_1: i64 = rax_14;
                let var_120_1: i128 = zmm1;
                _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::h64c37076d2e0d4de(&var_328, &var_130);
                let rax_17: i64 = var_328;
                result = *var_328[8];
                rbp_1 = var_318;
                
                if rax_17 == -0x8000000000000000
                {
                    goto 'label_4c5ccf;
                }
                
                let var_288_2: i128 = var_318;
                var_2a0 = rax_17;
                let result_2: i64 = result;
                let zmm0_9: i128 = var_218;
                let mut var_2f8_2: i128 = var_308;
                let var_308_3: i128 = zmm0_6;
                var_318 = var_208;
                var_328 = zmm0_9;
                let mut result_12: i64;
                let mut rdx_12: i64;
                result_12 =
                    uu_sort::merge::FileMerger::write_all_to::h3cdf5e6a2cb467f4(&var_328, var_338);
                result = result_12;
                
                if result_12 != 0
                {
                    core::ptr::drop_in_place$LT$uu_sort..merge..WriteablePlainTmpFile$GT$::hfc260a928aebfa87(&var_2a0);
                    goto 'label_4c5bc8;
                }
                
                var_2f8_2 = *var_308[8];
                let zmm0_10: i128 = var_2a0;
                var_308 = var_288_2;
                var_318 = rbp_1;
                var_328 = zmm0_10;
                _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hce1338451b6e3b63(&var_268, &var_328);
                let rax_20: i64 = var_268;
                result = *var_268[8];
                
                if rax_20 == -0x8000000000000000
                {
                    goto 'label_4c5bc8;
                }
                
                let mut var_168: i64 = rax_20;
                let result_6: i64 = result;
                let var_158_1: i64 = zmm1;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hb4bc2dc398314653(&var_230, &var_168);
                r14 = 0;
                rbp = var_338;
                goto 'label_4c5c02;
            }
            
            result = zmm1;
            'label_4c5ccf:
            core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hca51d1930952c542(&var_218);
            'label_4c5bc8:
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::hd5e30e780995eb35(&var_230);
            core::ptr::drop_in_place$LT$uu_sort..Output$GT$::h7def0b71731a8447(arg3);
        }
    }
    result
}
