
  fn uu_csplit::patterns::get_patterns::h1caf3c5952747e62(arg1: *mut i64) -> *mut i64

{
    let mut var_30: i64;
    let rdx: i64;
    let rsi: i64;
    uu_csplit::patterns::extract_patterns::h32f79fa60a6aa1ab(&var_30, rsi, rdx);
    let rax: i64 = var_30;
    let var_28: i128;
    let var_18: i64;
    let var_10: i64;
    
    if rax != 0xc
    {
        arg1[3] = var_18;
        *arg1.byte_offset(8) = var_28;
        *arg1 = rax;
        arg1[4] = var_10;
    }
    else
    {
        let mut var_68: i128 = var_28;
        uu_csplit::patterns::validate_line_numbers::hf11a42b855ce2ce0(&var_30, *var_68[8], var_18);
        
        if var_30 != 0xc
        {
            arg1[4] = var_10;
            let zmm0_1: i128 = var_30;
            *arg1.byte_offset(0x10) = var_28;
            *arg1 = zmm0_1;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_csplit..patterns..Pattern$GT$$GT$::h3e87e3943a9612d3(&var_68);
        }
        else
        {
            arg1[3] = var_18;
            *arg1.byte_offset(8) = var_68;
            *arg1 = 0xc;
        }
    }
    arg1
}
