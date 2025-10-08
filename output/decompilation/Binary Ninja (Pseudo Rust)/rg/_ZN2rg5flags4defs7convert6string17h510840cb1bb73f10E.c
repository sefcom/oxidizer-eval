
  fn rg::flags::defs::convert::string::h510840cb1bb73f10(arg1: *mut i128, arg2: *mut i128) -> u64

{
    let mut var_78: *mut *mut c_void;
    alloc::string::String::from_utf8::hcb4419710bc0e60b(&var_78, arg2);
    
    if 0 + -(var_78)
    {
        let var_70: i64;
        let zmm0: i128 = var_70;
        let var_40: i128 = zmm0;
        let var_60: i64;
        let var_30: i64 = var_60;
        arg1[1] = var_60;
        *arg1 = zmm0;
        return var_60;
    }
    
    let var_40_1: i128 = var_78;
    let var_68: i64;
    let var_30_1: i64 = var_68;
    let mut var_48: i64 = 1;
    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..ffi..os_str..OsString$GT$$GT$::ha8786323dbda0a67(&var_48);
    var_78 = &data_7ea250;
    let var_70_1: i64 = 1;
    let var_68_1: i64 = 8;
    let var_60_1: i128 = {0};
    let rax_2: u64 = anyhow::__private::format_err::hd87f3faee3401bd9(&var_78);
    *arg1.byte_offset(8) = rax_2;
    *arg1 = -0x8000000000000000;
    rax_2
}
