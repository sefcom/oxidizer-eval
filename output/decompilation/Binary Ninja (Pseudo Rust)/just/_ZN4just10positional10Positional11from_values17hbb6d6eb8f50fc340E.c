
  fn just::positional::Positional::from_values::hbb6d6eb8f50fc340(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let mut var_c0: i64 = 0;
    let var_b8: i64 = 8;
    let var_b0: i64 = 0;
    let mut var_f8: i64 = -0x8000000000000000;
    let mut var_d8: i64 = 0;
    let var_d0: i64 = 8;
    let var_c8: i64 = 0;
    let mut result: i64;
    
    if *arg2 != 0
    {
        let mut var_70: ();
        _$LT$I$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h029472710093ea7d(&var_70, arg2);
        
        loop
        {
            let mut rax_1: *mut i8;
            let mut rdx_1: u64;
            rax_1 = _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha6f0cdde85706aa1(&var_70);
            
            if rax_1 == 0
            {
                break;
            }
            
            let mut var_138: i128;
            let mut var_118: i128;
            let result_1: i64;
            
            if var_f8 == -0x8000000000000000 && var_c8 == 0
            {
                let mut var_a0: i64;
                just::positional::Positional::override_from_value::h0d8f5d3e1a677c8c(&var_a0, 
                    rax_1, rdx_1);
                
                if var_a0 != -0x8000000000000000
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hff6ccef2fe66f0c2(&var_c0, &var_a0);
                    continue;
                }
                else
                {
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(rax_1, rdx_1, ".//rustc/bf64d66bd58719fac2585ea…", 1) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(rax_1, rdx_1, 
                        "...//rustc/bf64d66bd58719fac2585…", 2) == 0
                    {
                        let mut rax_7: i8;
                        let mut rdx_6: i64;
                        rax_7 = core::str::_$LT$impl$u20$str$GT$::rfind::h3ed37aa92ebc51ef(rax_1, 
                            rdx_1);
                        
                        if (rax_7 & 1) == 0
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_118, rax_1, rdx_1);
                            let result_4: i64 = result_1;
                            var_138 = var_118;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_d8, 
                                &var_138);
                            continue;
                        }
                        else
                        {
                            core::str::_$LT$impl$u20$str$GT$::split_at_checked::h496d55096ddfbaef(
                                &var_118, rax_1, rdx_1, rdx_6 + 1);
                            let rsi_9: i64 = var_118;
                            
                            if rsi_9 == 0
                            {
                                core::str::slice_error_fail::h1a2885084e28d077(rax_1, rdx_1, 0, 
                                    rdx_6 + 1);
                                /* no return */
                            }
                            
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_118, rsi_9, *var_118[8]);
                            var_138 = var_118;
                            core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(
                                &var_f8);
                            result = result_1;
                            var_f8 = var_138;
                            let var_100: u64;
                            
                            if var_100 == 0
                            {
                                continue;
                            }
                            else
                            {
                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_118, result_1, var_100);
                                let result_3: i64 = result_1;
                                var_138 = var_118;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_d8, 
                                    &var_138);
                                continue;
                            }
                        }
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_118, rax_1, rdx_1);
                    var_138 = var_118;
                    core::ptr::drop_in_place$LT$regex..error..Error$GT$::h38559d1aa9a290b7(&var_f8);
                    result = result_1;
                    var_f8 = var_138;
                    continue;
                }
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_118, rax_1, rdx_1);
            let result_2: i64 = result_1;
            var_138 = var_118;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h2be7ee32b7c9f397(&var_d8, &var_138);
        }
    }
    
    arg1[2] = var_c8;
    *arg1 = var_d8;
    arg1[1] = var_d0;
    arg1[3] = var_c0;
    arg1[4] = var_b8;
    arg1[5] = var_b0;
    *arg1.byte_offset(0x30) = var_f8;
    arg1[8] = result;
    result
}
