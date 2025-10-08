
  fn just::justfile::Justfile::run_dependencies::h985cd0506c66477f(arg1: *mut i8, arg2: *mut c_void, arg3: *mut i64, arg4: *mut c_void, arg5: i64, arg6: i64, arg7: i64, arg8: *mut i32, arg9: *mut c_void, arg10: *mut *mut c_void, arg11: i64) -> *mut i8

{
    let rax: i64 = arg11;
    let rax_1: *mut *mut c_void = arg10;
    let rax_2: *mut i32 = arg8;
    let mut var_40: *mut c_void = arg2;
    let mut var_38: i64 = arg6;
    let mut result: *mut i8 = *arg3;
    
    if result[0x19f] == 0
    {
        let mut var_150: i64 = 0;
        let var_148_1: i64 = 8;
        let var_140_1: i64 = 0;
        let mut var_138: i128;
        let mut var_131: i128;
        let mut i_1: i64;
        let mut var_128: *mut c_void;
        let mut var_f0: i64;
        let mut var_d0: i8;
        let var_cf: i128;
        let mut var_c0: i128;
        let var_b0: i128;
        let var_a0: i128;
        let var_90: i128;
        let var_80: i128;
        let result_1: *mut i8;
        
        if arg5 != 0
        {
            let mut r13_2: *mut c_void = arg4.byte_offset(0x18);
            let mut i_2: i64 = arg5 << 5;
            let mut i: i64;
            
            do
            {
                let rax_3: i64 = *r13_2.byte_offset(-0x10);
                let rcx_2: i64 = (*r13_2.byte_offset(-8) << 7) + rax_3;
                var_f0 = rax_3;
                let var_e8_1: i64 = rcx_2;
                let var_e0_1: i64 = arg7;
                core::iter::traits::iterator::Iterator::collect::h5455aaf9fc009a45(&var_d0, 
                    &var_f0);
                let rax_5: i8 = var_d0;
                
                if rax_5 != 0x38
                {
                    *i_1[7] = var_c0;
                    var_138 = var_cf;
                    *arg1.byte_offset(0x60) = result_1;
                    *arg1.byte_offset(0x50) = var_80;
                    *arg1.byte_offset(0x40) = var_90;
                    *arg1.byte_offset(0x30) = var_a0;
                    *arg1.byte_offset(0x20) = var_b0;
                    *arg1.byte_offset(0x10) = *i_1[7];
                    *arg1.byte_offset(1) = var_138;
                    *arg1 = rax_5;
                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$$RF$alloc..sync..Arc$LT$just..recipe..Recipe$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$RP$$GT$$GT$::h31b6a7e2ffba598d(&var_150);
                }
                
                var_128 = *var_c0[8];
                let mut var_c8: i128;
                var_131 = var_c8;
                *var_c0[8] = var_128;
                var_c8 = var_131;
                var_d0 = r13_2;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h047d1ec34f0dd2bc(&var_150, &var_d0);
                r13_2 += 0x20;
                i = i_2;
                i_2 -= 0x20;
            } while i != 0x20;
        }
        
        if just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg9.byte_offset(0xd8), 
            0xd) == 0
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hb49bcb30c48ca590(&var_f0, &var_150);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf3825cab43731169(&var_138, &var_f0);
            
            if !(0 + -(i_1))
            {
                do
                {
                    let var_120: i64;
                    just::justfile::Justfile::run_recipe::h13dd814e0c2e2885(&var_d0, var_128, 
                        var_120, arg2, arg6, 1, rax_2, (*var_138).byte_offset(0x10), rax_1, rax);
                    let rax_13: i8 = var_d0;
                    
                    if rax_13 != 0x38
                    {
                        *arg1.byte_offset(0x60) = result_1;
                        *arg1.byte_offset(0x51) = var_80;
                        *arg1.byte_offset(0x41) = var_90;
                        *arg1.byte_offset(0x31) = var_a0;
                        *arg1.byte_offset(0x21) = var_b0;
                        *arg1.byte_offset(0x11) = var_c0;
                        *arg1.byte_offset(1) = var_cf;
                        *arg1 = rax_13;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&*var_131[1]);
                        return core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$alloc..sync..Arc$LT$just..recipe..Recipe$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$RP$$GT$$GT$::h10aa6922d349c1e6(&var_f0);
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h766f1f48926327ac(&*var_131[1]);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf3825cab43731169(&var_138, &var_f0);
                } while i_1 != -0x8000000000000000;
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$$RF$alloc..sync..Arc$LT$just..recipe..Recipe$GT$$C$alloc..vec..Vec$LT$alloc..string..String$GT$$RP$$GT$$GT$::h10aa6922d349c1e6(&var_f0);
            result = arg1;
            *result = 0x38;
        }
        else
        {
            let var_128_1: i64 = var_140_1;
            var_138 = var_150;
            let var_120_1: *mut i64 = &var_40;
            let var_118_1: *mut i64 = &var_38;
            let var_110_1: *mut i64 = &arg8;
            let var_108_1: *mut i64 = &arg10;
            let var_100_1: *mut i64 = &arg11;
            std::thread::scoped::scope::hc4d65ee38c800f47(&var_d0, &var_138);
            
            if var_d0 == 0x38
            {
                result = arg1;
                *result = 0x38;
            }
            else
            {
                result = result_1;
                *arg1.byte_offset(0x60) = result;
                *arg1.byte_offset(0x50) = var_80;
                *arg1.byte_offset(0x40) = var_90;
                let zmm0_3: i128 = var_d0;
                *arg1.byte_offset(0x30) = var_a0;
                *arg1.byte_offset(0x20) = var_b0;
                *arg1.byte_offset(0x10) = var_c0;
                *arg1 = zmm0_3;
            }
        }
    }
    else
    {
        *arg1 = 0x38;
    }
    
    result
}
