
  fn ruff_python_formatter::string::docstring::CodeExample::add_start::h1189953d372e99f2(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let mut var_138: *mut *mut c_void;
    
    if *arg1 != -0x7ffffffffffffffd
    {
        var_138 = &data_97f1b8;
        let var_130_1: i64 = 1;
        let var_128: i64 = 8;
        let var_120_4: i128 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_138);
        /* no return */
    }
    
    let mut var_e8: i64;
    ruff_python_formatter::string::docstring::CodeExampleDoctest::new::ha37bb5f7affe40a9(&var_e8, 
        arg2);
    
    if var_e8 != -0x8000000000000000
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleKind$GT$$GT$::hdf0c40b776d81420(arg1);
        *arg1 = -0x8000000000000000;
        *arg1.byte_offset(8) = var_e8;
        let var_d8: i128;
        *arg1.byte_offset(0x18) = var_d8;
        let var_c8: i64;
        arg1[5] = var_c8;
        var_138 = -0x8000000000000004;
    }
    else
    {
        let var_e0: i64;
        core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleRst$GT$$GT$::h25233677e07d725e(-0x8000000000000000, var_e0);
        let r13_1: *mut i8 = *arg2;
        let mut var_80: i64;
        ruff_python_formatter::string::docstring::CodeExampleRst::new::hc135c1e9a1007edc(&var_80, 
            r13_1, arg2[1]);
        let mut var_130: i64;
        
        if var_80 != -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleKind$GT$$GT$::hdf0c40b776d81420(arg1);
            let var_40: i128;
            *arg1.byte_offset(0x40) = var_40;
            let zmm0_2: i128 = var_80;
            let var_50: i128;
            *arg1.byte_offset(0x30) = var_50;
            let var_60: i128;
            *arg1.byte_offset(0x20) = var_60;
            let var_70: i128;
            *arg1.byte_offset(0x10) = var_70;
            *arg1 = zmm0_2;
            let var_110_2: i64 = arg2[4];
            let var_120_2: i128 = *arg2.byte_offset(0x10);
            var_130 = *arg2;
            var_138 = -0x8000000000000003;
        }
        else
        {
            let var_78: i64;
            core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleRst$GT$$GT$::h25233677e07d725e(-0x8000000000000000, var_78);
            let mut var_c0: i64;
            ruff_python_formatter::string::docstring::CodeExampleMarkdown::new::h1a5e52a692fa8785(
                &var_c0, r13_1);
            
            if var_c0 != -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleKind$GT$$GT$::hdf0c40b776d81420(arg1);
                *arg1 = -0x7ffffffffffffffe;
                *arg1.byte_offset(8) = var_c0;
                let var_b0: i128;
                *arg1.byte_offset(0x18) = var_b0;
                let var_a0: i128;
                *arg1.byte_offset(0x28) = var_a0;
                let var_90: i128;
                *arg1.byte_offset(0x38) = var_90;
                let var_110_3: i64 = arg2[4];
                let var_120_3: i128 = *arg2.byte_offset(0x10);
                var_130 = *arg2;
                var_138 = -0x8000000000000003;
            }
            else
            {
                let var_b8: i64;
                core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleRst$GT$$GT$::h25233677e07d725e(-0x8000000000000000, var_b8);
                let var_110_1: i64 = arg2[4];
                let var_120_1: i128 = *arg2.byte_offset(0x10);
                var_130 = *arg2;
                var_138 = -0x8000000000000003;
            }
        }
    }
    
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(arg3, 
        &var_138)
}
