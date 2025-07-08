
  int64_t uu_sort::merge::merge_with_file_limit::h68734aa550059387(int64_t* arg1, int64_t arg2, int64_t arg3, void* arg4, void* arg5)

{
    int64_t var_260 = arg2;
    int64_t rax = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hbd1c0dc342c9868d(&var_260);
    int64_t r12 = *(arg4 + 0x70);
    
    if (rax <= r12)
        return uu_sort::merge::merge_without_limit::hde06756ea8b79739(arg1, var_260, arg3, arg4);
    
    int64_t rbx_1 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hbd1c0dc342c9868d(&var_260);
    void var_d0;
    itertools::Itertools::chunks::hdc493e564df35cd7(&var_d0, var_260, arg3, r12);
    int64_t var_1b8 = 0;
    int64_t var_1b0_1 = 8;
    int64_t var_1a8_1 = 0;
    int32_t var_218;
    int128_t var_168;
    int128_t var_158;
    
    if (!rbx_1)
    {
        label_52a52c:
        _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc65e742b2db28af5(&var_218, &var_d0);
        
        if (var_218 != 3)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h9933d114d7b58fde(&var_218);
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next()…");
            /* no return */
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h9933d114d7b58fde(&var_218);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfe0833828f6f3053(&var_168, &var_1b8);
        int64_t rax_9 = alloc::boxed::Box$LT$T$GT$::new::h609552d0dc279bd4();
        int128_t var_208_2 = var_158;
        var_218 = var_168;
        int64_t var_1f8_1 = rax_9;
        void* const var_1f0_1 = &data_6002b8;
        uu_sort::merge::merge_with_file_limit::hc0e6e7450cc5dee9(arg1, &var_218, arg4, arg5);
    }
    else
    {
        int64_t r13_1 = rbx_1;
        
        while (true)
        {
            int64_t temp0_1 = r13_1;
            r13_1 -= r12;
            
            if (temp0_1 < r12)
                r13_1 = 0;
            
            int32_t var_1a0;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc65e742b2db28af5(&var_1a0, &var_d0);
            
            if (var_1a0 == 3)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            int64_t var_180;
            int64_t var_228_1 = var_180;
            int128_t var_190;
            int128_t var_238_1 = var_190;
            int128_t var_248 = var_1a0;
            uu_sort::merge::merge_without_limit::h957af4587d2d4d7a(&var_218, &var_248, arg4);
            int64_t rdx_2 = var_218;
            int64_t var_210;
            int64_t rax_3 = var_210;
            int64_t var_208;
            int64_t rcx_1 = var_208;
            
            if (rdx_2 == 3)
            {
                label_52a5c7:
                arg1[1] = rax_3;
                arg1[2] = rcx_1;
                *arg1 = 3;
            }
            else
            {
                int64_t var_1c0;
                int64_t var_110_1 = var_1c0;
                var_168 = rdx_2;
                *var_168[8] = rax_3;
                var_158 = rcx_1;
                uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&var_248, arg5);
                int64_t rax_4 = *var_248[8];
                
                if (rax_4 == -0x8000000000000000)
                {
                    *(arg1 + 8) = var_238_1;
                    *arg1 = 3;
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(
                        &var_168);
                }
                else
                {
                    int64_t var_f0 = var_248;
                    int64_t var_e8_1 = rax_4;
                    int128_t var_e0_1 = var_238_1;
                    _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::hf387bcea2432cd24(&var_218, &var_f0);
                    int64_t rdx_3 = var_218;
                    
                    if (rdx_3 == -0x8000000000000000)
                    {
                        arg1[1] = var_210;
                        arg1[2] = var_208;
                        *arg1 = 3;
                        core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&var_168);
                    }
                    else
                    {
                        int64_t var_1f0;
                        int128_t var_178_1 = var_1f0;
                        int128_t var_200;
                        var_190 = var_200;
                        var_1a0 = rdx_3;
                        int64_t var_198_1 = var_210;
                        var_190 = var_208;
                        int128_t var_1e8_1 = var_1f0;
                        int64_t var_1f8;
                        var_1f8 = var_200;
                        int128_t var_208_1 = var_158;
                        var_218 = var_168;
                        int64_t rax_7;
                        int64_t rdx_5;
                        rax_7 =
                            uu_sort::merge::FileMerger::write_all_to::h1c9339354b7849ec(&var_218);
                        
                        if (!rax_7)
                        {
                            var_1e8_1 = *var_178_1[8];
                            var_1f8 = var_180;
                            var_208 = var_190;
                            var_218 = var_1a0;
                            _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::h5f1c720516718632(&var_248, &var_218);
                            int64_t rdx_6 = var_248;
                            rax_3 = *var_248[8];
                            rcx_1 = var_238_1;
                            
                            if (rdx_6 == -0x8000000000000000)
                                goto label_52a5c7;
                            
                            int64_t var_108 = rdx_6;
                            int64_t var_100_1 = rax_3;
                            int64_t var_f8_1 = rcx_1;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h3f59369679f0d1cb(&var_1b8, 
                                &var_108);
                            bool cond:0_1 = rbx_1 > r12;
                            rbx_1 = r13_1;
                            
                            if (!cond:0_1)
                                goto label_52a52c;
                            
                            continue;
                        }
                        
                        arg1[1] = rax_7;
                        arg1[2] = rdx_5;
                        *arg1 = 3;
                        core::ptr::drop_in_place$LT$uu_sort..merge..WriteablePlainTmpFile$GT$::h96330bd0f939a872(&var_1a0);
                    }
                }
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&var_1b8);
            break;
        }
    }
    return core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h18550a823b66643e(&var_d0);
}
