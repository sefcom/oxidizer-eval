
  fn uu_sort::KeyPosition::new::ha77a31f4c9c6cdf9(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i32) -> u64

{
    let mut var_68: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, 
        0x2e, arg2, arg3);
    let mut var_78: i64 = 0;
    let var_70: i64 = arg3;
    let var_38: i16 = 1;
    let mut rax: *mut i8;
    let mut rdx_1: i64;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::hcedf3ecbc5351d30(&var_78);
    let mut result: u64;
    let mut var_c8: i128;
    
    if rax == 0
    {
        uu_sort::KeyPosition::new::_$u7b$$u7b$closure$u7d$$u7d$::h12fd537b664bec41(&var_c8);
        let result_2: u64;
        result = result_2;
        *arg1.byte_offset(8) = var_c8;
        arg1[3] = result;
        *arg1 = 1;
    }
    else
    {
        let mut rax_1: *mut i8;
        let mut rdx_2: i64;
        rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::hcedf3ecbc5351d30(&var_78);
        let mut var_d8: i8;
        core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_d8, rax, 
            rdx_1);
        let var_d7: i8;
        let mut r13_2: i64;
        
        if var_d8 == 0
        {
            let var_d0: i64;
            r13_2 = var_d0;
            
            if r13_2 != 0
            {
                goto 'label_4d2d95;
            }
            
            result = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(&arg1[1], "field index can not be 0invalid …", 0x18);
            *arg1 = 1;
        }
        else
        {
            let mut var_f8: i64;
            
            if var_d7 != 2
            {
                let mut var_fd: i8 = var_d7;
                var_f8 = 0;
                let var_f0: *mut i8 = rax;
                let var_e8_1: i64 = rdx_1;
                let var_e0_1: i8 = 1;
                let mut var_98: *mut i64 = &var_f8;
                let var_90_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                let var_88_1: *mut i8 = &var_fd;
                let var_80_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h3e61086f3d7b9af4;
                var_c8 = &data_58d018;
                *var_c8[8] = 2;
                let var_a8_1: i64 = 0;
                let var_b8: *mut *mut i64 = &var_98;
                let var_b0_1: i64 = 2;
                result = core::option::Option$LT$T$GT$::map_or_else::h9f6bdb3fe8306f69(&arg1[1], 
                    &var_c8);
                *arg1 = 1;
            }
            else
            {
                r13_2 = -1;
                'label_4d2d95:
                *var_c8[8] = arg4;
                var_c8 = -0x8000000000000000;
                core::option::Option$LT$T$GT$::map_or::hb3b78d97c76e7c07(&var_f8, rax_1, rdx_2, 
                    &var_c8);
                let rcx_2: i64 = var_f8;
                let result_1: u64;
                result = result_1;
                
                if -(rcx_2) != -0x8000000000000000
                {
                    arg1[1] = rcx_2;
                    arg1[2] = result;
                    let var_e8: i64;
                    arg1[3] = var_e8;
                    *arg1 = 1;
                }
                else
                {
                    arg1[1] = r13_2;
                    arg1[2] = result;
                    result = arg5;
                    arg1[3] = result;
                    *arg1 = 0;
                }
            }
        }
    }
    result
}
