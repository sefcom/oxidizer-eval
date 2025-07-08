
  fn uu_sort::merge::merge_with_file_limit::h68734aa550059387(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut c_void, arg5: *mut c_void) -> i64

{
    let mut var_260: i64 = arg2;
    let rax: i64 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hbd1c0dc342c9868d(&var_260);
    let r12: i64 = *arg4.byte_offset(0x70);
    
    if rax <= r12
    {
        return uu_sort::merge::merge_without_limit::hde06756ea8b79739(arg1, var_260, arg3, arg4);
    }
    
    let mut rbx_1: i64 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::hbd1c0dc342c9868d(&var_260);
    let mut var_d0: ();
    itertools::Itertools::chunks::hdc493e564df35cd7(&var_d0, var_260, arg3, r12);
    let mut var_1b8: i64 = 0;
    let var_1b0_1: i64 = 8;
    let var_1a8_1: i64 = 0;
    let mut var_218: i32;
    let mut var_168: i128;
    let mut var_158: i128;
    
    if rbx_1 == 0
    {
        'label_52a52c:
        _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc65e742b2db28af5(&var_218, &var_d0);
        
        if var_218 != 3
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h9933d114d7b58fde(&var_218);
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next()…");
            /* no return */
        }
        
        core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h9933d114d7b58fde(&var_218);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hfe0833828f6f3053(&var_168, &var_1b8);
        let rax_9: i64 = alloc::boxed::Box$LT$T$GT$::new::h609552d0dc279bd4();
        let var_208_2: i128 = var_158;
        var_218 = var_168;
        let var_1f8_1: i64 = rax_9;
        let var_1f0_1: *mut c_void = &data_6002b8;
        uu_sort::merge::merge_with_file_limit::hc0e6e7450cc5dee9(arg1, &var_218, arg4, arg5);
    }
    else
    {
        let mut r13_1: i64 = rbx_1;
        
        loop
        {
            let temp0_1: i64 = r13_1;
            r13_1 -= r12;
            
            if temp0_1 < r12
            {
                r13_1 = 0;
            }
            
            let mut var_1a0: i32;
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc65e742b2db28af5(&var_1a0, &var_d0);
            
            if var_1a0 == 3
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            let var_180: i64;
            let var_228_1: i64 = var_180;
            let mut var_190: i128;
            let var_238_1: i128 = var_190;
            let mut var_248: i128 = var_1a0;
            uu_sort::merge::merge_without_limit::h957af4587d2d4d7a(&var_218, &var_248, arg4);
            let rdx_2: i64 = var_218;
            let var_210: i64;
            let mut rax_3: i64 = var_210;
            let mut var_208: i64;
            let mut rcx_1: i64 = var_208;
            
            if rdx_2 == 3
            {
                'label_52a5c7:
                arg1[1] = rax_3;
                arg1[2] = rcx_1;
                *arg1 = 3;
            }
            else
            {
                let var_1c0: i64;
                let var_110_1: i64 = var_1c0;
                var_168 = rdx_2;
                *var_168[8] = rax_3;
                var_158 = rcx_1;
                uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&var_248, arg5);
                let rax_4: i64 = *var_248[8];
                
                if rax_4 == -0x8000000000000000
                {
                    *arg1.byte_offset(8) = var_238_1;
                    *arg1 = 3;
                    core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(
                        &var_168);
                }
                else
                {
                    let mut var_f0: i64 = var_248;
                    let var_e8_1: i64 = rax_4;
                    let var_e0_1: i128 = var_238_1;
                    _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::hf387bcea2432cd24(&var_218, &var_f0);
                    let rdx_3: i64 = var_218;
                    
                    if rdx_3 == -0x8000000000000000
                    {
                        arg1[1] = var_210;
                        arg1[2] = var_208;
                        *arg1 = 3;
                        core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&var_168);
                    }
                    else
                    {
                        let var_1f0: i64;
                        let var_178_1: i128 = var_1f0;
                        let var_200: i128;
                        var_190 = var_200;
                        var_1a0 = rdx_3;
                        let var_198_1: i64 = var_210;
                        var_190 = var_208;
                        let mut var_1e8_1: i128 = var_1f0;
                        let mut var_1f8: i64;
                        var_1f8 = var_200;
                        let var_208_1: i128 = var_158;
                        var_218 = var_168;
                        let mut rax_7: i64;
                        let mut rdx_5: i64;
                        rax_7 =
                            uu_sort::merge::FileMerger::write_all_to::h1c9339354b7849ec(&var_218);
                        
                        if rax_7 == 0
                        {
                            var_1e8_1 = *var_178_1[8];
                            var_1f8 = var_180;
                            var_208 = var_190;
                            var_218 = var_1a0;
                            _$LT$uu_sort..merge..WriteablePlainTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::h5f1c720516718632(&var_248, &var_218);
                            let rdx_6: i64 = var_248;
                            rax_3 = *var_248[8];
                            rcx_1 = var_238_1;
                            
                            if rdx_6 == -0x8000000000000000
                            {
                                goto 'label_52a5c7;
                            }
                            
                            let mut var_108: i64 = rdx_6;
                            let var_100_1: i64 = rax_3;
                            let var_f8_1: i64 = rcx_1;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h3f59369679f0d1cb(&var_1b8, 
                                &var_108);
                            let cond:0_1: bool = rbx_1 > r12;
                            rbx_1 = r13_1;
                            
                            if !cond:0_1
                            {
                                goto 'label_52a52c;
                            }
                            
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
    core::ptr::drop_in_place$LT$itertools..groupbylazy..IntoChunks$LT$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..merge..merge..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$::h18550a823b66643e(&var_d0)
}
