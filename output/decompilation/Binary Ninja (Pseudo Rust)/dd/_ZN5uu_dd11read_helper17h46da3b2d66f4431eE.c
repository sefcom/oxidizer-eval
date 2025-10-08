
  fn uu_dd::read_helper::h46da3b2d66f4431e(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i128, arg4: i64) -> i64

{
    alloc::vec::Vec$LT$T$C$A$GT$::resize::h82b279a1e4e0a0ea(arg3, arg4, 0xdd);
    let rax: *mut c_void = *arg2.byte_offset(8);
    let mut result: i64;
    let mut var_60: i8;
    let var_58: i64;
    let mut rax_1: i64;
    
    if *rax.byte_offset(0x68) != 1
    {
        uu_dd::Input::fill_consecutive::h39d193754d2b2b2d(&var_60, arg2, arg3);
        rax_1 = var_58;
        
        if (var_60 & 1) == 0
        {
            'label_491c0b:
            let var_40: i64;
            let var_68_1: i64 = var_40;
            let mut var_80: i64 = rax_1;
            let var_50: i128;
            
            if rax_1 != 0 || var_50 != 0
            {
                let mut r12_1: *mut c_void = *arg2.byte_offset(8);
                
                if *r12_1.byte_offset(0x6a) != 0
                {
                    uu_dd::read_helper::perform_swab::h85f2ce77153961c5(*arg3.byte_offset(8), 
                        arg3[1]);
                    r12_1 = *arg2.byte_offset(8);
                }
                
                if *r12_1.byte_offset(0x50) != 7
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h10340bb6599e71ed(&var_60, *arg3.byte_offset(8), arg3[1]);
                    let mut var_38: i128;
                    uu_dd::blocks::conv_block_unblock_helper::hba15d5a3bd29b3b7(&var_38, &var_60, 
                        r12_1.byte_offset(0x50), &var_80);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h270e478e73f6834b(
                        *arg3, *arg3.byte_offset(8));
                    let var_28: i64;
                    arg3[1] = var_28;
                    *arg3 = var_38;
                }
            }
            
            let zmm0_1: i128 = var_80;
            *arg1.byte_offset(0x18) = var_50;
            *arg1.byte_offset(8) = zmm0_1;
            result = 0;
        }
        else
        {
            arg1[1] = rax_1;
            result = 1;
        }
    }
    else
    {
        uu_dd::Input::fill_blocks::h1db18295bd354b67(&var_60, arg2, arg3, *rax.byte_offset(0x69));
        rax_1 = var_58;
        
        if (var_60 & 1) == 0
        {
            goto 'label_491c0b;
        }
        
        arg1[1] = rax_1;
        result = 1;
    }
    *arg1 = result;
    result
}
