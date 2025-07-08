
  fn uu_sort::merge::merge_with_file_limit::hb42914714851d269(arg1: *mut i64, arg2: *mut i128, arg3: *mut c_void, arg4: *mut c_void) -> i64

{
    let rax: i64 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h15a50e9bf8043b56(arg2);
    let r13: i64 = *arg3.byte_offset(0x70);
    let mut var_128: i128;
    
    if rax <= r13
    {
        let var_108_1: i128 = arg2[2];
        let var_118_1: i128 = arg2[1];
        var_128 = *arg2;
        return uu_sort::merge::merge_without_limit::h3f51658ed9f64253(arg1, &var_128, arg3);
    }
    
    let mut r12_1: i64 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h15a50e9bf8043b56(arg2);
    let mut var_328_1: i128 = arg2[2];
    let mut var_338_1: i128 = arg2[1];
    let mut var_348: i128 = *arg2;
    itertools::Itertools::chunks::h750e5a5d4e71cbe4(&var_128, &var_348, r13);
    let mut var_2d0: i64 = 0;
    let var_2c8_1: i64 = 8;
    let var_2c0_1: i64 = 0;
    let mut var_2a8: i128;
    let mut var_298: i128;
    
    if r12_1 == 0
    {
        'label_52b205:
        _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1d853640473e5f57(&var_348, &var_128);
        
        if var_348 != -0x7ffffffffffffffe
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::h2f7fe0f236b44ef1(&var_348);
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next()…");
            /* no return */
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$$GT$::h2f7fe0f236b44ef1(&var_348);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd7227d41e8805a51(&var_2a8, &var_2d0);
        let rax_12: i64 = alloc::boxed::Box$LT$T$GT$::new::ha32bffbf5181790f();
        let var_338_3: i128 = var_298;
        var_348 = var_2a8;
        var_328_1 = rax_12;
        *var_328_1[8] = &data_600320;
        uu_sort::merge::merge_with_file_limit::hb42914714851d269(arg1, &var_348, arg3, arg4);
    }
    else
    {
        let mut rcx: i64;
        
        if *arg3.byte_offset(0x30) == -0x8000000000000000
        {
            rcx = 0;
        }
        else
        {
            rcx = *arg3.byte_offset(0x38);
        }
        
        let rax_4: u64 = *arg3.byte_offset(0x40);
        let var_2b0_1: i64 = -0x7ffffffffffffffe;
        let mut r13_1: i64 = r12_1;
        let mut rax_5: i64 = r13;
        
        loop
        {
            let temp0_1: i64 = r13_1;
            r13_1 -= rax_5;
            
            if temp0_1 < rax_5
            {
                r13_1 = 0;
            }
            
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1d853640473e5f57(&var_348, &var_128);
            
            if var_348 == var_2b0_1
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            let var_2f8: i128;
            let var_258_1: i128 = var_2f8;
            let var_308: i128;
            let var_268_1: i128 = var_308;
            let var_318: i128;
            let var_278_1: i128 = var_318;
            let var_288_1: i128 = var_328_1;
            var_298 = var_338_1;
            var_2a8 = var_348;
            let mut var_238: i64;
            uu_sort::merge::merge_without_limit::h90f0af993e6589a0(&var_238, &var_2a8, arg3);
            let rdx_3: i64 = var_238;
            let var_230: i64;
            let mut rax_7: i64 = var_230;
            let var_228: i64;
            let mut rcx_1: i64 = var_228;
            
            if rdx_3 == 3
            {
                'label_52b28e:
                arg1[1] = rax_7;
                arg1[2] = rcx_1;
                *arg1 = 3;
            }
            else
            {
                let var_1e0: i64;
                let var_180_1: i64 = var_1e0;
                let mut var_1d8: i64 = rdx_3;
                let var_1d0_1: i64 = rax_7;
                uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&var_238, arg4);
                
                if var_230 == -0x8000000000000000
                {
                    *arg1.byte_offset(8) = var_228;
                    *arg1 = 3;
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(
                        &var_1d8);
                }
                else
                {
                    let mut var_178: i64 = var_238;
                    let var_170_1: i64 = var_230;
                    let var_168_1: i128 = var_228;
                    _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::heb853a4412795411(&var_348, &var_178, rcx, rax_4);
                    let rdx_5: i64 = var_348;
                    let rax_9: i64 = *var_348[8];
                    let rcx_4: i64 = var_338_1;
                    
                    if rdx_5 == -0x8000000000000000
                    {
                        arg1[1] = rax_9;
                        arg1[2] = rcx_4;
                        *arg1 = 3;
                        core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&var_1d8);
                    }
                    else
                    {
                        let var_2e0: i64;
                        let var_240_1: i64 = var_2e0;
                        var_298 = var_338_1;
                        var_2a8 = rdx_5;
                        *var_2a8[8] = rax_9;
                        var_298 = rcx_4;
                        let var_1f0: i128;
                        let var_2f8_1: i128 = var_1f0;
                        let var_200: i128;
                        let var_308_1: i128 = var_200;
                        let var_210: i128;
                        let var_318_1: i128 = var_210;
                        let var_220: i128;
                        let var_328_2: i128 = var_220;
                        let var_338_2: i128 = rcx_1;
                        var_348 = var_1d8;
                        let mut rax_11: i64;
                        let mut rdx_7: i64;
                        rax_11 =
                            uu_sort::merge::FileMerger::write_all_to::h13897dacf7fa302c(&var_348);
                        
                        if rax_11 == 0
                        {
                            let var_248: i128;
                            let var_2e8_1: i128 = var_248;
                            var_338_1 = var_298;
                            var_348 = var_2a8;
                            _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hb0f248599453c45a(&var_238, &var_348);
                            let rdx_8: i64 = var_238;
                            rax_7 = var_230;
                            rcx_1 = var_228;
                            
                            if rdx_8 == -0x8000000000000000
                            {
                                goto 'label_52b28e;
                            }
                            
                            let var_130_1: i64 = var_210;
                            let var_140_1: i128 = var_220;
                            let mut var_158: i64 = rdx_8;
                            let var_150_1: i64 = rax_7;
                            let var_148_1: i64 = rcx_1;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h0eb5ff577fb6ec6f(&var_2d0, 
                                &var_158);
                            rax_5 = r13;
                            let cond:0_1: bool = r12_1 > rax_5;
                            r12_1 = r13_1;
                            
                            if !cond:0_1
                            {
                                goto 'label_52b205;
                            }
                            
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
    core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$alloc..boxed..Box$LT$dyn$u20$core..ops..function..FnMut$LT$$LP$uu_sort..merge..ClosedCompressedTmpFile$C$$RP$$GT$$u2b$Output$u20$$u3d$$u20$core..result..Result$LT$uu_sort..merge..CompressedTmpMergeInput$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$$GT$$GT$::h9f76f4aa772d7d5e(&var_128)
}
