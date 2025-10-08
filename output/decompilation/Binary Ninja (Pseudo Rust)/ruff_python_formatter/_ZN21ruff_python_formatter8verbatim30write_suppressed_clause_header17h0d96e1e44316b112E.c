
  fn ruff_python_formatter::verbatim::write_suppressed_clause_header::h0d96e1e44316b112(arg1: *mut i32, arg2: *mut i64, arg3: *mut i64) -> *mut c_void

{
    let rax_1: *mut i64 = (*(arg3[1] + 0x30))(*arg3);
    let r15: i64 = *arg2;
    let r12_1: *mut c_void = arg2[1];
    let mut result_1: i32;
    ruff_python_formatter::statement::clause::ClauseHeader::range::hab8e09d0514f8895(&result_1, 
        r15, r12_1, *rax_1, rax_1[1]);
    let mut result: *mut c_void = result_1;
    let var_6c: i32;
    let mut var_68: i32;
    let mut var_64: i64;
    
    if result != 4
    {
        let var_5c: i32;
        arg1[5] = var_5c;
        *arg1.byte_offset(0xc) = var_64;
        *arg1 = result;
        arg1[1] = var_6c;
        arg1[2] = var_68;
    }
    else
    {
        let mut var_80: i32 = var_6c;
        let mut rax_2: i32;
        let mut rdx_1: i32;
        rax_2 = ruff_python_formatter::verbatim::verbatim_text::heeec4ed9639d83ab(var_6c, var_68);
        let mut var_78: i32 = rax_2;
        let var_74_1: i32 = rdx_1;
        let mut var_7c: i32 = var_68;
        result_1 = &var_80;
        var_68 = &data_97fac8;
        var_64 = &var_78;
        let var_58_1: *mut c_void = &data_97e210;
        let var_50_1: *mut i32 = &var_7c;
        let var_48_1: *mut c_void = &data_97fac8;
        let mut var_40: i32;
        _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(&var_40, arg3, &result_1, 3);
        
        if var_40 != 4
        {
            let result_2: *mut c_void;
            result = result_2;
            *arg1.byte_offset(0x10) = result;
            *arg1 = var_40;
        }
        else
        {
            result =
                ruff_python_formatter::statement::clause::ClauseHeader::visit::hb9b9601842cd12f2(
                r15, r12_1, (*(arg3[1] + 0x30))(*arg3).byte_offset(0x10));
            *arg1 = 4;
        }
    }
    result
}
