
  fn uu_csplit::patterns::get_patterns::hcf6c39a45494ab6b(arg1: *mut i64, arg2: *mut c_void, arg3: i64) -> *mut i64

{
    let mut var_30: i64;
    uu_csplit::patterns::extract_patterns::h928579bbd5018ce5(&var_30, arg2, arg3);
    let rax: i64 = var_30;
    let var_28: i128;
    let var_18: i64;
    let var_10: i64;
    
    if rax != 0xd
    {
        arg1[3] = var_18;
        *arg1.byte_offset(8) = var_28;
        *arg1 = rax;
        arg1[4] = var_10;
        return arg1;
    }
    
    let mut var_68: i128 = var_28;
    uu_csplit::patterns::validate_line_numbers::h4ff567dae8ebad70(&var_30, *var_68[8], var_18);
    
    if var_30 == 0xd
    {
        arg1[3] = var_18;
        *arg1.byte_offset(8) = var_68;
        *arg1 = 0xd;
        return arg1;
    }
    
    arg1[4] = var_10;
    let zmm0_1: i128 = var_30;
    *arg1.byte_offset(0x10) = var_28;
    *arg1 = zmm0_1;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_csplit..patterns..Pattern$GT$$GT$::hb8a5ba762c76bd0b(&var_68);
    arg1
}
