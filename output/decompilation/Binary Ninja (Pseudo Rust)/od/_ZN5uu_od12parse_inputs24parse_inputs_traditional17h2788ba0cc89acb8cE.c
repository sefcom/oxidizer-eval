
  fn uu_od::parse_inputs::parse_inputs_traditional::h2788ba0cc89acb8c(arg1: *mut i128, arg2: *mut i64, arg3: i64) -> *mut i64

{
    let mut r14: *mut i64 = arg2;
    let mut result: *mut i64;
    let var_80: i64;
    let mut var_a8: *mut c_void;
    let mut var_90: *mut *mut c_void;
    let mut rax_4: *mut *mut c_void;
    
    if arg3 > 3
    {
        var_a8 = &r14[6];
        let var_a0_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
        rax_4 = &data_541ef0;
        'label_4d2fcb:
        var_90 = rax_4;
        let var_88_1: i64 = 1;
        let var_70_1: i64 = 0;
        let var_80_1: *mut *mut c_void = &var_a8;
        let var_78_1: i64 = 1;
        result = core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(arg1, &var_90);
        arg1[2] = 3;
    }
    else
    {
        match arg3
        {
            0 =>
            {
                let rax_1: *mut i128 = alloc::alloc::Global::alloc_impl::hf61749d460433fff();
                
                if rax_1 == 0
                {
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                    /* no return */
                }
                
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(
                    &var_90, "-traditionaladdress-radixread-by…", 1);
                let var_98_1: i64 = var_80;
                let zmm0_1: i128 = var_90;
                var_a8 = zmm0_1;
                rax_1[1] = var_80;
                *rax_1 = zmm0_1;
                result = alloc::slice::hack::into_vec::h371cf1993c745829(arg1, rax_1, 1);
                arg1[2] = 2;
            }
            1 =>
            {
                uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&var_a8, *r14, r14[1]);
                
                if var_a8 == 0
                {
                    let var_a0: *mut i64;
                    r14 = var_a0;
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(
                        &var_90, "-traditionaladdress-radixread-by…", 1);
                    result = nullptr;
                }
                else
                {
                    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h20a08bdd9390469f(&var_90, r14, &r14[2]);
                    result = 2;
                }
                
                arg1[1] = var_80;
                *arg1 = var_90;
                *arg1.byte_offset(0x18) = r14;
                arg1[2] = result;
            }
            2 =>
            {
                let r15_1: *mut i8 = *r14;
                let r12_1: u64 = r14[1];
                let mut var_50: i64;
                uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&var_50, r15_1, r12_1);
                let mut var_60: i64;
                uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&var_60, r14[2], 
                    r14[3]);
                let rax_3: i64 = var_60;
                let var_58: i64;
                
                if (var_50 | rax_3) != 0
                {
                    if rax_3 != 0
                    {
                        goto 'label_4d2fb4;
                    }
                    
                    result = _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(arg1, r15_1, r12_1);
                    *arg1.byte_offset(0x18) = var_58;
                    arg1[2] = 0;
                }
                else
                {
                    result = _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(arg1, "-traditionaladdress-radixread-by…", 1);
                    let var_48: i64;
                    *arg1.byte_offset(0x18) = var_48;
                    arg1[2] = 1;
                    *arg1.byte_offset(0x28) = var_58;
                }
            }
            3 =>
            {
                let mut var_40: i64;
                uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&var_40, r14[2], 
                    r14[3]);
                let mut var_30: i64;
                uu_od::parse_inputs::parse_offset_operand::h71d36fc2ef6ee229(&var_30, r14[4], 
                    r14[5]);
                
                if var_40 != 0
                {
                    'label_4d2fb4:
                    var_a8 = &r14[2];
                    let var_a0_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                    rax_4 = &data_541ed0;
                    goto 'label_4d2fcb;
                }
                
                if var_30 != 0
                {
                    var_a8 = &r14[4];
                    let var_a0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
                    rax_4 = &data_541ee0;
                    goto 'label_4d2fcb;
                }
                
                result =
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha029c3acdf37c34f(
                    arg1, *r14, r14[1]);
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
