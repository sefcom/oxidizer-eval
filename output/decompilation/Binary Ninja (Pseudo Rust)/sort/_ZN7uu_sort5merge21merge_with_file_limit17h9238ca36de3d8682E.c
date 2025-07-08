
  fn uu_sort::merge::merge_with_file_limit::h9238ca36de3d8682(arg1: *mut i64, arg2: *mut i128, arg3: *mut c_void, arg4: *mut c_void) -> *mut i64

{
    let rax: i64 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h6e5e97567931d2de(arg2);
    let r13: i64 = *arg3.byte_offset(0x70);
    let mut var_118: i128;
    
    if rax <= r13
    {
        let var_108_1: i128 = arg2[1];
        var_118 = *arg2;
        uu_sort::merge::merge_without_limit::h8c704bfae6c82ba5(arg1, &var_118, arg3);
    }
    else
    {
        let mut r12_1: i64 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..exact_size..ExactSizeIterator$GT$::len::h6e5e97567931d2de(arg2);
        let mut var_328_1: i128 = arg2[1];
        let mut var_338: i128 = *arg2;
        itertools::Itertools::chunks::h6f22875c8c7cd227(&var_118, &var_338, r13);
        let mut var_2c0: i64 = 0;
        let var_2b8_1: i64 = 8;
        let var_2b0_1: i64 = 0;
        let mut var_298: i128;
        let mut var_288: i128;
        
        if r12_1 == 0
        {
            'label_52ab85:
            _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he13ee4938c3c1bd3(&var_338, &var_118);
            
            if var_338 != -0x7ffffffffffffffe
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h730187e046b76eb9(&var_338);
                core::panicking::panic::h8c3a660c3523e4a4("assertion failed: batches.next()…");
                /* no return */
            }
            
            core::ptr::drop_in_place$LT$core..option..Option$LT$itertools..groupbylazy..Chunk$LT$core..iter..adapters..map..Map$LT$alloc..vec..into_iter..IntoIter$LT$uu_sort..merge..ClosedCompressedTmpFile$GT$$C$uu_sort..ext_sort..reader_writer$LT$$RF$mut$u20$core..iter..adapters..map..Map$LT$core..slice..iter..Iter$LT$std..ffi..os_str..OsString$GT$$C$uu_sort..open$LT$$RF$std..ffi..os_str..OsString$GT$$GT$$C$uu_sort..merge..WriteableCompressedTmpFile$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$$GT$$GT$$GT$::h730187e046b76eb9(&var_338);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd7227d41e8805a51(&var_298, &var_2c0);
            let rax_11: i64 = alloc::boxed::Box$LT$T$GT$::new::h42824d1ebc8aa3aa();
            let var_328_3: i128 = var_288;
            var_338 = var_298;
            let var_318_1: i64 = rax_11;
            let var_310_1: *mut c_void = &data_6002f8;
            uu_sort::merge::merge_with_file_limit::hb42914714851d269(arg1, &var_338, arg3, arg4);
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
            
            let rax_3: u64 = *arg3.byte_offset(0x40);
            let var_2a0_1: i64 = -0x7ffffffffffffffe;
            let mut r13_1: i64 = r12_1;
            let mut rax_4: i64 = r13;
            
            loop
            {
                let temp0_1: i64 = r13_1;
                r13_1 -= rax_4;
                
                if temp0_1 < rax_4
                {
                    r13_1 = 0;
                }
                
                _$LT$itertools..groupbylazy..Chunks$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he13ee4938c3c1bd3(&var_338, &var_118);
                
                if var_338 == var_2a0_1
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                let var_2e8: i128;
                let var_248_1: i128 = var_2e8;
                let var_2f8: i128;
                let var_258_1: i128 = var_2f8;
                let var_308: i128;
                let var_268_1: i128 = var_308;
                let mut var_318: i64;
                let mut var_278_1: i128 = var_318;
                var_288 = var_328_1;
                var_298 = var_338;
                let mut var_228: i64;
                uu_sort::merge::merge_without_limit::hb625e29ae468ce09(&var_228, &var_298, arg3);
                let rdx_3: i64 = var_228;
                let var_220: i64;
                let mut rax_6: i64 = var_220;
                let var_218: i64;
                let mut rcx_1: i64 = var_218;
                
                if rdx_3 == 3
                {
                    'label_52ac0e:
                    arg1[1] = rax_6;
                    arg1[2] = rcx_1;
                    *arg1 = 3;
                }
                else
                {
                    let var_1d0: i64;
                    let var_170_1: i64 = var_1d0;
                    let mut var_1c8: i64 = rdx_3;
                    let var_1c0_1: i64 = rax_6;
                    uu_sort::tmp_dir::TmpDirWrapper::next_file::h05b3ad075068705f(&var_228, arg4);
                    
                    if var_220 == -0x8000000000000000
                    {
                        *arg1.byte_offset(8) = var_218;
                        *arg1 = 3;
                        core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&var_1c8);
                    }
                    else
                    {
                        let mut var_168: i64 = var_228;
                        let var_160_1: i64 = var_220;
                        let var_158_1: i128 = var_218;
                        _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::create::heb853a4412795411(&var_338, &var_168, rcx, rax_3);
                        let rdx_5: i64 = var_338;
                        let rax_8: i64 = *var_338[8];
                        let rcx_4: i64 = var_328_1;
                        
                        if rdx_5 == -0x8000000000000000
                        {
                            arg1[1] = rax_8;
                            arg1[2] = rcx_4;
                            *arg1 = 3;
                            core::ptr::drop_in_place$LT$uu_sort..merge..FileMerger$GT$::hc0f545c2cd5ee31c(&var_1c8);
                        }
                        else
                        {
                            let var_2d0: i64;
                            let var_230_1: i64 = var_2d0;
                            let var_310: i64;
                            var_278_1 = var_310;
                            var_288 = var_328_1;
                            var_298 = rdx_5;
                            *var_298[8] = rax_8;
                            var_288 = rcx_4;
                            let var_1e0: i128;
                            let var_2e8_1: i128 = var_1e0;
                            let var_1f0: i128;
                            let var_2f8_1: i128 = var_1f0;
                            let var_200: i128;
                            let var_308_1: i128 = var_200;
                            let var_210: i128;
                            var_318 = var_210;
                            let var_328_2: i128 = rcx_1;
                            var_338 = var_1c8;
                            let mut rax_10: i64;
                            let mut rdx_7: i64;
                            rax_10 = uu_sort::merge::FileMerger::write_all_to::h13897dacf7fa302c(
                                &var_338);
                            
                            if rax_10 == 0
                            {
                                let var_238: i128;
                                let var_2d8_1: i128 = var_238;
                                var_318 = var_278_1;
                                var_328_1 = var_288;
                                var_338 = var_298;
                                _$LT$uu_sort..merge..WriteableCompressedTmpFile$u20$as$u20$uu_sort..merge..WriteableTmpFile$GT$::finished_writing::hb0f248599453c45a(&var_228, &var_338);
                                let rdx_8: i64 = var_228;
                                rax_6 = var_220;
                                rcx_1 = var_218;
                                
                                if rdx_8 == -0x8000000000000000
                                {
                                    goto 'label_52ac0e;
                                }
                                
                                let var_120_1: i64 = var_200;
                                let var_130_1: i128 = var_210;
                                let mut var_148: i64 = rdx_8;
                                let var_140_1: i64 = rax_6;
                                let var_138_1: i64 = rcx_1;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h0eb5ff577fb6ec6f(&var_2c0, 
                                    &var_148);
                                rax_4 = r13;
                                let cond:0_1: bool = r12_1 > rax_4;
                                r12_1 = r13_1;
                                
                                if !cond:0_1
                                {
                                    goto 'label_52ab85;
                                }
                                
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
    arg1
}
