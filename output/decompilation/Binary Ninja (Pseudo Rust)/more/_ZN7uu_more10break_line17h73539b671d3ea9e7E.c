
  fn uu_more::break_line::h73539b671d3ea9e7(arg1: *mut i128, arg2: *mut i8, arg3: u64, arg4: i64) -> i64

{
    let rax: i64 = unicode_width::str_width::hf245007b39258182(arg2, arg3, 0);
    let mut var_150: i64 = 0;
    let var_148: i64 = 8;
    let result: i64 = 0;
    let mut var_138: i128;
    let mut var_110: i64;
    
    if rax >= arg4
    {
        var_110 = 0;
        let var_100_1: i64 = 0;
        let var_f0_1: i64 = 0;
        let var_e0_1: i64 = 0;
        let var_d8_1: u64 = arg3;
        let var_d0_1: i64 = 0;
        let var_c8_1: i8 = 2;
        let var_c4_1: i32 = 0x10020001;
        let var_c0_1: i8 = 0x10;
        let var_b8_1: i64 = 0;
        let var_a8_1: i64 = 0;
        let var_98_1: i64 = 0;
        let var_88_1: u64 = arg3;
        let var_80_1: u64 = arg3;
        let var_78_1: i64 = 0;
        let var_70_1: i8 = 2;
        let var_6c_1: i32 = 0x10020001;
        let var_68_1: i8 = 0x10;
        let var_60_1: *mut i8 = arg2;
        let var_58_1: u64 = arg3;
        let mut var_168_1: *mut c_void = nullptr;
        let mut var_120_1: *mut *mut [i8; 0xbe] = &data_562b98;
        let mut r14_1: i64 = 0;
        
        loop
        {
            let mut rax_2: *mut c_void;
            let mut rdx_1: i64;
            rax_2 = _$LT$unicode_segmentation..grapheme..Graphemes$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8ebf6d9da3d275ef(&var_110);
            let mut rbp_2: *mut c_void;
            
            if rax_2 == 0
            {
                rbp_2 = arg3;
                
                if var_168_1 == rbp_2
                {
                    break;
                }
                
                let mut rax_6: *mut c_void;
                let mut rdx_5: u64;
                rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(var_168_1, arg2, rbp_2);
                
                if rax_6 != 0
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h12e9e4e6512a0ac3(
                        &var_110, rax_6, rdx_5);
                    let var_128_2: i64 = var_100_1;
                    var_138 = var_110;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hc1013e28eda8a57c(&var_150, &var_138);
                    break;
                }
                
                var_120_1 = &data_562b80;
            }
            else
            {
                let rax_3: i64 = unicode_width::str_width::hf245007b39258182(rax_2, rdx_1, 0);
                r14_1 += rax_3;
                
                if r14_1 <= arg4
                {
                    continue;
                }
                else
                {
                    rbp_2 = rax_2.byte_offset(-arg2);
                    let mut rax_4: *mut c_void;
                    let mut rdx_3: u64;
                    rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h3d479bbd9c610d76(var_168_1, rbp_2, arg2, arg3);
                    
                    if rax_4 != 0
                    {
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h12e9e4e6512a0ac3(&var_138, rax_4, rdx_3);
                        let var_128: i64;
                        let var_38_1: i64 = var_128;
                        let mut var_48: i128 = var_138;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hc1013e28eda8a57c(&var_150, &var_48);
                        var_168_1 = rbp_2;
                        r14_1 = rax_3;
                        continue;
                    }
                }
            }
            
            core::str::slice_error_fail::h5dbb61534404fe7e(arg2, arg3, var_168_1, rbp_2);
            /* no return */
        }
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h12e9e4e6512a0ac3(&var_110, 
            arg2, arg3);
        let var_100: i64;
        let var_128_1: i64 = var_100;
        var_138 = var_110;
        alloc::vec::Vec$LT$T$C$A$GT$::push::hc1013e28eda8a57c(&var_150, &var_138);
    }
    arg1[1] = result;
    *arg1 = var_150;
    result
}
