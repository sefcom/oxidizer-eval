
  int64_t* uu_sort::merge::merge_with_file_limit::hee8bdf8579433eee(int64_t* arg1, int128_t* arg2, void* arg3, void* arg4)

{
    int64_t rax = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hacb85b199b0cad2a(arg2);
    int64_t r12 = *(arg3 + 0x70);
    int128_t var_e8;
    
    if (rax <= r12)
    {
        int128_t var_d8_1 = arg2[1];
        var_e8 = *arg2;
        uu_sort::merge::merge_without_limit::h9b5b2c5845db30df(arg1, &var_e8, arg3);
    }
    else
    {
        int64_t r14_1 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hacb85b199b0cad2a(arg2);
        int128_t var_258_1 = arg2[1];
        int128_t var_268 = *arg2;
        itertools::Itertools::chunks::hc1d2676d26c759d9(&var_e8, &var_268, r12);
        int64_t var_208 = 0;
        int64_t var_200_1 = 8;
        int64_t var_1f8_1 = 0;
        int128_t var_180;
        int128_t var_170;
        
        if (!r14_1)
        {
            label_52c2ed:
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hebe185d9380178ad(&var_268, &var_e8);
            
            if (var_268 != -0x7ffffffffffffffe)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h0b384b4f21d54495(&var_268);
                core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next()…");
                /* no return */
            }
            
            core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h0b384b4f21d54495(&var_268);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfe0833828f6f3053(&var_180, &var_208);
            int64_t rax_9 = alloc::boxed::Box$LT$T$GT$::new::h8cfa0d4394d8defc();
            int128_t var_258_3 = var_170;
            var_268 = var_180;
            int64_t var_248_1 = rax_9;
            void* const var_240_1 = &data_600398;
            uu_sort::merge::merge_with_file_limit::hc0e6e7450cc5dee9(arg1, &var_268, arg3, arg4);
        }
        else
        {
            int64_t var_188_1 = -0x7ffffffffffffffe;
            int64_t r13_1 = r14_1;
            
            while (true)
            {
                int64_t temp0_1 = r13_1;
                r13_1 -= r12;
                
                if (temp0_1 < r12)
                    r13_1 = 0;
                
                int64_t var_1f0;
                _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hebe185d9380178ad(&var_1f0, &var_e8);
                
                if (var_1f0 == var_188_1)
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                int128_t var_1d0;
                int128_t var_198_1 = var_1d0;
                int128_t var_1e0;
                int128_t var_1a8_1 = var_1e0;
                int128_t var_1b8 = var_1f0;
                uu_sort::merge::merge_without_limit::h2875c70cfc96a2e1(&var_268, &var_1b8, arg3);
                int64_t rdx_2 = var_268;
                int64_t rax_3 = *var_268[8];
                int64_t rcx = var_258_1;
                
                if (rdx_2 == 3)
                {
                    label_52c3a9:
                    arg1[1] = rax_3;
                    arg1[2] = rcx;
                    *arg1 = 3;
                }
                else
                {
                    int64_t var_210;
                    int64_t var_128_1 = var_210;
                    var_180 = rdx_2;
                    *var_180[8] = rax_3;
                    var_170 = rcx;
                    uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&var_1b8, arg4);
                    int64_t rax_4 = *var_1b8[8];
                    
                    if (rax_4 == -0x8000000000000000)
                    {
                        *(arg1 + 8) = var_1a8_1;
                        *arg1 = 3;
                        core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&var_180);
                    }
                    else
                    {
                        int64_t var_108 = var_1b8;
                        int64_t var_100_1 = rax_4;
                        int128_t var_f8_1 = var_1a8_1;
                        _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::hf387bcea2432cd24(&var_268, &var_108);
                        int64_t rdx_3 = var_268;
                        int64_t rax_5 = *var_268[8];
                        int64_t rcx_2 = var_258_1;
                        
                        if (rdx_3 == -0x8000000000000000)
                        {
                            arg1[1] = rax_5;
                            arg1[2] = rcx_2;
                            *arg1 = 3;
                            core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&var_180);
                        }
                        else
                        {
                            int64_t var_240;
                            var_1d0 = var_240;
                            var_1e0 = var_258_1;
                            var_1f0 = rdx_3;
                            int64_t var_1e8_1 = rax_5;
                            var_1e0 = rcx_2;
                            int128_t var_238_1 = var_240;
                            int64_t var_248;
                            var_248 = var_258_1;
                            int128_t var_258_2 = var_170;
                            var_268 = var_180;
                            int64_t rax_7;
                            int64_t rdx_5;
                            rax_7 = uu_sort::merge::FileMerger::write_all_to::h1c9339354b7849ec(
                                &var_268);
                            
                            if (!rax_7)
                            {
                                int64_t var_1c0;
                                var_238_1 = var_1c0;
                                var_248 = var_1d0;
                                var_258_1 = var_1e0;
                                var_268 = var_1f0;
                                _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::h5f1c720516718632(&var_1b8, &var_268);
                                int64_t rdx_6 = var_1b8;
                                rax_3 = *var_1b8[8];
                                rcx = var_1a8_1;
                                
                                if (rdx_6 == -0x8000000000000000)
                                    goto label_52c3a9;
                                
                                int64_t var_120 = rdx_6;
                                int64_t var_118_1 = rax_3;
                                int64_t var_110_1 = rcx;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h3f59369679f0d1cb(&var_208, 
                                    &var_120);
                                bool cond:0_1 = r14_1 > r12;
                                r14_1 = r13_1;
                                
                                if (!cond:0_1)
                                    goto label_52c2ed;
                                
                                continue;
                            }
                            
                            arg1[1] = rax_7;
                            arg1[2] = rdx_5;
                            *arg1 = 3;
                            core::ptr::drop_in_place$LT$uu_sort..merge..WriteablePlainTmpFile$GT$::h96330bd0f939a872(&var_1f0);
                        }
                    }
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&var_208);
                break;
            }
        }
        core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteablePlainTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h6522b167a9a220a1(&var_e8);
    }
    return arg1;
}
