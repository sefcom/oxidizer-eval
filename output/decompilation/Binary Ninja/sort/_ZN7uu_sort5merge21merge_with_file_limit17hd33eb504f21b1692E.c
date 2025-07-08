
  int64_t uu_sort::merge::merge_with_file_limit::hd33eb504f21b1692(int64_t* arg1, int64_t arg2, int64_t arg3, void* arg4, void* arg5)

{
    int64_t var_2d8 = arg2;
    int64_t rax = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h14ac925f95880609(&var_2d8);
    int64_t r12 = *(arg4 + 0x70);
    
    if (rax <= r12)
        return uu_sort::merge::merge_without_limit::h2a479b2dd5111a80(arg1, var_2d8, arg3, arg4);
    
    int64_t rbx_1 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h14ac925f95880609(&var_2d8);
    void var_d0;
    itertools::Itertools::chunks::he27e6631739399ae(&var_d0, var_2d8, arg3, r12);
    int64_t var_210 = 0;
    int64_t var_208_1 = 8;
    int64_t var_200_1 = 0;
    int32_t var_2b8;
    int128_t var_1f0;
    int128_t var_1e0;
    
    if (!rbx_1)
    {
        label_52bda3:
        _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7da568ce01995fdc(&var_2b8, &var_d0);
        
        if (var_2b8 != 3)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::hfd58a88f2d1708ef(&var_2b8);
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next()…");
            /* no return */
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::hfd58a88f2d1708ef(&var_2b8);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd7227d41e8805a51(&var_1f0, &var_210);
        int64_t rax_11 = alloc::boxed::Box$LT$T$GT$::new::h139dfdaaee16a1fd();
        int128_t var_2a8_2 = var_1e0;
        var_2b8 = var_1f0;
        int64_t var_298_1 = rax_11;
        void* const var_290_1 = &data_600370;
        uu_sort::merge::merge_with_file_limit::hb42914714851d269(arg1, &var_2b8, arg4, arg5);
    }
    else
    {
        int64_t rax_2;
        
        if (*(arg4 + 0x30) == -0x8000000000000000)
            rax_2 = 0;
        else
            rax_2 = *(arg4 + 0x38);
        
        uint64_t rax_4 = *(arg4 + 0x40);
        int64_t r13_1 = rbx_1;
        
        while (true)
        {
            int64_t temp0_1 = r13_1;
            r13_1 -= r12;
            
            if (temp0_1 < r12)
                r13_1 = 0;
            
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7da568ce01995fdc(&var_1f0, &var_d0);
            
            if (var_1f0 == 3)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            int64_t var_1d0;
            int64_t var_228_1 = var_1d0;
            int128_t var_238_1 = var_1e0;
            int128_t var_248 = var_1f0;
            uu_sort::merge::merge_without_limit::h7e976ef640532e43(&var_2b8, &var_248, arg4);
            int64_t rdx_3 = var_2b8;
            int64_t var_2b0;
            int64_t rax_6 = var_2b0;
            int128_t var_2a8;
            int64_t rcx_2 = var_2a8;
            
            if (rdx_3 == 3)
            {
                label_52be26:
                arg1[1] = rax_6;
                arg1[2] = rcx_2;
                *arg1 = 3;
            }
            else
            {
                int64_t var_260;
                int64_t var_128_1 = var_260;
                int64_t var_180 = rdx_3;
                int64_t var_178_1 = rax_6;
                uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&var_248, arg5);
                int64_t rax_7 = *var_248[8];
                
                if (rax_7 == -0x8000000000000000)
                {
                    *(arg1 + 8) = var_238_1;
                    *arg1 = 3;
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(
                        &var_180);
                }
                else
                {
                    int64_t var_120 = var_248;
                    int64_t var_118_1 = rax_7;
                    int128_t var_110_1 = var_238_1;
                    _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::heb853a4412795411(&var_2b8, &var_120, rax_2, rax_4);
                    int64_t rdx_5 = var_2b8;
                    int64_t rcx_5 = var_2a8;
                    
                    if (rdx_5 == -0x8000000000000000)
                    {
                        arg1[1] = var_2b0;
                        arg1[2] = rcx_5;
                        *arg1 = 3;
                        core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&var_180);
                    }
                    else
                    {
                        int64_t var_250;
                        int64_t var_188_1 = var_250;
                        int128_t var_198_1 = var_260;
                        int64_t var_290;
                        int128_t var_1c8_1 = var_290;
                        var_1e0 = var_2a8;
                        var_1f0 = rdx_5;
                        *var_1f0[8] = var_2b0;
                        var_1e0 = rcx_5;
                        int128_t var_288_1 = var_290;
                        int64_t var_298;
                        var_298 = var_2a8;
                        int128_t var_2a8_1 = rcx_2;
                        var_2b8 = var_180;
                        int64_t rax_10;
                        int64_t rdx_7;
                        rax_10 =
                            uu_sort::merge::FileMerger::write_all_to::h13897dacf7fa302c(&var_2b8);
                        
                        if (!rax_10)
                        {
                            int128_t var_258_1 = var_198_1;
                            int128_t var_270 = var_270;
                            int128_t var_280 = var_280;
                            int128_t var_288_2 = var_1c8_1;
                            var_298 = var_1d0;
                            var_2a8 = var_1e0;
                            var_2b8 = var_1f0;
                            _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hb0f248599453c45a(&var_248, &var_2b8);
                            int64_t rdx_8 = var_248;
                            rax_6 = *var_248[8];
                            rcx_2 = var_238_1;
                            
                            if (rdx_8 == -0x8000000000000000)
                                goto label_52be26;
                            
                            int64_t var_220;
                            int64_t var_d8_1 = var_220;
                            int128_t var_e8_1 = var_238_1;
                            int64_t var_100 = rdx_8;
                            int64_t var_f8_1 = rax_6;
                            int64_t var_f0_1 = rcx_2;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h0eb5ff577fb6ec6f(&var_210, 
                                &var_100);
                            bool cond:0_1 = rbx_1 > r12;
                            rbx_1 = r13_1;
                            
                            if (!cond:0_1)
                                goto label_52bda3;
                            
                            continue;
                        }
                        
                        arg1[1] = rax_10;
                        arg1[2] = rdx_7;
                        *arg1 = 3;
                        core::ptr::drop_in_place$LT$uu_sort..merge..WriteableCompressedTmpFile$GT$::hff0974eb3aed4073(&var_1f0);
                    }
                }
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&var_210);
            break;
        }
    }
    return core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::hbf097aef14ae1e80(&var_d0);
}
