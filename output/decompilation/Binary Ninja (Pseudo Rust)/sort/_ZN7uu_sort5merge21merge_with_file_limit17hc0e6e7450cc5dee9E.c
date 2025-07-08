
  fn uu_sort::merge::merge_with_file_limit::hc0e6e7450cc5dee9(arg1: *mut i64, arg2: *mut i128, arg3: *mut c_void, arg4: *mut c_void) -> i64

{
    let rax: i64 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hb81b1e03d1e715a4(arg2);
    let r12: i64 = *arg3.byte_offset(0x70);
    let mut var_f8: i128;
    
    if rax <= r12
    {
        let var_d8_1: i128 = arg2[2];
        let var_e8_1: i128 = arg2[1];
        var_f8 = *arg2;
        return uu_sort::merge::merge_without_limit::he170aa40d43822dc(arg1, &var_f8, arg3);
    }
    
    let mut r14_1: i64 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hb81b1e03d1e715a4(arg2);
    let mut var_258_1: i128 = arg2[2];
    let mut var_268_1: i128 = arg2[1];
    let mut var_278: i128 = *arg2;
    itertools::Itertools::chunks::h4fc89ec69f227a1e(&var_f8, &var_278, r12);
    let mut var_218: i64 = 0;
    let var_210_1: i64 = 8;
    let var_208_1: i64 = 0;
    let mut var_190: i128;
    let mut var_180: i128;
    
    if r14_1 == 0
    {
        'label_52b75d:
        _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd0300e6bad5512ed(&var_278, &var_f8);
        
        if var_278 != -0x7ffffffffffffffe
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::hd4c420b3ac4c8b5b(&var_278);
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next()…");
            /* no return */
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::hd4c420b3ac4c8b5b(&var_278);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfe0833828f6f3053(&var_190, &var_218);
        let rax_9: i64 = alloc::boxed::Box$LT$T$GT$::new::h4cf6d2eb54d1ad8d();
        let var_268_3: i128 = var_180;
        var_278 = var_190;
        var_258_1 = rax_9;
        *var_258_1[8] = &data_600348;
        uu_sort::merge::merge_with_file_limit::hc0e6e7450cc5dee9(arg1, &var_278, arg3, arg4);
    }
    else
    {
        let var_198_1: i64 = -0x7ffffffffffffffe;
        let mut r13_1: i64 = r14_1;
        
        loop
        {
            let temp0_1: i64 = r13_1;
            r13_1 -= r12;
            
            if temp0_1 < r12
            {
                r13_1 = 0;
            }
            
            let mut var_200: i64;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd0300e6bad5512ed(&var_200, &var_f8);
            
            if var_200 == var_198_1
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            let mut var_1e0: i128;
            let var_1a8_1: i128 = var_1e0;
            let mut var_1f0: i128;
            let var_1b8_1: i128 = var_1f0;
            let mut var_1c8: i128 = var_200;
            uu_sort::merge::merge_without_limit::hae787fc1656c52a4(&var_278, &var_1c8, arg3);
            let rdx_2: i64 = var_278;
            let mut rax_3: i64 = *var_278[8];
            let mut rcx: i64 = var_268_1;
            
            if rdx_2 == 3
            {
                'label_52b825:
                arg1[1] = rax_3;
                arg1[2] = rcx;
                *arg1 = 3;
            }
            else
            {
                let var_220: i64;
                let var_138_1: i64 = var_220;
                var_190 = rdx_2;
                *var_190[8] = rax_3;
                var_180 = rcx;
                uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&var_1c8, arg4);
                let rax_4: i64 = *var_1c8[8];
                
                if rax_4 == -0x8000000000000000
                {
                    *arg1.byte_offset(8) = var_1b8_1;
                    *arg1 = 3;
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(
                        &var_190);
                }
                else
                {
                    let mut var_118: i64 = var_1c8;
                    let var_110_1: i64 = rax_4;
                    let var_108_1: i128 = var_1b8_1;
                    _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::hf387bcea2432cd24(&var_278, &var_118);
                    let rdx_3: i64 = var_278;
                    let rax_5: i64 = *var_278[8];
                    let rcx_2: i64 = var_268_1;
                    
                    if rdx_3 == -0x8000000000000000
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
                        let var_1f8_1: i64 = rax_5;
                        var_1f0 = rcx_2;
                        let mut var_248_1: i128 = var_258_1;
                        let var_258_2: i128 = var_268_1;
                        let var_268_2: i128 = var_180;
                        var_278 = var_190;
                        let mut rax_7: i64;
                        let mut rdx_5: i64;
                        rax_7 =
                            uu_sort::merge::FileMerger::write_all_to::h1c9339354b7849ec(&var_278);
                        
                        if rax_7 == 0
                        {
                            let var_1d0: i64;
                            var_248_1 = var_1d0;
                            var_258_1 = var_1e0;
                            var_268_1 = var_1f0;
                            var_278 = var_200;
                            _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::h5f1c720516718632(&var_1c8, &var_278);
                            let rdx_6: i64 = var_1c8;
                            rax_3 = *var_1c8[8];
                            rcx = var_1b8_1;
                            
                            if rdx_6 == -0x8000000000000000
                            {
                                goto 'label_52b825;
                            }
                            
                            let mut var_130: i64 = rdx_6;
                            let var_128_1: i64 = rax_3;
                            let var_120_1: i64 = rcx;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h3f59369679f0d1cb(&var_218, 
                                &var_130);
                            let cond:0_1: bool = r14_1 > r12;
                            r14_1 = r13_1;
                            
                            if !cond:0_1
                            {
                                goto 'label_52b75d;
                            }
                            
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
    core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedPlainTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedPlainTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..PlainTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::hf8ae8b052fe96b60(&var_f8)
}
