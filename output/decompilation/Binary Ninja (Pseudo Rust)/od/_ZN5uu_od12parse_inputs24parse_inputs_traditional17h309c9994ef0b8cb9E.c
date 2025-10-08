
  fn uu_od::parse_inputs::parse_inputs_traditional::h309c9994ef0b8cb9(arg1: *mut i128, arg2: *mut i64, arg3: i64) -> *mut i128

{
    let mut r14: *mut i64 = arg2;
    let mut result: *mut i128;
    let result_2: *mut i128;
    let mut var_a8: *mut c_void;
    let mut var_90: *mut *mut c_void;
    let mut rax_3: *mut *mut c_void;
    
    if arg3 > 3
    {
        var_a8 = &r14[6];
        let var_a0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
        rax_3 = &data_502728;
        'label_46a9c8:
        var_90 = rax_3;
        let var_88_1: i64 = 1;
        let var_70_1: i64 = 0;
        let var_80: *mut *mut c_void = &var_a8;
        let var_78_1: i64 = 1;
        result = core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(arg1, &var_90);
        arg1[2] = 3;
    }
    else
    {
        match arg3
        {
            0 =>
            {
                let rax_1: *mut i128 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
                
                if rax_1 == 0
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(&var_90, "-traditionaladdress-radixread-by…", 1);
                result = result_2;
                let result_1: *mut i128 = result;
                let zmm0_1: i128 = var_90;
                var_a8 = zmm0_1;
                rax_1[1] = result;
                *rax_1 = zmm0_1;
                *arg1 = 1;
                *arg1.byte_offset(8) = rax_1;
                arg1[1] = 1;
                arg1[2] = 2;
            }
            1 =>
            {
                uu_od::parse_inputs::parse_offset_operand::ha005a18be9ae1bf0(&var_a8, *r14, r14[1]);
                
                if var_a8 == 0
                {
                    let var_a0: *mut i64;
                    r14 = var_a0;
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(&var_90, "-traditionaladdress-radixread-by…", 1);
                    result = nullptr;
                }
                else
                {
                    core::iter::traits::iterator::Iterator::collect::h449e225e68ca9fd4(&var_90, 
                        r14);
                    result = 2;
                }
                
                arg1[1] = result_2;
                *arg1 = var_90;
                *arg1.byte_offset(0x18) = r14;
                arg1[2] = result;
            }
            2 =>
            {
                let r15_1: *mut i8 = *r14;
                let r12_1: u64 = r14[1];
                let mut var_50: i64;
                uu_od::parse_inputs::parse_offset_operand::ha005a18be9ae1bf0(&var_50, r15_1, r12_1);
                let mut var_60: i64;
                uu_od::parse_inputs::parse_offset_operand::ha005a18be9ae1bf0(&var_60, r14[2], 
                    r14[3]);
                let rax_2: i64 = var_60;
                let var_58: i64;
                
                if (var_50 | rax_2) != 0
                {
                    if rax_2 != 0
                    {
                        goto 'label_46a9b1;
                    }
                    
                    result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(arg1, r15_1, r12_1);
                    *arg1.byte_offset(0x18) = var_58;
                    arg1[2] = 0;
                }
                else
                {
                    result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(arg1, "-traditionaladdress-radixread-by…", 1);
                    let var_48: i64;
                    *arg1.byte_offset(0x18) = var_48;
                    arg1[2] = 1;
                    *arg1.byte_offset(0x28) = var_58;
                }
            }
            3 =>
            {
                let mut var_40: i64;
                uu_od::parse_inputs::parse_offset_operand::ha005a18be9ae1bf0(&var_40, r14[2], 
                    r14[3]);
                let mut var_30: i64;
                uu_od::parse_inputs::parse_offset_operand::ha005a18be9ae1bf0(&var_30, r14[4], 
                    r14[5]);
                
                if var_40 != 0
                {
                    'label_46a9b1:
                    var_a8 = &r14[2];
                    let var_a0_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
                    rax_3 = &data_502708;
                    goto 'label_46a9c8;
                }
                
                if var_30 != 0
                {
                    var_a8 = &r14[4];
                    let var_a0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
                    rax_3 = &data_502718;
                    goto 'label_46a9c8;
                }
                
                result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(arg1, *r14, r14[1]);
                let var_38: i64;
                *arg1.byte_offset(0x18) = var_38;
                arg1[2] = 1;
                let var_28: i64;
                *arg1.byte_offset(0x28) = var_28;
            }
        }
    }
    result
}
