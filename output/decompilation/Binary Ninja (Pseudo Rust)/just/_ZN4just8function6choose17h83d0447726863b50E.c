
  fn just::function::choose::h83d0447726863b50(arg1: *mut i64, arg2: i64, arg3: *mut i8, arg4: i64, arg5: i64, arg6: i64) -> *mut i64

{
    let rbx: u64;
    let var_30: u64 = rbx;
    let mut var_88: *mut i8 = arg3;
    let var_80: i64 = arg4;
    let mut rax: i64;
    let mut rdx: i64;
    rax = std::thread::local::LocalKey$LT$T$GT$::with::hdd70f1898d43baa2();
    let mut var_78: i64;
    hashbrown::map::HashMap$LT$K$C$V$C$S$GT$::with_capacity_and_hasher::h63b6eadcd60cf47f(&var_78, 
        arg6, rax, rdx);
    let r13_1: i64 = arg6 + arg5;
    let mut var_b0: i64 = arg5;
    let mut rax_1: i8;
    let mut rdx_2: i32;
    rax_1 = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_b0, rbx);
    let mut result: *mut i64;
    let mut var_118: i32;
    let mut var_100: *mut *mut i8;
    let mut var_e0: *mut *mut c_void;
    
    if (rax_1 & 1) == 0
    {
        'label_669e80:
        core::iter::traits::iterator::Iterator::collect::h3611f2f820a4d673(&var_118, arg5);
        let mut var_98: i8;
        let rdx_6: u64 = core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(
            &var_98, arg3, arg4);
        let var_110: i64;
        let mut rbx_2: i64;
        
        if var_98 == 0
        {
            let var_90: i64;
            rbx_2 = var_90;
            'label_669f4c:
            var_100 = rand::rngs::thread::rng::hef6247fa92ae25d7();
            let var_d0_2: i64 = 0;
            let var_c8_2: i64 = rbx_2;
            var_e0 = &var_118;
            let var_d8_2: *mut *mut *mut i8 = &var_100;
            core::iter::traits::iterator::Iterator::collect::hcf3d54e9baa350db(arg1, &var_e0);
            core::ptr::drop_in_place$LT$rand..rngs..thread..ThreadRng$GT$::h0c7eb0e715cf9f73(
                &var_100);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::h4b26006e42ee6c54(var_118, 
                var_110);
            result = arg1;
        }
        else
        {
            let var_97: i8;
            let mut var_121: i8 = var_97;
            var_100 = &var_88;
            let var_f8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
            let var_f0_1: *mut i8 = &var_121;
            let var_e8_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h3e61086f3d7b9af4;
            var_e0 = &data_82fdd0;
            let var_d8_1: i64 = 2;
            let var_c0_1: i64 = 0;
            let var_d0_1: *mut *mut *mut i8 = &var_100;
            let var_c8_1: i64 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_b0, 0, rdx_6, 
                &var_e0);
            let rax_5: i64 = var_b0;
            
            if -(rax_5) == -0x8000000000000000
            {
                rbx_2 = r13_1;
                goto 'label_669f4c;
            }
            
            result = arg1;
            result[1] = rax_5;
            *result.byte_offset(0x10) = r13_1;
            *result = 1;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u32$GT$$GT$::h4b26006e42ee6c54(var_118, 
                var_110);
        }
    }
    else
    {
        loop
        {
            var_118 = rdx_2;
            let mut rax_2: i8;
            let mut rdx_3: u64;
            rax_2 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h2af7b92ca7762240(
                &var_78, rdx_2);
            
            if rax_2 != 0
            {
                var_100 = &var_118;
                let var_f8_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                    _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
                var_e0 = &data_82fdb0;
                let var_d8_3: i64 = 2;
                let var_c0_2: i64 = 0;
                let var_d0_3: *mut *mut *mut i8 = &var_100;
                let var_c8_3: i64 = 1;
                let mut var_48: i128;
                core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&var_48, 0, rdx_3, 
                    &var_e0);
                result = arg1;
                let var_38: i64;
                result[3] = var_38;
                *result.byte_offset(8) = var_48;
                *result = 1;
                break;
            }
            
            let mut rax_3: i8;
            rax_3 = core::str::validations::next_code_point::he89b2cd8a446aa48(&var_b0, &var_b0);
            
            if (rax_3 & 1) == 0
            {
                goto 'label_669e80;
            }
        }
    }
    let var_70: i64;
    core::ptr::drop_in_place$LT$std..collections..hash..set..HashSet$LT$char$GT$$GT$::h545f9764f395959f(var_78, var_70);
    result
}
