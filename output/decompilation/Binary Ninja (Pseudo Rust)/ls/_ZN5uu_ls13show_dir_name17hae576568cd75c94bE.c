
  fn uu_ls::show_dir_name::hae576568cd75c94b(arg1: *mut c_void, arg2: *mut i64, arg3: *mut c_void) -> i64

{
    let mut var_80: i128;
    uucore::features::quoting_style::escape_dir_name::he94a972280d79721(&var_80, 
        *arg1.byte_offset(0x20), *arg1.byte_offset(0x28), arg3.byte_offset(0xfc));
    let mut var_68: i128;
    let mut var_58: u64;
    let mut rbp: i64;
    let var_70: u64;
    
    if *arg3.byte_offset(0xf7) == 0 || *arg3.byte_offset(0xf6) != 0
    {
        var_58 = var_70;
        var_68 = var_80;
        rbp = 0;
    }
    else
    {
        rbp = 1;
        uu_ls::create_hyperlink::h0a10a692235dc40b(&var_68, *var_80[8], var_70, arg1);
    }
    let r14_1: i64 = *var_68[8];
    let result_1: i64 = uu_ls::write_os_str::hde566466aa27da95(arg2, r14_1, var_58);
    let mut result: i64 = result_1;
    
    if result_1 == 0
    {
        let mut var_50: *mut *mut [i8; 0x2] = &data_686b58;
        let var_48_1: i64 = 1;
        let var_40_1: i64 = 8;
        let var_38_1: i128 = {0};
        result = std::io::Write::write_fmt::h700c3576e0a1d616(arg2, &var_50);
    }
    
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_68, r14_1);
    
    if rbp != 0
    {
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_80, 
            *var_80[8]);
    }
    
    result
}
