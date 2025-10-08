
  fn uu_stat::get_quoted_file_name::haf9755dc3410fa80(arg1: *mut i128, arg2: i64, arg3: u64, arg4: *mut c_void, arg5: i32, arg6: i8) -> i64

{
    let mut var_f0: i32;
    std::env::var::h6d4b4daaa54522c9(&var_f0);
    let mut var_e8: u64;
    let mut var_e0: i128;
    let mut var_b8: i128;
    let mut rax: u64;
    
    if var_f0 != 1
    {
        rax = var_e8;
        var_b8 = var_e0;
        
        if -(rax) == -0x8000000000000000
        {
            rax = 2;
        }
        else
        {
            var_e8 = var_b8;
            var_f0 = rax;
            rax = uu_stat::get_quoted_file_name::_$u7b$$u7b$closure$u7d$$u7d$::h85c48b80cc5cc956(
                &var_f0);
            
            if rax == 4
            {
                rax = 2;
            }
        }
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::hc0146691c34201b9(&var_f0);
        rax = 2;
    }
    
    if (arg5 & 0xf000) != 0xa000
    {
        let mut rcx_3: i8 = 3;
        
        if arg6 != 0
        {
            rcx_3 = rax;
        }
        
        /* tailcall */
        return uu_stat::quote_file_name::ha37da13d8b9cf7fe(arg1, arg2, arg3, rcx_3);
    }
    
    let rbp_1: i8 = rax;
    let mut var_60: ();
    uu_stat::quote_file_name::ha37da13d8b9cf7fe(&var_60, arg2, arg3, rbp_1);
    let mut var_78: i64;
    std::fs::read_link::h746ec00310f2005b(&var_78, arg4);
    let r14_1: i64 = var_78;
    let mut var_90: *mut i128;
    let var_70: i64;
    
    if -(r14_1) != -0x8000000000000000
    {
        let var_68: u64;
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_f0, var_70, var_68);
        uu_stat::quote_file_name::ha37da13d8b9cf7fe(&var_90, var_e8, var_e0, rbp_1);
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::ha7af664bba1b7bff(&var_f0);
        var_b8 = &var_60;
        *var_b8[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        let var_a8_1: *mut *mut i128 = &var_90;
        let var_a0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_f0 = &data_519c08;
        let var_e8_3: i64 = 2;
        let var_d0_2: i64 = 0;
        var_e0 = &var_b8;
        *var_e0[8] = 2;
        let mut var_48: i128;
        core::option::Option$LT$T$GT$::map_or_else::h722d45d5108b1d7d(&var_48, &var_f0);
        let var_38: i64;
        arg1[1] = var_38;
        *arg1 = var_48;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_90);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf5e02e6973b3fafa(r14_1, var_70);
    }
    else
    {
        let mut var_c0: i64 = var_70;
        let mut rax_4: i64;
        let mut rdx_1: i64;
        rax_4 = uucore::util_name::h074417a1e6395129();
        var_b8 = rax_4;
        *var_b8[8] = rdx_1;
        var_90 = &var_b8;
        let var_88_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h917f70ba7096f615;
        var_f0 = &data_519c28;
        let var_e8_1: i64 = 2;
        let var_d0: i64 = 0;
        var_e0 = &var_90;
        *var_e0[8] = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_f0);
        var_b8 = &var_c0;
        *var_b8[8] =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        var_f0 = &data_519c48;
        let var_e8_2: i64 = 2;
        let var_d0_1: i64 = 0;
        var_e0 = &var_b8;
        *var_e0[8] = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_f0);
        *arg1.byte_offset(8) = 1;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h436c7c335a4a9568(&var_c0);
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h44f04a5137e020d4(&var_60)
}
