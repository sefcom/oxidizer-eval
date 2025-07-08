
  fn uu_sort::merge::merge_with_file_limit::hd33eb504f21b1692(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut c_void, arg5: *mut c_void) -> i64

{
    let mut var_2d8: i64 = arg2;
    let rax: i64 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h14ac925f95880609(&var_2d8);
    let r12: i64 = *arg4.byte_offset(0x70);
    
    if rax <= r12
    {
        return uu_sort::merge::merge_without_limit::h2a479b2dd5111a80(arg1, var_2d8, arg3, arg4);
    }
    
    let mut rbx_1: i64 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h14ac925f95880609(&var_2d8);
    let mut var_d0: ();
    itertools::Itertools::chunks::he27e6631739399ae(&var_d0, var_2d8, arg3, r12);
    let mut var_210: i64 = 0;
    let var_208_1: i64 = 8;
    let var_200_1: i64 = 0;
    let mut var_2b8: i32;
    let mut var_1f0: i128;
    let mut var_1e0: i128;
    
    if rbx_1 == 0
    {
        'label_52bda3:
        _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7da568ce01995fdc(&var_2b8, &var_d0);
        
        if var_2b8 != 3
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::hfd58a88f2d1708ef(&var_2b8);
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next()…");
            /* no return */
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::hfd58a88f2d1708ef(&var_2b8);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd7227d41e8805a51(&var_1f0, &var_210);
        let rax_11: i64 = alloc::boxed::Box$LT$T$GT$::new::h139dfdaaee16a1fd();
        let var_2a8_2: i128 = var_1e0;
        var_2b8 = var_1f0;
        let var_298_1: i64 = rax_11;
        let var_290_1: *mut c_void = &data_600370;
        uu_sort::merge::merge_with_file_limit::hb42914714851d269(arg1, &var_2b8, arg4, arg5);
    }
    else
    {
        let mut rax_2: i64;
        
        if *arg4.byte_offset(0x30) == -0x8000000000000000
        {
            rax_2 = 0;
        }
        else
        {
            rax_2 = *arg4.byte_offset(0x38);
        }
        
        let rax_4: u64 = *arg4.byte_offset(0x40);
        let mut r13_1: i64 = rbx_1;
        
        loop
        {
            let temp0_1: i64 = r13_1;
            r13_1 -= r12;
            
            if temp0_1 < r12
            {
                r13_1 = 0;
            }
            
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7da568ce01995fdc(&var_1f0, &var_d0);
            
            if var_1f0 == 3
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            let var_1d0: i64;
            let var_228_1: i64 = var_1d0;
            let var_238_1: i128 = var_1e0;
            let mut var_248: i128 = var_1f0;
            uu_sort::merge::merge_without_limit::h7e976ef640532e43(&var_2b8, &var_248, arg4);
            let rdx_3: i64 = var_2b8;
            let var_2b0: i64;
            let mut rax_6: i64 = var_2b0;
            let mut var_2a8: i128;
            let mut rcx_2: i64 = var_2a8;
            
            if rdx_3 == 3
            {
                'label_52be26:
                arg1[1] = rax_6;
                arg1[2] = rcx_2;
                *arg1 = 3;
            }
            else
            {
                let var_260: i64;
                let var_128_1: i64 = var_260;
                let mut var_180: i64 = rdx_3;
                let var_178_1: i64 = rax_6;
                uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&var_248, arg5);
                let rax_7: i64 = *var_248[8];
                
                if rax_7 == -0x8000000000000000
                {
                    *arg1.byte_offset(8) = var_238_1;
                    *arg1 = 3;
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(
                        &var_180);
                }
                else
                {
                    let mut var_120: i64 = var_248;
                    let var_118_1: i64 = rax_7;
                    let var_110_1: i128 = var_238_1;
                    _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::heb853a4412795411(&var_2b8, &var_120, rax_2, rax_4);
                    let rdx_5: i64 = var_2b8;
                    let rcx_5: i64 = var_2a8;
                    
                    if rdx_5 == -0x8000000000000000
                    {
                        arg1[1] = var_2b0;
                        arg1[2] = rcx_5;
                        *arg1 = 3;
                        core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&var_180);
                    }
                    else
                    {
                        let var_250: i64;
                        let var_188_1: i64 = var_250;
                        let var_198_1: i128 = var_260;
                        let var_290: i64;
                        let var_1c8_1: i128 = var_290;
                        var_1e0 = var_2a8;
                        var_1f0 = rdx_5;
                        *var_1f0[8] = var_2b0;
                        var_1e0 = rcx_5;
                        let var_288_1: i128 = var_290;
                        let mut var_298: i64;
                        var_298 = var_2a8;
                        let var_2a8_1: i128 = rcx_2;
                        var_2b8 = var_180;
                        let mut rax_10: i64;
                        let mut rdx_7: i64;
                        rax_10 =
                            uu_sort::merge::FileMerger::write_all_to::h13897dacf7fa302c(&var_2b8);
                        
                        if rax_10 == 0
                        {
                            let var_258_1: i128 = var_198_1;
                            let var_270: i128 = var_270;
                            let var_280: i128 = var_280;
                            let var_288_2: i128 = var_1c8_1;
                            var_298 = var_1d0;
                            var_2a8 = var_1e0;
                            var_2b8 = var_1f0;
                            _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hb0f248599453c45a(&var_248, &var_2b8);
                            let rdx_8: i64 = var_248;
                            rax_6 = *var_248[8];
                            rcx_2 = var_238_1;
                            
                            if rdx_8 == -0x8000000000000000
                            {
                                goto 'label_52be26;
                            }
                            
                            let var_220: i64;
                            let var_d8_1: i64 = var_220;
                            let var_e8_1: i128 = var_238_1;
                            let mut var_100: i64 = rdx_8;
                            let var_f8_1: i64 = rax_6;
                            let var_f0_1: i64 = rcx_2;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h0eb5ff577fb6ec6f(&var_210, 
                                &var_100);
                            let cond:0_1: bool = rbx_1 > r12;
                            rbx_1 = r13_1;
                            
                            if !cond:0_1
                            {
                                goto 'label_52bda3;
                            }
                            
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
    core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::hbf097aef14ae1e80(&var_d0)
}
