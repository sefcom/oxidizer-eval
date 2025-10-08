
  fn ruff_python_formatter::expression::expr_slice::leading_comments_spacing::ha1d79216a4455bd3(arg1: *mut i32, arg2: *mut i64, arg3: *mut c_void, arg4: i64)

{
    if arg4 != 0
    {
        let mut var_40: *mut c_void;
        
        if *arg3.byte_offset(9) != 0
        {
            var_40 = 0x201;
            (*(arg2[1] + 0x18))(*arg2, &var_40);
            *arg1 = 4;
            return;
        }
        
        let mut var_41: ();
        var_40 = &var_41;
        let var_38_1: *mut c_void = &data_97cbf0;
        let var_30_1: *mut c_void = &var_41;
        let var_28_1: *mut c_void = &data_97cbf0;
        let mut var_20: i32;
        _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(&var_20, arg2, &var_40, 2);
        
        if var_20 != 4
        {
            let var_10: i64;
            *arg1.byte_offset(0x10) = var_10;
            *arg1 = var_20;
            return;
        }
    }
    
    *arg1 = 4;
}
