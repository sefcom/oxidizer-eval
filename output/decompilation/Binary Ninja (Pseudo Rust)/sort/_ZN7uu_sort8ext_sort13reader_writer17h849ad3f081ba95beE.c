
  fn uu_sort::ext_sort::reader_writer::h849ad3f081ba95be(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: *mut i128, arg6: *mut i64, arg7: *mut i64, arg8: *mut c_void) -> *mut c_void

{
    let mut rax: i64;
    let mut rdx: i64;
    rdx = HIGHQ(-0x3333333333333333 * *arg2.byte_offset(0x68));
    rax = LOWQ(-0x3333333333333333 * *arg2.byte_offset(0x68));
    let mut var_110: i64;
    uu_sort::ext_sort::read_write_loop::h130c0126f6a2bd68(&var_110, arg1, arg8, 
        *arg2.byte_offset(0x99), rdx >> 3, arg2, arg3, arg4, arg5, arg6);
    let rcx_1: i64 = var_110;
    let result_3: *mut c_void;
    let mut result: *mut c_void = result_3;
    
    if rcx_1 != -0x7ffffffffffffffd
    {
        let mut var_98: i64 = rcx_1;
        let result_4: *mut c_void = result;
        let rax_1: i64 = -0x8000000000000000 ^ rcx_1;
        let mut rcx_2: i64 = 3;
        
        if rax_1 < 3
        {
            rcx_2 = rax_1;
        }
        
        let var_100: *mut *mut c_void;
        let var_88_1: *mut *mut c_void = var_100;
        let mut result_2: *mut c_void;
        
        match rcx_2
        {
            0 =>
            {
                core::ptr::drop_in_place$LT$uu_sort..Output$GT$::h7def0b71731a8447(arg7);
                return nullptr;
            }
            1 =>
            {
                result_2 = result;
                let mut result_7: *mut c_void;
                
                if *arg2.byte_offset(0x84) == 0
                {
                    let rdi_11: i64 = *result.byte_offset(0x20);
                    result_7 = uu_sort::print_sorted::hf96f077461fc8daa(rdi_11, 
                        rdi_11 + *result.byte_offset(0x28) * 0x18, arg2, arg7);
                }
                else
                {
                    let rax_4: i64 = *result.byte_offset(0x20);
                    let var_100_2: i64 = rax_4;
                    let mut var_f8: i128;
                    var_f8 = rax_4 + *result.byte_offset(0x28) * 0x18;
                    var_110 = 0;
                    *var_f8[8] = arg2;
                    let mut var_e8: i128;
                    var_e8 = &result_2;
                    result_7 = uu_sort::print_sorted::h10a88dada5bd82d9(&var_110, arg2, arg7);
                }
                
                result = result_7;
                
                if result_7 == 0
                {
                    core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(
                        &result_2);
                    return nullptr;
                }
                
                core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(
                    &result_2);
            }
            2 =>
            {
                let mut result_1: *mut c_void = result;
                let mut var_130: *mut *mut c_void = var_100;
                let result_8: *mut c_void = *result.byte_offset(0x20);
                let rcx_5: i64 = *result.byte_offset(0x28);
                result_2 = result_8;
                let var_120_1: *mut c_void = result_8.byte_offset(rcx_5 * 0x18);
                let var_118_1: *mut *mut c_void = &result_1;
                let rax_2: i64 = var_100[4];
                let rcx_8: i64 = var_100[5];
                var_110 = rax_2;
                let var_108: i64 = rax_2 + rcx_8 * 0x18;
                let var_100_1: *const *mut *mut c_void = &var_130;
                let mut var_80: i128;
                itertools::merge_join::merge_by_new::h1d4b470930e6d24a(&var_80, &result_2, 
                    &var_110, arg2);
                let mut result_5: *mut c_void;
                
                if *arg2.byte_offset(0x84) == 0
                {
                    result_5 = uu_sort::print_sorted::ha55b1dbd27657341(&var_80, arg2, arg7);
                }
                else
                {
                    let var_30: i64;
                    let var_a8_1: i64 = var_30;
                    let var_40: i128;
                    let var_b8_1: i128 = var_40;
                    let var_50: i128;
                    let var_c8_1: i128 = var_50;
                    let var_60: i128;
                    let var_d8_1: i128 = var_60;
                    let var_70: i128;
                    let var_e8_1: i128 = var_70;
                    let var_f8_1: i128 = var_80;
                    var_110 = 0;
                    let var_a0_1: *mut c_void = arg2;
                    result_5 = uu_sort::print_sorted::h9511b61c395e85fc(&var_110, arg2, arg7);
                }
                
                result = result_5;
                
                if result_5 == 0
                {
                    core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(
                        &var_130);
                    core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(
                        &result_1);
                    return nullptr;
                }
                
                core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(&var_130);
                core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h49f783d79a42b220(
                    &result_1);
            }
            3 =>
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hf75d9570fff832c0(&var_110, &var_98);
                let mut result_6: *mut c_void;
                let mut rdx_5: *mut *mut c_void;
                result_6 = uu_sort::merge::merge_with_file_limit::hbbb83f2c216a5f5f(&var_110, arg2, 
                    arg7, arg8);
                
                if result_6 == 0
                {
                    return nullptr;
                }
                
                result = result_6;
            }
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$uu_sort..Output$GT$::h7def0b71731a8447(arg7);
    }
    
    result
}
