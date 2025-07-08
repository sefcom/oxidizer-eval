
  fn uu_ls::is_hidden::he2cc02ae0ae5ae31(arg1: *mut c_void) -> u64

{
    let mut var_28: ();
    std::fs::DirEntry::file_name::habdd235db90dd152(&var_28, arg1);
    let mut var_40: i64;
    let var_20: *mut i8;
    let var_18: i64;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_40, var_20, var_18);
    let mut rbx: i32;
    
    if var_40 == 0
    {
        var_40 = 0;
        let mut rax_1: i64;
        let mut rdx_1: u64;
        rax_1 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2e, &var_40);
        let var_38: i64;
        let var_30: i64;
        rbx = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h032fb0d9cebdd48e(var_38, 
            var_30, rax_1, rdx_1);
    }
    else
    {
        rbx = 0;
    }
    
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h51f173604a280fb6(&var_28);
    rbx
}
