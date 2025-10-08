
  fn uu_stat::print_unsigned::h6ebed2a96194f8e4(arg1: u64, arg2: i8, arg3: i8, arg4: i64, arg5: i64, arg6: i64, arg7: i8) -> i64

{
    let mut var_b0: *mut c_void;
    let mut rax: i64;
    let mut rdx: u64;
    rax = core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(arg1, &var_b0, 0x14);
    let mut var_80: ();
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_80, rax, rdx);
    let mut var_c8: i64;
    let var_78: *mut c_void;
    let var_70: i64;
    let mut r12_1: i8;
    
    if (arg3 & 1) != 0
    {
        uu_stat::group_num::hf49c8796a9e1a06a(&var_c8, var_78, var_70);
        r12_1 = arg7;
        
        if arg5 == 0
        {
            goto 'label_474bc2;
        }
        
        goto 'label_474b5e;
    }
    
    let var_c0_1: *mut c_void = var_78;
    let var_b8: i64 = var_70;
    var_c8 = -0x8000000000000000;
    r12_1 = arg7;
    let mut var_e8: i128;
    let mut var_d8: i64;
    let mut r14: i64;
    
    if arg5 != 0
    {
        'label_474b5e:
        
        if arg5 != 1
        {
            if arg6 > 0xffff
            {
                var_b0 = &data_519960;
                let var_a8_2: i64 = 1;
                let var_a0_2: i64 = 8;
                let var_98_1: i128 = {0};
                core::panicking::panic_fmt::h96f341d36638c225(&var_b0);
                /* no return */
            }
            
            let mut var_68: *mut i64 = &var_c8;
            let var_60_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h622952c97c82feb9;
            let var_58_1: i64 = 0;
            let var_50_1: i16 = arg6;
            var_b0 = &data_41ab40;
            let var_a8_1: i64 = 1;
            let mut var_98: i128;
            *var_98[8] = &data_41d388;
            let var_88_1: i64 = 1;
            let var_a0_1: *mut *mut i64 = &var_68;
            var_98 = 2;
            let mut var_48: i128;
            core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_48, &var_b0);
            var_e8 = var_48;
            let var_38: i64;
            var_d8 = var_38;
            r14 = 1;
            goto 'label_474cbe;
        }
        
        var_e8 = var_c8;
        var_d8 = var_b8;
        
        if var_e8 != -0x8000000000000000
        {
            goto 'label_474bf5;
        }
        
        uu_stat::pad_and_print::h4c659c1797f3ded6(*var_e8[8], var_d8, arg2, arg4, r12_1);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha7af664bba1b7bff(&var_c8);
    }
    else
    {
        'label_474bc2:
        var_e8 = var_c8;
        var_d8 = var_b8;
        
        if var_e8 != -0x8000000000000000
        {
            'label_474bf5:
            r14 = 0;
            'label_474cbe:
            uu_stat::pad_and_print::h4c659c1797f3ded6(*var_e8[8], var_d8, arg2, arg4, r12_1);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha7af664bba1b7bff(
                &var_e8);
            
            if r14 != 0
            {
                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha7af664bba1b7bff(
                    &var_c8);
            }
        }
        else
        {
            uu_stat::pad_and_print::h4c659c1797f3ded6(*var_e8[8], var_d8, arg2, arg4, r12_1);
            core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha7af664bba1b7bff(
                &var_c8);
        }
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_80)
}
