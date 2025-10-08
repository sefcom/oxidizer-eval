
  fn uu_truncate::truncate_reference_and_size::h51f53258c03351bb(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: *mut c_void, arg6: i64, arg7: i8) -> u64

{
    let mut rbx: *mut c_void = arg5;
    let mut var_158: i32;
    uu_truncate::parse_mode_and_size::h9caa4c91beef10d4(&var_158, arg3, arg4);
    let mut r14_1: u64;
    let var_150: i64;
    let var_148: i128;
    let mut var_e8: *mut *mut [i8; 0x11];
    
    if var_158 != 4
    {
        let var_118_1: i128 = var_148;
        let mut var_128: i128 = var_158;
        let mut var_138: *mut i128 = &var_128;
        let var_130_1: fn(arg1: i64, arg2: *mut i64) -> i64 = _$LT$uucore..features..parser..parse_size..ParseSizeError$u20$as$u20$core..fmt..Display$GT$::fmt::he618d31d336be9c1;
        var_e8 = &data_4e40e8;
        let var_e0_1: i64 = 1;
        let var_c8_1: i64 = 0;
        let var_d8_1: *mut *mut i128 = &var_138;
        let mut var_d0_1: i64 = 1;
        let mut var_100: i128;
        core::option::Option$LT$T$GT$::map_or_else::hccc437e8064ad343(&var_100, &var_e8);
        var_d0_1 = 1;
        var_e8 = var_100;
        let var_f0: i64;
        let var_d8_2: i64 = var_f0;
        r14_1 = alloc::boxed::Box$LT$T$GT$::new::h0fcae278b0f73f4a(&var_e8);
        core::ptr::drop_in_place$LT$uucore..features..parser..parse_size..ParseSizeError$GT$::hdafbfd975804eb50(&var_128);
    }
    else
    {
        let mut rdx_3: u64;
        let mut rsi_4: *const i8;
        
        if var_150 == 0
        {
            rsi_4 = "you must specify a relative '--s…";
            rdx_3 = 0x37;
            'label_4592a0:
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc324d0392f7be5de(&var_e8, rsi_4, rdx_3);
            let mut var_d0: i64;
            var_d0 = 1;
            r14_1 = alloc::boxed::Box$LT$T$GT$::new::h0fcae278b0f73f4a(&var_e8);
        }
        else
        {
            let rbp_1: i64 = var_148;
            
            if (var_150 == 5 || var_150 == 6) && rbp_1 == 0
            {
                rsi_4 = &data_416e60;
                rdx_3 = 0x10;
                goto 'label_4592a0;
            }
            
            std::fs::metadata::h460bc532d18d3302(&var_e8, arg1);
            let var_e0: i64;
            
            if var_e8 == 2
            {
                return uu_truncate::truncate_reference_and_size::_$u7b$$u7b$closure$u7d$$u7d$::h6c1eb193d24fc6ab(arg1, arg2, var_e0);
            }
            let var_98: i64;
            let rax_3: i64 =
                uu_truncate::TruncateMode::to_size::he28c50c65dad202d(var_150, rbp_1, var_98);
            let mut i: i64 = arg6 * 0x18;
            r14_1 = 0;
            
            while i != 0
            {
                let rax: u64 = uu_truncate::file_truncate::ha430ef778d6571e6(*rbx.byte_offset(8), 
                    *rbx.byte_offset(0x10), arg7, rax_3);
                i -= 0x18;
                rbx += 0x18;
                
                if rax != 0
                {
                    return rax;
                }
            }
        }
    }
    r14_1
}
