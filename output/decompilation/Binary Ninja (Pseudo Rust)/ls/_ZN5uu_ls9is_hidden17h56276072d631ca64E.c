
  fn uu_ls::is_hidden::h56276072d631ca64(arg1: *mut c_void) -> u64

{
    let mut var_38: i64;
    std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_38, arg1);
    let mut var_50: i32;
    let var_30: *mut i8;
    let var_28: i64;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_50, var_30, var_28);
    let mut rbp: i32;
    
    if var_50 != 1
    {
        var_50 = 0;
        let mut rax_1: *mut i8;
        let mut rdx_1: u64;
        rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2e, &var_50);
        let var_48: i64;
        let var_40: i64;
        rbp = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h59d427cca09fdf3a(var_48, 
            var_40, rax_1, rdx_1);
    }
    else
    {
        rbp = 0;
    }
    
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_38, var_30);
    rbp
}
