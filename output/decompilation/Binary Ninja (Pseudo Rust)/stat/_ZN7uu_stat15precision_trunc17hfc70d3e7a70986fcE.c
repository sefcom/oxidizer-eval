
  fn uu_stat::precision_trunc::hfc70d3e7a70986fc(arg1: *mut i128, arg2: i64, arg3: u64, arg4: i64 @ zmm0) -> i64

{
    let mut var_50: i64 = arg4;
    let mut var_a0: i128;
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h60326b3cf60faea8(&var_a0, 
        &var_50, arg3);
    let var_98: *mut i8;
    let result: i64;
    let mut rax: i8;
    let mut rdx: i64;
    rax = core::str::_$LT$impl$u20$str$GT$::find::h7f8b36dc70f8d903(var_98, result);
    let mut var_d0: i128;
    let var_c0: i64;
    let mut var_88: i128;
    let mut var_70: *mut i128;
    let mut var_48: i128;
    
    if (rax & 1) != 0
    {
        if arg2 == 0
        {
            let mut rax_6: i64;
            let mut rdx_6: u64;
            rax_6 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rdx, var_98, result);
            
            if rax_6 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(var_98, result, 0, rdx);
                /* no return */
            }
            
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_d0, rax_6, rdx_6);
            'label_474864:
            arg1[1] = var_c0;
            *arg1 = var_d0;
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(
                &var_a0);
        }
        
        if arg2 != 1
        {
            if arg3 == 0
            {
                let mut rax_7: i64;
                let mut rdx_8: u64;
                rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rdx, var_98, result);
                
                if rax_7 != 0
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_d0, rax_7, rdx_8);
                    goto 'label_474864;
                }
                
                core::str::slice_error_fail::h1a2885084e28d077(var_98, result, 0, rdx);
                /* no return */
            }
            
            let rax_2: i64 = result - rdx;
            
            if arg3 < rax_2
            {
                let mut rax_3: i64;
                let mut rdx_4: u64;
                rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rdx + arg3 + 1, var_98, result);
                
                if rax_3 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(var_98, result, 0, 
                        rdx + arg3 + 1);
                    /* no return */
                }
                
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1259f2eee6e0998a(&var_d0, rax_3, rdx_4);
                goto 'label_474864;
            }
            
            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::ha360e6025fa3e908(&var_d0, 
                arg3 - rax_2 + 1);
            let var_78_2: i64 = var_c0;
            var_88 = var_d0;
            var_70 = &var_a0;
            let var_68_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            let var_60_2: *mut i128 = &var_88;
            let var_58_2: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_d0 = &data_41cfd0;
            *var_d0[8] = 2;
            let var_b0_2: i64 = 0;
            let var_c0_2: *mut *mut i128 = &var_70;
            let var_b8_2: i64 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_48, &var_d0);
            goto 'label_4748fe;
        }
    }
    else if arg2 != 0 && arg2 != 1 && arg3 != 0
    {
        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::ha360e6025fa3e908(&var_d0, arg3);
        let var_78_1: i64 = var_c0;
        var_88 = var_d0;
        var_70 = &var_a0;
        let var_68_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        let var_60_1: *mut i128 = &var_88;
        let var_58_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_d0 = &data_519c80;
        *var_d0[8] = 2;
        let var_b0_1: i64 = 0;
        let var_c0_1: *mut *mut i128 = &var_70;
        let var_b8_1: i64 = 2;
        core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_48, &var_d0);
        'label_4748fe:
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_88);
        let var_38: i64;
        arg1[1] = var_38;
        *arg1 = var_48;
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_a0);
    }
    arg1[1] = result;
    *arg1 = var_a0;
    result
}
