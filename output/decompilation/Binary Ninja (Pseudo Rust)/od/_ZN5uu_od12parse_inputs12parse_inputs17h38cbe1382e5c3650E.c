
  fn uu_od::parse_inputs::parse_inputs::h38cbe1382e5c3650(arg1: *mut i128, arg2: i64, arg3: *mut c_void) -> *mut i128

{
    let mut var_60: ();
    (*arg3.byte_offset(0x18))(&var_60);
    let r15_1: i64 = *arg3.byte_offset(0x20);
    let var_58: *mut i64;
    let var_50: i64;
    
    if r15_1(arg2, &data_541e48, 1) == 0
    {
        let mut rdx_1: i64 = var_50;
        let mut var_48: i128;
        let var_38: i64;
        
        if rdx_1 - 1 >= 2
        {
            'label_4d2ccd:
            
            if rdx_1 == 0
            {
                alloc::vec::Vec$LT$T$C$A$GT$::push::hef5220248dbc45bb(&var_60);
                rdx_1 = var_50;
            }
            
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hff0e80f7eaa39b66(&var_48, var_58, &var_58[rdx_1 * 2]);
            arg1[1] = var_38;
            *arg1 = var_48;
            arg1[2] = 2;
        }
        else
        {
            rdx_1 = var_50;
            
            if r15_1(arg2, &data_541e58, 6) != 0
            {
                goto 'label_4d2ccd;
            }
            
            if rdx_1 < 1
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(rdx_1 - 1, 0);
                /* no return */
            }
            
            let rdx_3: i64 = (rdx_1 - 1) << 4;
            let mut var_30: i64;
            uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&var_30, 
                *var_58.byte_offset(rdx_3), *var_58.byte_offset(rdx_3).byte_offset(8));
            rdx_1 = var_50;
            
            if var_30 != 0
            {
                goto 'label_4d2ccd;
            }
            
            if rdx_1 != 1
            {
                goto 'label_4d2d88;
            }
            
            var_48 = 0;
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h0450dff97e96928e(*var_58, 
                var_58[1], core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2b, &var_48), 
                1) == 0
            {
                rdx_1 = var_50;
                'label_4d2d88:
                
                if rdx_1 != 2
                {
                    goto 'label_4d2ccd;
                }
                
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(
                    &var_48, *var_58, var_58[1]);
            }
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(
                    &var_48, "-traditionaladdress-radixread-by…", 1);
            }
            
            arg1[1] = var_38;
            *arg1 = var_48;
            let var_28: i64;
            *arg1.byte_offset(0x18) = var_28;
            arg1[2] = 0;
        }
    }
    else
    {
        uu_od::parse_inputs::parse_inputs_traditional::h2788ba0cc89acb8c(arg1, var_58, var_50);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::h74e9455f611cd62b(&var_60);
    arg1
}
