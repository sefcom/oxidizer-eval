
  int64_t uu_sort::merge::merge_with_file_limit::hc0e6e7450cc5dee9(int64_t* arg1, int128_t* arg2, void* arg3, void* arg4)

{
    int64_t rax = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hb81b1e03d1e715a4(arg2);
    int64_t r12 = *(arg3 + 0x70);
    int128_t var_f8;
    
    if (rax <= r12)
    {
        int128_t var_d8_1 = arg2[2];
        int128_t var_e8_1 = arg2[1];
        var_f8 = *arg2;
        return uu_sort::merge::merge_without_limit::he170aa40d43822dc(arg1, &var_f8, arg3);
    }
    
    int64_t r14_1 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hb81b1e03d1e715a4(arg2);
    int128_t var_258_1 = arg2[2];
    int128_t var_268_1 = arg2[1];
    int128_t var_278 = *arg2;
    itertools::Itertools::chunks::h4fc89ec69f227a1e(&var_f8, &var_278, r12);
    int64_t var_218 = 0;
    int64_t var_210_1 = 8;
    int64_t var_208_1 = 0;
    int128_t var_190;
    int128_t var_180;
    
    if (!r14_1)
    {
        label_52b75d:
        _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd0300e6bad5512ed(&var_278, &var_f8);
        
        if (var_278 != -0x7ffffffffffffffe)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::hd4c420b3ac4c8b5b(&var_278);
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next()…");
            /* no return */
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::hd4c420b3ac4c8b5b(&var_278);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfe0833828f6f3053(&var_190, &var_218);
        int64_t rax_9 = alloc::boxed::Box$LT$T$GT$::new::h4cf6d2eb54d1ad8d();
        int128_t var_268_3 = var_180;
        var_278 = var_190;
        var_258_1 = rax_9;
        *var_258_1[8] = &data_600348;
        uu_sort::merge::merge_with_file_limit::hc0e6e7450cc5dee9(arg1, &var_278, arg3, arg4);
    }
    else
    {
        int64_t var_198_1 = -0x7ffffffffffffffe;
        int64_t r13_1 = r14_1;
        
        while (true)
        {
            int64_t temp0_1 = r13_1;
            r13_1 -= r12;
            
            if (temp0_1 < r12)
                r13_1 = 0;
            
            int64_t var_200;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd0300e6bad5512ed(&var_200, &var_f8);
            
            if (var_200 == var_198_1)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            int128_t var_1e0;
            int128_t var_1a8_1 = var_1e0;
            int128_t var_1f0;
            int128_t var_1b8_1 = var_1f0;
            int128_t var_1c8 = var_200;
            uu_sort::merge::merge_without_limit::hae787fc1656c52a4(&var_278, &var_1c8, arg3);
            int64_t rdx_2 = var_278;
            int64_t rax_3 = *var_278[8];
            int64_t rcx = var_268_1;
            
            if (rdx_2 == 3)
            {
                label_52b825:
                arg1[1] = rax_3;
                arg1[2] = rcx;
                *arg1 = 3;
            }
            else
            {
                int64_t var_220;
                int64_t var_138_1 = var_220;
                var_190 = rdx_2;
                *var_190[8] = rax_3;
                var_180 = rcx;
                uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&var_1c8, arg4);
                int64_t rax_4 = *var_1c8[8];
                
                if (rax_4 == -0x8000000000000000)
                {
                    *(arg1 + 8) = var_1b8_1;
                    *arg1 = 3;
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(
                        &var_190);
                }
                else
                {
                    int64_t var_118 = var_1c8;
                    int64_t var_110_1 = rax_4;
                    int128_t var_108_1 = var_1b8_1;
                    _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::hf387bcea2432cd24(&var_278, &var_118);
                    int64_t rdx_3 = var_278;
                    int64_t rax_5 = *var_278[8];
                    int64_t rcx_2 = var_268_1;
                    
                    if (rdx_3 == -0x8000000000000000)
                    {
                        arg1[1] = rax_5;
                        arg1[2] = rcx_2;
                        *arg1 = 3;
                        core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&var_190);
                    }
                    else
                    {
                        var_1e0 = var_258_1;
                        var_1f0 = var_268_1;
                        var_200 = rdx_3;
                        int64_t var_1f8_1 = rax_5;
                        var_1f0 = rcx_2;
                        int128_t var_248_1 = var_258_1;
                        int128_t var_258_2 = var_268_1;
                        int128_t var_268_2 = var_180;
                        var_278 = var_190;
                        int64_t rax_7;
                        int64_t rdx_5;
                        rax_7 =
                            uu_sort::merge::FileMerger::write_all_to::h1c9339354b7849ec(&var_278);
                        
                        if (!rax_7)
                        {
                            int64_t var_1d0;
                            var_248_1 = var_1d0;
                            var_258_1 = var_1e0;
                            var_268_1 = var_1f0;
                            var_278 = var_200;
                            _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::h5f1c720516718632(&var_1c8, &var_278);
                            int64_t rdx_6 = var_1c8;
                            rax_3 = *var_1c8[8];
                            rcx = var_1b8_1;
                            
                            if (rdx_6 == -0x8000000000000000)
                                goto label_52b825;
                            
                            int64_t var_130 = rdx_6;
                            int64_t var_128_1 = rax_3;
                            int64_t var_120_1 = rcx;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h3f59369679f0d1cb(&var_218, 
                                &var_130);
                            bool cond:0_1 = r14_1 > r12;
                            r14_1 = r13_1;
                            
                            if (!cond:0_1)
                                goto label_52b75d;
                            
                            continue;
                        }
                        
                        arg1[1] = rax_7;
                        arg1[2] = rdx_5;
                        *arg1 = 3;
                        core::ptr::drop_in_place$LT$uu_sort..merge..WriteablePlainTmpFile$GT$::h96330bd0f939a872(&var_200);
                    }
                }
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$GT$::h67b23147265995e1(&var_218);
            break;
        }
    }
    return core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::hf8ae8b052fe96b60(&var_f8);
}
