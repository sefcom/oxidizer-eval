
  fn uu_paste::parse_delimiters::h5f1c6018d1fadef2(arg1: u64, arg2: i64, arg3: i64) -> i64

{
    let mut var_60: i64 = arg2;
    let var_58: i64 = arg3;
    let mut var_c4: i32 = 0;
    let mut rax: i64;
    let mut rdx: i64;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h1fa32acdd47f5e6e(arg3, 8, 0x10);
    let mut var_c0: i64 = rax;
    let var_b8: i64 = rdx;
    let var_b0: i64 = 0;
    let mut var_70: i64 = arg2;
    let var_68: i64 = arg3 + arg2;
    let mut rax_1: i8;
    let mut rdx_1: i32;
    rax_1 = core::str::validations::next_code_point::hd6fb93637fe3850a(&var_70, arg1);
    let mut var_a8: i128;
    
    if (rax_1 & 1) != 0
    {
        let mut rax_2: i8;
        
        do
        {
            if rdx_1 != 0x5c
            {
                uu_paste::parse_delimiters::_$u7b$$u7b$closure$u7d$$u7d$::h350d698bfe18c7ac(
                    &var_c4, &var_c0, rdx_1);
            }
            else
            {
                let mut rax_3: i8;
                rax_3 = core::str::validations::next_code_point::hd6fb93637fe3850a(&var_70, arg1);
                
                if (rax_3 & 1) == 0
                {
                    let mut var_50: *mut i64 = &var_60;
                    let var_48_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h733750fe09afa4a3;
                    var_a8 = &data_4dec90;
                    *var_a8[8] = 1;
                    let var_88_1: i64 = 0;
                    let var_98_1: *mut *mut i64 = &var_50;
                    let mut var_90_1: i64 = 1;
                    let mut var_40: i128;
                    core::option::Option$LT$T$GT$::map_or_else::ha1ed41d4b248c8ea(&var_40, &var_a8);
                    var_90_1 = 1;
                    var_a8 = var_40;
                    let var_30: i64;
                    let var_98_2: i64 = var_30;
                    *(arg1 + 8) = alloc::boxed::Box$LT$T$GT$::new::hd8d95bce55d08a3c(&var_a8);
                    *(arg1 + 0x10) = &data_4decf0;
                    *arg1 = 1;
                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..boxed..Box$LT$$u5b$u8$u5d$$GT$$GT$$GT$::ha43f19f279a403ea(&var_c0);
                }
                
                if rdx_1 > 0x6d
                {
                    if rdx_1 == 0x6e
                    {
                        uu_paste::parse_delimiters::add_one_byte_single_char_delimiter::hd82d0d9f8e58e2ab(&var_c0, 0xa);
                    }
                    else if rdx_1 != 0x74
                    {
                        uu_paste::parse_delimiters::_$u7b$$u7b$closure$u7d$$u7d$::h350d698bfe18c7ac(
                            &var_c4, &var_c0, rdx_1);
                    }
                    else
                    {
                        uu_paste::parse_delimiters::add_one_byte_single_char_delimiter::hd82d0d9f8e58e2ab(&var_c0, 9);
                    }
                }
                else if rdx_1 == 0x30
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::hab9f65348b292abf(&var_c0, 
                        alloc::boxed::Box$LT$T$GT$::new::h696e36a6348774e2(), 0);
                }
                else if rdx_1 == 0x5c
                {
                    uu_paste::parse_delimiters::add_one_byte_single_char_delimiter::hd82d0d9f8e58e2ab(&var_c0, 0x5c);
                }
                else
                {
                    uu_paste::parse_delimiters::_$u7b$$u7b$closure$u7d$$u7d$::h350d698bfe18c7ac(
                        &var_c4, &var_c0, rdx_1);
                }
            }
            
            rax_2 = core::str::validations::next_code_point::hd6fb93637fe3850a(&var_70, arg1);
        } while (rax_2 & 1) != 0;
    }
    
    let var_98: i64 = var_b0;
    var_a8 = var_c0;
    let mut result: i64;
    let mut rdx_2: i64;
    result = alloc::vec::Vec$LT$T$C$A$GT$::into_boxed_slice::h5a5236d680e487a4(&var_a8);
    *(arg1 + 8) = result;
    *(arg1 + 0x10) = rdx_2;
    *arg1 = 0;
    result
}
