
  int64_t uu_sort::merge::merge_with_file_limit::h0ae639636cd89c71(int128_t* arg1, void* arg2, int64_t* arg3, void* arg4)

{
    void* rbp = arg2;
    int64_t r12;
    r12 = 1;
    int64_t r14;
    r14 = 1;
    int64_t rax_1 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h78e3e0e94831f6c4(*(arg1 + 8), *(arg1 + 0x18));
    int64_t r12_1 = *(rbp + 0x70);
    void* var_338 = rbp;
    int64_t result;
    int128_t var_328;
    int128_t var_318;
    
    if (rax_1 <= r12_1)
    {
        int128_t zmm0 = *arg1;
        int128_t var_308_2 = arg1[2];
        var_318 = arg1[1];
        var_328 = zmm0;
        r12_1 = 1;
        int64_t var_110;
        uu_sort::merge::merge_without_limit::h80cd809e48cc4469(&var_110, &var_328, rbp);
        int64_t rax_12 = var_110;
        int64_t result_7;
        result = result_7;
        
        if (rax_12 == 3)
            core::ptr::drop_in_place$LT$uu_sort..Output$GT$::h7def0b71731a8447(arg3);
        else
        {
            int64_t var_b8;
            int64_t var_58_1 = var_b8;
            int128_t var_c8;
            int128_t var_68_1 = var_c8;
            int128_t var_d8;
            int128_t var_78_1 = var_d8;
            int128_t var_e8;
            int128_t var_88_1 = var_e8;
            int128_t var_f8;
            int128_t var_98_1 = var_f8;
            int64_t var_b0 = rax_12;
            int64_t result_8 = result;
            int64_t var_100;
            int64_t var_a0_1 = var_100;
            int64_t result_10;
            int64_t rdx_6;
            result_10 =
                uu_sort::merge::FileMerger::write_all::h2b3249daabe0a644(&var_b0, var_338, arg3);
            result = result_10;
        }
    }
    else
    {
        void* rax_2 = rbp + 0x70;
        int64_t var_230 = 0;
        int64_t var_228_1 = 8;
        int64_t var_220_1 = 0;
        int64_t var_2c8 = 0;
        int64_t var_2c0_1 = 8;
        int64_t var_2b8_1 = 0;
        int128_t zmm1 = arg1[1];
        int128_t var_248_1 = arg1[2];
        int128_t var_268 = *arg1;
        int64_t r13 = 0;
        int64_t var_190_1 = -0x7fffffffffffffff;
        int128_t var_308;
        int64_t var_2d0;
        int64_t var_2a0;
        int128_t var_218;
        int128_t var_208;
        int64_t rbp_1;
        void* r15_1;
        
        while (true)
        {
            r14 = 1;
            int64_t var_50;
            _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h55f9042cb984729c(&var_50, &var_268);
            
            if (var_50 == var_190_1)
            {
                r14 = 1;
                r15_1 = 1;
                core::ptr::drop_in_place$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$::had869a410baf204a(&var_268);
                break;
            }
            
            alloc::vec::Vec$LT$T$C$A$GT$::push::h722223bf552c46c3(&var_2c8, &var_50);
            r13 = var_2b8_1;
            
            if (r13 >= r12_1)
            {
                int64_t var_188 = r13;
                
                if (r13 != r12_1)
                {
                    var_328 = 0;
                    core::panicking::assert_failed::h449f2a7fe5426575(0, &var_188, rax_2, &var_328);
                    /* no return */
                }
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h48a48fdffd5a02e7(&var_2a0, &var_2c8);
                uu_sort::merge::merge_without_limit::ha3c300bc310eefed(&var_328, &var_2a0, rbp);
                int64_t rax_5 = var_328;
                result = *var_328[8];
                
                if (rax_5 == 3)
                    r14 = 0;
                else
                {
                    int64_t var_1c0_1 = var_2d0;
                    int128_t zmm0_1 = var_318;
                    var_218 = rax_5;
                    *var_218[8] = result;
                    var_208 = var_318;
                    var_2c8 = 0;
                    int64_t var_2c0_2 = 8;
                    var_2b8_1 = 0;
                    int64_t var_1b8;
                    uu_sort::tmp_dir::TmpDirWrapper::next_file::he098c4319062daf7(&var_1b8, arg4);
                    int64_t result_3;
                    int64_t result_4;
                    
                    if (result_3 == -0x8000000000000000)
                    {
                        result = result_4;
                        r14 = 1;
                        core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hca51d1930952c542(&var_218);
                    }
                    else
                    {
                        int64_t var_150 = var_1b8;
                        int64_t result_14 = result_3;
                        int128_t var_140_1 = result_4;
                        _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::h64c37076d2e0d4de(&var_328, &var_150);
                        int64_t rax_7 = var_328;
                        result = *var_328[8];
                        rbp_1 = var_318;
                        
                        if (rax_7 == -0x8000000000000000)
                        {
                            r14 = 1;
                            core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hca51d1930952c542(&var_218);
                        }
                        else
                        {
                            int128_t var_288_1 = var_318;
                            var_2a0 = rax_7;
                            int64_t result_1 = result;
                            int128_t zmm0_3 = var_218;
                            int128_t var_2f8_1 = var_308;
                            int128_t var_308_1 = zmm0_1;
                            var_318 = var_208;
                            var_328 = zmm0_3;
                            int64_t result_9;
                            int64_t rdx_2;
                            result_9 = uu_sort::merge::FileMerger::write_all_to::h3cdf5e6a2cb467f4(
                                &var_328, var_338);
                            result = result_9;
                            
                            if (result_9)
                                core::ptr::drop_in_place$LT$uu_sort..merge..WriteablePlainTmpFile$GT$::hfc260a928aebfa87(&var_2a0);
                            else
                            {
                                var_2f8_1 = *var_308[8];
                                int128_t zmm0_4 = var_2a0;
                                var_308 = var_288_1;
                                var_318 = rbp_1;
                                var_328 = zmm0_4;
                                _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hce1338451b6e3b63(&var_1b8, &var_328);
                                int64_t rax_10 = var_1b8;
                                result = result_3;
                                
                                if (rax_10 != -0x8000000000000000)
                                {
                                    int64_t var_180 = rax_10;
                                    int64_t result_5 = result;
                                    int64_t result_13 = result_4;
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
                
                if (r14)
                {
                    r15_1 = 1;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::hfa635afc00c55704(&var_2c8);
                }
                
                goto label_4c5bc8;
            }
        }
        
        if (!r13)
        {
            r14 = 1;
            label_4c5c02:
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hf75d9570fff832c0(&var_218, &var_230);
            int64_t rax_16 = alloc::boxed::Box$LT$T$GT$::new::h68503a33d47fff4b();
            int128_t zmm0_8 = var_218;
            var_318 = var_208;
            var_328 = zmm0_8;
            var_308 = rax_16;
            *var_308[8] = &data_58c790;
            int64_t result_11;
            int64_t rdx_10;
            result_11 =
                uu_sort::merge::merge_with_file_limit::h0ae639636cd89c71(&var_328, rbp, arg3, arg4);
            result = result_11;
            
            if (r14)
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::hfa635afc00c55704(&var_2c8);
        }
        else
        {
            if (r13 >= r12_1)
            {
                r14 = 1;
                r15_1 = 1;
                core::panicking::panic::h85d6dd562679980c("assertion failed: batch.len() < …");
                /* no return */
            }
            
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h48a48fdffd5a02e7(&var_2a0, &var_2c8);
            r15_1 = 1;
            uu_sort::merge::merge_without_limit::ha3c300bc310eefed(&var_328, &var_2a0, rbp);
            int64_t rax_13 = var_328;
            result = *var_328[8];
            
            if (rax_13 == 3)
                goto label_4c5bc8;
            
            int64_t var_1c0_2 = var_2d0;
            int128_t zmm0_6 = var_318;
            var_218 = rax_13;
            *var_218[8] = result;
            var_208 = var_318;
            uu_sort::tmp_dir::TmpDirWrapper::next_file::he098c4319062daf7(&var_268, arg4);
            int64_t rax_14 = *var_268[8];
            
            if (rax_14 != -0x8000000000000000)
            {
                int64_t var_130 = var_268;
                int64_t var_128_1 = rax_14;
                int128_t var_120_1 = zmm1;
                _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::h64c37076d2e0d4de(&var_328, &var_130);
                int64_t rax_17 = var_328;
                result = *var_328[8];
                rbp_1 = var_318;
                
                if (rax_17 == -0x8000000000000000)
                    goto label_4c5ccf;
                
                int128_t var_288_2 = var_318;
                var_2a0 = rax_17;
                int64_t result_2 = result;
                int128_t zmm0_9 = var_218;
                int128_t var_2f8_2 = var_308;
                int128_t var_308_3 = zmm0_6;
                var_318 = var_208;
                var_328 = zmm0_9;
                int64_t result_12;
                int64_t rdx_12;
                result_12 =
                    uu_sort::merge::FileMerger::write_all_to::h3cdf5e6a2cb467f4(&var_328, var_338);
                result = result_12;
                
                if (result_12)
                {
                    core::ptr::drop_in_place$LT$uu_sort..merge..WriteablePlainTmpFile$GT$::hfc260a928aebfa87(&var_2a0);
                    goto label_4c5bc8;
                }
                
                var_2f8_2 = *var_308[8];
                int128_t zmm0_10 = var_2a0;
                var_308 = var_288_2;
                var_318 = rbp_1;
                var_328 = zmm0_10;
                _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hce1338451b6e3b63(&var_268, &var_328);
                int64_t rax_20 = var_268;
                result = *var_268[8];
                
                if (rax_20 == -0x8000000000000000)
                    goto label_4c5bc8;
                
                int64_t var_168 = rax_20;
                int64_t result_6 = result;
                int64_t var_158_1 = zmm1;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hb4bc2dc398314653(&var_230, &var_168);
                r14 = 0;
                rbp = var_338;
                goto label_4c5c02;
            }
            
            result = zmm1;
            label_4c5ccf:
            core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hca51d1930952c542(&var_218);
            label_4c5bc8:
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::hd5e30e780995eb35(&var_230);
            core::ptr::drop_in_place$LT$uu_sort..Output$GT$::h7def0b71731a8447(arg3);
        }
    }
    return result;
}
