
  int64_t uu_sort::merge::merge_with_file_limit::hb42914714851d269(int64_t* arg1, int128_t* arg2, void* arg3, void* arg4)

{
    int64_t rax = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h15a50e9bf8043b56(arg2);
    int64_t r13 = *(arg3 + 0x70);
    int128_t var_128;
    
    if (rax <= r13)
    {
        int128_t var_108_1 = arg2[2];
        int128_t var_118_1 = arg2[1];
        var_128 = *arg2;
        return uu_sort::merge::merge_without_limit::h3f51658ed9f64253(arg1, &var_128, arg3);
    }
    
    int64_t r12_1 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h15a50e9bf8043b56(arg2);
    int128_t var_328_1 = arg2[2];
    int128_t var_338_1 = arg2[1];
    int128_t var_348 = *arg2;
    itertools::Itertools::chunks::h750e5a5d4e71cbe4(&var_128, &var_348, r13);
    int64_t var_2d0 = 0;
    int64_t var_2c8_1 = 8;
    int64_t var_2c0_1 = 0;
    int128_t var_2a8;
    int128_t var_298;
    
    if (!r12_1)
    {
        label_52b205:
        _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1d853640473e5f57(&var_348, &var_128);
        
        if (var_348 != -0x7ffffffffffffffe)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::h2f7fe0f236b44ef1(&var_348);
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next()…");
            /* no return */
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::h2f7fe0f236b44ef1(&var_348);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd7227d41e8805a51(&var_2a8, &var_2d0);
        int64_t rax_12 = alloc::boxed::Box$LT$T$GT$::new::ha32bffbf5181790f();
        int128_t var_338_3 = var_298;
        var_348 = var_2a8;
        var_328_1 = rax_12;
        *var_328_1[8] = &data_600320;
        uu_sort::merge::merge_with_file_limit::hb42914714851d269(arg1, &var_348, arg3, arg4);
    }
    else
    {
        int64_t rcx;
        
        if (*(arg3 + 0x30) == -0x8000000000000000)
            rcx = 0;
        else
            rcx = *(arg3 + 0x38);
        
        uint64_t rax_4 = *(arg3 + 0x40);
        int64_t var_2b0_1 = -0x7ffffffffffffffe;
        int64_t r13_1 = r12_1;
        int64_t rax_5 = r13;
        
        while (true)
        {
            int64_t temp0_1 = r13_1;
            r13_1 -= rax_5;
            
            if (temp0_1 < rax_5)
                r13_1 = 0;
            
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1d853640473e5f57(&var_348, &var_128);
            
            if (var_348 == var_2b0_1)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            int128_t var_2f8;
            int128_t var_258_1 = var_2f8;
            int128_t var_308;
            int128_t var_268_1 = var_308;
            int128_t var_318;
            int128_t var_278_1 = var_318;
            int128_t var_288_1 = var_328_1;
            var_298 = var_338_1;
            var_2a8 = var_348;
            int64_t var_238;
            uu_sort::merge::merge_without_limit::h90f0af993e6589a0(&var_238, &var_2a8, arg3);
            int64_t rdx_3 = var_238;
            int64_t var_230;
            int64_t rax_7 = var_230;
            int64_t var_228;
            int64_t rcx_1 = var_228;
            
            if (rdx_3 == 3)
            {
                label_52b28e:
                arg1[1] = rax_7;
                arg1[2] = rcx_1;
                *arg1 = 3;
            }
            else
            {
                int64_t var_1e0;
                int64_t var_180_1 = var_1e0;
                int64_t var_1d8 = rdx_3;
                int64_t var_1d0_1 = rax_7;
                uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&var_238, arg4);
                
                if (var_230 == -0x8000000000000000)
                {
                    *(arg1 + 8) = var_228;
                    *arg1 = 3;
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(
                        &var_1d8);
                }
                else
                {
                    int64_t var_178 = var_238;
                    int64_t var_170_1 = var_230;
                    int128_t var_168_1 = var_228;
                    _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::heb853a4412795411(&var_348, &var_178, rcx, rax_4);
                    int64_t rdx_5 = var_348;
                    int64_t rax_9 = *var_348[8];
                    int64_t rcx_4 = var_338_1;
                    
                    if (rdx_5 == -0x8000000000000000)
                    {
                        arg1[1] = rax_9;
                        arg1[2] = rcx_4;
                        *arg1 = 3;
                        core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&var_1d8);
                    }
                    else
                    {
                        int64_t var_2e0;
                        int64_t var_240_1 = var_2e0;
                        var_298 = var_338_1;
                        var_2a8 = rdx_5;
                        *var_2a8[8] = rax_9;
                        var_298 = rcx_4;
                        int128_t var_1f0;
                        int128_t var_2f8_1 = var_1f0;
                        int128_t var_200;
                        int128_t var_308_1 = var_200;
                        int128_t var_210;
                        int128_t var_318_1 = var_210;
                        int128_t var_220;
                        int128_t var_328_2 = var_220;
                        int128_t var_338_2 = rcx_1;
                        var_348 = var_1d8;
                        int64_t rax_11;
                        int64_t rdx_7;
                        rax_11 =
                            uu_sort::merge::FileMerger::write_all_to::h13897dacf7fa302c(&var_348);
                        
                        if (!rax_11)
                        {
                            int128_t var_248;
                            int128_t var_2e8_1 = var_248;
                            var_338_1 = var_298;
                            var_348 = var_2a8;
                            _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hb0f248599453c45a(&var_238, &var_348);
                            int64_t rdx_8 = var_238;
                            rax_7 = var_230;
                            rcx_1 = var_228;
                            
                            if (rdx_8 == -0x8000000000000000)
                                goto label_52b28e;
                            
                            int64_t var_130_1 = var_210;
                            int128_t var_140_1 = var_220;
                            int64_t var_158 = rdx_8;
                            int64_t var_150_1 = rax_7;
                            int64_t var_148_1 = rcx_1;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h0eb5ff577fb6ec6f(&var_2d0, 
                                &var_158);
                            rax_5 = r13;
                            bool cond:0_1 = r12_1 > rax_5;
                            r12_1 = r13_1;
                            
                            if (!cond:0_1)
                                goto label_52b205;
                            
                            continue;
                        }
                        
                        arg1[1] = rax_11;
                        arg1[2] = rdx_7;
                        *arg1 = 3;
                        core::ptr::drop_in_place$LT$uu_sort..merge..WriteableCompressedTmpFile$GT$::hff0974eb3aed4073(&var_2a8);
                    }
                }
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$GT$::he5fe38c72fe752c2(&var_2d0);
            break;
        }
    }
    return core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h9f76f4aa772d7d5e(&var_128);
}
