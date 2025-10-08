
  fn ruff_python_formatter::statement::stmt_function_def::format_function_header::h0c50132786962415(arg1: *mut i32, arg2: *mut i64, arg3: *mut c_void) -> *mut i64

{
    let mut var_60: *mut c_void = arg3;
    let rax_1: *mut c_void = (*(arg2[1] + 0x30))(*arg2);
    alloc::rc::RcInnerPtr::inc_strong::h8686aaaa10b78ebb(*rax_1.byte_offset(0x10));
    let mut var_b0: i64 = *rax_1.byte_offset(0x10);
    let mut var_b1: ();
    let mut var_a8: *const i8;
    let mut var_a0: *mut c_void;
    let mut var_90: *const *const i8;
    let mut var_50: i32;
    
    if *arg3.byte_offset(0x7c) != 0
    {
        var_a8 = "asyncforcrates/ruff_python_forma…";
        var_a0 = 5;
        var_90 = &var_a8;
        let var_88_1: *mut c_void = &data_97c890;
        let var_80_1: *mut c_void = &var_b1;
        let var_78_1: *mut c_void = &data_97cbf0;
        _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(&var_50, arg2, &var_90, 2);
    }
    
    if *arg3.byte_offset(0x7c) != 0 && var_50 != 4
    {
        let var_40: i64;
        *arg1.byte_offset(0x10) = var_40;
        *arg1 = var_50;
    }
    else
    {
        var_a8 = "def->global\crates/ruff_python_f…";
        var_a0 = 3;
        let mut var_58: *mut c_void = arg3.byte_offset(0x30);
        var_90 = &var_a8;
        let var_88_2: *mut c_void = &data_97c890;
        let var_80_2: *mut c_void = &var_b1;
        let var_78_2: *mut c_void = &data_97cbf0;
        let var_70_1: *mut i64 = &var_58;
        let var_68_1: *mut c_void = &data_97a988;
        let mut var_38: i32;
        _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(&var_38, arg2, &var_90, 3);
        
        if var_38 != 4
        {
            let var_28: i64;
            *arg1.byte_offset(0x10) = var_28;
            *arg1 = var_38;
        }
        else
        {
            let rdx_2: *mut i8 = *arg3.byte_offset(0x68);
            
            if rdx_2 != 0
            {
                var_a8 = rdx_2;
                ruff_python_formatter::FormatNodeRule::fmt::hec7ac514f5c830e4(&var_90, &var_a0, 
                    rdx_2, arg2);
            }
            
            if rdx_2 != 0 && var_90 != 4
            {
                *arg1.byte_offset(0x10) = var_80_2;
                *arg1 = var_90;
            }
            else
            {
                var_90 = arg3.byte_offset(0x58);
                let var_88_3: *mut c_void = arg3.byte_offset(0x70);
                let var_80_3: *mut i64 = &var_b0;
                let var_78_3: *mut *mut c_void = &var_60;
                var_a8 = &var_90;
                var_a0 = &data_97ed78;
                let var_98_1: i32 = 0;
                let var_94_1: i8 = 0;
                _$LT$ruff_formatter..builders..Group$LT$Context$GT$$u20$as$u20$ruff_formatter..Format$LT$Context$GT$$GT$::fmt::hb09a1a8dca914ab0(arg1, &var_a8, arg2);
            }
        }
    }
    
    core::ptr::drop_in_place$LT$ruff_python_formatter..comments..Comments$GT$::he9abffb240eba4a8(
        &var_b0)
}
