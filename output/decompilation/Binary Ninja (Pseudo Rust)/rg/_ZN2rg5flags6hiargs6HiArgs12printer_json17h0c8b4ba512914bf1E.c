
  fn rg::flags::hiargs::HiArgs::printer_json::h0c8b4ba512914bf1(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i128) -> i64

{
    let mut var_68: i128;
    grep_printer::json::JSONBuilder::new::hd89cf9e777596eca(&var_68);
    let var_50: i8 = 0;
    var_68 = *arg2.byte_offset(0x20);
    let var_4f: i8 = 0;
    let mut rax: i64;
    
    if !(0 + -(*arg2.byte_offset(0x2b0)))
    {
        let mut var_30: i64;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h92b52b9ab5dd1bb4(&var_30, *arg2.byte_offset(0x2b8), *arg2.byte_offset(0x2c0));
        rax = var_30;
        let var_28: i128;
        let var_40_1: i128 = var_28;
    }
    else
    {
        rax = -0x8000000000000000;
    }
    
    let mut var_48: i64 = rax;
    grep_printer::json::JSONBuilder::build::h801341b4b2a5f701(arg1, 
        grep_printer::json::JSONBuilder::replacement::h6ab1db9108ab72de(&var_68, &var_48), arg3);
    core::ptr::drop_in_place$LT$grep_printer..json..JSONBuilder$GT$::h05b0645f085f78ae(&var_68)
}
