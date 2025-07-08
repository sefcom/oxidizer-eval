
  int64_t* uu_sort::merge::merge_with_file_limit::h9238ca36de3d8682(int64_t* arg1, int128_t* arg2, void* arg3, void* arg4)

{
    int64_t rax = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h6e5e97567931d2de(arg2);
    int64_t r13 = *(arg3 + 0x70);
    int128_t var_118;
    
    if (rax <= r13)
    {
        int128_t var_108_1 = arg2[1];
        var_118 = *arg2;
        uu_sort::merge::merge_without_limit::h8c704bfae6c82ba5(arg1, &var_118, arg3);
    }
    else
    {
        int64_t r12_1 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h6e5e97567931d2de(arg2);
        int128_t var_328_1 = arg2[1];
        int128_t var_338 = *arg2;
        itertools::Itertools::chunks::h6f22875c8c7cd227(&var_118, &var_338, r13);
        int64_t var_2c0 = 0;
        int64_t var_2b8_1 = 8;
        int64_t var_2b0_1 = 0;
        int128_t var_298;
        int128_t var_288;
        
        if (!r12_1)
        {
            label_52ab85:
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he13ee4938c3c1bd3(&var_338, &var_118);
            
            if (var_338 != -0x7ffffffffffffffe)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h730187e046b76eb9(&var_338);
                core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next()…");
                /* no return */
            }
            
            core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h730187e046b76eb9(&var_338);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd7227d41e8805a51(&var_298, &var_2c0);
            int64_t rax_11 = alloc::boxed::Box$LT$T$GT$::new::h42824d1ebc8aa3aa();
            int128_t var_328_3 = var_288;
            var_338 = var_298;
            int64_t var_318_1 = rax_11;
            void* const var_310_1 = &data_6002f8;
            uu_sort::merge::merge_with_file_limit::hb42914714851d269(arg1, &var_338, arg3, arg4);
        }
        else
        {
            int64_t rcx;
            
            if (*(arg3 + 0x30) == -0x8000000000000000)
                rcx = 0;
            else
                rcx = *(arg3 + 0x38);
            
            uint64_t rax_3 = *(arg3 + 0x40);
            int64_t var_2a0_1 = -0x7ffffffffffffffe;
            int64_t r13_1 = r12_1;
            int64_t rax_4 = r13;
            
            while (true)
            {
                int64_t temp0_1 = r13_1;
                r13_1 -= rax_4;
                
                if (temp0_1 < rax_4)
                    r13_1 = 0;
                
                _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he13ee4938c3c1bd3(&var_338, &var_118);
                
                if (var_338 == var_2a0_1)
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                int128_t var_2e8;
                int128_t var_248_1 = var_2e8;
                int128_t var_2f8;
                int128_t var_258_1 = var_2f8;
                int128_t var_308;
                int128_t var_268_1 = var_308;
                int64_t var_318;
                int128_t var_278_1 = var_318;
                var_288 = var_328_1;
                var_298 = var_338;
                int64_t var_228;
                uu_sort::merge::merge_without_limit::hb625e29ae468ce09(&var_228, &var_298, arg3);
                int64_t rdx_3 = var_228;
                int64_t var_220;
                int64_t rax_6 = var_220;
                int64_t var_218;
                int64_t rcx_1 = var_218;
                
                if (rdx_3 == 3)
                {
                    label_52ac0e:
                    arg1[1] = rax_6;
                    arg1[2] = rcx_1;
                    *arg1 = 3;
                }
                else
                {
                    int64_t var_1d0;
                    int64_t var_170_1 = var_1d0;
                    int64_t var_1c8 = rdx_3;
                    int64_t var_1c0_1 = rax_6;
                    uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&var_228, arg4);
                    
                    if (var_220 == -0x8000000000000000)
                    {
                        *(arg1 + 8) = var_218;
                        *arg1 = 3;
                        core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&var_1c8);
                    }
                    else
                    {
                        int64_t var_168 = var_228;
                        int64_t var_160_1 = var_220;
                        int128_t var_158_1 = var_218;
                        _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::heb853a4412795411(&var_338, &var_168, rcx, rax_3);
                        int64_t rdx_5 = var_338;
                        int64_t rax_8 = *var_338[8];
                        int64_t rcx_4 = var_328_1;
                        
                        if (rdx_5 == -0x8000000000000000)
                        {
                            arg1[1] = rax_8;
                            arg1[2] = rcx_4;
                            *arg1 = 3;
                            core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&var_1c8);
                        }
                        else
                        {
                            int64_t var_2d0;
                            int64_t var_230_1 = var_2d0;
                            int64_t var_310;
                            var_278_1 = var_310;
                            var_288 = var_328_1;
                            var_298 = rdx_5;
                            *var_298[8] = rax_8;
                            var_288 = rcx_4;
                            int128_t var_1e0;
                            int128_t var_2e8_1 = var_1e0;
                            int128_t var_1f0;
                            int128_t var_2f8_1 = var_1f0;
                            int128_t var_200;
                            int128_t var_308_1 = var_200;
                            int128_t var_210;
                            var_318 = var_210;
                            int128_t var_328_2 = rcx_1;
                            var_338 = var_1c8;
                            int64_t rax_10;
                            int64_t rdx_7;
                            rax_10 = uu_sort::merge::FileMerger::write_all_to::h13897dacf7fa302c(
                                &var_338);
                            
                            if (!rax_10)
                            {
                                int128_t var_238;
                                int128_t var_2d8_1 = var_238;
                                var_318 = var_278_1;
                                var_328_1 = var_288;
                                var_338 = var_298;
                                _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hb0f248599453c45a(&var_228, &var_338);
                                int64_t rdx_8 = var_228;
                                rax_6 = var_220;
                                rcx_1 = var_218;
                                
                                if (rdx_8 == -0x8000000000000000)
                                    goto label_52ac0e;
                                
                                int64_t var_120_1 = var_200;
                                int128_t var_130_1 = var_210;
                                int64_t var_148 = rdx_8;
                                int64_t var_140_1 = rax_6;
                                int64_t var_138_1 = rcx_1;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h0eb5ff577fb6ec6f(&var_2c0, 
                                    &var_148);
                                rax_4 = r13;
                                bool cond:0_1 = r12_1 > rax_4;
                                r12_1 = r13_1;
                                
                                if (!cond:0_1)
                                    goto label_52ab85;
                                
                                continue;
                            }
                            
                            arg1[1] = rax_10;
                            arg1[2] = rdx_7;
                            *arg1 = 3;
                            core::ptr::drop_in_place$LT$uu_sort..merge..WriteableCompressedTmpFile$GT$::hff0974eb3aed4073(&var_298);
                        }
                    }
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&var_2c0);
                break;
            }
        }
        core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h2781d4945e6f233d(&var_118);
    }
    return arg1;
}
