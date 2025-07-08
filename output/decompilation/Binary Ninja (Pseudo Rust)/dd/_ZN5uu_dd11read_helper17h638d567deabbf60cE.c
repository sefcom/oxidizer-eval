
  fn uu_dd::read_helper::h638d567deabbf60c(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i128, arg4: i64) -> u64

{
    alloc::vec::Vec$LT$T$C$A$GT$::resize::h7ed7dd5e8601bb1e(arg3, arg4, 0xdd);
    let rax: *mut c_void = *arg2.byte_offset(8);
    let mut var_60: i64;
    
    if *rax.byte_offset(0x68) == 0
    {
        uu_dd::Input::fill_consecutive::h7d4bc8ab92dd656e(&var_60, arg2, arg3);
    }
    else
    {
        uu_dd::Input::fill_blocks::h45cc08a13ee607a5(&var_60, arg2, arg3, *rax.byte_offset(0x69));
    }
    
    let result_2: u64;
    let mut result: u64 = result_2;
    
    if var_60 == 0
    {
        let var_40: i64;
        let var_68_1: i64 = var_40;
        let mut result_1: u64 = result;
        let var_50: i128;
        let mut zmm0_1: i128;
        
        if result != 0 || var_50 != 0
        {
            let mut r12_1: *mut c_void = *arg2.byte_offset(8);
            
            if *r12_1.byte_offset(0x6a) != 0
            {
                result = uu_dd::read_helper::perform_swab::h674fb7c29172040e(*arg3.byte_offset(8), 
                    arg3[1]);
                r12_1 = *arg2.byte_offset(8);
            }
            
            if *r12_1.byte_offset(0x50) != 7
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0fe0d79b2ed079cc(&var_60, arg3);
                let mut var_38: i128;
                uu_dd::blocks::conv_block_unblock_helper::he5e21bd733c5515f(&var_38, &var_60, 
                    r12_1.byte_offset(0x50), &result_1);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hcaeb013c8c4216fe(arg3);
                let result_3: u64;
                result = result_3;
                arg3[1] = result;
                *arg3 = var_38;
            }
            
            zmm0_1 = result_1;
            *arg1.byte_offset(0x18) = var_50;
            *arg1.byte_offset(8) = zmm0_1;
            *arg1 = 0;
        }
        else
        {
            zmm0_1 = result_1;
            *arg1.byte_offset(0x18) = var_50;
            *arg1.byte_offset(8) = zmm0_1;
            *arg1 = 0;
        }
    }
    else
    {
        arg1[1] = result;
        *arg1 = 1;
    }
    
    result
}
