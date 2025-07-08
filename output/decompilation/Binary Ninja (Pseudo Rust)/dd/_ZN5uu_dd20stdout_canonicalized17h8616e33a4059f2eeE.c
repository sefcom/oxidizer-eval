
  fn uu_dd::stdout_canonicalized::h8616e33a4059f2ee(arg1: *mut i128) -> i64

{
    let mut var_38: i64;
    std::fs::canonicalize::hc098601a0f17255d(&var_38, "/dev/stdout0.0.28Copy, and optio…");
    
    if var_38 == -0x8000000000000000
    {
        let mut var_20: i128;
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_20, 
            "/dev/stdout0.0.28Copy, and optio…", 0xb);
        let var_10: i64;
        arg1[1] = var_10;
        *arg1 = var_20;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$std..io..error..Error$GT$$GT$::h6d990e1150a85915(&var_38);
    }
    
    let result: i64;
    arg1[1] = result;
    *arg1 = var_38;
    result
}
